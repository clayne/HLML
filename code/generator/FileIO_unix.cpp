#if defined( __linux__ ) || defined( __APPLE__ )
#include "FileIO.h"

#include "string_helpers.h"

#include <sys/types.h>
#include <sys/stat.h>

#include <limits.h>

#include <dirent.h>
#include <unistd.h>

#include <string.h>

#include <assert.h>

#include <errno.h>

/*
File IO for Linux/MacOS

DM: we can't use functions like opendir64 because the MacOS VMs on Travis complain
I don't have a Mac so I can only test so much, but I'll assume it's legit unless I find out otherwise
*/

bool FS_CreateFolder( const char* name ) {
	assert( name );

	int result = 0;

	size_t length = strlen( name );

	char path[PATH_MAX] = { 0 };
	snprintf( path, sizeof( path ), "%s", name );

	if ( path[length - 1] == '/' ) {
		path[length - 1] = 0;
	}

	char* p = nullptr;

	for ( p = path + 1; *p; p++ ) {
		if ( *p == '/' ) {
			*p = 0;

			result = mkdir( path, ACCESSPERMS );
			if ( result != 0 ) {
				int err = errno;
				if ( err != EEXIST ) {
					printf( "ERROR: Failed to create directory \"%s\".\n", path );
					return false;
				}
			}

			*p = '/';
		}
	}

	result = mkdir( path, ACCESSPERMS );
	if ( result != 0 ) {
		int err = errno;
		if ( err != EEXIST ) {
			printf( "ERROR: Failed to create directory \"%s\".\n", path );
			return false;
		}
	}

	return true;
}

bool FS_DeleteFolder( const char* name ) {
	assert( name );

//	printf( "Deleting folder %s...\n", name );

	int osResult = 0;
	bool result = false;

	DIR* dir = opendir( name );
	if ( !dir ) {
		printf( "ERROR: Failed to find directory \"%s\".  That's rough man...\n", name );
		return false;
	}

	struct dirent* dirEntry = nullptr;

	while ( ( dirEntry = readdir( dir ) ) != nullptr ) {
		if ( StringEquals( dirEntry->d_name, "." ) || StringEquals( dirEntry->d_name, ".." ) ) {
			continue;
		}

		char buffer[PATH_MAX] = { 0 };
		snprintf( buffer, 1024, "%s/%s", name, dirEntry->d_name );

		struct stat info;

		osResult = stat( buffer, &info );
		if ( osResult != 0 ) {
			printf( "ERROR: Failed to get stat on \"%s\".  That's rough man...\n", name );
			return false;
		}

		if ( S_ISDIR( info.st_mode ) ) {
			result = FS_DeleteFolder( buffer );

			if ( !result ) {
				return false;
			}
		} else {
//			printf( "Deleting file %s...\n", dirEntry->d_name );

			// TODO(DM): write "FS_DeleteFileIfExists()"
			osResult = remove( buffer );

			if ( osResult != 0 ) {
				return false;
			}
		}
	}

	osResult = closedir( dir );
	if ( osResult != 0 ) {
		printf( "ERROR: Failed to close directory \"%s\".  That's rough man...\n", name );
		return false;
	}

	result = rmdir( name ) == 0;

	return result;
}

// TODO(DM): rename to "FS_IsFolder"
bool FS_FolderExists( const char* name ) {
	assert( name );

	struct stat info;

	int result = stat( name, &info );

	if ( result != 0 ) {
		printf( "ERROR: Failed to get stat on \"%s\".  That's rough man...\n", name );
		return false;
	}

	return S_ISDIR( info.st_mode );
}
#endif

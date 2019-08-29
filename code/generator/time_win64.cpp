#ifdef _WIN32

#include "time.h"

#define WIN32_LEAN_AND_MEAN 1
#include <Windows.h>

static s64 g_frequency = 0;
static LARGE_INTEGER g_now = {};

void Time_Init( void ) {
	LARGE_INTEGER frequency = {};
	QueryPerformanceFrequency( &frequency );
	g_frequency = frequency.QuadPart;
}

s64 Time_Now( void ) {
	QueryPerformanceCounter( &g_now );
	return g_now.QuadPart;
}

float64 Time_NowSeconds( void ) {
	return (float64) Time_Now() / g_frequency;
}

float64 Time_NowMS( void ) {
	return (float64) ( ( Time_Now() * 1000 ) / g_frequency );
}

float64 Time_NowUS( void ) {
	return (float64) ( ( Time_Now() * 1000000 ) / g_frequency );
}

float64 Time_NowNS( void ) {
	return (float64) ( ( Time_Now() * 1000000000 ) / g_frequency );
}

#endif // _WIN32

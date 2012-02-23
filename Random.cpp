/*
 * Random.cpp
 * Implements Random.h
 */

#include "Random.h"

int Random( int max, int min )
{
	return (min + ( rand() % max ) );
}

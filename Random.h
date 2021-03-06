/*
 * Random.h
 * A simple random function with minimum and maximum values.
 */
#ifndef _RANDOM_H_
#define _RANDOM_H_

#include<cstdlib>
#include<ctime>

/* Random
 * Returns a random number between the inclusive minimum and exclusive maximum.
 */
int Random( int max, int min = 0 );
// Consider overloaded for other types

#endif

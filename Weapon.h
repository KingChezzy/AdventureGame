/* Weapon.h
 * A class for the weapons used in the game
 */
#ifndef _WEAPON_H_
#define _WEAPON_H_

#include <iostream>
#include "Random.h"

class Weapon
{
	public:
		Weapon( char* name, int& max, int& min, int& chc, float& chm);	//Constructor
		~Weapon();							//Destructor

		/*----------------------- ACCESSORS -----------------------*/ 
		void SetName( char* name );	// Set the Weapon's name
		void SetMaxAttack( int& max );	// Set the weapon's maximum attack value
		void SetMinAttack( int& min );  // Set the weapon's minimum attack value
		void SetCritChance( int& chc );	// Set the weapon's critical hit chance
		void SetCritMult( float& chm );	// Set the weapon's critical hit multiplier

		int GetMaxAttack();		//Returns Max Damage
		int GetMinAttack();		//Returns Min Damage
		int GetCriticalHitChance();	//Returns the crit hit chance
		float GetMultiplier();		//Returns Crit hit multiplyer

		/*-----------------------  COMBAT   -----------------------*/ 
		int Roll();			// Roll the weapon's attack damage
		float CriticalHit();		// Roll for the weapon's critical hit damage
	private:
		char* m_Name;			//Name of the weapon

		int m_MaxAttack;		// The max base damage of a hit
		int m_MinAttack;		// The min base damage of a hit

		int m_CriticalHitChance;	//The ratio of 1:i that a critical hit will be possible
		float m_CriticalHitMultiplier;	//Multiplied onto the final damage when CritHitChance succeeds
};

#endif

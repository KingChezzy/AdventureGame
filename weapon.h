/*
A class for the weapons used in the game
*/
#ifndef _WEAPON_H_
#define _WEAPON_H_

#include <iostream>

class Weapons
{
	public:
		Weapons();				//Constructor
		~Weapons();				//Destructor

		int GetMaxDamage();			//Returns Max Damage
		int GetMinDamage();			//Returns Min Damage
		int GetCriticalHitChance();	//Returns the crit hit chance
		float GetMultiplyer();		//Returns Crit hit multiplyer

	private:
		char* m_Name;			//Name of the weapon

		int m_MaxAttack;		// The max base damage of a hit
		int m_MinAttack;		// The min base damage of a hit

		int m_CriticalHitChance;		//The ratio of 1:i that a critical hit will be possible
		float m_CriticalHitMultiplyer;	//Multiplied onto the final damage when CritHitChance succeeds
}

#endif
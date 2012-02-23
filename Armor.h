/*
The class for player and enemy armor
*/
#ifndef _ARMOR_H
#define _ARMOR_H

class Armor
{
	public:
		Armor();				//Constructor
		~Armor();				//Destructor

		int GetStrength();		//Returns the strength
		int GetHealthBoost();

	private:
		char* m_Name;			//Armor name

		int m_Strength;			//Base defence
		int m_HealthBoost;
						
}

#endif
/*
The class for player and enemy armor
*/
#ifndef _ARMOR_H
#define _ARMOR_H

class Armor
{
	public:
		//Declarations
		Armor( char* name, int& str, int& plusHP); //Constructor
		~Armor();									//Destructor

		void SetStrength( int& str );
		void SetHealthBoost( int& plusHP );
		void SetName( char* name );

		//Accessors
		char* GetName();
		int GetStrength();		//Returns the strength
		int GetHealthBoost();	// Gets armor health bonus

		

	private:
		char* m_Name;			//Armor name

		int m_Strength;			//Base defence
		int m_HealthBoost;		//Adds health to player
						
};

#endif

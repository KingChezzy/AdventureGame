/* Character.h
 * A character class used for combat
 */
#ifndef _CHARACTER_H_
#define _CHARACTER_H_

#include "Weapon.h"
#include "Armor.h"

class Character
{
public:
	// Default constructor
	Character( char* name, int& maxHp );

	/*-------------------- ACCESSORS --------------------*/ 
	char* GetName();		// Get the character's name
	int GetHealth();		// Get the character's current health
	int GetMaxHealth();		// Get the character's maximum health
	Weapon* GetWeapon();		// Retreive a pointer to the character's active weapon
	Armor* GetArmor();		// Retreive a pointer to the character's active armor

	void SetHealth( int& hp );	// Set the character's health
	void ModHealth( int& hp );	// Modify the character's health (added to it's current health)
	void SetMaxHealth( int& hp );	// Set the character's maximum health

	/*--------------------   COMBAT  --------------------*/ 
	int AttackRoll();		// Calculate's a damage value for the character to "hit" at
	bool IsAlive();			// Determine's whether the character is Still Alive (health > 0)
	
protected:
	char* m_Name;			// Character's name
	int m_Health;			// Character's current health
	int m_MaxHealth;		// Character's maximum health
	Weapon* m_ActiveWeapon;		// Character's current active weapon
	Armor* m_ActiveArmor;		// Character's current active armor

private:
	void CapHealth();		// Caps th character's health at it's maxmimum value.
};

#endif

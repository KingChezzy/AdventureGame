/* Character.h
 * A character class used for combat
 */
#ifndef _CHARACTER_H_
#define _CHARACTER_H_

#include "Weapon.h"

class Character
{
public:
	Character( char* name, int& maxHp );

	// Accessors
	char* GetName();
	int GetHealth();
	int GetMaxHealth();
	Weapon* GetWeapon();

	void SetHealth( int& hp );
	void ModHealth( int& hp );
	void SetMaxHealth( int& hp );

	// Combat
	int AttackRoll();
	bool IsAlive();
	
protected:
	char* m_Name;
	int m_Health;
	int m_MaxHealth;
	Weapon* m_ActiveWeapon;

private:
	void CapHealth();
};

#endif

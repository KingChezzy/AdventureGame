/* Character.cpp
 * Implements Character.h
 */
#include "Character.h"

Character::Character( char* name, int& maxHp )
{
	this->m_MaxHealth = maxHp;
	this->m_Name = name;
	this->m_Health = this->m_MaxHealth;
}

char* Character::GetName()
{
	return this->m_Name;
}

int Character::GetHealth()
{
	return this->m_Health;
}

int Character::GetMaxHealth()
{
	return this->m_MaxHealth;
}

Weapon* Character::GetWeapon()
{
	return this->m_ActiveWeapon;
}

void Character::SetHealth( int& hp )
{
	this->m_Health = hp;
}

void Character::ModHealth( int& hp )
{
	this->m_Health += hp;
	this->CapHealth();
}

void Character::SetMaxHealth( int& hp )
{
	this->m_MaxHealth = hp;
	this->CapHealth();
}

int Character::AttackRoll()
{
	return this->m_ActiveWeapon->Roll();
}

bool Character::IsAlive()
{
	return (this->m_Health > 0);
}

void Character::CapHealth()
{
	if ( this->m_Health > this->m_MaxHealth )
	{
		this->m_Health = this->m_MaxHealth;
	}
}

/* Weapon.cpp
* implements Weapon.h
*/

#include "Weapon.h"

Weapon::Weapon( char* name, int& max, int& min, int& chc, float& chm)
{
	this->m_Name = name;
	this->m_MaxAttack = max;
	this->m_MinAttack = min;
	this->m_CriticalHitChance = chc;
	this->m_CriticalHitMultiplyer = chm;
}

int Weapon::GetMaxAttack()
{
	return this->m_MaxAttack;
}

int Weapon::GetMinAttack()
{
	return this->m_MinAttack;
}

int Weapon::GetCriticalHitChance()
{
	return this->m_CriticalHitChance;
}

float Weapon::GetMultiplyer()
{
	return this->m_CriticalHitMultiplyer;
}

int Weapon::Roll()
{
	return Random( this->m_MaxAttack, this->m_MinAttack);
}

float Weapon::CriticalHit()
{
	if ( Random( this->m_CriticalHitChance, 0) == 10)
	{
		return this->m_CriticalHitMultiplyer;
	}
	else return 1.0f;
}

void Weapon::SetCritChance( int& chc )
{
	this->m_CriticalHitChance = chc;
}

void Weapon::SetCritMult( float& chm )
{
	this->m_CriticalHitMultiplyer = chm;
}

void Weapon::SetMaxAttack( int& max)
{
	this->m_MaxAttack = max;
}

void Weapon::SetMinAttack( int& min )
{
	this->m_MinAttack = min;
}

void Weapon::SetName( char* name)
{
	this->m_Name = name;
}
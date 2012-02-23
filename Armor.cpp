/*
Armor.cpp for Armor.h
*/

#include "Armor.h"

Armor::Armor( char* name, int& str, int& plusHP )
{
	this->m_Name = name;
	this->m_Strength = str;
	this->m_HealthBoost = plusHP;
}

int Armor::GetHealthBoost()
{
	return this->m_HealthBoost;
}

int Armor::GetStrength()
{
	return this->m_Strength;
}

char* Armor::GetName()
{
	return this->m_Name;
}

void Armor::SetHealthBoost( int& plusHP)
{
	this->m_HealthBoost = plusHP;
}

void Armor::SetStrength( int& str )
{
	this->m_Strength = str;
}

void Armor::SetName( char* name )
{
	this->m_Name = name;
}
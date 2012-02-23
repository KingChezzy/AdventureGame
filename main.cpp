/* main.cpp
 * Program entry point
 */
#include <iostream>
#include "Game.h"

using namespace std;

int main( int argc, char* argv[] )
{
	cout << "Hello, I will soon be a game!" << endl;

	int health = 100;
	int str = 1;
	int php = 5;
	int max = 20;
	int min = 10;
	int chc = 5;
	float chm = 1.6f;
	int off = -10;

	Character* player = new Character("Matthew", health);

	player->SetArmor("Helm", str, php);
	player->SetWeapon("Axe", max, min, chc, chm);

	player->ModHealth(off);

	cout << "Player Name: " << player->GetName() << endl;
	/*cout << "Player Health: " << player->GetHealth() << "(+" << player->GetArmor()->GetHealthBoost() << ")/";
	cout << player->GetMaxHealth() << "(+" << player->GetArmor()->GetHealthBoost() << ")";*/

	system( "pause" );

	return 0;
}

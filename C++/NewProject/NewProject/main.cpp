#include "sharks.h"

void main ()
{
	Shark killer = Shark();

		cout << killer.age << endl;
		cout << killer.weight << endl;

		killer.swim();
		killer.kill();

		cout << killer.age << endl;
		cout << killer.weight << endl;

		system("PAUSE"}
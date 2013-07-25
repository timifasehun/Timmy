#include "Cow.h"

Cow::Cow()
{
	weight = 289765;
	litersofMilk= 4245;
	Speed= .01;

	Spots = 320;
	age = 56;
	loudness = 8999;

	isBull = false;

	name = "FrankSinnatra";
}

Cow::Cow(string newName, double newWeight, int newAge, bool nIsBull);

{
	name = newName;
	weight = bnewWeight;
	age = newAge;
	isBull = nIs Bull;
}

void Cow::move()
{
	Speed += .01;
	age++;
	weight -= 15;
	cout << "The cow has moved." << endl;
}
void Cow::moo()
{
	cout << "MOO";
	loudness = 9500;
	weight -= 2344;
}


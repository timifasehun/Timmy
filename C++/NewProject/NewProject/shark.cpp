#include "sharks.h"

Shark::Shark()
{
	weight = 600;	
	speed  = 450;

	killsperhour = 720;
	age = 40;
	teeth = 90;

	name = "RobertDeNiro";
}

Shark::Shark(string newName, double newWeight, int newAge, int newTeeth)
{
	name = newName;
	weight = newWeight;
	age = newAge;
	
}

void Shark::swim()
{
	speed++;
	weight+=1;
	cout << "We would like to express our happiness seing as  the killer shark has finally moved." << endl;
}

void Shark::kill()
{
	teeth--;
	killsperhour +=40;
	cout << "The terrorist has been killed." << endl;
}
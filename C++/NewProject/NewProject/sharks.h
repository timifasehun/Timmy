#include <iostream>
#include <string>
using namespace std;

class Shark
{
	public:
		double weight;
		double speed;

		int killsperhour;
		int age;
	    int teeth;

	    string name;

		Shark();
		Shark(string newName, double newWeight, int newAge, int teeth);

		void swim();
		void kill();
};
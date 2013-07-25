#include <iostream>
#include <string>
using namespace std;

class Cow 
{
public:
	double weight;
	double litersofMilk;
	double Speed;

	int Spots;
	int age;
	int loudness;

	bool isBull;

	string name;

	Cow(); //Default Constructor
	Cow(string Newname, double newweight, int newage, bool isBull);
	
	void move();
	void moo();
}
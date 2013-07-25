#include "Cow.h"

void main ()
{
	Cow bessie = Cow(); 

	cout << bessie.age << endl;
	cout << bessie.weight << endl;

	bessie.move ();
	bessie.moo();

	cout << bessie.age << endl;
	cout << bessie.weight << endl;

	system("PAUSE")
}
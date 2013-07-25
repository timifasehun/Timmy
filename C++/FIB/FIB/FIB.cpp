#include <iostream>
using namespace std;

int fib(int n)
{

	if (n <= 2)
	{
		return 1;
	}
	else 
	{
	return fib(n-1) + fib(n-2);
	}
}

void main()
{
	int Val , n;
	cout << "Please enter number: " << endl ;
	cin >>  n;
	Val = fib(n);
	cout << Val << "\n" ;
	system("PAUSE");
}

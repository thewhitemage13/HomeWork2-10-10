#include <iostream>
using namespace std; 

int main()
{
	static int b=5;
	static int a=1;

	if (b < a)
	{
		cout << b;
		b++;
		if (b != a)
		{
			main();
		}
	}

	else if (b > a)
	{
		b--;
		cout << b;
		if (a < b)
		{
			main();
		}	
	}
}
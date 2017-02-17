#include <iostream>
#include <iomanip>

using namespace std;

int main()
{

	int square = 0;

	cin >> square;

	for (int y = 0; y < square; y++)
	{
		for (int x = 0; x < square; x++)
		{
			cout << " * ";
		}
		cout << endl;
	}


	system("pause");
}
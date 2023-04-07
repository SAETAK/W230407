#include <iostream>

using namespace std;

int main()
{
	int Ball[45] = { 0 };

	srand((unsigned int)time(0));
	
	for (int i = 0; i < 45; ++i)
	{
		Ball[i] = i + 1;
	}

	for (int i = 0; i < 6; ++i)
	{
		int randNum = rand() % 45;
		cout << Ball[randNum] << endl;
	}

	return 0;
}
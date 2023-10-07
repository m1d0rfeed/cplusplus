#include <iostream>
using namespace std;
void main()
{
	int symbolcount;
	char symbol;
	int linetype;
	int index = 0;

	cout << "enter quantity of symbols" << endl;
	cin >> symbolcount;

	cout << "enter symbol" << endl;
	cin >> symbol;

	cout << "choose type of the line" << endl
		<< "1. vertical" << endl
		<< "2. horizontal" << endl;
	cin >> linetype;

	while (index < symbolcount)
	{
		switch (linetype)
		{
		case 1:
			cout << symbol << endl;
			index++;
			break;
		case 2:
			cout << symbol;
			index++;
			break;
		default:
			cout << "wrong number" << endl;
			index = symbolcount;
			break;
		}
	}
	cout << endl << endl;
}

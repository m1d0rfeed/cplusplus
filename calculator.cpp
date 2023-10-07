#include <iostream>
using namespace std;
void main()
{
	int a, b, selection;
	cout << "enter 2 numbers" << endl;
	cin >> a >> b;

	cout << "choose mathematical operation" << endl <<
		"1. addition" << endl <<
		"2. subraction" << endl <<
		"3. multiplication" << endl <<
		"4. division" << endl;

	cin >> selection;

	switch (selection)
	{

	case 1:
		cout << "result of addition " << a + b << endl;
		break;

	case 2:
		cout << "result of subraction " << a - b << endl;
		break;
	case 3:
		cout << "result of multiplication " << a * b << endl;
		break;
	case 4:
		cout << "result of division " << (float)a / b << endl;
		break;
	default:
		cout << "wrong number" << endl;
		break;
	}
}

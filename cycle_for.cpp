#include <iostream>
using namespace std;

void main()
{
	int height, width;

	cout << "enter height" << endl; 
	cin >> height;

	cout << "enter width" << endl;
	cin >> width;

	for (int i = 0; i < height; i++)
	{
		for (int j = 0; j < width; j++)
		{
			cout << "*";
		}
		cout << endl;
		
	}


}
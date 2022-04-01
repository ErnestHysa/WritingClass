#include <iostream>
using namespace std;

class Rectangle
{
public: 
	int x;
	int y;

	int areaRectangle()
	{
		return x * y;

    }


};




int main()
{

	Rectangle rectCalc;
	cout << "Insert width here: ";
	cin >> rectCalc.x;
	cout << "Now insert the height here: ";
	cin >> rectCalc.y;
	cout << "The area of the Rectangle is: " << rectCalc.areaRectangle();

	return 0;
}


// Stephanie Stlouis
//Description: Homework 2 - Haverly's Room Calculator
// Calcutlates the area of the room depending on the shape of the room

#include <iostream>
#include <iomanip>
using namespace std;


int main()
{
	const int sqRoom = 1, rectRoom = 2, roundRoom = 3, userQuit = 4;
	const float piValue = 3.14;
	int menuPick;
	float roomLength, roomWidth, roomRad, sqArea, rectArea, roundArea;

	cout << "Haverly's Room Calculator \n";
	cout << "************************* \n";
	cout << "1.  Square Room \n";
	cout << "2.  Rectangle Room \n";
	cout << "3.  Round Room \n";
	cout << "4.  Quit \n\n";
	cout << "Please enter a menu item (1-4) > ";
	cin >> menuPick;

	switch (menuPick)
	{
	case sqRoom:
		cout << "Square Room \nPlease enter the length of the square room > ";
		cin >> roomLength;
		cout << roomLength << endl;
		sqArea = roomLength * roomLength;
		cout << "Area of Room = " << sqArea;
		cout << " sq/ft" << endl;
		break;

	case rectRoom:
		cout << "Rectangle Room \nPlease enter the length and width of the rectangle room separated by a space> ";
		cin >> roomLength >> roomWidth;
		cout << roomLength << " by " << roomWidth << endl;
		sqArea = roomLength * roomWidth;
		cout << "Area of Room = " << sqArea;
		cout << " sq/ft" << endl;
		break;

	case roundRoom:
		cout << "Round Room \nPlease enter the radius of the round room separated by a space> ";
		cin >> roomRad;
		cout << roomRad << endl;
		sqArea = piValue * roomRad * roomRad;
		cout << "Area of Room = " << sqArea;
		cout << " sq/ft" << endl;
		break;

	case userQuit:
		cout << "Thank you for using Haverly's Room Calculator. . . \n";

	default: cout << "Invalid menu item entered . . . Program exiting . . .";

	}
	return 0;
}
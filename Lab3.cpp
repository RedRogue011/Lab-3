// Lab3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{

	// Part 1
	int x = 0;

	while (x < 10)
	{
		cout << "Hallow world\n";
		x++;
	}
	system("pause");

//Part Two

	int b = 10;

	do {
		cout << "good bye cruel World\n";
		b--;
	}
	while (b != 0);

	system("pause");

//Part 3

	for(int i=0; i<10;i++)
	{
		cout << "World is Changeing\n";
	}
	system("pause");

	/*
	    Part 4
	*/	
	cout << "Please enter a ASCIT Characters: ";

	char d = 'x';
	
	cin >> d;

	switch (d)
	{
		case '$':
		case '*':
		case '@':
		case '%':
		case '!':
			cout << "you entered: " << d << endl;
			break;
		default:
			cout << "invalid Input. " << endl;	
			break;
	}
	
	system("pause");
	
		/*
			Part 5
		*/

	cout << "Please Input a Integer ";

	int s = 6;

	cin >> s;

	switch (s)
	{
		case 1: 
		case 2:
		case 3:
		case 4:
		case 5:
			cout << "you entered: " << s << endl;
			break;
		default:
			cout << "invalid Input. " << endl;
			break;
	}

		system("pause");

		/* 
			Part 6
		*/


		char w = '\0';
		bool break_while = false;

		cout << "Please enter X or x to exit: ";

		while (cin >> w)
		{
			switch (w)
			{
			case 'X':
			case 'x':
				break_while = true;
				break;
			default:
				cout << "Please enter X or x to exit: ";
			}

			if (break_while == true)
			{
				break;
			}
		}

		return 0;
	}




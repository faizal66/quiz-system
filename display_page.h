#ifndef display_page_h
#define display_page_h
#include<iostream>
#include<string>
#include<fstream>
#include"test_page.h"
using namespace std;
void displayy()
{
	int choice2;
	cout << "***************** Welcome to sheikh's online Quiz System ********************" << endl;
	cout << "What do you wanna do :" << endl;
	cout << "Want to start the test press one. " << endl;
	cout << "Want to check the previous scores press two." << endl;
	cin >> choice2;
	switch (choice2)
	{
	case 1:
	{
		int test;
		cout << "How do you like to start the test :" << endl;
		cout << "Press one if you want to give the test single :" << endl;
		cout << "Press two if you want to start the test with your team :" << endl;
		cin >> test;
		if (test == 1)
		{
			single();
		}
		else if (test == 2)
		{
			with_team();
		}
		else
		{
			cout << "Wrong Input Please enter a valid input :" << endl;
			displayy();
		}
	}
	case 2:
		previous_score();
		break;
	default:
		cout << "Wrong Input Please enter the number again :" << endl;
		displayy();
		cin.get();
		cin.get();
		break;
	}
}

#endif
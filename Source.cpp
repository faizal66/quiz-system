#include<iostream>
#include<fstream>
#include"login_page.h"
#include"display_page.h"
#include"test_page.h"
using namespace std;
int main()
{
	int choice1;
	cout << "Welcome to sheikh's online quiz system." << endl;
	cout << "We are glad that you chooses our services." << endl;
	cout << "Press 1 to sign in :" << endl;
	cout << "Press 2 to sign up :" << endl;
	cout << "Press 3 to Recover password :" << endl;
	cin >> choice1;
	switch (choice1)
	{
	case 1:
		sign_in();
		break;
	case 2:
		sign_up();
		break;
	case 3:
		forgot_password();
		break;
	default:
		cout << "wrong input.Enter again :" << endl;
		main();
	}
}
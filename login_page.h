#ifndef login_page_h
#define login_page_h
#include<iostream>
#include<string>
#include<fstream>
#include"display_page.h"
using namespace std;
void sign_in()
{
	int a = 0;
	string username, password, u, p;
	cout << "Enter your Username :" << endl;
	cin >> username;
	cout << "Enter your password :" << endl;
	cin >> password;
	ifstream info("database.txt");
	while (info >> u >> p)
	{
		if (u == username && p == password)
		{
			a = 1;
		}
	}
	info.close();
	if (a == 1)
	{
		cout << "Hello " << username << " We are glad you prefered to use our services." << endl;
		displayy();

	}
	else
	{
		int a;
		cout << "Username or password is incorrect." << endl;
		cout << "Please enter again.If new, kindly sign up" << endl;
		cout << "Please tell us what you want?" << endl;
		cout << "Press 1 to sign in :" << endl;
		cout << "Press 2 to sign up :" << endl;
		cout << "Press 3 to Recover password :" << endl;
		cin >> a;
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
		}
	}
}

void sign_up()
{
	string user_name, user_password, user_phone_no;
	cout << "Enter your user name :" << endl;
	cin >> user_name;
	cout << "Enter your password :" << endl;
	cin >> user_password;
	cout << "Enter your Phone number :" << endl;
	cin >> user_phone_no;
	fstream user_info("database.txt", ios::app);
	user_info << user_name << " " << user_password << " " << user_phone_no << endl;
	user_info.close();
	cout << "Sign up successfull Welcome to Sheikh's Online Quiz system." << endl;
	displayy();
}
void forgot_password()
{
	int choice;
	cout << "Press one to search your account by username :" << endl;
	cout << "Press two to search your account by Phone number :" << endl;
	cout << "Press three to search your account by password :" << endl;
	cout << "Press four to return to main menu :" << endl;
	cin >> choice;

	if (choice == 1)
	{
		string search_by_username, sbu1, sbp1, sbn1;
		int z;
		cout << "Enter the last username you remembered :" << endl;
		cin >> search_by_username;
		ifstream searchu("database.txt", ios::in);
		while (searchu >> sbu1 >> sbp1 >> sbn1)
		{
			if (search_by_username == sbu1)
			{
				z = 1;
			}
		}
		searchu.close();
		if (z == 1)
		{
			cout << "Username found ";
			cout << "Your password is :" << sbp1;
			cin.get();
		}
		else
		{
			cout << "Sorry, The username you have entered is not in our database." << endl;
		}
	}
	else if (choice == 2)
	{
		int x = 0;
		string search_by_phone_no, sbu2, sbp2, sbn2;
		cout << "Enter Your phone number :" << endl;
		cin >> search_by_phone_no;
		fstream searchus("database.txt", ios::in);
		while (searchus >> sbu2 >> sbp2 >> sbn2)
		{
			if (search_by_phone_no == sbn2)
			{
				x = 1;
				break;
			}
		}
		searchus.close();
		if (x == 1)
		{
			cout << "Phone_no found";
			cout << "Your id is :" << sbu2 << endl;
			cout << "Your password is :" << sbp2;
			cin.get();
		}
		else
		{
			cout << "Sorry, The phone number you have entered is not in our database." << endl;
		}
	}
	else if (choice == 3)
	{
		int y = 0;
		string search_by_password, sbu, sbp, sbn;
		cout << "Enter the last password you remembered :" << endl;
		cin >> search_by_password;
		ifstream searchuser("database.txt", ios::in);
		while (searchuser >> sbu >> sbp >> sbn)
		{
			if (search_by_password == sbp)
			{
				y = 1;
				break;
			}
		}
		searchuser.close();
		if (y == 1)
		{
			cout << "password found" << endl;
			cout << "Your username is : " << sbu << endl;
			cout << "Your password is : " << sbp << endl;
			cin.get();
			cin.get();
		}
		else
		{
			cout << "Sorry, The password you have entered is not in our database." << endl;
		}

	}
}
#endif

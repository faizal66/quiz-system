#ifndef test_page_h
#define test_page_h

#include<iostream>
#include<string>
#include<fstream>
#include"display_page.h"
using namespace std;
void single()
{
	int subjects;
	cout << "Press one for English :" << endl;
	cout << "Press two for Science :" << endl;
	cout << "Press three for Maths :" << endl;
	cin >> subjects;
	cout << "Get Ready your test is about to start...." << endl;
	switch (subjects)
	{
	case 1:
	{
		string english, english_answers;
		ifstream subj("english.txt", ios::in);
		while (!subj.eof())
		{
			getline(subj, english);
		}
		subj.close();
		cout << english;
		cin >> english_answers;
		ofstream answer("answers.txt", ios::app);
		answer << english_answers;
		answer.close();
		break;
	}
	case 2:
	{
		string science, science_answers;
		ifstream subje("science.txt", ios::in);
		while (!subje.eof())
		{
			getline(subje, science);
		}
		subje.close();
		cout << science;
		cin >> science_answers;
		ofstream answ("answers1.txt", ios::app);
		answ << science_answers;
		answ.close();
		break;
	}

	case 3:
	{
		string math, maths_answer;
		ifstream subjc("math.txt", ios::in);
		while (!subjc.eof())
		{
			getline(subjc, math);
		}
		subjc.close();
		cout << math;
		cin >> maths_answer;
		ofstream answe("answers2.txt", ios::app);
		answe << maths_answer;
		answe.close();
		break;
	}
	default:
		cout << "Wrong Input.Please enter a valid number" << endl;
		break;
	}
}
void with_team()
{
	string student_name;
	int total_students, student_id;
	int subjects;
	cout << "How many students you want to give the quiz :" << endl;
	cin >> total_students;
	cout << "Enter the names of the students :" << endl;
	cin >> student_name;
	cout << "Enter the id of the student :" << endl;
	cin >> student_id;
	fstream students("students.txt", ios::app);
	while (students << student_id << " " << student_name << " " << total_students)
	{

	}
	students.close();

	cout << "Press one for English :" << endl;
	cout << "Press two for Science :" << endl;
	cout << "Press three for Maths :" << endl;
	cin >> subjects;
	cout << "Get Ready your test is about to start...." << endl;
	switch (subjects)
	{
	case 1:
	{
		string math;
		ifstream subj("english.txt");
		while (!subj.eof())
		{
			getline(subj, math);
		}
		break;
	}
	case 2:
	{
		string science;
		ifstream subje("science.txt", ios::in);
		while (!subje.eof())
		{
			getline(subje, science);
		}
		break;
	}

	case 3:
	{
		string math;
		ifstream subjc("math.txt", ios::in);
		while (!subjc.eof())
		{
			getline(subjc, math);
		}
		break;
	}
	default:
		cout << "Ni chala" << endl;
		break;
	}
}
void previous_score()
{
	string s;
	fstream score("previous.txt",ios::app|ios::in);
	if (!score)
	{
		cout << "File not found" << endl;
	}
	while (!score.eof())
	{
		getline(score, s);
	}
	score.close();
	cout << s;
}
#endif
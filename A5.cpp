#include <iostream>
#include <stdio.h>
#include <string>

using namespace std;

struct student
{
	char name[50];
	double idNum;
	int age;
	float marks;
	char gender;
};

int main()
{
	student s;
	cout <<"Enter information," <<endl;
	cout <<"Enter name:"<<endl;
	cin >> s.name;
	cout << "Enter Id number:"<<endl;
	cin >> s.idNum;
	cout << "Enter age:"<<endl;
	cin >> s.age;
	cout << "Enter marks:"<<endl;
	cin >> s.marks;
	cout << "Enter gender:"<<endl;
	cin >> s.gender;
	
	cout << "\nDisplaying information" <<endl;
	cout << "Name: " <<s.name <<endl;
	cout << "Id Number: " <<s.idNum <<endl;
	cout << "Age: " <<s.age <<endl;
	cout << "Marks: " <<s.marks <<endl;
	cout << "Gender: " <<s.gender <<endl;
	
	
	return 0;   
	
}

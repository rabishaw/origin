#include <iostream>
using namespace std;

class parent
{
	private:
		char name[5];
		int age;
	public:
		char colour[100];
		char sex;
		void get_parent_data ( void );
		void display_parent_data ( void );
};

class child : public parent
{
	char qual[100];
	int salary;
	public:
	void get_child_data ( void );
	void display_child_data ( void );
};

class little : public child
{
	private:
		char hobby[100];
	public:
		void get_little_data ( void );
		void display_little_data ( void );
};

void little :: get_little_data ( void )
{
	get_parent_data ( );
	cout << "\n enter the emp hobby \n";
	cin >> hobby;
}

void little :: display_little_data ( void )
{
	display_parent_data();
	cout << "\n hobby -- " << hobby << "\n";
}

void parent :: get_parent_data ( void )
{
	cout << "\n enter the name of the emp\n ";
	cin >> name;
	cout << "\n enter the age of the emp \n";
	cin >> age;
}

void parent :: display_parent_data ( void )
{
	cout << "\n name --> " << name;
	cout << "\n age --> " << age;
}

void child :: get_child_data ( void )
{
	get_parent_data ( );
	cout << "\n enter the qualification of the emp\n ";
	cin >> qual;
	cout << "\n enter the salary of the emp \n" ;
	cin >> salary;
}

void child :: display_child_data ( void ) 
{
	display_parent_data ( );
	cout << "\n qualification ---> "<< qual;
	cout << "\n salary --> " << salary;
}

int main ( void )
{
	/*
	   child a;
	   a.get_child_data();
	   a.display_child_data();
	 */
	little b;
	b.get_little_data ();
	b.display_little_data();
}



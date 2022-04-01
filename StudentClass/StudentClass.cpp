#include <iostream>
using namespace std;

class Student
{
private:
	char *nam;
	int mark1;
	int mark2;
public: 

	Student(char* na, int m1, int m2)
	{
	    nam = na;
		mark1 = m1;
		mark2 = m2;

	}
	int calc()
	{
		
		return (mark1+mark2)/2;
	}

	void display()
	{
		cout << "Student: " << nam << " \n media: " << calc() << endl;
	}

};





int main()

{
	char nam;
	char* name= &nam;
	int grade1, grade2;
	cout << "First letter of subject: ";
	cin >> name;
	cout << "First  grade of the subject: ";
	cin >> grade1;
	cout << "Second grade of the subject: ";
	cin >> grade2;

	Student student1(name, grade1, grade2);
	student1.display();
	return 0;
}
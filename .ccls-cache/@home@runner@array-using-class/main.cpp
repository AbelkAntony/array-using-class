#include <iostream>

using namespace std;

class Student
{
private:
	int rollNumber;
	int  mark[5];
	int totalMarks=0;
public:
	void InputData()
	{
		cout<<"\nEnter Roll Number : ";
		cin>>rollNumber;
		cout<<"\nEnter marks of 5 Subjects\n";
		for (int i=0; i<5; i++)
			cin>>mark[i];
	}
	void GetTotalMarks()
	{
		for (int i =0; i<5;i++)
			totalMarks += mark[i];
		cout<<totalMarks;
	}
};


int main()
{
	Student stu;
	stu.InputData();
	stu.GetTotalMarks();
}
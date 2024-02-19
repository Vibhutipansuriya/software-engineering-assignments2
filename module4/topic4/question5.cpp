/*Assume that the test results of a batch of students are stored in three
different classes. Class Students are storing the roll number. Class Test
stores the marks obtained in two subjects and class result contains the
total marks obtained in the test. The class result can inherit the details
of the marks obtained in the test and roll number of students.
(Multilevel Inheritance)*/
#include <iostream>
using namespace std;
class students{
	public:
		int roll_num;
		
};
class Test:public students{
	public:
		int sub1_marks;
		int sub2_marks;
};
class result:public Test{
	public:
		int total_marks;
};
int main()
{
	result obj;
	obj.roll_num=04;
	cout<<"student Roll Number: "<<obj.roll_num<<endl;;
	
	cout<<"student marks:"<<endl;
	cout<<"subject marks:";
	cin>> obj.sub1_marks;
	cout<<"subject1_marks:";
	cin>>obj.sub2_marks;
	
	obj.total_marks=obj.sub1_marks+obj.sub2_marks;
	cout<<"total marks:"<<obj.total_marks<<endl;
	return 0;
}
	
	
}

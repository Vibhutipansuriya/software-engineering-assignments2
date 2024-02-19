/* Write a program to swap the two numbers using friend
functionwithout using third variable*/

#include<iostream>
using namespace std;
class swap
{

	int num;
	public:
		swap(int num)
		{
			this->num=num;
		}
		
		friend void swap(swap&, swap&);
};
void swap(swap& s1, swap& s2)
{
	int temp;
	cout<<"\n before swapping:"<<s1.num<<" "<<s2.num;
	s1.num=s1.num+s2.num;
	s2.num=s1.num-s2.num;
	s1.num=s1.num-s2.num;
	cout<<"\n after swapping:"<<s1.num<<" "<<s2.num;
}
int main()
{
	swap s1(6),s2(10);
	swap(s1,s2);
	return 0;
		}		

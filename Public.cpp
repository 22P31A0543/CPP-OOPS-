#include<iostream>
using namespace std;
class Student{
	public:
	string name,branch;
	int rollno;
	double per;
	Student(string n,string b,int r,double p)
	{
		this->name=n;
		this->branch=b;
		this->rollno=r;
		this->per=p;
	}

	void display()
	{
		cout<<name<<" "<<branch<<" "<<rollno<<" "<<per<<endl;
	}
};

int main()
{
	Student s1("Yasaswini","CSE",543,98);
	s1.display();
	return 0;
	
}

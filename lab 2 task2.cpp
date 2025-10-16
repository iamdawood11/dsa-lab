#include<iostream>
#include<string>
using namespace std;
class employee
{
public:
	virtual void calculateSalary() = 0;
	virtual ~employee() {};
};
class FullTimeEmployee : public employee
{
public:
	string name;
	float salary;
	FullTimeEmployee(string n, float s)
	{
		name = n;
		salary = s;

	}

	void display()
	{
		cout << "Name : " << name << endl;
	}
	void calculateSalary()
	{
		cout << "salary : " << salary << endl;

	}

};
class partTimeEmployee : public employee
{
public:
	int hours;
	int hourlyRate;
	string Name;
	partTimeEmployee(string n, int h, int hr)
	{
		Name = n;
		hours = h;
		hourlyRate = hr;
	}

	void calculateSalary()
	{
		cout << "Name : " << Name << " " << " Salary : " << hours * hourlyRate;
	}
};
int main()
{
	FullTimeEmployee f("Fahad", 25000);
	partTimeEmployee p("hamza", 8, 3000);
	f.display();
	f.calculateSalary();
	p.calculateSalary();
	system("pause");
}
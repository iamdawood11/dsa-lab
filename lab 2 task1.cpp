#include<iostream>
using namespace std;
class course
{
public:
	virtual void duration() = 0;

	virtual ~course() {}
};
class onlineCourse : public course
{
public:
	int weeks;
	int hoursPerWeek;
	onlineCourse(int w, float h)
	{
		weeks = w;
		hoursPerWeek = h;
	}
	void duration()
	{
		cout << "Expected weeks from you : " << weeks << "  and hours per week " << hoursPerWeek << endl;
	}
	void area()
	{
		int l = 1300;
		int w = 2500;
		cout << "area is " << l * w << endl;
	}



}
;
class offlinecourse : public course
{
public:
	int months;
	int hoursPerDay;
	offlinecourse(int m, float hh)
	{
		months = m;
		hoursPerDay = hh;
	}
	void duration()
	{
		cout << "Expected months from you : " << months << "  and hours per day " << hoursPerDay << endl;
	}
	void area()
	{
		int l = 300;
		int w = 500;
		cout << "area is " << l * w << endl;
	}

};
int main()
{
	onlineCourse on(3, 5);
	offlinecourse oc(8, 4);
	oc.duration();
	oc.area();
	on.duration();
	on.area();
}*
#include <iostream>
using namespace std;

class Date
{
private:
	int Day;
	int Month;
	int Year;
public:
	Date()
	{
		Day = 0;
		Month = 0;
		Year = 0;
	}
	Date(int d, int m, int y)
	{
		Day = d;
		Month = m;
		Year = y;
	}
	Date operator =(Date& D)
	{
		this->Day = D.Day;
		this->Month = D.Month;
		this->Year = D.Year;
		return *this;
	}
	bool operator ==(Date& D)
	{
		if (this->Day != D.Day)
			return false;
		else if (this->Month != D.Month)
			return false;
		else if (this->Year != D.Year)
			return false;
		else
			return true;
	}
};

int main()
{
	Date D1, D2(3, 4, 2015), D3(3, 4, 2015);
	if (D2 == D3)
		cout << "D2 and 3 are Same \n";
	D3 = D1;
	if (D1 == D2)
		cout << "D1 and 2 are Same \n";
	if (D1 == D3)
		cout << "D1 and 3 are Same \n";
	else
		cout << "not the same" << endl;

	return 0;


}
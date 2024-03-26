#include <iostream>
using namespace std;
class Power
{
	int cash;
public:
	Power(int cash)
	{
		this->cash = cash * cash;
		cout << this->cash;
	}

	Power(int cash, int stepen)
	{
		for (int i = 0; i < stepen; i++)
		{
			this->cash = cash *= cash;
		}
		cout << this->cash;
	}

	Power operator+(const Power& power)
	{
		return Power{ cash + power.cash };
	}

	Power operator-(const Power& power)
	{
		return Power{ cash - power.cash };
	}

	Power operator*(const Power& power)
	{
		return Power{ cash * power.cash };
	}

	Power operator/(const Power& power)
	{
		return Power{ cash / power.cash };
	}
	Power operator+=(const Power& power)
	{
		return Power{ cash += power.cash };
	}
	void display()
	{
		cout << cash;
	}
};
int main()
{
	Power power(2);
	power.display();
	cout << '\n';
	Power power2(2, 4);
	power2.display();
	power + power2;
	cout << '\n';
	power.display();
}
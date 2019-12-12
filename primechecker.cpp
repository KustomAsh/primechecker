#include<iostream>
using namespace std;
bool prime(int num);
int main()
{
	cout << "\t\t\tCheck Prime or Not" << endl << endl;
	unsigned int n;
	cout << "Enter number : "; cin >> n;
	if (n == 2)
	{
		cout << "It is a prime number.";
	}
	else
	{
		if (prime(n) == false)
			cout << "It is not a prime number.";
		else
			cout << "It is a prime number.";
	}
	cout << endl << endl << "2 ";
	for (int i = 3; i < 100; i++)
	{
		if (prime(i) == true)
			cout << i << " ";
	}
	system("pause>0");
}
bool prime(int num)
{
	bool truth = true;
	for (int i = num / 2; i > 1; i--)
	{
		if (num%i == 0)
		{
			truth = false;
			break;
		}
		else truth = true;
	}
	return truth;
}
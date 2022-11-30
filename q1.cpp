#include <iostream>
#include <iomanip>
using namespace std;

int getinput(int &, int &);
int swapTwoValues(int &, int &);

int getinput(float &, float &);
int swapTwoValues(float &, float &);


int main()
{
	int num1, num2;
	float fnum1, fnum2;
	getinput(num1, num2);
	cout << " Before Swap" << setw(5) << num1 << setw(5) << num2 << setw(5) << endl;
	swapTwoValues(num1, num2);
	cout << " After Swap" << setw(5) << num1 << setw(5) << num2 << setw(5) << endl;

	// -- Call overloaded function with float parameters
	getinput(fnum1, fnum2);
	cout << setw(5) << fnum1 << setw(5) << fnum2 << setw(5) << endl;
	swapTwoValues(fnum1, fnum2);
	cout << setw(5) << fnum1 << setw(5) << fnum2 << setw(5) << endl;
}

int getinput(int &num1, int &num2)
{
	cout << " 2 numbies: \n";
	cin >> num1 >> num2;
}

int swapTwoValues(int &num1, int &num2)
{
	int temp;
	temp = num1;
	num1 = num2;
	num2 = temp;
}

int getinput(float &fnum1, float &fnum2)
{
	cout << " 2 numbies: \n";
	cin >> fnum1 >> fnum2;
}

int swapTwoValues(float &fnum1, float &fnum2)
{
	int temp;
	temp = fnum1;
	fnum1 = fnum2;
	fnum2 = temp;
}
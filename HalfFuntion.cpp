/**
Thomas Matz
CIS 1202.201
December 5, 2022
*/

#include <iostream>
using namespace std;
/** This program computes the half of an input number.
There is just one function.  It is overloaded for an int parameter.
And there is a template function to work with other data types.*/

//Function prototypes
int Compute_Half(int);

template <typename T>
T Compute_Half(T xNum)
{
	T half;
	half = xNum / 2;
	return half;
}

int Compute_Half(int xNum)
{
	//cout << xNum;

	int halfInt;
	float tempFloat, halfFloat, halfRounded;
	tempFloat = static_cast<float>(xNum);
	halfFloat = tempFloat / 2;
	//cout << "\t\t " << halfFloat;
	halfRounded = round(halfFloat);
	halfInt = static_cast<int>(halfRounded);
	return halfInt;
}

int main()
{
	int  numInt,halfInt;
	float numFloat,halfFloat;
	double numDub,halfDub;
	
	cout << "\nEnter an integer value.  I will compute its half.> ";
	cin >> numInt;
	halfInt =Compute_Half(numInt);
	cout << "\nHalf of " << numInt << " is " << halfInt;

	cout << "\nEnter a float value.  I will compute its half.> ";
	cin >> numFloat;
	halfFloat = Compute_Half(numFloat);
	cout << "\nHalf of " << numFloat << " is " << halfFloat;

	cout << "\nEnter a double value.  I will compute its half.> ";
	cin >> numDub;
	halfDub = Compute_Half(numDub);
	cout << "\nHalf of " << numDub << " is " << halfDub;

	cout << endl << endl;
	system("pause");
	return 0;
}
// Homework01.cpp
// Jarrett Nordin
// 9/18/2017
// Homework 1, Part 2
// This is a very basic project that displays the use of class templates.
// The user is prompted to enter two integer values and two double values.
// The numbers are then handed to a class template which will multiply the 
// values and return the product.
// I would honestly not suggest using a template for this purpose, but it 
// shows how it could be done.
#include <iostream>
using namespace std;

template <class T>
T Product(T x, T y)
{
	T answer = x*y;
	return answer;
}

int main()
{
	int count1(0), count2(0), int1, int2, intinput, intresult;
	double dbl1, dbl2, dblinput, dblresult;

	// Takes in two integers and stores them in variables int1 and int2 
	cout << "Enter two integers (separated by a space)" << endl;
	while (count1 <= 1)
	{
		cin >> intinput;
		if (count1 == 0)
		{
			int1 = intinput;
		}
		else
		{
			int2 = intinput;
		}
		count1++;
	}

	// Takes in two integers and stores them in variables dbl1 and dbl2 
	cout << "Enter two doubles (separated by a space)" << endl;
	while (count2 <= 1)
	{
		cin >> dblinput;
		if (count2 == 0)
		{
			dbl1 = dblinput;
		}
		else
		{
			dbl2 = dblinput;
		}
		count2++;
	}

	// The four values are passed to the Product template
	intresult = Product(int1, int2);
	dblresult = Product(dbl1, dbl2);
	
	cout << "The product of two integers is: " << intresult << endl;
	cout << "The product of two doubles is: " << dblresult << endl;
    return 0;
}


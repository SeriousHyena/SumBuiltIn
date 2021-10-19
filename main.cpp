#include <iostream>
#include <array>

using namespace std;

//declare arrays here
array<int, 5> myArray = {2,4,6,8,10};

int collector ;
int& sum = collector;

//declare functions here
int sumArray(int arrayInt, int arraySize);

int main()
{
	int sumArray(int arrayInt, int arraySize);
	int foo=sumArray(1, 2);
	cout <<"The sum of the array integers is: " << sum<<endl;

	return 0;
}

//place functions here
int sumArray(int arrayInt, int arraySize)

{
	for (int i = 0; i < myArray.size(); i++)
	{
		sum += myArray[i];
	}
	
	return sum;
}
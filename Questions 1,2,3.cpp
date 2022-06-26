#include<iostream>
using namespace std;
class Array
{
private:
	int arr1[10];
public:
	//this function used tp get input
	void input()
	{
		for (int i = 0; i < 10; i++)
		{
			cout << "Enter the element ";
			cin >> arr1[i];
		}
	}
	//Copy contents of one array to another
	void copyarray()
	{
		int arr2[10];
		arr2[10] = arr1[10];
		cout << "The Original array is : ";
		for (int i = 0; i < 10; i++)
		{
			cout << arr1[i] << "\t";
		}
		cout << "Elements of array 2 is";
		for (int i = 0; i < 10; i++)
		{
			cout << arr2[i] << "\t";
		}

	}

	//Function to print out array 1 elements
	void out()
	{
		cout << "The Output is :" << endl;
		cout << endl;
		for (int i = (10 - 1); i >= 0; i--)
			cout << arr1[i] << "\t";
	}
};
int main() {
	Array A1;
	A1.input();  //Call the function for input
	
	A1.copyarray(); //Copy elements to the other array

	A1.out(); //Elements of array 1 on screen

	return 0;

}
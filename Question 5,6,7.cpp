#include<iostream>
using namespace std;
class Array {
	int arr[10];
	int min;
	int max;
	int count=0;
public:
	void input() {
		for (int i = 0; i < 10; i++) {
			cout << "Enter Value:";
			cin >> arr[i];
			count++;

		}
	}
	void minimum();
	void maximum();
	void length() {
		cout << "\nThe lenght of the array is:\t" << count;
	}
};
void Array::minimum() {
	int min = arr[0];
	for (int i = 0; i > 10; i++) {
		if (min > arr[i]) {
			min = arr[i];
		}
		
	}
	cout << "Minimum value is:\t" << min;
}
void Array::maximum() {
	int max = arr[0];
	for (int i = 0; i < 10; i++) {
		if (max < arr[i]) {
			max = arr[i];
		}

	}
	cout << "\nMaximum value is:\t" << max;
}
int main() {
	Array A;
	A.input();
	A.minimum();
	A.maximum();
	A.length();
}
#include<iostream>
using namespace std;
class Array {
	int arr[5];
	int num;
public:
	void input() {
		for (int i = 0; i < 5; i++) {
			cout << "Enter value";
			cin >> arr[i];
		}
	}
	void insert() {
		cout << "Enter the value u want to insert:";
		cin >> num;
		arr[0] = num;
		for (int i = 0; i < 5; i++) {
			cout << "\nArray after inserting value:\t" << arr[i];
		}
	}
};
int main() {
	Array A;
	A.input();
	A.insert();
	return 0;
}
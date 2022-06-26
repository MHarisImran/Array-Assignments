#include<iostream>
using namespace std;
class Array {
private:
	int arr[10];
	int size;
	int num;
	int mid;
public:
	void input() {
		cout << "Enter array elements:";
		for (int i = 0; i < 10; i++) {
			cin >> arr[i];
			size++;
		}



	}
	void middle() {
		if (size / 2 == 0) {
			mid = size / 2;
		}
		else {
			mid = (size + 1) / 2;
		}

	}

	void insert() {
		cout << "Enter value u want to insert";
		cin >> num;
		arr[mid] = num;
	}

	void out() {
		cout << "Array after inserting value:\t";
		for (int i = 0; i < size; i++) {
			cout << arr[i];

		}
	}

};
int main() {
	Array A;
	A.input();
	A.middle();
	A.insert();
	A.out();
	return 0;
}
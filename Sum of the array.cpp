#include<iostream>
using namespace std;
class Array {
	int arr[10];
	int sum;
public:
	void input() {
		for (int i = 0; i < 10; i++) {
			cout << "enter value;";
			cin >> arr[i];
		}
	}
	void Totalsum() {
		for (int i = 0; i < 10; i++) {
			sum = sum + arr[i];
		}
		cout << "Total sum:\t" << sum;

	}
};
int main() {
	Array A;
	A.input();
	A.Totalsum();
	return 0;
}
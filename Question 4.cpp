#include<iostream>
using namespace std;
class Array {
	int arr[10];
	int number;
	int mod=0;

	public:
	void input() {
		for (int i = 0; i < 10; i++) {
			cout << "Enter value:";
			cin >> arr[i];
		}
	}

	void Number() {
		cout << "Enter number you want:";
		cin >> number;
	}

	void Mod() {
		for (int i = 0; i < 10; i++) {
			if (arr[i] == number) {
				mod++;
			}
		}
		cout << "The desired number repeated this many times:" << mod;
	}
};
int main() {
	Array A;
	A.input();
	A.Number();
	A.Mod();
	return 0;
}
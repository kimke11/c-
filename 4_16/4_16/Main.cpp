#include <iostream>
using namespace std;

int main() {
	float a[100];
	float/*실수함*/ sum = 0; //햇갈림
	cin >> a[0];
	for (int i = 1; i < 100; i++) {
		a[i] = a[i - 1] + 0.2;
		cout << a[i] << endl;
	}
	for (int i = 0; i < 100; i++) {
		sum += a[i];
	}
	cout << sum << endl;
	cout << "================================================" << endl;
	float d = 0;
	for (int i = 0; i < 50; i++) {
		d=a[i];
		a[i] = a[99 - i]; //까먹고 안넣음
		a[99 - i] = d;
	}
	for (int i = 0; i < 100; i++) {
		cout << a[i] << endl;
	}
	cout << 20243503 % 3 << endl;
}
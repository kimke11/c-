#include <iostream>
using namespace std;


void sumarr(int *arr1, int *arr2, int size) {
	for (int i = 0; i < size; i++) {
		arr1[i] += arr2[i];
	}
	for (int i = 0; i < size; i++) {
		cout << arr1[i]<<endl;
	}
	for (int i = 0; i < size; i++) {
		cout << arr2[i] << endl;
	}

}
int main() {
	int data[5];
	int data2[5];
	for (int i = 0; i < 5; i++) {
		cin >> data[i];
	}
	for (int i = 0; i < 5; i++) {
		cin >> data2[i];
	}
	sumarr(data, data2, 5);
}
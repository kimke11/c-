/*#include <iostream>
using namespace std;

int sum(int a, int b = 10����Ʈ �Ķ����(�ΰ��� ������ �Է¹޾� ���ϰ� ����� ��ȯ�ϴ� ��) : ��Ģ �Ϻθ� ����Ʈ ���� �����ٰ� �ϸ� �տ��� ����Ʈ���� �ִ°��� �ƴ϶� �ڿ��� ���� �־�� �Ѵ�.) {
	return a + b;
}
double sum(double a, double b) {
	return a + b;
}
void swap(int d, int f) {
	int k;
	k = d;
	d = f;
	f = k;
	cout << d<<"and" << f << endl;
}
int main() {
	cout << sum(30) << endl;
	//sum(1.2, 2.2);
	//swap(1, 2);
}*/

#include <iostream>
using namespace std;

int arrsum(int *arr, int size) {
	int sum = 0;
	for (int i = 0; i < size; i++) {
		sum += arr[i];
	}
	cout << sum << endl;
	return sum;
	//sizeof(arr);
}
int main() {
	int data[5];
	int data2[10];
	for (int i = 0; i < 5; i++) {
		cin >> data[i];
		data2[i] = data[i];
	}
	for (int i = 5; i < 10; i++) {
		cin >> data2[i];
	}
	for (int i = 0; i < 10; i++) {
		cout << data2[i] << endl;
	}

	arrsum(data, 5);
} 
#include <iostream>
using namespace std;

void increase10(/*const*/int& a) {//���� ������ 10�� ������Ű���� const�� ���� ���� ������ �ʾ� ���� ����
	cout << a << endl;
	a = a + 10;
	cout << a << endl;
}

int sum(int a, int b) {
	return(a + b);
}
void swap(int& a, int& b) {
	int c = 0;
	c = a;
	a = b;
	b = c;
}
void swap(int* a, int* b) {
	int c = 0;
	c = *a;
	*a = *b;
	*b = c;

}
int minValue(int* arr, int size){
	int min = arr[0];
	for (int i = 1; i < size; i++) {
		if (min <= arr[i]) {
			continue;
		}
		else {
			min = arr[i];
		}
	}
	return min;
}
int maxValue(int* arr, int size) {
	int max = arr[0];
	for (int i = 1; i < size; i++) {
		if (max >= arr[i]) {
			continue;
		}
		else {
			max = arr[i];
		}
	}
	return max;
}
int main() {
	/*const*/int a = 10;// const= ��� �ѹ� �����ϸ� ���� �����Ҷ��� �����ϰ� ������ ������ �ȵȴ�.
	a = 30; // a�Լ��� 30 ����
	const int& b= a;//b��� a�� ���� ������ ����Ʈ�������� 
	a = 50;// a�Լ��� 50 ����(b �� ������ const�Լ��� ������ a�� ������ ��ġ�� �ʴ´�)

	//cout << a << endl;
	//increase10(a);
	//sum(a, b);
	//cout << sum(a,b) << endl;
	int arr[] = { 10,20,30,40,50 };
	//cout << sum(arr[1], arr[4]) << endl;
	int c = 30;
	//swap(a, c);
	//cout << a << endl;
	//cout << c << endl;
	//swap(arr[0], arr[4]);
	//swap(arr[1], arr[3]);
	minValue(arr, 5);
	maxValue(arr, 5);

	cout << minValue(arr, 5) << endl;
	cout << maxValue(arr, 5) << endl;
}


  
    

//���ٸ��� �ּ� �ޱ�
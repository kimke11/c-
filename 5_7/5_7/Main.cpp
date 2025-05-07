#include <iostream>
using namespace std;

void increase10(/*const*/int& a) {//값을 받은후 10을 증가시키지만 const를 쓰면 값이 변하지 않아 쓸수 없음
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
	/*const*/int a = 10;// const= 상수 한번 고정하면 값을 대입할때만 대입하고 다음엔 대입이 안된다.
	a = 30; // a함수에 30 대입
	const int& b= a;//b라는 a의 값이 고정된 포인트변수선언 
	a = 50;// a함수에 50 대입(b 가 고정된 const함수를 쓰더라도 a엔 영향을 끼치지 않는다)

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


  
    

//매줄마다 주석 달기
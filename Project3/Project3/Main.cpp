#include <iostream>
using namespace std;

int main() {
	int count;//밖에서 선언하면 for문에서 사용한 값도 그래도 유지된다.
	for (count = 0; count<5; count +=1) {
		cout << "Hello World" << endl;
	}
	cout << count << endl;// count 라는 함수는 for 문에서만 사용가능한 함수이다.
}
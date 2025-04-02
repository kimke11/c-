#include <iostream>
using namespace std;

int main()
{
	
	//int count = 0;
	//while (count) {//조건이 맞다면 출력
	//	cout << "Hello World1" << endl;
	//}
	//int a;
	//cin >> a;
	//cout << a << endl;
	int b;
	//do {//1번 출력한후 조건이 맞다면 계속 출력
		//cout << "Hello World" << endl;
		//count = count + 1;
		//cout << count << endl;
	//	cin >> b;
	//	cout << b <<endl;
	//} while (b!=0/*count <10*/);//()안에 아무것도 안적으면 식이 필요하다는 오류 뜸, 무한 실행, 조건식에 함수값을 0이라고 넣으면 false로 인식 출력안됨
	while (b != 0) {
		cin >> b;
		cout << b << endl;

	}
}//종료조건을 계속조건으로 바꿔서 조건식을 써야 한다.
#include <iostream>

int main() {
	using namespace std; 
	int age = 21; //일반변수 선언
	int* ptr; // 포인터 변수 선언
	int& year = age; //참조변수선언 
	cout << year << endl; 
	ptr = &year; // age 주소값 불러서 ptr에 저장
	*ptr = 30; // ptr주소에 있는 데이터를 30으로 변환
	cout << age << endl; 
	age = *ptr * year/*age*/; //참조변수든 아니든 결과는 똑같고 *ptr은 age와 같은 값을 가진다.
	cout << year << endl;
	
	int a =10;
	int b;
	int& ref = a;
	//ref = b; 안됨
	cout /* << b*/ << a << endl;

	cout << sizeof/*연산자 결과값이 있음*/(unsigned char/*자료형, 변수형 들어올수 있음*/) << endl;
	cout << "----------------------" << endl;

	unsigned char ade = 128;
	char ded = ade;
	cout << sizeof(ade) << endl;
	cout << sizeof(unsigned char) << endl;
	cout << ade << endl; //문자형이므로 값 출력 안됨
	cout << (int)ade << endl;// 정수화 해서 값 출력
	cout << (int)ded << endl;// 자료형의 범위보다 큰 숫자이므로 -128이 출력됨
	ade = 127;
	ded = ade;
	cout << (int)ded << endl;
	cout << (int)ded + 1 << endl;
	ded = ded + 1;
	cout << (int)ded << endl;


	cout << "----------------------" << endl;
	int arr[5]/*기호*/;
	arr[0];/*연산자 arr의 1번째*/
	arr[1];/*연산자 arr의 2번째*/
	arr[2];/*연산자 arr의 3번째*/
	arr[3] = arr[1];//가능하다

	int rot[5];
	rot[0] = 10;
	rot[1] = 20;
	rot[2] = 30;
	rot[3] = 40;
	rot[4] = 50;

	int help = rot[0];
	rot[0] = rot[4];
	rot[4] = help;
	help = rot[1];
	rot[1] = rot[3];
	rot[3] = help;

	cout << rot[0] << endl;
	cout << rot[1] << endl;
	cout << rot[2] << endl;
	cout << rot[3] << endl;
	cout << rot[4] << endl;

	//최종 a[5]의 값이 각각 10,20,30,40,50을 50,40, 30, 20, 10으로 바꾸기
	//여러가지 태스트 해보기





	//std::cout << "Hello World!\n"<< std::endl;
	//std::cout << "Hello\tWorld!" << std::endl;
	//int a;
	//a = 10;
	
	//std::cout << "Hello\n"<<"World!" << std::endl; // "a" =문자그대로(문자열(문자여러개))  a = 변수 'a'= 문자
	//std::cout << 5 << std::endl;

	//std::cout << "a:" << a << std::endl;
	//using namespace std;
	//cout << a + 5 << endl;
	//int b, c;
	//b = 5;
	//c = 3;
	// << "b+c=" << b + c << std::endl;
	//cout << "b-c=" << b - c << std::endl;
	//cout << "b*c=" << b * c << std::endl;
	//cout << "b/c=" << (double)b / c << std::endl;
	//cout << "b%c=" << b % c << std::endl;
}
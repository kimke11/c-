#include <iostream>
using namespace std;
void Hello(); //함수의 선언
void Hello(int a); // 이부분은 int a 부분을 출력할때 int a 부분이 정의기 전에 main에서 10 이라는 정수가 입력되려고 했으므로 않으므로 미리 정의 시켜준다

int main(){
	Hello(10/*(int a)없을때 여기에 정수값을 넣으면 형식이 달라 컴파일러 에러가 뜸*/); //함수의 호출(출력)
	Hello();
	Hello(20);
	Hello();
	Hello(30);
	Hello();
}
void Hello(){
	cout << "Hello World" << endl;
}
void Hello(int a) { //함수의 정의 (출력 안됨)(main앞에 있어도 됨 but뒤에 올경우 함수의 선언이 필요함)
	cout << "Hello World" << a <<endl;
} // void가 main뒤에 오면 정의가 뒤에 있으므로 오류가 뜸  //이부분을 주석처리 하면 다른 라이브러리에도 함수가 없으므로 링커 에러이다.

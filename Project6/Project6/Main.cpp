/* 0. include <iostream>
using namespace std;

int main(int argc, char const* argv[])
{
	int a = 10;
	{
		int a = 20;
		cout << "a(1): " << a << endl;// a 를 20이라고 정의 했으므로 a=20기록 한다
	}
	{
		int a = 30;
		cout << "a(2): " << a << endl;// a 를 30이라고 정의 했으므로 a=30기록 한다
	}
	{
		int a = 40;
		{
			cout << "a(3): " << a << endl;// a 를 40이라고 정의하고 {}안에 a를 쓰기 때문에 a=40기록한다
		}
		cout << "a(4): " << a << endl; // a를 40이라고 정의한후 a의 값이 변하지 않았으므로 a=40이다
	}
	cout << "a(5): " << a << endl; // a를 정의하는 코드들이 모두 {}안에 있는데 여기 부분은 {}안에 포함되지 않으므로 별개로 취급한다. {}밖에 정의된 a 값인 a = 10이 출력된다.

	return 0;
}*/
/*1,2.#include <iostream>
using namespace std;


int main(int argc, char const* argv[])
{
	int input;
	cout << "정수를 입력하시오: ";
	cin >> input;

	if (input <= 100) {
		cout << "100 이하 정수이다" << endl;
	}
	if (input > 100) {
		cout << "100 초과 정수이다" << endl; //이렇게 바꾸면 2개의 if 문의 조건이 겹치는 부분이 없으므로 2번 출력될 일이 없이 재대로 출력된다
	}
	//cout << "100 초과 정수이다" << endl;

	return 0;
} //if 문으로 조건을 입력해 100 이상의 것은 if의 {}는 출력되지 않아 원하는 대로 출력되지만 100미만의 숫자는 if의 조건에 맞기 때문에 {}안의 내용이 출력된다 하지만 if문을 밖에 코드들은 조건이 없어서 그냥 출력되므로 2개의 코드가 출력된다*/
/*3. #include <iostream>
using namespace std;

int main(int argc, char const* argv[])
{
	int value;

	cout << "정수를 입력하시오: ";
	cin >> value;

	if (value > 10) {
		cout << "입력한 값은 " << value << endl;
		cout << "10보다 큰 정수이다" << endl;
	}
	else {
		cout << "10보다 작은 정수이다" << endl;
	}

	return 0;
} // if, else는{}을 적고 그 안에 조건이 맞다면 실행할 코드가 실행되는데 {}을 적지 않고 그냥 적어두었습니다. 즉 형식을 지키지 않았다*/

/*4.#include <iostream>
using namespace std;

int main(int argc, char const* argv[])
{
	int value;

	cout << "정수를 입력하시오: ";
	cin >> value;

	if (value % 2)
		cout << " 홀수 " << endl;
	else
		cout << " 짝수 " << endl;
	return 0;
} // if 문 안의 조건식은 나머지의 값을 표기한다. 이 조건식은 입력받은 수를 2로 나누기 때문에 결과는 0,1이 나온다. 조건식에서는 0과1을 부울형식으로 0=false, 1= true이라고 인식하므로 2를 나눴을때 0이나오는 짝수는 if문 안의 코드가 실행되지 않고 if 조건식에 맞지 않은 것을 출력하는 else가 이들을 받아 else안의 코드를 실행시킨다.*/
/*5.#include <iostream>
using namespace std;

int main(int argc, char const* argv[])
{
	int value;

	cout << "정수를 입력하시오: ";
	cin >> value;

	if (value % 3 >0)
		cout << " 3의 배수가 아닙니다 " << endl;
	else
		cout << " 3의 배수 입니다 " << endl;
	return 0;
}*/
/*6. #include <iostream>
using namespace std;

int main(int argc, char const* argv[])
{
	char ch;
	cout << "A, B, C 문자 중 하나를 입력하시오:";
	cin >> ch;
	switch (ch) {
	case 'A':
		cout << "A가 입력" << endl;
		break;
	case 'B':
		cout << "B가 입력" << endl;
		break;
	case 'C':
		cout << "C가 입력" << endl;
		break;
	default:
		cout << "원하는 문자가 아니다" << endl;

	}

	return 0;
}*/
/*7.#include <iostream>
using namespace std;

int main(int argc, char const* argv[])
{
	char ch;
	cout << "A, B, C 문자 중 하나를 입력하시오:";
	cin >> ch;
	switch (ch) {
	case 'A':
		cout << "A가 입력" << endl;
		break;
	case 'B':
		cout << "B가 입력" << endl;
		break;
	case 'C':
		cout << "C가 입력" << endl;
		break;
	case 'a':
		cout << "A가 입력" << endl;
		break;
	case 'b':
		cout << "B가 입력" << endl;
		break;
	case 'c':
		cout << "C가 입력" << endl;
		break;
	default:
		cout << "원하는 문자가 아니다" << endl;

	}

	return 0;
}*/

/* 8.#include <iostream>
using namespace std;

int main(int argc, char const* argv[])
{
	int value;
	cout << "1 ~ 3 중의 정수를 입력하시오: ";
	cin >> value;

	switch (value) {
	case 1:
		cout << "1이 입력" << endl;
		break;
	case 2:
		cout << "2가 입력" << endl;
		break;
	case 3:
		cout << "3이 입력" << endl;
		break;
	default:
		cout << "원하는 수가 아니다" << endl;
	}

	return 0;
}//값을 받은건 정수형인데 조건이 문자열이였기 때문에 조건에 맞지 않아 계속 default로 이동해 출력했습니다. 이에 문자열이 아닌 정수형으로 바꿨습니다.*/

/* 9. #include <iostream>
using namespace std;

int main(int argc, char const* argv[])
{
	int input;
	do {
		cout << "정수를 입력하시오: ";
		cin >> input;
		cout << "입력값: " << input << endl;
	} while (input != 0);

	return 0;
} //반복되는 문장은 정수를 입력하시오:, 입력값: (입력한 값)이 반복되며 횟수는 0을 입력할때까지 계속 반복될것이며 종료조건은 정수 0을 입력하였을때 입니다.*/

/*10.#include <iostream>
using namespace std;

int main(int argc, char const* argv[])
{
	int count = 0, num;
	cout << "반복 횟수를 입력하시오: ";
	cin >> num;

	while (count < num-2) {
		cout << "repeat (" << count << ")" << endl;
		count++;
	}
	return 0;
}*/
/*11. #include <iostream>
using namespace std;

int main(int argc, char const* argv[])
{
	for (int i = 0; i < 10; i++) {
		if (i == 3 || i == 6) continue;
		cout << i << ", ";
	}
	cout << endl;
	return 0;
}//0,1,2,4,5,7,8,9 로 continue는 if 문의 조건을 제외하고 실행하도록 하는 것이므로 i 가 0에서 계속해서 1씩 추가 하며 0부터 9까지 출력되는 코드이지만 if로 3, 6을 조건문으로 지정하고 contiune를 썼으므로 3,6을 출력하지 않는다.*/
/*12.#include <iostream>
using namespace std;

int main(int argc, char const* argv[])
{
	for (int i = 0; i < 10; i++) {
		if (i == 3 || i == 6) break;
		cout << i << ", ";
	}
	cout << endl;
	return 0;
}//0,1,2 가 출력 될것이다 break는 반복문을 실행하는것을 중단시키는 명령어로 3이 되었을때 반복문을 중단시키므로 1,2 만 출력된다 */
/*13. #include <iostream>
using namespace std;

int main(int argc, char const* argv[])
{
	for (int i = 0; i < 10; i++) {
		cout << i%4 << ", ";
	}
	cout << endl;

	return 0;
}*/
/* 14.#include <iostream>
using namespace std;

int main(int argc, char const* argv[])
{

	int sum;
	sum = 1 + 2 + 3 + 4 + 5 + 6 + 7 + 8 + 9 + 10;  // 1 ~ 10 까지의 정수 더하기 

	cout << "(1): 1+2+3+4+5+6+7+8+9+10 = " << sum << endl;

	sum = 0;
	for (int i = 1; i <= 10; i++) {
		sum = sum + i;
	}
	cout << "(2): 1+2+3+4+5+6+7+8+9+10 = " << sum << endl;

	return 0;
}*/

/*15.#include <iostream>
using namespace std;

int main(int argc, char const* argv[])
{

	int product;
	product = 1 * 2 * 3 * 4 * 5 * 6 * 7 * 8 * 9 * 10;  // 1 ~ 10 까지의 정수 더하기 

	cout << "(1): 1*2*3*4*5*6*7*8*9*10 = " << product << endl;

	product = 1;
	for (int i = 1; i <= 10; i++) {
		product = product * i;
	}
	cout << "(2): 1*2*3*4*5*6*7*8*9*10 = " << product << endl;

	return 0;
}*/

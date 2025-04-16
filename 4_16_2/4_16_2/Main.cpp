/*#include <iostream>
using namespace std;

int main(int argc, char const* argv[])
{
	int ages[5] = { 10, 40, 30 };

	cout << ages[0] << endl; // 출력 1 10 배열 ages 의 1번째로 있는 값이므로
	cout << ages[1] << endl; // 출력 2 40 배열 ages 의 2번째로 있는 값이므로
	cout << ages[3] << endl; // 출력 3 0  배열 ages 의 4번째로 있는 값이므로 입력받지 못했으므로 0이라고 출력
	cout << ages[5] << endl; // 출력 4 값없음(오류)

	return 0;
}*//*
#include <iostream>
using namespace std;

int main(int argc, char const* argv[])
{
	int ages[] = { 10, 40, 30 };

	cout << ages[0] << endl; // 출력 1 10, 배열 ages 의 1번째로 있는 값이므로
	cout << ages[1] << endl; // 출력 2 40, 배열 ages 의 2번째로 있는 값이므로
	cout << ages[3] << endl; // 출력 3 값없음(오류) 선언되지 않은 변수 

	return 0;
}*//*
#include <iostream>
using namespace std;

int main(int argc, char const* argv[])
{
	char grades[] = { 'A', 'B', 'C', 'D', 'F' };      // 문자 배열 
	char name[] = { 'P', 'e', 't', 'e', 'r', '\0' }; // 문자열 배열

	cout << grades[0] << endl; // 출력 1 A grades배열의 1번째 값이므로
	cout << name[0] << endl;   // 출력 2 P name배열의 1번째 값이므로

	cout << name[5] << endl;   // 출력 3 값없음(오류) 선언되지 않은 변수
	cout << grades[5] << endl; // 출력 4 값없음(오류) 문자인데 문자열로 받음

	cout << name << endl;      // 출력 5 peter []을 쓰지 않아 지정하지 않아서 배열값을 모두 출력할것 같습니다
	cout << grades << endl;    // 출력 6 ABCDF []을 쓰지 않아 지정하지 않아서 배열값을 모두 출력할것 같습니다

	return 0;
}*/
/*
#include <iostream>
using namespace std;

int main(int argc, char const* argv[])
{
	char grades[] = "ABCDF";     // 문자열 배열 
	char name[] = "Peter";       // 문자열 배열

	cout << grades[0] << endl; // 출력 1 A ""안의 문자열이 문자 순서대로 배열에 저장되어 첫 문자인 A가 출력된다
	cout << name[0] << endl;   // 출력 2 P ""안의 문자열이 문자 순서대로 배열에 저장되어 첫 문자인 P가 출력된다

	cout << name[5] << endl;   // 출력 3 값없음(오류) 선언되지 않은 변수
	cout << grades[5] << endl; // 출력 4 값없음(오류) 선언되지 않은 변수


	cout << name << endl;      // 출력 5 Peter []을 쓰지 않아 지정하지 않아서 배열값을 모두 출력할것 같습니다
	cout << grades << endl;    // 출려 6 ABCDF []을 쓰지 않아 지정하지 않아서 배열값을 모두 출력할것 같습니다

	return 0;
}*/
/*
#include <iostream>
using namespace std;

int main(int argc, char const* argv[])
{
	float data[10]/1*, initlal_value*1/ = { 10.1 };

	for (int i = 1/1*0*1/; i < 10; i++) {
		/1*data[i] = initlal_value;
		initlal_value += 0.3;*1/
		data[i] = data[i - 1] + 0.3;
	}

	for (int i = 0; i < 10; i++) {
		cout << data[i] << endl;
	}

	cout << endl;

	return 0;
}
*/
#include <iostream>
using namespace std;

int main(int argc, char const* argv[])
{
	int num;
	char name[] = "Chul-Soo Kim";
	int values[] = { 10, 40, 50, 60, 80, 100 };

	num = sizeof(name) / sizeof(name[0]);
	cout << "num_of_name: " << num << endl;
	num = sizeof(values) / sizeof(values[0]);
	cout << "num of values: " << num << endl;

	return 0;
}
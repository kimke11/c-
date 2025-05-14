#include <iostream> // 데이터 캡술화
using namespace std;

struct Student // 구조체를 생성하는 것으로 구조체는 항상 앞글자는 대문자여야 한다.
{
	int age;
	int dept;
	float height;

};
struct Score // public(적지 않아도 있다고 판단함) 
//class Score // 접근 지정자를 쓰지 않으면 오류가 생긴다.  private(적지 않아도 있다고 판단함)
{
private:
//public: // 접근(권한)지정자 : 데이터를 보호하기 위한것 
	float Science;
	float Math;
	float English;
public: // 이후에는 수정을 해야 하므로 public으로 지정
	void setMath(float a) {
		Math = a;
	}
	int getMath(float a) {
		return a;
	} // 멤버함수
};

int main() {
	//Student kcw;
	//kcw.age = 21;
	//cout << kcw << endl; //  cout은 기본으로 주어지는 자료형(int, float, char 등등)만 지원한다. 나머지는 지원되지 않기 때문에 출력할수 없다.
	//cout << kcw.age<<kcw.dept<<kcw.height << endl; // cout으로 구조체에서의 int형을 받아서 출력한다. 이에 내부 함수까지 적어야 출력한다.
	Score kim;
	//kim.Science = 90;
	//kim.Math = 87.5;
	//kim.English = 77;
	//cout << kim.Science << endl;
	//cout << kim.Math << endl;
	//cout << kim.English << endl;
	kim.setMath(88); // 구조체에 private라고 되어 있으면 사용불가
	kim.getMath(98);
	return 0;
}
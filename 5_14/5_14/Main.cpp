#include <iostream> // ������ ĸ��ȭ
using namespace std;

struct Student // ����ü�� �����ϴ� ������ ����ü�� �׻� �ձ��ڴ� �빮�ڿ��� �Ѵ�.
{
	int age;
	int dept;
	float height;

};
struct Score // public(���� �ʾƵ� �ִٰ� �Ǵ���) 
//class Score // ���� �����ڸ� ���� ������ ������ �����.  private(���� �ʾƵ� �ִٰ� �Ǵ���)
{
private:
//public: // ����(����)������ : �����͸� ��ȣ�ϱ� ���Ѱ� 
	float Science;
	float Math;
	float English;
public: // ���Ŀ��� ������ �ؾ� �ϹǷ� public���� ����
	void setMath(float a) {
		Math = a;
	}
	int getMath(float a) {
		return a;
	} // ����Լ�
};

int main() {
	//Student kcw;
	//kcw.age = 21;
	//cout << kcw << endl; //  cout�� �⺻���� �־����� �ڷ���(int, float, char ���)�� �����Ѵ�. �������� �������� �ʱ� ������ ����Ҽ� ����.
	//cout << kcw.age<<kcw.dept<<kcw.height << endl; // cout���� ����ü������ int���� �޾Ƽ� ����Ѵ�. �̿� ���� �Լ����� ����� ����Ѵ�.
	Score kim;
	//kim.Science = 90;
	//kim.Math = 87.5;
	//kim.English = 77;
	//cout << kim.Science << endl;
	//cout << kim.Math << endl;
	//cout << kim.English << endl;
	kim.setMath(88); // ����ü�� private��� �Ǿ� ������ ���Ұ�
	kim.getMath(98);
	return 0;
}
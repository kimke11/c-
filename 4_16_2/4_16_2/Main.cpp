/*#include <iostream>
using namespace std;

int main(int argc, char const* argv[])
{
	int ages[5] = { 10, 40, 30 };

	cout << ages[0] << endl; // ��� 1 10 �迭 ages �� 1��°�� �ִ� ���̹Ƿ�
	cout << ages[1] << endl; // ��� 2 40 �迭 ages �� 2��°�� �ִ� ���̹Ƿ�
	cout << ages[3] << endl; // ��� 3 0  �迭 ages �� 4��°�� �ִ� ���̹Ƿ� �Է¹��� �������Ƿ� 0�̶�� ���
	cout << ages[5] << endl; // ��� 4 ������(����)

	return 0;
}*//*
#include <iostream>
using namespace std;

int main(int argc, char const* argv[])
{
	int ages[] = { 10, 40, 30 };

	cout << ages[0] << endl; // ��� 1 10, �迭 ages �� 1��°�� �ִ� ���̹Ƿ�
	cout << ages[1] << endl; // ��� 2 40, �迭 ages �� 2��°�� �ִ� ���̹Ƿ�
	cout << ages[3] << endl; // ��� 3 ������(����) ������� ���� ���� 

	return 0;
}*//*
#include <iostream>
using namespace std;

int main(int argc, char const* argv[])
{
	char grades[] = { 'A', 'B', 'C', 'D', 'F' };      // ���� �迭 
	char name[] = { 'P', 'e', 't', 'e', 'r', '\0' }; // ���ڿ� �迭

	cout << grades[0] << endl; // ��� 1 A grades�迭�� 1��° ���̹Ƿ�
	cout << name[0] << endl;   // ��� 2 P name�迭�� 1��° ���̹Ƿ�

	cout << name[5] << endl;   // ��� 3 ������(����) ������� ���� ����
	cout << grades[5] << endl; // ��� 4 ������(����) �����ε� ���ڿ��� ����

	cout << name << endl;      // ��� 5 peter []�� ���� �ʾ� �������� �ʾƼ� �迭���� ��� ����Ұ� �����ϴ�
	cout << grades << endl;    // ��� 6 ABCDF []�� ���� �ʾ� �������� �ʾƼ� �迭���� ��� ����Ұ� �����ϴ�

	return 0;
}*/
/*
#include <iostream>
using namespace std;

int main(int argc, char const* argv[])
{
	char grades[] = "ABCDF";     // ���ڿ� �迭 
	char name[] = "Peter";       // ���ڿ� �迭

	cout << grades[0] << endl; // ��� 1 A ""���� ���ڿ��� ���� ������� �迭�� ����Ǿ� ù ������ A�� ��µȴ�
	cout << name[0] << endl;   // ��� 2 P ""���� ���ڿ��� ���� ������� �迭�� ����Ǿ� ù ������ P�� ��µȴ�

	cout << name[5] << endl;   // ��� 3 ������(����) ������� ���� ����
	cout << grades[5] << endl; // ��� 4 ������(����) ������� ���� ����


	cout << name << endl;      // ��� 5 Peter []�� ���� �ʾ� �������� �ʾƼ� �迭���� ��� ����Ұ� �����ϴ�
	cout << grades << endl;    // ��� 6 ABCDF []�� ���� �ʾ� �������� �ʾƼ� �迭���� ��� ����Ұ� �����ϴ�

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
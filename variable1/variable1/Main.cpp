#include <iostream>

int main() {
	using namespace std; 
	int age = 21; //�Ϲݺ��� ����
	int* ptr; // ������ ���� ����
	int& year = age; //������������ 
	cout << year << endl; 
	ptr = &year; // age �ּҰ� �ҷ��� ptr�� ����
	*ptr = 30; // ptr�ּҿ� �ִ� �����͸� 30���� ��ȯ
	cout << age << endl; 
	age = *ptr * year/*age*/; //���������� �ƴϵ� ����� �Ȱ��� *ptr�� age�� ���� ���� ������.
	cout << year << endl;
	
	int a =10;
	int b;
	int& ref = a;
	//ref = b; �ȵ�
	cout /* << b*/ << a << endl;

	cout << sizeof/*������ ������� ����*/(unsigned char/*�ڷ���, ������ ���ü� ����*/) << endl;
	cout << "----------------------" << endl;

	unsigned char ade = 128;
	char ded = ade;
	cout << sizeof(ade) << endl;
	cout << sizeof(unsigned char) << endl;
	cout << ade << endl; //�������̹Ƿ� �� ��� �ȵ�
	cout << (int)ade << endl;// ����ȭ �ؼ� �� ���
	cout << (int)ded << endl;// �ڷ����� �������� ū �����̹Ƿ� -128�� ��µ�
	ade = 127;
	ded = ade;
	cout << (int)ded << endl;
	cout << (int)ded + 1 << endl;
	ded = ded + 1;
	cout << (int)ded << endl;


	cout << "----------------------" << endl;
	int arr[5]/*��ȣ*/;
	arr[0];/*������ arr�� 1��°*/
	arr[1];/*������ arr�� 2��°*/
	arr[2];/*������ arr�� 3��°*/
	arr[3] = arr[1];//�����ϴ�

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

	//���� a[5]�� ���� ���� 10,20,30,40,50�� 50,40, 30, 20, 10���� �ٲٱ�
	//�������� �½�Ʈ �غ���





	//std::cout << "Hello World!\n"<< std::endl;
	//std::cout << "Hello\tWorld!" << std::endl;
	//int a;
	//a = 10;
	
	//std::cout << "Hello\n"<<"World!" << std::endl; // "a" =���ڱ״��(���ڿ�(���ڿ�����))  a = ���� 'a'= ����
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
#include <iostream>
using namespace std;
void Hello(); //�Լ��� ����
void Hello(int a); // �̺κ��� int a �κ��� ����Ҷ� int a �κ��� ���Ǳ� ���� main���� 10 �̶�� ������ �ԷµǷ��� �����Ƿ� �����Ƿ� �̸� ���� �����ش�

int main(){
	Hello(10/*(int a)������ ���⿡ �������� ������ ������ �޶� �����Ϸ� ������ ��*/); //�Լ��� ȣ��(���)
	Hello();
	Hello(20);
	Hello();
	Hello(30);
	Hello();
}
void Hello(){
	cout << "Hello World" << endl;
}
void Hello(int a) { //�Լ��� ���� (��� �ȵ�)(main�տ� �־ �� but�ڿ� �ð�� �Լ��� ������ �ʿ���)
	cout << "Hello World" << a <<endl;
} // void�� main�ڿ� ���� ���ǰ� �ڿ� �����Ƿ� ������ ��  //�̺κ��� �ּ�ó�� �ϸ� �ٸ� ���̺귯������ �Լ��� �����Ƿ� ��Ŀ �����̴�.

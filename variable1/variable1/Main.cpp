#include <iostream>

int main() {

	//std::cout << "Hello World!\n"<< std::endl;
	//std::cout << "Hello\tWorld!" << std::endl;
	int a;
	a = 10;
	
	//std::cout << "Hello\n"<<"World!" << std::endl; // "a" =���ڱ״��(���ڿ�(���ڿ�����))  a = ���� 'a'= ����
	//std::cout << 5 << std::endl;

	std::cout << "a:" << a << std::endl;
	using namespace std;
	cout << a + 5 << endl;
	int b, c;
	b = 5;
	c = 3;
	cout << "b+c=" << b + c << std::endl;
	cout << "b-c=" << b - c << std::endl;
	cout << "b*c=" << b * c << std::endl;
	cout << "b/c=" << (double)b / c << std::endl;
	cout << "b%c=" << b % c << std::endl;
}
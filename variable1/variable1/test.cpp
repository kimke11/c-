#include <iostream>

int test() {
	using namespace std;
	int age = 21;
	int* ptr;
	cout << age << endl;
	ptr = &age;
	*ptr = 22;
	cout << age << endl;


}

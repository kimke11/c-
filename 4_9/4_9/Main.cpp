#include <iostream>
using namespace std;


int main(){
	int import=1;
	int plus = 0;
	int minus = 0;
	int ten[6] = {0};
	int even = 0;
	int odd = 0;
	while(import != 0){
		cin >> import;
		if(import >= 0) {
			plus += 1;
		}
		else {
			minus += 1;
		}
		if (import >= 1 && import < 10/*1<=import<10 �� �Ұ���*/) {
			ten[0] += 1;
		}
		else if (import >= 10 && import < 20) {
			ten[1] += 1;
		}
		else if (import >= 20 && import < 30) {
			ten[2] += 1;
		}
		if (import > -10 && import <= -1) {
			ten[3] += 1;
		}
		else if (import > -20 && import <= -10) {
			ten[4] += 1;
		}
		else if (import > -30 && import <= -20) {
			ten[5] += 1;
		}
		if (import % 2) {
			odd += import;
		}
		else{
			even += import;
		}
	}
	cout << "����� ����: " << plus << endl;
	cout << "������ ����: " << minus << endl;
	cout << "1=<x<10�� ����: " << ten[0] << endl;
	cout << "10=<x<20�� ����: " << ten[1] << endl;
	cout << "20=<x<30�� ����: " << ten[2] << endl;
	cout << "-10=<x<-1�� ����: " << ten[3] << endl;
	cout << "-20=<x<-10�� ����: " << ten[4] << endl;
	cout << "-30=<x<-20�� ����: " << ten[5] << endl;
	cout << "¦���� ��: " << even << endl;
	cout << "Ȧ���� ��: " << odd << endl;
}

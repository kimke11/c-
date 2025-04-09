/*#include <iostream>
using namespace std;

int main() {
	int import = 0;
	cin >> import;
	int a = 1;
	do {
		cout<<import << " x " << a << " = "<< import*a<<endl;
		a += 1;
	} while (a < 10);

}*/
/*
#include <iostream>
using namespace std;

int main() {
	int import = 0;
	cin	>> import;
	if (import > 100 || import < 0) {
		cout << "´Ù½Ã" << endl;
		cin>>import;
	}
	else if (import >= 95 && import < 100) {
		cout << "A+" << endl;
	}
	else if (import >= 90 && import < 95) {
		cout << "A" << endl;
	}
	else if (import >= 85 && import < 90) {
		cout << "B+" << endl;
	}
	else if (import >= 80 && import < 85) {
		cout << "B" << endl;
	}
	else if (import >= 75 && import < 80) {
		cout << "C+" << endl;
	}
	else if (import >= 70 && import < 75) {
		cout << "C" << endl;
	}
	else if (import >= 65 && import < 70) {
		cout << "D+" << endl;
	}
	else if (import >= 60 && import < 65) {
		cout << "D" << endl;
	}
	else {
		cout << "F" << endl;
	}
	
}*/
/*
#include <iostream>
using namespace std;

int main() {
	int import = 0;
	cin >> import;
	if (import < 0) cout<< -import<<endl;
	else cout << import <<endl;
}*/
#include <iostream>
using namespace std;

int main() {
	int import[3] = {0};
	cin >> import[0]>>import[1]>>import [2];
	int a = import[0]-import[1];
	int b = import[1]-import[2];
	int c = import[0]-import[2];
	if (a > 0 && c > 0){
		cout << "ÃÖ´ñ°ªÀº"<<import[0]<<endl;
		if (b > 0) {
			cout << "ÃÖ¼Ú°ªÀº" << import[2] << endl;
		}
		else{ cout << "ÃÖ¼Ú°ªÀº" << import[1] << endl; }
	}
	else if (a < 0 && b > 0) {
		cout << "ÃÖ´ñ°ªÀº" << import[1] << endl;
		if (c > 0) {
			cout << "ÃÖ¼Ú°ªÀº" << import[0] << endl;
		}
		else { cout << "ÃÖ¼Ú°ªÀº" << import[2] << endl; }
	}
	else if (c < 0 && b < 0) {
		cout << "ÃÖ´ñ°ªÀº" << import[2] << endl;
		if (a > 0) {
			cout << "ÃÖ¼Ú°ªÀº" << import[0] << endl;
		}
		else { cout << "ÃÖ¼Ú°ªÀº" << import[1] << endl; }
	}
	else {
		cout << "µ¿ÀÏÇÑ °ªÀÌ Á¸ÀçÇÕ´Ï´Ù" << endl;
	}	
}
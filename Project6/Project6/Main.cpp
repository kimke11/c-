/* 0. include <iostream>
using namespace std;

int main(int argc, char const* argv[])
{
	int a = 10;
	{
		int a = 20;
		cout << "a(1): " << a << endl;// a �� 20�̶�� ���� �����Ƿ� a=20��� �Ѵ�
	}
	{
		int a = 30;
		cout << "a(2): " << a << endl;// a �� 30�̶�� ���� �����Ƿ� a=30��� �Ѵ�
	}
	{
		int a = 40;
		{
			cout << "a(3): " << a << endl;// a �� 40�̶�� �����ϰ� {}�ȿ� a�� ���� ������ a=40����Ѵ�
		}
		cout << "a(4): " << a << endl; // a�� 40�̶�� �������� a�� ���� ������ �ʾ����Ƿ� a=40�̴�
	}
	cout << "a(5): " << a << endl; // a�� �����ϴ� �ڵ���� ��� {}�ȿ� �ִµ� ���� �κ��� {}�ȿ� ���Ե��� �����Ƿ� ������ ����Ѵ�. {}�ۿ� ���ǵ� a ���� a = 10�� ��µȴ�.

	return 0;
}*/
/*1,2.#include <iostream>
using namespace std;


int main(int argc, char const* argv[])
{
	int input;
	cout << "������ �Է��Ͻÿ�: ";
	cin >> input;

	if (input <= 100) {
		cout << "100 ���� �����̴�" << endl;
	}
	if (input > 100) {
		cout << "100 �ʰ� �����̴�" << endl; //�̷��� �ٲٸ� 2���� if ���� ������ ��ġ�� �κ��� �����Ƿ� 2�� ��µ� ���� ���� ���� ��µȴ�
	}
	//cout << "100 �ʰ� �����̴�" << endl;

	return 0;
} //if ������ ������ �Է��� 100 �̻��� ���� if�� {}�� ��µ��� �ʾ� ���ϴ� ��� ��µ����� 100�̸��� ���ڴ� if�� ���ǿ� �±� ������ {}���� ������ ��µȴ� ������ if���� �ۿ� �ڵ���� ������ ��� �׳� ��µǹǷ� 2���� �ڵ尡 ��µȴ�*/
/*3. #include <iostream>
using namespace std;

int main(int argc, char const* argv[])
{
	int value;

	cout << "������ �Է��Ͻÿ�: ";
	cin >> value;

	if (value > 10) {
		cout << "�Է��� ���� " << value << endl;
		cout << "10���� ū �����̴�" << endl;
	}
	else {
		cout << "10���� ���� �����̴�" << endl;
	}

	return 0;
} // if, else��{}�� ���� �� �ȿ� ������ �´ٸ� ������ �ڵ尡 ����Ǵµ� {}�� ���� �ʰ� �׳� ����ξ����ϴ�. �� ������ ��Ű�� �ʾҴ�*/

/*4.#include <iostream>
using namespace std;

int main(int argc, char const* argv[])
{
	int value;

	cout << "������ �Է��Ͻÿ�: ";
	cin >> value;

	if (value % 2)
		cout << " Ȧ�� " << endl;
	else
		cout << " ¦�� " << endl;
	return 0;
} // if �� ���� ���ǽ��� �������� ���� ǥ���Ѵ�. �� ���ǽ��� �Է¹��� ���� 2�� ������ ������ ����� 0,1�� ���´�. ���ǽĿ����� 0��1�� �ο��������� 0=false, 1= true�̶�� �ν��ϹǷ� 2�� �������� 0�̳����� ¦���� if�� ���� �ڵ尡 ������� �ʰ� if ���ǽĿ� ���� ���� ���� ����ϴ� else�� �̵��� �޾� else���� �ڵ带 �����Ų��.*/
/*5.#include <iostream>
using namespace std;

int main(int argc, char const* argv[])
{
	int value;

	cout << "������ �Է��Ͻÿ�: ";
	cin >> value;

	if (value % 3 >0)
		cout << " 3�� ����� �ƴմϴ� " << endl;
	else
		cout << " 3�� ��� �Դϴ� " << endl;
	return 0;
}*/
/*6. #include <iostream>
using namespace std;

int main(int argc, char const* argv[])
{
	char ch;
	cout << "A, B, C ���� �� �ϳ��� �Է��Ͻÿ�:";
	cin >> ch;
	switch (ch) {
	case 'A':
		cout << "A�� �Է�" << endl;
		break;
	case 'B':
		cout << "B�� �Է�" << endl;
		break;
	case 'C':
		cout << "C�� �Է�" << endl;
		break;
	default:
		cout << "���ϴ� ���ڰ� �ƴϴ�" << endl;

	}

	return 0;
}*/
/*7.#include <iostream>
using namespace std;

int main(int argc, char const* argv[])
{
	char ch;
	cout << "A, B, C ���� �� �ϳ��� �Է��Ͻÿ�:";
	cin >> ch;
	switch (ch) {
	case 'A':
		cout << "A�� �Է�" << endl;
		break;
	case 'B':
		cout << "B�� �Է�" << endl;
		break;
	case 'C':
		cout << "C�� �Է�" << endl;
		break;
	case 'a':
		cout << "A�� �Է�" << endl;
		break;
	case 'b':
		cout << "B�� �Է�" << endl;
		break;
	case 'c':
		cout << "C�� �Է�" << endl;
		break;
	default:
		cout << "���ϴ� ���ڰ� �ƴϴ�" << endl;

	}

	return 0;
}*/

/* 8.#include <iostream>
using namespace std;

int main(int argc, char const* argv[])
{
	int value;
	cout << "1 ~ 3 ���� ������ �Է��Ͻÿ�: ";
	cin >> value;

	switch (value) {
	case 1:
		cout << "1�� �Է�" << endl;
		break;
	case 2:
		cout << "2�� �Է�" << endl;
		break;
	case 3:
		cout << "3�� �Է�" << endl;
		break;
	default:
		cout << "���ϴ� ���� �ƴϴ�" << endl;
	}

	return 0;
}//���� ������ �������ε� ������ ���ڿ��̿��� ������ ���ǿ� ���� �ʾ� ��� default�� �̵��� ����߽��ϴ�. �̿� ���ڿ��� �ƴ� ���������� �ٲ���ϴ�.*/

/* 9. #include <iostream>
using namespace std;

int main(int argc, char const* argv[])
{
	int input;
	do {
		cout << "������ �Է��Ͻÿ�: ";
		cin >> input;
		cout << "�Է°�: " << input << endl;
	} while (input != 0);

	return 0;
} //�ݺ��Ǵ� ������ ������ �Է��Ͻÿ�:, �Է°�: (�Է��� ��)�� �ݺ��Ǹ� Ƚ���� 0�� �Է��Ҷ����� ��� �ݺ��ɰ��̸� ���������� ���� 0�� �Է��Ͽ����� �Դϴ�.*/

/*10.#include <iostream>
using namespace std;

int main(int argc, char const* argv[])
{
	int count = 0, num;
	cout << "�ݺ� Ƚ���� �Է��Ͻÿ�: ";
	cin >> num;

	while (count < num-2) {
		cout << "repeat (" << count << ")" << endl;
		count++;
	}
	return 0;
}*/
/*11. #include <iostream>
using namespace std;

int main(int argc, char const* argv[])
{
	for (int i = 0; i < 10; i++) {
		if (i == 3 || i == 6) continue;
		cout << i << ", ";
	}
	cout << endl;
	return 0;
}//0,1,2,4,5,7,8,9 �� continue�� if ���� ������ �����ϰ� �����ϵ��� �ϴ� ���̹Ƿ� i �� 0���� ����ؼ� 1�� �߰� �ϸ� 0���� 9���� ��µǴ� �ڵ������� if�� 3, 6�� ���ǹ����� �����ϰ� contiune�� �����Ƿ� 3,6�� ������� �ʴ´�.*/
/*12.#include <iostream>
using namespace std;

int main(int argc, char const* argv[])
{
	for (int i = 0; i < 10; i++) {
		if (i == 3 || i == 6) break;
		cout << i << ", ";
	}
	cout << endl;
	return 0;
}//0,1,2 �� ��� �ɰ��̴� break�� �ݺ����� �����ϴ°��� �ߴܽ�Ű�� ��ɾ�� 3�� �Ǿ����� �ݺ����� �ߴܽ�Ű�Ƿ� 1,2 �� ��µȴ� */
/*13. #include <iostream>
using namespace std;

int main(int argc, char const* argv[])
{
	for (int i = 0; i < 10; i++) {
		cout << i%4 << ", ";
	}
	cout << endl;

	return 0;
}*/
/* 14.#include <iostream>
using namespace std;

int main(int argc, char const* argv[])
{

	int sum;
	sum = 1 + 2 + 3 + 4 + 5 + 6 + 7 + 8 + 9 + 10;  // 1 ~ 10 ������ ���� ���ϱ� 

	cout << "(1): 1+2+3+4+5+6+7+8+9+10 = " << sum << endl;

	sum = 0;
	for (int i = 1; i <= 10; i++) {
		sum = sum + i;
	}
	cout << "(2): 1+2+3+4+5+6+7+8+9+10 = " << sum << endl;

	return 0;
}*/

/*15.#include <iostream>
using namespace std;

int main(int argc, char const* argv[])
{

	int product;
	product = 1 * 2 * 3 * 4 * 5 * 6 * 7 * 8 * 9 * 10;  // 1 ~ 10 ������ ���� ���ϱ� 

	cout << "(1): 1*2*3*4*5*6*7*8*9*10 = " << product << endl;

	product = 1;
	for (int i = 1; i <= 10; i++) {
		product = product * i;
	}
	cout << "(2): 1*2*3*4*5*6*7*8*9*10 = " << product << endl;

	return 0;
}*/

#include<iostream>
#include<string> //string Ŭ������ ����ϱ� ���� ��� ����
using namespace std;

int main() {
	int num1, num2; // ������ ���� num1,num2
	char oper[10]; // ���ڿ� ���� oper
	while (1) { // ���� �ݺ�
		cout << "? ";
		cin >> num1 >>oper >> num2; // �Է¹ޱ�
		cout << num1 <<" " << oper <<" " << num2 << " = ";
		if (strcmp(oper, "+") == 0) // if������ �ش� �����ڰ� ������ ������
			cout << num1 + num2 << endl;
		else if (strcmp(oper, "-") == 0)
			cout << num1 - num2 << endl;
		else if (strcmp(oper, "*") == 0)
			cout << num1 * num2 << endl;
		else if (strcmp(oper, "/") == 0)
			cout << num1 / num2 << endl;
		else if (strcmp(oper, "%") == 0)
			cout << num1 % num2 << endl;
		else
			cout << "�ٽ� �Է����ּ���!!";

	}
}

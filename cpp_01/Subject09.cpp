#include<iostream>
#include<string>  // string Ŭ������ ����ϱ� ���� ��� ����
using namespace std;// std �̸� ������ ����� ��� �̸��� std:: ����

// 09. �̸�,�ּ�,���̸� �Է¹޾� �ٽ� ����ϴ� ���α׷��� �ۼ��϶�. ���� ���ô� ������ ����.


int main() {
	string name; // ���ڿ� name
	cout << "�̸���?";
	getline(cin, name); // ��ĭ�� �����ϴ� �̸� ���ڿ� �Է� ����
	
	string address; // ���ڿ� address
	cout << "�ּҴ�?";
	getline(cin, address); // ��ĭ�� �����ϴ� �ּ� ���ڿ� �Է� ����

	int age; // ������ age
	cout << "���̴�?";
	cin >> age; // ���� �Է� �ޱ�

	cout << name << "," << address << "," << age << "��";


}
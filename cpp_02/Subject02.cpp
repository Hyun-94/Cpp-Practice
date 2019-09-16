#include<iostream>
#include<string> // stoi()�Լ��� �̿��ϱ� ���� �������

using namespace std;

class Date {
private:
	int year; // ��
	int month; // ��
	int date; // ��
	string ymd;
public:
	Date(int y, int m, int d); // �Ű� ������ ���� ������
	Date(string ymd); // �Ű� ������ ���� ������
	int getYear();
	int getMonth();
	int getDay();
	void show();
};

Date::Date(int y, int m, int d) { // ���� �Ű� ������ ���� ������
	year = y; month = m; date = d;
}

Date::Date(string ymd) { // ���ڿ� �Ű� ������ ���� ������
	int num1, num2 = 0; // ù��° ��ġ, �ι�° ��ġ�� ��Ÿ���� ���� ���� num1,num2
	int count =0 ; 
	for (int i = 0; i < ymd.length(); i++) {
		if (ymd[i] == '/' && count == 0) { // ymd[i]��° ���ڿ��� '/'�̰� ī��Ʈ�� 0�̸�
			num1 = i; // ù��° �������� ��ġ�� num1��
			count++; // ī��Ʈ ���� 
		}
		else if (ymd[i] == '/' && count == 1) {// ymd[i]��° ���ڿ��� '/'�̰� ī��Ʈ�� 0�̸�
			num2 = i; // �ι�° �������� ��ġ�� num2��
			count++; // ī��Ʈ ���� 
		}
	}

	year = stoi(ymd.substr(0, num1)); // 0~num1���� �����ø� �߶� ����ȭ
	month = stoi(ymd.substr(num1 + 1, num2 - num1 - 1)); // num1 ������ +1 ���� num2-num1-1��°���� ����ȭ
	date = stoi(ymd.substr(num2 + 1, ymd.length())); // num2��° ������ +1 ���� ������ ����ȭ
}
void Date::show() {
	cout << year << "��" << month << "��" << date << "��" << endl;
}

int Date::getYear() { // ���� ��Ʈ������ ����
	return year;
}

int Date::getMonth() { // ���� ��Ʈ������ ����
	return month;
}

int Date::getDay() { // ���� ��Ʈ������ ����
	return date;
}

int main() {
	Date birth(2014, 3, 20); // 2014�� 3�� 20��
	Date independenceDay("1945/8/15"); // 1945�� 8�� 15��
	independenceDay.show();
	cout << birth.getYear() << "," << birth.getMonth() << "," << birth.getDay() << endl;
}
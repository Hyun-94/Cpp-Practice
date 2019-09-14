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

Date::Date(int y, int m, int d) {
	year = y; month = m; date = d;
}

Date::Date(string ymd) {
	ymd = ymd; // 1945/8/15
}

void Date::show() {
	cout << ymd;
	
}
int Date::getYear() {
	return year;
}

int Date::getMonth() {
	return month;
}

int Date::getDay() {
	return date;
}

int main() {
	Date birth(2014, 3, 20); // 2014�� 3�� 20��
	Date independenceDay("1945/8/15"); // 1945�� 8�� 15��
	independenceDay.show();
	cout << birth.getYear() << "," << birth.getMonth() << "," << birth.getDay() << endl;
}
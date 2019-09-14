#include<iostream>
#include<string> // stoi()함수를 이용하기 위한 헤더파일
using namespace std;

class Date {
private:
	int year; // 연
	int month; // 월
	int date; // 일
	string ymd;
public:
	Date(int y, int m, int d); // 매개 변수를 가진 생성자
	Date(string ymd); // 매개 변수를 가진 생성자
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
	Date birth(2014, 3, 20); // 2014년 3월 20일
	Date independenceDay("1945/8/15"); // 1945년 8월 15일
	independenceDay.show();
	cout << birth.getYear() << "," << birth.getMonth() << "," << birth.getDay() << endl;
}
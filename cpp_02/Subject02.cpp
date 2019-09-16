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

Date::Date(int y, int m, int d) { // 정수 매개 변수를 가진 생성자
	year = y; month = m; date = d;
}

Date::Date(string ymd) { // 문자열 매개 변수를 가진 생성자
	int num1, num2 = 0; // 첫번째 위치, 두번째 위치를 나타내기 위한 변수 num1,num2
	int count =0 ; 
	for (int i = 0; i < ymd.length(); i++) {
		if (ymd[i] == '/' && count == 0) { // ymd[i]번째 문자열이 '/'이고 카운트가 0이면
			num1 = i; // 첫번째 슬래시의 위치를 num1에
			count++; // 카운트 증가 
		}
		else if (ymd[i] == '/' && count == 1) {// ymd[i]번째 문자열이 '/'이고 카운트가 0이면
			num2 = i; // 두번째 슬래쉬의 위치를 num2에
			count++; // 카운트 증가 
		}
	}

	year = stoi(ymd.substr(0, num1)); // 0~num1까지 슬래시를 잘라서 정수화
	month = stoi(ymd.substr(num1 + 1, num2 - num1 - 1)); // num1 슬래시 +1 부터 num2-num1-1번째까지 정수화
	date = stoi(ymd.substr(num2 + 1, ymd.length())); // num2번째 슬래시 +1 부터 끝까지 정수화
}
void Date::show() {
	cout << year << "년" << month << "월" << date << "일" << endl;
}

int Date::getYear() { // 연을 인트형으로 리턴
	return year;
}

int Date::getMonth() { // 월을 인트형으로 리턴
	return month;
}

int Date::getDay() { // 일을 인트형으로 리턴
	return date;
}

int main() {
	Date birth(2014, 3, 20); // 2014년 3월 20일
	Date independenceDay("1945/8/15"); // 1945년 8월 15일
	independenceDay.show();
	cout << birth.getYear() << "," << birth.getMonth() << "," << birth.getDay() << endl;
}
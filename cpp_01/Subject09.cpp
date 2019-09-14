#include<iostream>
#include<string>  // string 클래스를 사용하기 위한 헤더 파일
using namespace std;// std 이름 공간에 선언된 모든 이름에 std:: 생략

// 09. 이름,주소,나이를 입력받아 다시 출력하는 프로그램을 작성하라. 실행 예시는 다음과 같다.


int main() {
	string name; // 문자열 name
	cout << "이름은?";
	getline(cin, name); // 빈칸을 포함하는 이름 문자열 입력 가능
	
	string address; // 문자열 address
	cout << "주소는?";
	getline(cin, address); // 빈칸을 포함하는 주소 문자열 입력 가능

	int age; // 정수형 age
	cout << "나이는?";
	cin >> age; // 나이 입력 받기

	cout << name << "," << address << "," << age << "세";


}
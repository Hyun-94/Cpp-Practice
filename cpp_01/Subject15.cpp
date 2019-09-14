#include<iostream>
#include<string> //string 클래스를 사용하기 위한 헤더 파일
using namespace std;

int main() {
	int num1, num2; // 정수형 변수 num1,num2
	char oper[10]; // 문자열 변수 oper
	while (1) { // 무한 반복
		cout << "? ";
		cin >> num1 >>oper >> num2; // 입력받기
		cout << num1 <<" " << oper <<" " << num2 << " = ";
		if (strcmp(oper, "+") == 0) // if문으로 해당 연산자가 나오면 선택함
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
			cout << "다시 입력해주세요!!";

	}
}

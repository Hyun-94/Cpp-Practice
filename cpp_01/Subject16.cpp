#include<iostream>
#include<string> //string 클래스를 사용하기 위한 헤더 파일
using namespace std;

int main() {
	cout << "영문 텍스트를 입력하세요. 히스토그램을 그립니다." << endl;
	cout << "텍스트의 끝은 ; 입니다. 10000개까지 가능합니다." << endl;
	char words[10000]; // 10000개의 문자를 저장할 문자 배열 words
	int i = 0; // 입력할 알파벳의 총 개수 i
	while (true) { //while문이 돌아가는 동안 알파벳을 입력한다.
		cin >> words[i];
		if (words[i] == ';') { // ;를 입력할 경우 해당 반복문을 종료한다.
			break;
		}
		i++;
	}

	cout << "총 알파벳 수 " << i << endl;

	int cnt = 0, sum = 0, w = 97; //cnt은 words의 인덱스, sum은 각각의 알파벳의 갯수를 구할 변수, w은 알파벳의 아스키 코드를 나타냄
	while (w <= 123) { //a~z 까지의 아스키 코드로 a~z의 각각의 갯수를 구하기 위해 a~z까지의 갯수를 구함
		cout << char(w);

		while (cnt <= i) { //안쪽 while문으로 총 알파벳 갯수만큼 돌아가도록 함
			if (words[cnt] == char(w)) { // 해당 문자 배열이 현재 아스키 코드에 해당하는 알파벳과 같을 경우 sum은 1 증가
				sum++;
			}
			cnt++; // 다음 인덱스에 해당하는 문자 배열을 만들어줌
		}
		cout << "(" << sum << ")   : ";
		for (int c = 0; c < sum; c++) { // 해당 알파벳 갯수 만큼 *을 출력함
			cout << "*";
		}
		cout << endl; // 출력
		w++; //다음 알파벳 갯수를 구하기 위해 아스키 코드에 해당하는 w를 1 증가, 인덱스인 cnt와 알파벳 갯수인 sum을 0으로 초기화
		cnt = 0;
		sum = 0;
	}
}
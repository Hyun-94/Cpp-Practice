#include <iostream>
#include <string>
using namespace std;

class Player { // 선수를 표현한 클래스
	string name;
public:
	Player() {};
	void setName(string name) { this->name = name; }
	string getName() { return name; }
};

class WordGame { // 끝말잇기 게임 전체를 운영하는 클래스 
	int playernumber;
	string before; // 초기값
	string later;
	string name;
public:
	Player *p;
	WordGame() { before = "아버지"; }
	~WordGame() { delete[]p; }
	void playgame();
};

void WordGame::playgame() {
	int index = 0;
	cout << "게임에 참가하는 인원은 몇명입니까?";
	cin >> playernumber;
	p = new Player[playernumber]; // playernumber 수 만큼 동적 객체 배열 생성
	for (int i = 0; i < playernumber; i++) {
		cout << "참가자의 이름을 입력하세요. 빈칸없이>>";
		cin >> name;
		p[i].setName(name);
	}
	cout << "시작하는 단어는 " << before << "입니다." << endl;
	while (1) {
		if (index == playernumber) {
			index = 0;
		}
		cout << p[index].getName() << ">>";
		cin >> later;
		if (before.at(4) == later.at(0) && before.at(5) == later.at(1)) { // 한글은 2바이트 코드로 저장되므로 두 바이트를 함께 비교해야한다
			before = later; // 조건을 만족하면
			index++; // 인덱스 증가 
			continue;
		}
		else {
			cout << p[index].getName() << "이(가) 졌습니다.";
			break;
		}
	}
}

int main() {
	cout << "끝말 잇기 게임을 시작합니다" << endl;
	WordGame start; // 객체 생성
	start.playgame();
}



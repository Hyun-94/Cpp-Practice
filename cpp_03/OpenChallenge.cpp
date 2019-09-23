#include <iostream>
#include <string>
using namespace std;

class Player { // ������ ǥ���� Ŭ����
	string name;
public:
	Player() {};
	void setName(string name) { this->name = name; }
	string getName() { return name; }
};

class WordGame { // �����ձ� ���� ��ü�� ��ϴ� Ŭ���� 
	int playernumber;
	string before; // �ʱⰪ
	string later;
	string name;
public:
	Player *p;
	WordGame() { before = "�ƹ���"; }
	~WordGame() { delete[]p; }
	void playgame();
};

void WordGame::playgame() {
	int index = 0;
	cout << "���ӿ� �����ϴ� �ο��� ����Դϱ�?";
	cin >> playernumber;
	p = new Player[playernumber]; // playernumber �� ��ŭ ���� ��ü �迭 ����
	for (int i = 0; i < playernumber; i++) {
		cout << "�������� �̸��� �Է��ϼ���. ��ĭ����>>";
		cin >> name;
		p[i].setName(name);
	}
	cout << "�����ϴ� �ܾ�� " << before << "�Դϴ�." << endl;
	while (1) {
		if (index == playernumber) {
			index = 0;
		}
		cout << p[index].getName() << ">>";
		cin >> later;
		if (before.at(4) == later.at(0) && before.at(5) == later.at(1)) { // �ѱ��� 2����Ʈ �ڵ�� ����ǹǷ� �� ����Ʈ�� �Բ� ���ؾ��Ѵ�
			before = later; // ������ �����ϸ�
			index++; // �ε��� ���� 
			continue;
		}
		else {
			cout << p[index].getName() << "��(��) �����ϴ�.";
			break;
		}
	}
}

int main() {
	cout << "���� �ձ� ������ �����մϴ�" << endl;
	WordGame start; // ��ü ����
	start.playgame();
}



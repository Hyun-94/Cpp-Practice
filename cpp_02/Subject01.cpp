#include<iostream>
using namespace std;

class Tower {
private:
	int height; // ������ ���� height
public:
	Tower(); // �⺻ ������
	Tower(int h); // �Ű� ���� �ִ� ������
	int getHeight(); // ���̸� �����ϴ� �Լ� 
};

Tower::Tower() :Tower(1) {} // ���� ������

Tower::Tower(int h) { // Ÿ�� ������
	height = h;
}

int Tower::getHeight() { // getHeight Ŭ���� ����
	return height;
}

int main() {
	Tower myTower; // 1���� , �Ű� ���� ���� ������ ȣ��
	Tower seoulTower(100); // 100����, �Ű� ���� �ִ� ������ ȣ��
	cout << "���̴� " << myTower.getHeight() << "����" << endl;
	cout << "���̴� " << seoulTower.getHeight() << "����" << endl;
}
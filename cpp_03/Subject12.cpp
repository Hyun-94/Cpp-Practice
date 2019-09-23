#include<iostream>
#include<string>
using namespace std;

class Circle {
	int radius; // ���� ������ ��
	string name; // ���� �̸�
public:
	void setCircle(string anme, int radius);
	double getArea();
	string getName();
};

void Circle::setCircle(string name, int radius) {
	this->name = name;
	this->radius = radius;
}

double Circle::getArea() {
	return  3.14*radius*radius;
}

string Circle::getName() {
	return  name;
}

class CircleManager {
	Circle *p;  // Circle �迭�� ���� ������
	int size;
public:
	CircleManager(int size); // size ũ���� �迭�� ���� ����. ����ڷκ��� �Է� �Ϸ�
	~CircleManager();
	void searchByName(); // ����ڷκ��� ���� �̸��� �Է¹޾� ���� ���
	void searchByArea(); // ����ڷκ��� ������ �Է¹޾� �������� ū �� �̸� ���
};

CircleManager::CircleManager(int size) { // ������ ������ �ִ� ������ �Լ� 
	int radius;
	string name;
	this->size = size;

	p = new Circle[size]; // size ũ���� �����迭 ����
	for (int i = 0; i < size; i++) {
		cout << "��" << i + 1 << "�� �̸��� ������ >> ";
		cin >> name >> radius;
		p[i].setCircle(name, radius);
	}
}

CircleManager::~CircleManager() {
	delete[] p;
}

void CircleManager::searchByName() { // �˻��ϰ��� ���ϴ� �̸��� ������ ã�� �޼ҵ�
	string name;
	cout << "�˻��ϰ��� �ϴ� ���� �̸� >>";
	cin >> name;
	for (int i = 0; i < size; i++) {
		if (name == p[i].getName()) {
			cout << p[i].getName() << "�� ������ " << p[i].getArea() << endl;
			break;
		}
	}
	
}

void CircleManager:: searchByArea() { // �Է��� �������� ū ���� ã�� �޼ҵ�
	double area;
	cout << "�ּ� ������ ������ �Է��ϼ��� >> ";
	cin >> area;
	cout << area << "���� ū ���� �˻��մϴ�." << endl;

	for (int i = 0; i < size; i++) {
		if (area <= p[i].getArea()) {
			cout << p[i].getName() << "�� ������" << p[i].getArea() << ",";
		}
	}
	cout << endl;
}

int main() {
	int n, radius;
	string name;
	cout << "���� ����>>";
	cin >> n;
	CircleManager *c = new CircleManager(n); // n ũ���� ���� �迭�� ���� ����

	c->searchByName();
	c->searchByArea();

	return 0;
}
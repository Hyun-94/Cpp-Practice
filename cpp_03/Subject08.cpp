#include <iostream>
#define PI 3.141592
using namespace std;

class Circle {
	int radius;
public:
	Circle() {}
	void setRadius(int radius) { this->radius = radius; }
	double getArea() { return PI * radius*radius; }
};

int main() {
	int radius, count, n = 0;
	cout << "���� ���� >> ";
	cin >> n; // �Է¹ޱ�
	Circle *c = new Circle[n]; // ũ�Ⱑ n�� ���� ��ü �迭 ����  
	for (int i = 0; i < n; i++) { // n���� �ݺ�
		cout << "�� " << i + 1 << "�� ������ >> ";
		cin >> radius;
		c[i].setRadius(radius); // i��° �迭�� ������ ����
		if (c[i].getArea() > 100) { // i��° ������ 100���� ũ��
			count++; // ī��Ʈ ����
		}
	}
	cout << "������ 100���� ū ���� " << count << "�� �Դϴ�" << endl;
	delete[] c; // ��ü �迭 �Ҹ�
}
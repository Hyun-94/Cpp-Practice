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
	int radius, count = 0;
	Circle c[3];
	for (int i = 0; i < 3; i++) {
		cout << "�� " << i + 1 << "�� ������ >> ";
		cin >> radius;
		c[i].setRadius(radius);
		if (c[i].getArea() > 100) {
			count++;
		}
	}
	cout << "������ 100���� ū ���� " << count << "�� �Դϴ�" << endl;
}
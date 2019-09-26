#include<iostream>
using namespace std;

class Circle {
private:
	int radius;
public:
	Circle() { radius = 1; } // ������ 
	Circle(int r) {this->radius = r; } // �Ű������� ���� ������
	int getRadius() { return radius; }
	void setRadius(int radius) { this->radius = radius; }
};

void swap(Circle &a,Circle &b) { // Circle ���� 2���� �Ű� ������ �Է¹����� �������� �ٲ��ִ� �Լ�
	int tmp;
	tmp = a.getRadius();
	a.setRadius(b.getRadius());
	b.setRadius(tmp);

}

int main() {
	Circle a; // radius�� 1�� ��ü ����
	Circle b(10); // radius�� 10�� ��ü ����
	cout << a.getRadius() << " "<< b.getRadius() << endl; // swap�� ��ü�� ��������
	swap(a, b);
	cout << a.getRadius() <<" "<< b.getRadius() << endl; // swap���� ��ü�� �����
	
}
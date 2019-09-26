#include<iostream>
using namespace std;

class Circle {
private:
	int radius;
public:
	Circle() { radius = 1; } // 생성자 
	Circle(int r) {this->radius = r; } // 매개변수를 가진 생성자
	int getRadius() { return radius; }
	void setRadius(int radius) { this->radius = radius; }
};

void swap(Circle &a,Circle &b) { // Circle 변수 2개를 매개 변수로 입력받으면 반지름을 바꿔주는 함수
	int tmp;
	tmp = a.getRadius();
	a.setRadius(b.getRadius());
	b.setRadius(tmp);

}

int main() {
	Circle a; // radius가 1인 객체 생성
	Circle b(10); // radius가 10인 객체 생성
	cout << a.getRadius() << " "<< b.getRadius() << endl; // swap전 객체의 반지름들
	swap(a, b);
	cout << a.getRadius() <<" "<< b.getRadius() << endl; // swap후의 객체의 반즈름들
	
}
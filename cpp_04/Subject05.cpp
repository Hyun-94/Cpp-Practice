#include<iostream>
using namespace std;

class Circle {
	int radius;
public:
	Circle(int r) { radius = r; }
	int getRadius() { return radius; }
	void setRadius(int r) { radius = r; }
	void show() { cout << "반지름이 " << radius << "인 원" << endl; }
};

void increaseBy(Circle &a, Circle &b) { // '값에 의한 호출'-> main()스택에 10,5 는 그대로 유지  
	int r = a.getRadius() + b.getRadius(); // '참조에 의한 호출'-> 참조 매개 변수로 이루어진 모든 연산은 원본 객체에 대한 연산
	a.setRadius(r);
}

int main() {
	Circle x(10), y(5);
	increaseBy(x, y); // x의 반지름이 15인 원을 만들고자 한다.
	x.show(); // "반지름이 15인 원"을 출력한다.
}
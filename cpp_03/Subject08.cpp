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
	cout << "원의 개수 >> ";
	cin >> n; // 입력받기
	Circle *c = new Circle[n]; // 크기가 n인 동적 객체 배열 생성  
	for (int i = 0; i < n; i++) { // n번의 반복
		cout << "원 " << i + 1 << "의 반지름 >> ";
		cin >> radius;
		c[i].setRadius(radius); // i번째 배열에 반지름 설정
		if (c[i].getArea() > 100) { // i번째 면적이 100보다 크면
			count++; // 카운트 증가
		}
	}
	cout << "면적이 100보다 큰 원은 " << count << "개 입니다" << endl;
	delete[] c; // 객체 배열 소멸
}
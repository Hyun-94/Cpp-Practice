#include<iostream>
using namespace std;

class Tower {
private:
	int height; // 정수형 변수 height
public:
	Tower(); // 기본 생성자
	Tower(int h); // 매개 변수 있는 생성자
	int getHeight(); // 높이를 리턴하는 함수 
};

Tower::Tower() :Tower(1) {} // 위임 생성자

Tower::Tower(int h) { // 타겟 생성자
	height = h;
}

int Tower::getHeight() { // getHeight 클래스 구현
	return height;
}

int main() {
	Tower myTower; // 1미터 , 매개 변수 없는 생성자 호출
	Tower seoulTower(100); // 100미터, 매개 변수 있는 생성자 호출
	cout << "높이는 " << myTower.getHeight() << "미터" << endl;
	cout << "높이는 " << seoulTower.getHeight() << "미터" << endl;
}
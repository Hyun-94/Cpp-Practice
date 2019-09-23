#include<iostream>
#include<string>
using namespace std;

class Circle {
	int radius; // 원의 반지름 값
	string name; // 원의 이름
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
	Circle *p;  // Circle 배열에 대한 포인터
	int size;
public:
	CircleManager(int size); // size 크기의 배열을 동적 생성. 사용자로부터 입력 완료
	~CircleManager();
	void searchByName(); // 사용자로부터 원의 이름을 입력받아 면적 출력
	void searchByArea(); // 사용자로부터 면적을 입력받아 면적보다 큰 원 이름 출력
};

CircleManager::CircleManager(int size) { // 변수를 가지고 있는 생성자 함수 
	int radius;
	string name;
	this->size = size;

	p = new Circle[size]; // size 크기의 동적배열 생성
	for (int i = 0; i < size; i++) {
		cout << "원" << i + 1 << "의 이름과 반지름 >> ";
		cin >> name >> radius;
		p[i].setCircle(name, radius);
	}
}

CircleManager::~CircleManager() {
	delete[] p;
}

void CircleManager::searchByName() { // 검색하고자 원하는 이름과 면적을 찾는 메소드
	string name;
	cout << "검색하고자 하는 원의 이름 >>";
	cin >> name;
	for (int i = 0; i < size; i++) {
		if (name == p[i].getName()) {
			cout << p[i].getName() << "의 면적은 " << p[i].getArea() << endl;
			break;
		}
	}
	
}

void CircleManager:: searchByArea() { // 입력한 정수보다 큰 원을 찾는 메소드
	double area;
	cout << "최소 면적을 정수로 입력하세요 >> ";
	cin >> area;
	cout << area << "보다 큰 원을 검색합니다." << endl;

	for (int i = 0; i < size; i++) {
		if (area <= p[i].getArea()) {
			cout << p[i].getName() << "의 면적은" << p[i].getArea() << ",";
		}
	}
	cout << endl;
}

int main() {
	int n, radius;
	string name;
	cout << "원의 개수>>";
	cin >> n;
	CircleManager *c = new CircleManager(n); // n 크기의 동적 배열을 동적 생성

	c->searchByName();
	c->searchByArea();

	return 0;
}
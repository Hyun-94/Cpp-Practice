#include<iostream>
#include<string>
using namespace std;

class Person { // 디폴트 매개 변수 연습
	int id;
	double weight;
	string name;
public:
	Person(int id = 1, string name = "Grace", double weight = 20.5); // 디폴트 매개 변수 선언
	void show() { cout << id << ' ' << weight << ' ' << name << endl; }
};

Person::Person(int id , string name , double weight ) { // 디폴트 매개 변수 함수 구현
	this->id = id;
	this->name=name;
	this->weight = weight;
}
int main() {
	Person grace, ashley(2, "Ashley"), helen(3, "Helen", 32.5);
	grace.show();
	ashley.show();
	helen.show();
}
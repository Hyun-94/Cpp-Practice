#ifndef EXP_H
#define EXP_H

class Exp {
private:
	int base, exp; // 베이스와 지수
public:
	Exp(); // 생성자 함수
	Exp(int a); // 생성자 함수
	Exp(int a, int b); //생성자 함수

	int getValue(); // 지수와 정수를 계산하는 함수 선언
	int getBase(); // 베이스값을 나타내는 함수 선언
	int getExp(); // 지수를 나타내는 함수 선언
	bool equals(Exp b); // 이 객체와 객체 b의 값이 같은지 판별하는 함수 선언
};

#endif
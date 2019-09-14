#include "Exp.h"

Exp::Exp() { // 매개 변수가 없는 생성자
	base= 1; exp = 1;
}

Exp::Exp(int a) { // 매개 변수가 베이스만 있는 생성자
	base = a; exp = 1;
}

Exp::Exp(int a, int b) { // 매개 변수가 베이스와 지수가 있는 생성자
	base = a; exp = b;
}

int Exp::getValue() { // 지수를 정수로 계산하여 리턴
	int result = base;
	for (int i = 1; i < exp; i++) // 지수만큼 베이스를 곱해주기위한 식
		result *= base;
	return result;
}

int Exp::getBase() { // 베이스값 리턴
	return base;
}

int Exp::getExp() { // 지수 값 리턴
	return exp;
}

bool Exp::equals(Exp b) { // 이 객체와 객체b의 값이 같은지 판별하여 리턴
	if (getValue() == b.getValue())
		return true;
	else
		return false;
}
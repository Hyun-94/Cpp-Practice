#include "Exp.h"

Exp::Exp() { // �Ű� ������ ���� ������
	base= 1; exp = 1;
}

Exp::Exp(int a) { // �Ű� ������ ���̽��� �ִ� ������
	base = a; exp = 1;
}

Exp::Exp(int a, int b) { // �Ű� ������ ���̽��� ������ �ִ� ������
	base = a; exp = b;
}

int Exp::getValue() { // ������ ������ ����Ͽ� ����
	int result = base;
	for (int i = 1; i < exp; i++) // ������ŭ ���̽��� �����ֱ����� ��
		result *= base;
	return result;
}

int Exp::getBase() { // ���̽��� ����
	return base;
}

int Exp::getExp() { // ���� �� ����
	return exp;
}

bool Exp::equals(Exp b) { // �� ��ü�� ��üb�� ���� ������ �Ǻ��Ͽ� ����
	if (getValue() == b.getValue())
		return true;
	else
		return false;
}
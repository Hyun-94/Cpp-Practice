#ifndef EXP_H
#define EXP_H

class Exp {
private:
	int base, exp; // ���̽��� ����
public:
	Exp(); // ������ �Լ�
	Exp(int a); // ������ �Լ�
	Exp(int a, int b); //������ �Լ�

	int getValue(); // ������ ������ ����ϴ� �Լ� ����
	int getBase(); // ���̽����� ��Ÿ���� �Լ� ����
	int getExp(); // ������ ��Ÿ���� �Լ� ����
	bool equals(Exp b); // �� ��ü�� ��ü b�� ���� ������ �Ǻ��ϴ� �Լ� ����
};

#endif
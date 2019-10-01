#include<iostream>
using namespace std; // 디폴트 매개 변수 연습

int add(int a[],int size,int b[] = NULL) { // 매개 변수 b의 초기값 NULL
	int sum = 0;
	for (int i = 0; i < size; i++) {
		sum += a[i];
		if (b != NULL) // NULL이 아닐 시 실행
			sum += b[i];
	}
	return sum;
}

int main() {
	int a[] = { 1,2,3,4,5 };
	int b[] = { 6,7,8,9,10 };
	int c = add(a, 5);
	int d = add(a, 5, b);
	cout << c << endl;
	cout << d << endl;
}
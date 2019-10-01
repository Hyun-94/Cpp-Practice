#include<iostream>
using namespace std;

int add(int a[], int size) {  // 매개 변수 2개 가진 add 함수
	int sum = 0;
	for (int i = 0; i < size;i++)
		sum += a[i];
	return sum;
}

int add(int a[], int size, int c[]) { // 매개 변수 3개 가진 add 함수
	int sum = 0;
	for (int i = 0; i < size; i++) {
		sum += a[i] + c[i];  // a,b 배열의 합
	}
	return sum;
}

int main() {
	int a[] = { 1,2,3,4,5 };
	int b[] = { 6,7,8,9,10 };
	int c = add(a, 5); // 배열 a의 정수를 모두 더한 값 리턴
	int d = add(a, 5, b); // 배열 a와 b의 정수를 모두 더한 값 리턴
	cout << c << endl; // 15출력
	cout << d << endl; // 55출력
}
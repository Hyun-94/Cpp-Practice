#include<iostream>
using namespace std;

class Sample {
	int *p;
	int size;
public:
	Sample(int n) {// 생성자
		size = n; p = new int[n]; // n개 정수 배열의 동적 생성
	}
	void read(); // 동적 할당받은 정수 배열 p에 사용자로부터 정수를 입력 받음
	void write(); // 정수 배열을 화면에 출력
	int big(); // 정수 배열에서 가장 큰 수 리턴
	~Sample(); // 소멸자
};

void::Sample::read() { // 정수 배열 입력하기
	for (int i = 0; i < size; i++) {
		cin >> p[i];
	}
}
void::Sample::write(){ // 입력받은 정수 배열을 화면에 사이즈 크기만큼 출력
	for (int i = 0; i < size; i++)
		cout << p[i] << " ";
	cout << endl;
}
int::Sample::big() {
	int bigger = p[0]; // 첫번째 정수를 기준
	for (int i = 1; i < size; i++) { // size 크기만큼 반복
		if (bigger < p[i]) // bigger보다 그 다음번째 정수가 크면
			bigger = p[i]; // bigger은 다음번째 정수
	}
	return bigger;
}
Sample::~Sample() { // 배열의 메모리 반환 
	delete [] p;
}

int main() {
	Sample s(10); // 10개의 정수 배열을 가진 Sample 객체 생성
	s.read(); // 키보드에서 정수 배열 읽기
	s.write(); // 정수배열 출력
	cout << "가장 큰 수는 " << s.big() << endl;
}
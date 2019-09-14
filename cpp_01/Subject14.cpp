#include<iostream>
using namespace std;

int main() {
	char coffee[100]; // 커피의 종류를 받을 문자열 변수 coffee
	int num; // 커피의 잔수를 받을 변수 num
	int sum = 0; // 판매 총 액수를 위한 변수 sum

	cout << "에스프레소 2000원, 아메리카노 2300원, 카푸치노 2500원입니다." << endl;
	while (sum < 20000) { // 전체 판매 가격이 20000원 미만이면 반복문 작동 , 20000원 이상이면 탈출
		cout << "주문>>"; 
		cin >> coffee >> num; // 커피 이름과 잔 수를 입력받기
		if (strcmp(coffee, "에스프레소") == 0) {  // coffee의 문자열이 에스프레소이면 0을 반환
			cout << num * 2000 << "원입니다. 맛있게 드세요" << endl;
			sum += num * 2000; // 잔수*가격을 sum에 넣음
		}
		else if (strcmp(coffee, "아메리카노") == 0) { //  coffee의 문자열이 아메리카노면 0을 반환
			cout << num * 2300 << "원입니다. 맛있게 드세요" << endl;
			sum += num * 2300; // 잔수*가격을 sum에 넣음
		}
		else if (strcmp(coffee, "카푸치노") == 0) { // coffee의 문자열이 카푸치노이면 0을 반환
			cout << num * 2500 << "원입니다. 맛있게 드세요" << endl;
			sum += num * 2500; //잔수*가격을 sum에 넣음
		}
		else
			cout << "메뉴에 없는 커피입니다" << endl; // 해당되는 커피가 없으면 
	}

	cout << "오늘 " << sum << "원을 판매하여 카페를 닫습니다. 내일 봐요~~~"; // 전체 판매액 출력
}

#include<iostream>
#include<string>
using namespace std;
// 코드 다시 확인할 것

class Morse {
	string alphabet[26]; // 알파벳의 모스 부호 저장
	string digit[10]; // 모스의 숫자 부호 저장
	string slash, question, comma, period, plus, equal; // 특수 문자의 모스 부호 저장
public:
	Morse(); // alphabet[] ,digit[] 배열 및 특수 문자의 모스 부호 초기화
	void text2Morse(string text, string& morse); // 영문 텍스트를 모스 부호로 변환
	bool morse2Text(string morse, string& text); // 모스 부호를 영문 텍스트로 변환
};

Morse::Morse() { // 생성자 함수 배열에 모스 부호 초기화
	alphabet[0] = ".-"; alphabet[1] = "-..."; alphabet[2] = "-.-."; alphabet[3] = "-..";
	alphabet[4] = "."; alphabet[5] = "..-."; alphabet[6] = "--."; alphabet[7] = "....";
	alphabet[8] = ".."; alphabet[9] = ".---"; alphabet[10] = "-.-"; alphabet[11] = ".-..";
	alphabet[12] = "--"; alphabet[13] = "-."; alphabet[14] = "---"; alphabet[15] = ".--.";
	alphabet[16] = "--.-"; alphabet[17] = ".-."; alphabet[18] = "..."; alphabet[19] = "-";
	alphabet[20] = "..-"; alphabet[21] = "...-"; alphabet[22] = ".--"; alphabet[23] = "-..-";
	alphabet[24] = "-.--"; alphabet[25] = "--.."; digit[0] = "-----"; digit[1] = ".----";
	digit[2] = "..---"; digit[3] = "...--"; digit[4] = "....-"; digit[5] = ".....";
	digit[6] = "-...."; digit[7] = "--..."; digit[8] = "---.."; digit[9] = "----.";
	slash = "-..-."; question = "..--.."; comma = "--..--"; period = ".-.-.-";
	plus = ".-.-"; equal = "-...-";
}

void Morse::text2Morse(string text, string& morse) {
	for (int i = 0; i < text.size(); i++) {
		char c = text.at(i);
		if (c >= 65 && c <= 90) // 알파벳 대문자 아스키 코드
			c = tolower(c); // 소문자로 변경
		if (c >= 97 && c <= 122) { // 알파벳 소문자 아스키 코드
			morse = morse + alphabet[c - 97] + " ";
		}
		else if (c >= 48 && c <= 57) { // 숫자 아스키 코드
			morse = morse + digit[c - 48] + " ";
		}
		else {
			switch (c)
			{
			case '/':morse = morse + slash + " "; break;
			case '?':morse = morse + question + " "; break;
			case ',':morse = morse + comma + " "; break;
			case '.':morse = morse + period + " "; break;
			case '+':morse = morse + plus + " "; break;
			case '=':morse = morse + equal + " "; break;
			case ' ':morse += "  "; break;
			}
		}
	}
	
}
bool Morse::morse2Text(string morse, string& text) {
	string alpah[26] = { "a","b","c","d","e","f", "g","h","i", "j","k","l", "m","n","o",
		"p","q","r", "s","t","u", "v","w","x", "y","z" }; // 소문자 배열 생성
	string di[10] = { "0","1","2", "3","4","5", "6","7","8", "9" }; // 숫자 배열 생성
	string retext = "";
	for (int j = 0; j < morse.size(); ) {
		int pos = morse.find(" ", j);
		bool sw = true;
		string s = morse.substr(j, pos - j); // 빈칸 전까지
		for (int i = 0; i < 26; ++i) {
			if (s == alphabet[i]) {
				retext.append(alpah[i]); // 빈칸뒤에 문자열을 붙여준다
				sw = false;
				break;
			}
		}
		if (sw) {
			for (int i = 0; i < 10; ++i) {
				if (s == digit[i]) {
					retext.append(di[i]);
					sw = false;
					break;
				}
			}
		}
		if (sw) {
			if (s == slash) retext += "/";
			else if (s == question) retext += "?";
			else if (s == comma) retext += ",";
			else if (s == period) retext += ".";
			else if (s == plus) retext += "+";
			else if (s == equal) retext += "=";
		}
		if (morse[pos] == ' ' &&morse[pos + 1] == ' ' &&morse[pos + 2] == ' ') {
			retext += " ";
			pos += 2;
		}
		j = pos + 1;
	}
	if (retext == text) return true;
	else return false;
}

int main() {
	string text, morse;
	Morse m;
	cout << "아래에 영문 텍스트를 입력하세요. 모스 부호로 바꿉니다." << endl;
	getline(cin, text);
	m.text2Morse(text, morse);
	cout << morse << endl << endl;
	cout << "모스 부호를 다시 형문 텍스트로 바꿉니다." << endl;
	if (m.morse2Text(morse, text))
		cout << text;
	else
		cout << "모스 부호->텍스트 변환 에러" << endl;
}
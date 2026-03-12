//  LESSON 1.화면에 문자를 출력하는 코드

#include <iostream>
using namespace std;
/*
using namespace std;
int main()
{
	cout << "c++세상에 오신것을 환영합니다! \n";
	cout << "c++를 시작합시다! \n";
	return 0;
}
*/

//sample 2.cpp print를 사용
//줄바꿈을 할 때는 \n을 사용
/*using namespace std;

int main()
{
	cout << 1 << 2 << 3 << '\n' << 4 << 5 << '\n';
	return 0;
}
*/
// LESSON 2.3 문자와 숫자
/*
using namespace std;
int main()
{
	cout << 'A' << '\n';
	cout << "C++ 세상에 오신 것을 환영합니다!\n";
	cout << 123 << '\n';

	return 0;
}
// 문자 하나는 ''로 묶어서 표기한다 예) 'A', 'B' 등
*/
//----------------------------------------------------------
// 특수 문자 출력하기(이스케이프 시퀀스를 사용)
/*
using namespace std;
int main()
{
	cout << "원화 기호를 표시합니다. :" << '\\' << '\n';
	cout << "작은 따옴표를 표시합니다 :" << '\'' << '\n';
		return 0;
}
*/

//문자 코드 활용
/*
int main()
{
	cout << "8진수 문자 코드 101이 가리키는 문자는" << '\101' << "입니다. \n";
	cout << "16진수 문자 코드 61이 가리키는 문자는" << '\x61' << "입니다. \n";

	return 0;
}
*/
//문자열 리터럴
// 문자를 리터럴 할 떄는 ''을 붙임 예) 'A' 문자열을 리터럴 할 때는 ""을 붙임 예) "Hello?"
//숫자 리터럴 
// 8 진수.....숫자 앞에 0을 붙인다
//16 진수.....숫자 앞에 0x을 붙인다
/*
int main()
{
	cout << "10진수 10은" << 10 << "입니다. \n";
	cout << "8진수 10은" << 010 << "입니다. \n";
	cout << "16진수 10은" << 0x10 << "입니다. \n";
	cout << "16진수 F는" << 0xF << "입니다. \n";

	return 0;
}
*/
//LESSON 2 연습문제

//3번 문제
/*
int main()
{
	cout << 123 << '\n';
	cout << "\\100 받았다" << '\n';
	cout << "내일 또 만나요 \n";

	return 0;

}
*/
//4번 문제
//8진수 
/*int main()
{
	cout << 06 << '\n';
	cout << 020 << '\n';
	cout << 013 << '\n';
	//16진수
	cout << 0x6 << '\n';
	cout << 0x20 << '\n';
	cout << 0x13 << '\n';

	return 0;

}
*/
//------------------------------------------
//LESSON 3 변수

//변수 선언
/*
int main()
{
	int num;
	num = 3;
	cout << "변수 num 값은" << num << "입니다. \n";

	return 0;
}
*/
//변수의 값 바꾸기
/*
int main()
{
	int num = 3;

	cout << "변수 num 값은" << num << "입니다. \n";

	num = 5;

	cout << "변수 num의 값이 바뀌었습니다. \n";
	cout << "변수 num의 값은" << num << "입니다.\n";

	return 0;
}
*/
//다른 변수에 값을 대입하기
/*
int main()
{
	int num1, num2;

	num1 = 3;

	cout << "변수 num 1 의 값은" << num1 << "입니다 \n";

	num2 = num1;

	cout << "변수 num1 의 값을 num2 에 대입했습니다.\n";
	cout << "변수 num2의 값은" << num2 << "입니다. \n";

	return 0;
}
*/
//변수애 값을 대입할 때 주의해야 할 점
//int 형 변수에는 소수를 저장할 수 없다 double형 변수에 저장해야한다
/*
int main()
{
	int num1;
	double num2;

	num1 = 3.14;
	num2 = 3.14;

	cout << "변수 num1의 값은" << num1 << "입니다\n";
	cout << "변수 num2의 값은" << num2 << "입니다.\n";

	return 0;
}*/

//LESSON 3.6 키보드 입력
//키보드로 입력을 받을 시 cin을 사용해 변수에 저장함
/*
int main()
{
	변수 선언;
	cin >> 변수;
}*/
/*
int main()
{
	int num = 0;
	cout << "숫자를 입력하세요. \n";

	cin >> num;

	cout << num << "(이)가 입력되었습니다.\n";

	return 0;
}*/
//2개 이상의 숫자 입력하기
/*
int main() {

	int num1, num2;

	cout << "정수를 2개 입력하십시오. \n";

	cin >> num1 >> num2;

		cout << "먼저" << num1 << "(이)가 입력되었습니다. \n";

		cout << "그 다음으로" << num2 << "(이)가 입력되었습니다. \n";

		return 0;

}*/

//LESSON 3.7 상수
/*
int main()
{
	const double pi = 3.1415;

	cout << "원주율의 값은" << pi << "입니다. \n";
	cout << "원주율의 값은 바뀌지 않습니다.\n";

	return 0;
}*/
//const의 원리 이해하기
//const로 지정한 변수는 그 값을 변경할 수 없다


//--------------------------------------
//3장 연습

//1.번
/*
int main()
{
	double num;

	cout << "원주율의 값은 얼마입니까?\n";

	cin >> num;

	cout << "원주율의 값은" << num << "입니다.\n";

	return 0;
}*/
/*
int main()
{
	double pi;

	cout << "원주율의 값은 얼마입니까?\n";
	cin >> pi;
	cout << "원주율의 값은" << pi << "입니다\n";

	return 0;
}*/

//2번 문제
/*
int main()
{
	char num;

	cout << "알파벳 첫 글짜는 무엇입니까?\n";

	cin >> num;

	cout << "알파벳 첫 글짜는" << num << "입니다\n";

	return 0;
}*/

//3번 문제
/*
int main()
{


	double num1;
	double num2;

	cout << "당신의 키와 몸무게를 입력해주세요 \n";

	cin >> num1 >> num2;

	cout << "당신의 키는" << num1 << "이고\n" << "몸무게는" << num2 << "입니다\n";

	return 0;
}*/

//4.1 식과 연산자
/*
int main()
{
	cout << "1+2의 값은" << 1 + 2 << "입니다.\n";
	cout << "3*4의 값은" << 3 * 4 << "입니다. \n";

	return 0;
}*/
/*
int main()
{
	int num1 = 2;
	int num2 = 3;
	int sum = num1 + num2;

	cout << "변수 num1 의 값은" << num1 << "입니다.\n";
	cout << "변수 num2 의 값은" << num2 << "입니다.\n";
	cout << "변수 num1 과 num2의 합은" << sum << "입니다.\n";

	num1 = num1 + 1;

	cout << "변수 num1에서 1을 더하면" << num1 << "입니다.\n";

	return 0;
}*//*
int main()
{
	int num1, num2;

	cout << "정수를 입력하세요\n";
	cin >> num1;
	cout << "정수를 입력하세여.\n";
	cin >> num2;
	cout << "두 정수의 합은" << num1 + num2 << "입니다.\n";

	return 0;

}*//*
int main()
{
	int a = 0;
	int b = 0;

	b = ++a;

	cout << " =대입 후에 증가 연산자를 사용했습니다 그러므로 b의 값은" << b << "입니다.\n";

	return 0;
}*//*
int main()
{
	int sum = 0;
	int num = 0;
	cout << "첫 번째 숫자를 입력하십시오.\n";
	cin >> num;
	sum += num;
	
	cout << "두 번째 숫자를 입력하십시오.\n";
	cin >> num;
	sum += num;
	
	cout << "세 번째 숫자를 입력하십시오.\n";
	cin >> num;
	sum += num;

	cout << " 3개 정수의 합은" << sum << "압니다.\n";

	return 0;
}*/
// size 연산자
/*
int main()
{
	int a = 1;
	int b = 0;

	cout << "short int 형의 크기는" << sizeof(short int) << "바이트입니다.\n";
	cout << "int형의 크기는" << sizeof(int) << "바이트입니다.\n";
	cout << "long int 형의 크기는" << sizeof(long int) << "바이트입니다.\n";
	cout << "float 형의 크기는" << sizeof(float) << "바이트입니다.\n";
	cout << "double 형의 크기는" << sizeof(double) << "바이트입니다.\n";
	cout << "long double 형의 크기는" << sizeof(long double) << "바이트입니다.\n";
	cout << "변수 a의 크기는" << sizeof(a) << "바이트입니다.\n";
	cout << "식 a+b의 크기는" << sizeof(a + b) << "바이트입니다.\n";

	return 0;
}*/

//형 변환
/*
int main()
{
	double dnum = 160.5;
	int inum;

	cout << "키는" << dnum << "센티미터입니다.\n";
	cout << "double 형 변수에 대입합니다.\n";

	inum = dnum;

	cout << "키는" << inum << "센티미터입니다.\n";

	return 0;
}*/
/*
int main()
{
	int d = 2;
	const double pi = 3.14;

	cout << "원의 지름이" << d << "센티미터인 원의 \n";
	cout << "둘래는" << d * pi << "센티미터입니다.\n";

	return 0;
}*/
/*
int main()
{
	int num1 = 5;
	int num2 = 4;

	double div;

	div = (double)num1 / (double)num2;

	cout << "5/4는" << div << "입니다.\n";
	return 0;
}*/
//LESSON 4 연습문제----------------------------------------------

//1
/*
int main()
{
	double asd = 0 - 4;
	double asd2 = (double)3.14 * (double)2;
	double asd3 = 5 / 3;
	double asd4 = 30 % 7;
	double asd5 = (7 + 32) / 5;

	cout << asd << "입니다.\n";
	cout << asd2 << "입니다.\n";
	cout << asd3 << "입니다.\n";
	cout << asd4 << "입니다.\n";
	cout << asd5 << "입니다.\n";
	return 0;
}
*/
//2
/*
int main()
{
	double num1, num2;

	cout << "삼각형의 높이를 입력하세요.\n";

	cin >> num1;

	cout << "삼각형의 밑면의 길이를 입력하세요.\n";

	cin >> num2;

	cout << "삼각형의 넓이는 " << (double)num1*(double)num2/2 << "입니다.\n";

	return 0;
}*/
//3
/*
int main()
{
	double asd1, asd2, asd3, asd4, asd5;

	cout << "과목 1의 점수를 입력하세요.\n";

	cin >> asd1;

	cout << "과목 2의 점수를 입력하세요.\n";

	cin >> asd2;

	cout << "과목 3의 점수를 입력하세요.\n";

	cin >> asd3;
	
	cout << "과목 4의 점수를 입력하세요.\n";

	cin >> asd4;

	cout << "과목 5의 점수를 입력하세요.\n";

	cin >> asd5;

	cout << "5과목의 합계는" << asd1 + asd2 + asd3 + asd4 + asd5 << "입니다.\n";
	cout << "5과목의 평균는" << (asd1 + asd2 + asd3 + asd4 + asd5) / 5 << "입니다.\n";

	return 0;

}*/
// LESSON 5.1 관계 연산자와 조건식 ---------------------------------------------
// LESSON 5.2 IF 문
/*
int main()
{
	int res;
	cout << "정수를 입력하세요\n";

	cin >> res;

	if (res == 1)
	{
		cout << "1이 입력되었습니다.\n";
		cout << "1을 선택하셨습니다.\n";
	}
	
	cout << "처리를 종료합니다.\n";

	return 0;
}*/
//LESSON 5.3 IF ELSE 문
/*
int main()
{
	int res;
	
	cout << "정수를 입력하세요\n";

	cin >> res;

	if (res == 1)
	{
		cout << "정수 1 이 입력되었습니다.\n";
	}
	else {
		cout << "1이 아닌 정수가 입력되었습니다.\n";
	}
	return 0;
}*/
//LESSON 5.4 여려 구문
/*
int main()
{
	int res;

	cout << "정수를 입력하세요\n";

	cin >> res;

	if (res == 1)
	{
		cout << "1을 입력하셨습니다.\n";
	}
	else if (res == 2)
	{
		cout << "2를 입력하셨습니다.\n";
	}
	else {
		cout << "1 또는 2를 입력하십시오.\n";
	}
	return 0;
}*/
//LESSON 5.5 SWITCH 구문
/*
int main()
{
	int res;

	cout << "정수를 입력하세요\n";

	cin >> res;

	switch (res) {
	case 1:
		cout << "1이 입력되었습니다.\n";
		break;
	case 2:
		cout << "2가 입력되었습니다.\n";
		break;
	default:
		cout << "1 또는 2를 입력하십시오.\n";
		break;
	}
	return 0;
}*/
//LESSON 5.6 논리 연산자
 /*
int main()
{
	char res;
	cout << "당신은 남성입니까? \n";
	cout << "Y 또는 N을 입력하세요.\n";

	cin >> res;

	if (res == 'Y' || res == 'y')
	{
		cout << "당신은 남성이군요.\n";
	}
	else if (res == 'N' || res == 'n')
	{
		cout << "당신은 여성이군요.\n";
	}
	else {
		cout << "Y 또는 N을 입력하세요.\n";
	}
	return 0;
}*/
/*
int main()
{
	int res;
	char ans;

	cout << "몇 번째 코스로 갈꺼냐\n";
	cout << "정수를 입력해라\n";

	cin >> res;

	if ( res == 1)
		ans = 'A';
	else
		ans = 'B';
	cout << ans << "코스를 선택했습니다.\n";
	return 0;
}*/
/*
int main()
{
	int res;
	char ans;

	cout << "몇 번째 코스를 선택할건가\n";
	cout << "정수를 입력하세요.\n";

	cin >> res;

	ans = (res = 1) ? 'A' : 'B';

	cout << ans << "코스를 선택했습니다. \n";
	return 0;
}*/
//연습문제
//1
/*
int main()
{
	int res;
	int ans;

	cout << "정수를 입력하세요\n";
	

	cin >> res;


	ans = res % 2;

	if (ans == 1)
	{
		cout << "홀수입니다.\n";
	}
	else
	{
		cout << "짝수입니다.\n";
	}
	return 0;
	}*/
/*
int main()
{
	int res;

	cout << "정수를 입력하세요\n";

	cin >> res;

	if (res % 2 == 1)
	{
		cout << "홀수입니다.\n";
	}
	else
	{
		cout << "짝수입니다.\n";
	}
	return 0;
}*/
//2번 문제
/*
int main()
{
	int res;
	int ans;

	cout << "두 개의 정수를 입력하세요\n";

	cin >> res>> ans;
	

	if (res == ans)
	{
		cout << "두 값이 같습니다.\n";
	}
	else if (res > ans)
	{
		cout << res << "가" << ans << "보다 큽니다\n";
	}
	else
	{
		cout << ans << "가" << res << "보다 큽니다.\n";
	}
	return 0;
}*/
//3번 문제
/*
int main()
{
	int res;

	cout << "성적을 입력하세요\n";

	cin >> res;

	switch (res) {
	case 1:
		cout << "정적은 1입니다 노력해\n";
		break;
	case 2:
		cout << "성적은 2입니다 조금 더 노력해\n";
		break;
	case 3:
		cout << "성적은 3입니다 더 높은 점수를 목표로 해라\n";
		break;
	case 4:
		cout << "성적은 4입니다. 매우 잘했습니다.\n";
		break;
	case 5:
		cout << "성적은 5입니다 매우 우수합니다.\n";
		break;
	}
	return 0;
}*/
//LESSON 6------------------------------------------------------
/*
int main()
{
	for (int i = 1; i <= 5; i++) {
		cout << "반복되고 있습니다.\n";
	}

	cout << "반복이 끝났습니다.\n";
	return 0;
}*/
/*
int main()

{
	int i;
	for (i = 1; i < 5; i++) {
		cout << i << "째 반복하고있습니다.\n";
	}
	cout << "반복이 끝났습니다.\n";
	cout << i << "회 반복햇습니다.\n";

return 0;
	
}*/
/*
int main()
{
	int num;

	cout << "몇 개의 *을 출력함\n";
	
	cin >> num;

	for (int i = 1; i <= num; i++) {
		cout << '*';
	}
	cout << '\n';
	return 0;
}*/
/*
int main()
{
	int num;
	int sum = 0;

	cout << "몇까지합?\n";

	cin >> num;

	for (int i = 1; i <= num; i++) {
		sum += i;
	}
	cout << "합은" << sum << "이빈다.\n";
	return 0;
}*/
//LESSON 6.2 WHILE 문
/*
int main()
{
	int i = 1;
	while (i <= 5) {
		cout << i << "번째 반복\n";
		i++;

	}
	cout << "반복 끝\n";
	return 0;
}*/
/*
int main()
{
	int num = 1;
	
	while (num) {
		cout << "정수 입력(0을 입력하면 종료됨)\n";
		cin >> num;
		cout << num << "이(가) 입력됨\n";

	}
	cout << "반복 끝남\n";
	return 0;
}*/
/*
int main()
{
	int i = 1;

	do {
		cout << i << "번째 반복\n";

		i++;
	} while (i <= 5);
	cout << "반복 종료\n";
	return 0;
}*/
// for 문의 중첩
/*
int main()
{
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 3; j++) {
			cout << "i는" << i << ":j는" << j << "입니다.\n";
		}
	}
	return 0;
}*/
//if 문의 중첩
/*
int main()
{
	int ch = 0;
	
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			if (ch == 0) {
				cout << '*';
				ch = 1;
			}
			else {
				cout << '-';
				ch = 0;
			}
		}
		cout << '\n';
	}
			return 0;
}*/
//LESSON 6.5 프로세스 흐름의 변경
/*
int main()
{
	int res;
	cout << " 몇 번째 반복시 루프를 빠져나감\n";
	
	cin >> res;

	for (int i = 1; i <= 10; i++) {
		//원래 입력 i<= 10로 10번 반복되야하지만
		cout << i << "번째 처리\n";
		if (i == res)
			break;
		//입력받은 res 에서 종료
	}
	return 0;
}*/
//SWITCH 문 안에서 BREAK문 사용
/*
int main()
{
	int res;

	cout << "정수 입력(1~5)\n";
	
	cin >> res;

	switch (res) {
	case 1:
	case 2:
		cout << "조금 더 노력해\n";
		break;
	case3:
	case 4:
		cout << "이 페이스로 노력해\n";
		break;
	case 5:
		cout << "매우 우수\n";
		break;
	}
	return 0;
}*/
/*
int main()
{
	int res;

	cout << "몇 번째 처리를 건너 뛰시겠습니까?\m";

	cin >> res;

	for (int i = 1; i <= 10; i++) {
		if (i == res)
			continue;
		cout << i << "번째 처리입니다.\n";
	}
	return 0;
}*/
// LESSON 6 연습----------------------------------------------
//1번 문제
/*
int main()
{
	cout << "1부터 10까지의 짝수를 출력합니다\n";
	int i = 1;
	int da = 10;
	for (; i <= da; i++) {
		if (i % 2 == 1) {
			continue;
		}
		cout << i << '\n';
	}
	return 0;

}*/
//2번 문제
/*
int main()
{
	int num=1;
	int sum = 0;

	while (num) {

		
		cout << "시험 점수를 입력하십시오(0을 넣으면 종료)\n";
		cin >> num;

		sum += num;
	}
	cout << "시험 점수의 합계는" << sum << "입니다.\n";
	return 0;
}
*/
//3번 문제
/*
int main()
{
	int num = 5;

	for (int i = 1; i <= num; i++) {
		for (int j = 1; j <= i; j++) {
			cout << "*";
		}
		cout << '\n';
	}
	return 0;
}*/
//LESSON 7 함수

//buy 함수의 정의
void buy()
{
	cout <<"차를 구입했습니다.\n";
}

//buy 함수의 이용
int main()
{
	buy();
	return 0;
}
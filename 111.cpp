
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
/*
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
}*/
// 반복해서 함수 호출하기
/*
//buy 함수의 정의
void buy()
{
	cout << "차를 구입했습니다.\n";
}
//buy 함수의 이용
int main()
{
	buy();
	cout << "차량을 또 1대 구입합니다.\n";
	
	buy();
	return 0;
}*/

// LESSON 7.3 인수------------------------------------------------
/*
// buy 함수의 정의
void buy(int x)
{
	cout << x << "만원 짜리 차량을 구입했습니다.\n";
}

//buy 함수의 호출
int main()
{
	buy(20);
	buy(50);

	return 0;
}*/
/*
void buy(int x) {
	cout << x << "만원 짜리 차량을 구입했습니다.\n";
}
int main()
{
	int num;
	cout << "첫 번째 차량의 가격은 얼마입니까?\n";

	cin >> num;

	buy(num);

	cout << "두 번째 차량의 가격은 얼마입니까?\n";
	
	cin >> num;

	buy(num);
	return 0;
}*/
// 인수를 넘겨야 하는 함수 사용 ----------------------------
/*
void buy (int x , int y)
{
	cout << "산 차량의 가격은" << x << "와" << y << "입니다.\n";
}

int main()
{
	int num1;
	int num2;
	cout << "첫 번째 차량의 가격은 얼마입니까\n";
	cin >> num1;
	cout << "두 번째 차량의 가격은 얼마입니까?\n";
	cin >> num2;

	buy(num1, num2);
	return 0;
}*/
//LESSON 7.4 리턴 값------------------------------------------------
/*
int buy(int x, int y)
{
	int z;

	cout << x << "만원짜리" << y << "만원짜리 차량을 구입했습니다.\n";

	z = x + y;
	return z;
}
int main()
{
	int num1, num2, sum;
	cout << "첫 번째 차량의 가격은 얼마입니까?\n";
	cin >> num1;
	
	cout << "두 번째 차량의 가격은 얼마입니까?\n";
	cin >> num2;

	sum = buy(num1, num2);
	cout << "차량의 총 가격은" << sum << "만원 입니다.\n";
	return 0;
}*/

// LESSON 7.5 함수의 이용----------------------------------------------------

/*
//sum 함수의 정의
int sum(int x, int y)
{
	return x + y;
}
int main()
{
	int num1, num2, ans;
	cout << "첫 번째 정수를 입력하세요\n";
	cin >> num1;
	cout << "두 번째 정수를 입력하세요\n";
	cin >> num2;

	ans = sum(num1, num2);
	cout << "두 정수의 합은" << ans << "입니다.\n";
	return 0;
}*/

//최대값을 구하는 함수----------------------------------------------------------

//max 함수의 정의
/*
int max(int x, int y)
{
	if (x > y)
		return x;

	else
		return y;
}
int main()
{
	int num1, num2, ans;
	cout << "첫 번째 정수를 입력하세요\n";
	cin >> num1;
	cout << ":두 번째 정수를 입력하세요\n";
	cin >> num2;

	ans = max(num1, num2);
	cout << "두 정수중 큰 값은" << ans << "입니다.\n";
	return 0;
}*/
// 인라인 함수의 원리 이해하기-------------------------------
// 인라인 함수는 함수의 본체가 호출되는 곳에 복사되어 실행되는 함수이다. 따라서 함수를 호출할 때마다 함수의 본체가 복사되어 실행되므로 일반적인 함수보다 빠르게 실행된다.

/*
//max 함수의 정의
inline int max(int x, int y) 
{ 
	if (x > y) 
return x; 
else return y; 
}

int main()
{
	int num1, num2, ans;

	cout << "첫 번째 정수를 입력하십시오\n";
	cin >> num1;
	cout << "두 번째 정수를 입력하십시오\n";
	cin >> num2;

	ans = max(num1, num2);

	cout << "최대값은" << ans << "입니다.\n";
	return 0;
}*/
//LESSIN 7.6 함수 선언------------------------------------------------------------

/*
int max(int x, int y);
//일단 함수 프로토타입 선언한다

int main()
{
	int num1, num2, ans;

	cout << "첫 번째 숫자\n";
	cin >> num1;

	cout << "두 번째 숫자\n";
	cin >> num2;

	ans = max(num1, num2);

	cout << "최대값은" << ans << "입니다.\n";
}
//함수 정의를 뒤에 사용할 수 있음
int max(int x, int y)
{
	if (x > y)
		return x;
	else
		return y;
}*/
// 원래
// 함수 프로토타입 선언- 함수 본체의 정의- 함수 이용 순이지만
// 함수 프로토타입 선언-함수 이용- 함수 본체의 정의 순으로도 이용가능
/*
void buy(int x = 10);

int main()
{
	cout << "처음 구매가는 100만원입니다.\n";
	buy(100);
	cout << "두 번째 구매가는 기본가입니다.\n";
	buy();
	return 0;
}
void buy(int x)
{
	cout << x << "만원 짜리 차량을 구매했습니다.\n";
}*/

// LESSON 7.7 함수 오버로드-------------------------------------------

// 인수의 형과 개수가 다르면 같은 이름을 가진 함수를 여러 개 설정할 수 있다.
/*
//함수 선언
int max(int x, int y);
double max(double x, double y);

int main() {
	int a, b;
	double da, db;

	cout << "정수를 2개 입력하세요\n";
	cin >> a >> b;

	cout << "소수를 2개 입력하세요\n";
	cin >> da >> db;

	int ans1 = max(a, b);
	double ans2 = max(da, db);

	cout << "입력받은 정수의 최대 값은" << ans1 << "입니다.\n";
	cout << "입력받은 소수의 최대 값은" << ans2 << "입니다.\n";
	return 0;
}

//MAX (int형) 함수의 정의

int max(int x, int y) {
	if (x > y)
		return x;
	else
		return y;
}

//MAX (double 형) 함수의 정의
double max(double x, double y){
	if (x > y)
		return x;
	else
		return y;
}*/

//LESSON 7.8 함수 템플릿-----------------------------------------------------
/*
//함수 템플릿
template <class T>
T maxt(T x, T y)
{
	if (x > y)
		return x;
	else
		return y;
}

int main()
{
	int a, b;
	double da, db;
	cout << "정수 2개를 입력하세요\n";
	cin >> a >> b;
	cout << "소수 2개를 입력하세요.\n";
	cin >> da >> db;
	
	int ans1 = maxt(a, b);
	double ans2 = maxt(da, db);
	cout << "입력받은 정수의 최대 값은" << ans1 << "입니다.\n";
	cout << "입력받은 소수의 최대 값은" << ans2 << "입니다.\n";
	return 0;
}*/

//연습문제-------------------------------------------------------------

//1.
/*
double square(double x) {
	return x * x;
}
int square(int x){


return x*x;
}
int main() {
	int a, b;
	double da, db;
	cout << "정수를 입력하세요\n";
	cin >> a;
	cout << "소수를 입력하세요\n";
		cin >> da;

	b = square(a);
	db = square(da);
	cout << a << "의 제곱은" << b << "입니다.\n";
	cout << da << "의 제곱은" << db << "입니다.\n";
	return 0;
}*/
//3번 문제
/*
inline int square(int x) { return x * x; }
inline double square(double x) { return x * x; }

int main()
{
	int num1, ans1;
	double num2, ans2;
	cout << "정수를 입력하세여\n";
	cin >> num1;
	cout << "소수를 입력하세요\n";
	cin >> num2;

	ans1 =square(num1);
	ans2 =square(num2);

	cout << "정수의 제곱은" << ans1 << "입니다.\n";
	cout << "소수의 제곱은" << ans2 << "입니다.\n";
	return 0;
}*/

//4번 문제
/*
template <class T>
T squart(T x)
{
	return x * x;
}
int main() {
	int num1, ans1;
	double num2, ans2;

	cout << "정수를 입력하세요\n";
	cin >> num1;

	cout << "소수를 입력하세요\n";
	cin >> num2;

	ans1 = squart(num1);
	ans2 = squart(num2);

	cout << "정수의 제곱은" << ans1 << "입니다.\n";
	cout << "소수의 제곱은" << ans2 << "입니다.\n";
	return 0;
}*/

//LESSON 8 포인터=============================================(26.03.15)

//LESSON 8.1 주소 연산자------------------------------------
/*
int main() {
	int a;
	a = 5;

	cout << "변수 값은" << a << "입니다.\n";
	cout << "변수 a의 주소 값은" << &a << "입니다.\n";
	return 0;
}*/

//LESSON 8.2 포인터----------------------------------------------
/*
int main() {
	int a;
	int* pA; // 포인터 pA 선언

	a = 5;
	pA = &a; // 변수 a의 주소를 pA에 저장

	cout << "번수 a의 값은" << a << "입니다.\n";
	cout << "변수 a의 주소(&a)는" << &a << "입니다.\n";
	cout << "포인터 Pa의 값은" << pA << "입니다.\n";

	return 0;
}*/
//포인터를 통해 변수의 값 확인하기-------------
/*
int main()
{
	int a;
	int* pA;

	a = 5;
	pA = &a; //변수 a의 주소를 pA에 저장합니다.

	cout << "변수a의 값은" << a << "입니다.\n";
	cout << "변수 a의 주소는" << &a << "입니다.\n";
	cout << "포인터 pA의 값은" << pA << "입니다.\n";
	cout << "*pA의 값은" << *pA << "입니다.\n"; //*를 사용하면 포인터가 가리키는 변수의 값을 알아낼 수 있다

	return 0;
}*/
//포인터에 다른 주소 대입하기 ---------
/*
int main()
{
	int a = 5;
	int b = 10;
	int* pA;

	pA = &a;

	cout << "변수 a의 값은" << a << "입니다.\n";
	cout << "포인터 pA의 값은" << pA << "입니다.\n";
	cout << "pA의 값은" << *pA << "입니다.\n";

	pA = &b;

	cout << "변수 b의 값은" << b << "입니다.\n";
	cout << "포인터 pA의 값이" << pA << "로 바뀌었습니다.\n";
	cout << "pA의 값은" << *pA << "입니다.\n";

	return 0;

}*/

//포인터로 변수의 값 바꾸기----------

/*
int main() {
	int a;
	int* pA;

	a = 5;
	pA = &a;

	cout << "변수 a의 값은" << a << "입니다.\n";

	*pA = 50;

	cout << "pA에 50을 대입했습니다.\n";
	cout << "변수 a의 값은" << a << "입니다.\n";

	return 0;
}*/
//LESSON8.3 인수와 포인터------------------------------------------------------------

//잘못된 swap 함수의 선언
/*void swap(int x, int y);

int main()
{
	int num1 = 5;
	int num2 = 10;

	cout << "변수 num1의 값은" << num1 << "입니다.\n";
	cout << "변수 num2의 값은" << num2 << "입니다.\n";
	cout << "두 변수를 교환합니다.\n";

	swap(num1, num2);

	cout << "변수 num1의 값은" << num1 << "입니다.\n";
	cout << "변수 num2의 값은" << num2 << "입니다\n";
	return 0;

}
void swap(int x, int y) {
	int tmp;

	tmp = x;
	x = y;
	y = tmp;
}*/
/*
//올바른 선언
void swap(int* px, int* py);

int main()
{
	int num1 = 5;
	int num2 = 10;

	cout << "변수 num1의 값은" << num1 << "입니다.\n";
	cout << "변수 num2의 값은" << num2 << "입니다.\n";
	cout << "두 변수를 교환합니다.\n";

	swap(&num1, &num2);

	cout << "변수 num1의 값은" << num1 << "입니다.\n";
	cout << "변수 num2의 값은" << num2 << "입니다\n";
	return 0;

}
void swap(int* px, int* py) {
	int tmp;

	tmp = *px;
	*px = *py;
	*py = tmp;
}*/

//LESSON 8.4 인수와 레퍼런스 ----------------------------------------

/*int main() {
	int a = 5;
	int& rA = a;

	cout << "변수 a의 값은" << a << "입니다.\n";
	cout << "레퍼런스 rA의 값은" << rA << "입니다.\n";

	rA = 50;

	cout << "rA에 50을 대입했습니다.\n";
	cout << "레퍼런스 rA의 값이" << rA << "로 변경되었습니다..\n";
	cout << "변수 a의 값은" << a << "입니다.\n";
	cout << "변수 a의 주소
	는" << &a << "입니다.\n";
	cout << "레퍼런스 rA의 주소는" << &rA << "입니다.\n";

}*/

//레퍼런스를 이용한 swqp 문-----------------
/*
//swqp 함수 선언
void swap(int& x, int& y);

int main()
{
	int num1 = 5;
	int num2 = 10;

	cout << num1 << "와" << num2 << '\n';
	cout << "교환합니다.\n";

	swap(num1, num2);

	cout << num1 << "와" << num2 << '\n';
}

void swap(int& x, int& y) {
	int res;

	res = x;
	x = y;
	y = res;
}
//실인수의 값을 바꾸고 싶지 않을 경우 앞에 const 를 붙이면 된다        ex)void fuck1(const int* Px)
*/
//8과 연습문제-------------------------------------------------------------------------------------

//2.
/*
void add(int* x1, int *x2, int * a);
int main() {
	int num1, num2 ;
	int ad;
	cout << "2과목 분의 점수를 입력하십시오\n";
	cin >> num1 >> num2;

	cout << "더할 점수를 입력하십시오\n";
	cin >> ad;

	add(&num1, &num2,&ad);
	
	cout << "12점을 더했으므로\n" << "과목 1은" << num1 << "점이 되었습니다.\n"
		<< "과목 2는" << num2 << "점이 되었습니다.\n";
	return 0;
}
void add(int* x1, int *x2, int *a) {
	*x1 += *a;
	*x2 += *a;
}*/

//3.
/*
void add(int& x1, int& x2, int& a);
int main() {
	int num1, num2, ad;

	cout << "2과목 분의 점수를 입력하세요\n";
	cin >> num1 >> num2;

	cout << "더할 점수를 입력하세요\n";
	cin >> ad;

	add(num1, num2, ad);

	cout << ad << "점을 더했으므로\n" << "과목 1의 점수는" << num1 << "점이 되었습니다." << '\n' << "과목 2의 점수는" << num2 << "점이 되었습니다.\n";
	return 0;

}
void add(int& x1, int& x2, int& a) {
	x1 += a;
	x2 += a;
}*/

//LESSON 9 배열======================================================
//LESSON 9.3 배열의 이용======================================================
/*
int main()
{
	int test[5];// 아래 배열 +1

	test[0] = 80;
	test[1] = 60;
	test[2] = 22;
	test[3] = 50;
	test[4] = 75;

	for (int i = 0; i < 5; i++) {

		cout << i + 1 << "번째 사람의 점수는" << test[i] << "입니다.\n";
	}
	return 0;
}*/

//9.4 코드 입력-------------------------------------------------------------------------
/*
int main() {
	
	const int num = 5; //인원수를 상수에 저장해서 사용
	int test[num];
	cout << num << "명의 점수를 입력하세요\n";
	for (int i = 0; i < num; i++) {
		cin >> test[i]; //키보드로 5명의 점수를 입력받음
	}

	for (int j = 0; j < num; j++) {
		cout << j + 1 << "번째 사람의 점수는" << test[j] << "입니다.\n"; //입력받은 점수를 출력
	}
	return 0;
}
*/

//배열 요소 정리하기=====================================================================
/*
int main() {

	const int num = 5; 
	int test[num];
	cout << num << "명의 점수를 입력하세요\n";
	for (int i = 0; i < num; i++) {
		cin >> test[i]; 
	}

	//배열 정리하기
	for (int s = 0; s < num - 1; s++) {
		for (int t = s + 1; t < num; t++) {
			if (test[t] > test[s]) {
				int tmp = test[t];
				test[t] = test[s];
				test[s] = tmp;
			}
		}
	}

	for (int j = 0; j < num; j++) {
		cout << j + 1 << "번째 사람의 점수는" << test[j] << "입니다.\n"; 
	}
	return 0;
}*/

//다차원 배열의 원리 이해하기=============================================================
//배열 오소를 한번 더 배열 할 경우 다차원 배열이 만들어진다
// 형명 배열명[요소 개수] [요소 개수];

/*
int main() {

	const int sub = 2; //과목 수
	const int num = 5; //인원 수

	int test[sub][num];

	test[0][0] = 80;
	test[0][1] = 60;			
	test[0][2] = 22;
	test[0][3] = 50;
	test[0][4] = 75;
	test[1][0] = 90;
	test[1][1] = 55;
	test[1][2] = 68;
	test[1][3] = 72;
	test[1][4] = 58;

	for (int i = 0; i < num; i++){
		cout << i + 1 << "번째 사람의 국어 점수는" << test[0][i] << "입니다.\n";
		cout << i + 1 << "번째 사람의 수학 점수는" << test[1][i] << "입니다.\n";
		}

	return 0;
}*/

//LESSON 9.5 배열과 포인터의 관계========================================================


// ex) &test[0] == 배열의 첫 번째 요소의 주소를 나타냄
//하지만 그냥 test를 사용해도 배열의 첫 번째 요소의 주소를 나타낼 수 있음 ex) test == &test[0]
/*
int main() {
	int test[5] = { 80,60,55,22,75 };
	cout << "test[0]의 값은" << test[0] << "입니다.\n";
	cout << "test[0]의 주소는" << &test[0] << "입니다.\n";
	cout << "test의 값은" << test << "입니다.\n";
	cout << "test의 주소는" << *test << "입니다.\n";

	return 0;
}*/

//포인터 연산하기=======================================================================
/*
int main() {
	int test[5] = { 80,60,55,22,75 };

	cout << "test[0]의 값은" << test[0] << "입니다.\n";
	cout << "test[0]의 주소는" << &test[0] << "입니다.\n";
	cout << "test의 값은" << test << "입니다.\n";
	cout << "test+1의 값은" << test + 1 << "입니다.\n";
	cout << " * (test + 1)의 값은" << *(test + 1) << "입니다.\n";

	return 0;
}*/
//LESSON9.6 인수와 배열============================================================

/*
//avg 함수의 선언
double avg(int t[]);

int main() {
	int test[5];

	cout << "5명의 시험 점수를 입력하세요\n";

	for (int i = 0; i < 5; i++) {
		cin >> test[i];
	}

	double ans = avg(test); //배열명(배열 첫 번째 요소의 주소)을 실인수로 넘긴다
	cout << "5명의 평균 점수는" << ans << "점입니다.\n";

	return 0;
}

//avg함수의 정의

double avg(int t[])
{
	double sum =0;
	for (int i = 0; i < 5; i++) {
		sum += t[i];
	}
	return sum / 5;
}*/

//포인터를 인수로 사용하기========================================================================

/*
//avg함수의 선언
double avg(int* pt);

int main()
{
	int test[5];
	cout << "5명의 시험 점수를 입력하세요\n";
	for (int i = 0; i < 5; i++)
	{
		cin >> test[i];
	}

	double ans = avg(test);
	cout << "5명의 평균 점수는" << ans << "점입니다.\n";

	return 0;
}
double avg(int* pt)
{
	double sum = 0;
	for (int i = 0; i < 5; i++)
	{
		sum += *(pt + i);
	}
	return sum/5;
}*/

//LESSON 9.7 문자열과 배열========================================================

//문자열은 char 형 배열로 취급
//문자열 배열의 마지막 요소는 \0
//문자열 배열의 요소 수는 문자열의 길이+1 이상이 필요함

//문자열 출력하기
/*
int main()
{
	char str[] = "Hello";
	cout << str << '\n';

	return 0;
}*/

//포인터로 문자열 출력하기
/*
int main()
{
	const char* str = "Hello";
	
	cout << str << '\n';

	return 0;
}*/

//문자열 조작하기
/*
int main()
{
	char str[] = "Hello";

	cout << "Hello\n";
						  //\0을 만날 때까지 반복해서 실행한다.
	for(int i=0; str[i]!='\0';i++)
	{
		cout << str[i] << '*';
	}
	cout << '\n';

	return 0;
}*/

//문자열을 다루는 표준 라이브러리 함수
/*
#include <string> //문자열 조작 함수를 제공하는 표준 라이브러리를 사용할 수 있게 된다

int main()
{
	char str[100];

	cout << "문자열(영문자 및 숫자)을 입력하세요\n";

	cin >> str;
								// 문자열 조작 함수를 이용합니다.
	cout << "문자열의 길이는" << strlen(str) << "입니다.\n";

	return 0;
}*/

//문자열을 배열에 복사하기
/*
#include <string>


int main()
{
	char str0[20];
	char str1[10];
	char str2[10];

	strcpy(str1, "Hello");
	strcpy(str2, "goodbye");
	strcpy(str0, "str1");
	strcpy(str0, "str2");

	cout << "배열 str1은(는)" << str1 << "입니다.\n";
	cout << "배열 str2은(는)" << str2 << "입니다.\n";
	cout << "연결하면" << str0 << "입니다.\n";

	return 0;

}*/

//연습==================================================================

//1=======================================================================
/*
int max(int x[]);

int main() {

	int text[5];

	cout << "시험 점수를 입력하세요\n";

	for (int i = 0; i < 5; i++) {
		cin >> text[i];
	}

	double ans = max(text);
	
	cout << "가장 높은 점수는" << ans << "점입니다.\n";
	return 0;
}

int max(int x[]) {
	int ans= x[0];
	for (int t = 1; t < 5; t++) {
		if (ans < x[t])
			ans = x[t];
	}
	return ans;
}*/

//2.======================================================
/*
#include <string>

int length(char* str);

int main()
{
	char str[100];

	cout << "문자열을 입력하세요\n";

	cin >> str;

	int l = length(str);

	cout << "문자열의 길이는" << l << "입니다.\n";

	return 0;
}
int length(char* str) {
	int r = strlen(str);
	//int i =0;
	//while(str[i]){i++;}  <==로 해도 됨
	return r;
	}*/

//3.===========================================
/*
int count(char str[], char ch);

int main()
{
	char str[100];
	char ch = 0;

	cout << "문자열을 입력하세요\n";
	cin >> str;

	cout << "문자열에서 검색할 문자를 입력하세요\n";
	cin >> ch;

	int c = count(str, ch);

	cout << str << "안에" << ch << "는" << c << "개 있습니다.\n";

	return 0;
}
int count(char str[], char ch) {
	int i = 0;
	int c = 0;
	while (str[i]) {
		if (str[i] == ch)
			c++;
		i++;
	}
	return c;
}*/

//LESSON 10.1 변수와 스코프(26.03.21)=============================================================
/*

//func 함수의 선언
void func();

int a = 0;
//전역 함수 a

//main 함수
int main() {

	int b = 1;

	cout << "miain함수에서는 변수 a와 b를 사용할 수 있습니다.\n";
	cout << "변수 a의 값은" << a << "입니다.\n";
	cout << "변수 b의 값은" << b << "입니다.\n";
	//cout << "변수 c의 값은" << c << "입니다.\n";

	func();
	return 0;
}

//func 함수의 정의
void func() {
	int c = 2;
	
	cout << "func함수에서는 a와 c를 사용할 수 있습니다.\n";
	cout << "변수 a의 값은" << a << "입니다.\n";
	//cout << "변수 b의 값은" << b << "입니다.\n";
	cout << "변수 c의 값은" << c << "입니다.\n";

}*/

//LESSON 10.2 기억 수명===================================================================

/*
//func 함수의 선언
void func();

int a = 0;
//전역 변수 a

//main 함수
int main() {
	for (int i = 0; i < 5; i++)
		func();

	return 0;
}

//fuck함수의 정의
void func() {
	int b = 0;
	//지역 변수 b
	static int c = 0;
	//static을 붙인 지역 변수 c

	cout << "변수 a는" << a << ", 변수 b는" << b << ", 변수 c는" << c << "입니다.\n";

	a++;
	b++;
	c++;
}*/

//LESSON 10.3 메모리를 동적으로 확보하기====================================================

//동적으로 메모리를 확보할 때는 new라는 연산자를 사용한다
//포인터 = new 형명;
//확보한 메모리를 헤제하려면 delete 포인터 명; 을 사용

/*
int main() {

	int* pA;

	pA = new int;
	//메모리 확보
	cout << "동적으로 메모리를 확보했습니다.\n";

	*pA = 10;

	cout << "동적으로 확보한 메모리를 사용하여" << *pA << "을(를) 출력했습니다.\n";

	delete pA;
	//메모리 해제

	cout << "확보한메모리를 해제했습니다.\n";

	return 0;
}*/

//배열을 동적으로 확보하기 2=========================================================

// 동적으로 확보할 때는 == 포인터 명 = new 형명[요소 개수]
// 동적으로 해제할 때는 == delete[] 포인터 명;
/*
int main() {
	int num;
	int* pT;

	cout << "몇 명의 시험 점수를 입력하시겠습니까?\n";

	cin >> num;
	//키보드로 숫자를 입력받음
	
	pT = new int[num];
	//입력받은 수만큼 배열 요소를 확보

	cout << num << "명 분의 점수를 입력하십시오\n";

	for (int i = 0; i < num; i++) {
		cin >> pT[i];
		//포인터를 사용하여 점수 저장
	}

	for (int j = 0; j < num; j++) {
		cout << j + 1 << "번째 사람의 점수는" << pT[j] << "입니다.\n";
	}
	delete[] pT;

	return 0;
}*/

//LESSON 10.4 파일 분할=============================================

//LESSON 11.1 typedef ====================================================

// typedef 형명 식별자; --> 형에 새로운 이름을 붙여 사용할 수 있음
// ex) typedef unsigned long int Count;  
// Count num =1;  == unsigned long int num =1; 과 같은 뜻으로 사용
//이미 존재하는 형에 별명을 붙여서 사용

//LESSON 11.2 열거==============================================================

//열거형 선언 == enum 열거형명 { 식별자1, 식별자2, ...};

	/*
	enum Week {SUN, MON, TUE, WED, THU, FRI, SAT};
	//열거형 선언

	int main() {
	Week w;
	//Week형 변수 w를 선언

	w = SUN;
	// 값 sun 대입

	switch (w) {
	case SUN: cout << "일요일입니다.\n";
		break;
	case MON: cout << "월요일입니다.\n";
		break;
	case TUE: cout << "화요일입니다.\n";
		break;
	case WED: cout << "수요일입니다.\n";
		break;
	case THU: cout << "목요일입니다.\n";
		break;
	case FRI: cout << "금요일입니다.\n";
		break;
	case SAT: cout << "토요일입니다.\n";
		break;
	default: cout << "무슨 요일인지 알 수 없습니다.\n";
		break;
	}

	return 0;
}*/

//LESSON 11.3 구조체==============================================

//구조체형의 선언
// struct 구조체형명{ 형명 식별자; 형명식별자; ... };

/*
//구조체형 Car의 선언
struct Car{
	int num;
double gas;
};

int main() {

	Car car1;
	//구조체형 변수 선언

	cout << "차량 번호를 입력하세요\n";
	cin >> car1.num;

	cout << "연료량을 입력하세요\n";
	cin >> car1.gas;

	cout << "차량 번호는" << car1.num << ":연료량은" << car1.gas << "입니다.\n";

	return 0;
}*/

//구조체 멤버에 접근하기==================================
/*
struct Car {
	int num;
	double gas;
};

int main() {
	Car car1 = { 1234, 25.5 };
	Car car2 = { 4567, 52.2 };

	cout << "car1의 차량 번호는" << car1.num << "이고 연료의 양은" << car1.gas << "입니다.\n";

	cout << "car2의 차량 번호는" << car2.num << "이고 연료의 양은" << car2.gas << "입니다.\n";

	car2 = car1;
	cout << "car1을 car2에 대입했습니다.\n";
	cout << "car2의 차량 번호는" << car2.num << "이고 연료의 양은" << car2.gas << "입니다.\n";

	return 0;
}*/

//LESSON 11.4 구조체 응용하기=========================================================
/*
struct Car {
	int num;
	double gas;
};

void show(Car c);
//구조체를 인수로 받는 함수

int main() {
	Car car1 = { 0, 0.0 };

	cout << "차량 번호를 입력하세요\n";
	cin >> car1.num;

	cout << "연료량을 입력하세요\n";
	cin >> car1.gas;

	show(car1);
	//구조체 car1의 값을 넘긴다

	return 0;
}

void show(Car c) {
	cout << "차량 번호는" << c.num << "이고 연료의 양은" << c.gas << "입니다.\n";
}*/
/*
struct Car {
	int num;
	double gas;
};

void show(Car* c);
//구조체를 인수로 받는 함수

int main() {
	Car car1 = { 0, 0.0 };

	cout << "차량 번호를 입력하세요\n";
	cin >> car1.num;

	cout << "연료량을 입력하세요\n";
	cin >> car1.gas;

	show(&car1);
	//구조체 car1의 값을 넘긴다

	return 0;
}

void show(Car* c) {
	cout << "차량 번호는" << c->num << "이고 연료의 양은" << c->gas << "입니다.\n";
								// (->)는 화살표 연산자
}*/
/*
struct Car {
	int num;
	double gas;
};

void show(Car& c);
//구조체를 인수로 받는 함수

int main() {
	Car car1 = { 0, 0.0 };

	cout << "차량 번호를 입력하세요\n";
	cin >> car1.num;

	cout << "연료량을 입력하세요\n";
	cin >> car1.gas;

	show(car1);
	//구조체 car1의 값을 넘긴다

	return 0;
}

void show(Car& c) {
	cout << "차량 번호는" << c.num << "이고 연료의 양은" << c.gas << "입니다.\n";
}*/

//LESSON 11.5 공용체=================================================================

/*
//공용체형 Year의 선언
union Year {
	int ad;
	int dangi;
};

int main()
{
	Year myyear;

	cout << "서기를 입력하세요\n";
	cin >> myyear.ad;

	cout << "서기" << myyear.ad << "년입니다.\n";
	cout << "단기 또한" << myyear.dangi << "년입니다.\n";

	cout << "단기를 입력하세요\n";
	cin >> myyear.dangi;

	cout << "단기" << myyear.dangi << "년입니다.\n";
	cout << "서기 또한" << myyear.ad << "년입니다.\n";

	return 0;
}*/
//연습===================================================================
//1.
/**
struct Person {
	int age;
	double weight;
	double height;
};
int main() {
	Person num1;
	Person num2;

	cout << "나이를 입력하세요\n";
	cin >> num1.age;
	cout << "몸무게를 입력하세요\n";
	cin >> num1.weight;
	cout << "키를 입력하세요\n";
	cin >> num1.height;


	cout << "나이를 입력하세요\n";
	cin >> num2.age;
	cout << "몸무게를 입력하세요\n";
	cin >> num2.weight;
	cout << "키를 입력하세요\n";
	cin >> num2.height;

	cout << "나이" << num1.age << "몸무게" << num1.weight << "키" << num1.height << "입니다.\n";

	cout << "나이" << num2.age << "몸무게" << num2.weight << "키" << num2.height << "입니다.\n";
	
	return 0;
}*/

//2.============================================================================
/*
struct Person {
	int age;
	double weight;
	double height;
};

void aging(Person* p);

int main() {
	Person num1;
	

	cout << "나이를 입력하세요\n";
	cin >> num1.age;
	cout << "몸무게를 입력하세요\n";
	cin >> num1.weight;
	cout << "키를 입력하세요\n";
	cin >> num1.height;

	cout << "나이" << num1.age << "몸무게" << num1.weight << "키" << num1.height << "입니다.\n";
	
	aging(&num1);
	cout << "1년이 지났습니다.\n";
	cout << "나이" << num1.age << "몸무게" << num1.weight << "키" << num1.height << "입니다.\n";
	
	return 0;
}

}*/



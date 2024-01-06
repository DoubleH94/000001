/*
* Language : C++, Korean, English
* last modified : 2024.01.05
*/

#include<stdio.h>
/**
* #include : 전처리기(Preprocessor or Precompiler), 컴파일 전에 처리할 것을 알려주는 키워드임.
* #include <> : 컴파일러가 설치된 폴더에서 해당 헤더파일을 include 하라는 명령어임.
* #include "" : 이 프로젝트의 폴더에서 헤더파일을 include 하라는 명령어, 해당 name의 헤더파일이 없을 시 /usr/include 에서 찾아서 include함
* stdio.h : 표준입출력헤더파일(Standard Input/Output Library)을 의미함.

*/
int main(void){
	printf("Hello World\n");
	/*
	* printf() : f는 formatted(서식이 지정된)의 약자이며, 서식화된 출력을 지원한다는 의미임.
		출력할 데이터를 어떤 서식에 맞춰 출력할지 서식 지정자(format specifier)를 통해 지정할 수 있음.
	* 이스케이프 시퀸스(Escape Sequence) : 백슬래쉬(\) 뒤에 한 문자 또는 숫자 조합이 오는 문자 조합을 의미함.
		프로그래밍 언어 특성상 표현할 수 없는 기능, 문자를 표현하기위한 문자열임.
		ex)\a(경고,alert), \n(줄바꿈, new line), \t(수평 탭, horizontal tab), \v(수직 탭, vertical tab), \b(백스페이스, backspace), \f(폼피드, form feed), \r(캐리지 리턴, carriage return), \\(백슬래쉬, backslash), \'(작은따옴표, single quotes), \"(큰따옴표, double quotes), \ooo(8진수 숫자를 아스키코드(ASCII code)의 문자 표현), \xhh(16진수 숫자를 아스키코드(ASCII code)의 문자 표현)
	*/
	return 0;
	/*
	* return : 함수가 종료되었다는 의미로 함수 내의 변수나 어떤 값을 돌려주는 역할을 함.
	* return 0; : 해당 함수를 정상적으로 끝내고 운영체제(Operating System)에게 기술한 값을 반환하고 실행중인 함수를 벗어나겠다는 의미임.
	*	C++ 표준에서 main 이 값을 return 하지 않아도 main이 끝나면 암묵적으로 0을 return 하는 것으로 인정하였으며, 포함되어 있지 않아도 정상적으로 실행됨.
	*
	*/
}
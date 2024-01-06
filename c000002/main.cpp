/*
* Language : C++, Korean, English
* last modified : 2024.01.06
* From : BAEKJOON11382
*/
#include<stdio.h>
/**
 * 
 * 자료형(data type) : 저장되는 데이터의 종류에 따른 형태로, 저장되는 값의 종류와 범위에 따라 다르게 표현됨
 * 정수형 변수 : char(1byte, -128 ~ 127),int(4byte, -2147483648 ~ 2147483647), unsigned int(4byte, 0 ~ 4294967295), long long int(8byte, 약 -922경~922경), short(2byte, -32768~32767)
 * 실수형 변수 : float(4byte, 3.4*10^-37~3.4*10^38), double(8byte, 1.7*10^-307~1.7*10^308)
 * 참조 : https://learn.microsoft.com/ko-kr/cpp/cpp/data-type-ranges?view=msvc-170
*/
int main(){
    long long a,b,c;
    scanf("%lld %lld %lld",&a,&b,&c);
    printf("%lld",a+b+c);
/**
 * 서식지정자 : Format Specifier, 컴퓨터가 어떤 정보를 어떻게 해석할지를 지정해줌.
 * %d(Demical, 부호가 있는 10진수 정수), %i(Integer, 부호가 있는 10진수 정수), %f(float, 10진수 표기법을 사용한 실수)
 * %lld(long long DEmical, 부호가 있는 10진수 정수)
 * C언어 표준(ANSI C)에 따라 변경된 서식지정자를 확인할 것.
 * 
*/
    return 0;
}
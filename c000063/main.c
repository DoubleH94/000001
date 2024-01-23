/*
* Language : C11, Korean, English
* last modified : 2024.01.18
* From : BAEKJOON24267
*/
#include<stdio.h>

int main(){
    long long n=0;

    scanf("%lld",&n);
    printf("%lld\n3\n",(n-2)*(n-1)*(n)/6);

    return 0;
}
/**
* http://mathman.kr/math/sigma.htm
* 거듭제곱의합
*/
/*
* Language : C++, Korean, English
* last modified : 2024.01.09
* From : BAEKJOON10813
*/

/*
 * 가변길이배열: VLA(Variable-length Array) : 프로그램 작성 시 배열의 크기를 컴파일 타임에 정하지 않고, 실행타임에 정할 수 있도록 하는 기능임.
 * C/C++에서는 배열의 크기를 컴파일 시간에 결정하는데, VLA의 경우 런타임 시간에 배열의 크기를 알아내 할당함.
 * 기존에 변수로 배열 크기를 선언하기 위해서는 동적 할당(Dynamic Memory Allocation)이 필요했음.
 * C에서는 C99부터 정식으로 추가된 기능이고, C++은 VLA를 지원하지 않음.
 * 그러나 C/C++ 두 언어 모두 gcc/g++,clang에서 컴파일해줌.(msvc는 VLA를 지원하지 않는다.)
 * 백준도 C++에서 VLA 기능을 사용할 수 있음.
*/
#include<stdio.h>

int main(){
    int ntemp,m;
    int i,j,temp=0;

    scanf("%d %d",&ntemp,&m);
    int n[ntemp]={0, };
    for(int a=0; a<ntemp;a++){
        n[a]= a+1 ;
    }

    for(int a=0; a<m;a++){
        scanf("%d %d", &i,&j);
        temp = n[(i-1)];
        n[(i-1)] = n[(j-1)];
        n[(j-1)] = temp;
    }

    for(int a=0; a<ntemp;a++){
        printf("%d",n[a]);
        if(a != (ntemp-1))printf(" ");
    }

    return 0;
}
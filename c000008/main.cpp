/*
* Language : C++, Korean, English
* last modified : 2024.01.09
* From : BAEKJOON25314
*/
#include<stdio.h>

int main(){
    int N;
    scanf("%d",&N);
    N /= 4;
    for(int i=0; i< N ; i++){
        printf("long ");
    }
    printf("int");

    return 0;
}
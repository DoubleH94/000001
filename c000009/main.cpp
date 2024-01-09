/*
* Language : C++, Korean, English
* last modified : 2024.01.09
* From : BAEKJOON2438
*/
#include<stdio.h>

int main(){
    int N;
    scanf("%d", &N);

    for(int i =0; i < N; i++){
        for(int j =0 ; j <= i ; j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
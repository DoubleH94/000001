/*
* Language : C++, Korean, English
* last modified : 2024.01.09
* From : BAEKJOON2739
*/
#include<stdio.h>

int main(){
    int N;
    scanf("%d",&N);

    for(int i = 1; i <= 9; i++){
        printf("%d * %d = %d\n",N,i, N*i);

    }
    return 0;
}
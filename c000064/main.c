/*
* Language : C11, Korean, English
* last modified : 2024.01.18
* From : BAEKJOON24313
*/
#include<stdio.h>

int main(){
    int a1=0,a0=0;
    int c=8;
    int n0=0;

    scanf("%d %d %d %d",&a1,&a0,&c,&n0);
    if(a1*n0+a0<=c*n0 && a1<=c){
        printf("1");
    }else{
        printf("0");
    }
    return 0;
}
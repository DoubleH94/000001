/*
* Language : C++, Korean, English
* last modified : 2024.01.09
* From : BAEKJOON1330
*/
#include<stdio.h>

int main(){
    int a,b;
    
    scanf("%d %d",&a, &b);
    
    if(a > b){
        printf(">");
    }else if(a == b){
        printf("==");
    }else{
        printf("<");
    }
    return 0;
}
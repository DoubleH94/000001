/*
* Language : C11, Korean, English
* last modified : 2024.01.14
* From : BAEKJOON2903
*/
#include<stdio.h>
//2^2, 3^2, 5^2, 9^2, 17^2,
int main(){
    int n=0,a=2;
    scanf("%d",&n);
    
    for(int i =0;i<n;i++){
            a+= a-1;
    }
    
    printf("%d",a*a);
    
    return 0;
}
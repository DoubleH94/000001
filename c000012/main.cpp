/*
* Language : C++, Korean, English
* last modified : 2024.01.09
* From : BAEKJOON10871
*/
#include<stdio.h>

int main(){
    int n,x;
    scanf("%d %d", &n, &x);

    int a[n]={0, };

    for(int i =0; i<n;i++){
        scanf("%d", &a[i]);
    }

    for(int i =0; i<n;i++){
        if(a[i] < x)printf("%d ", a[i]);
    }
    
    return 0;
}
/*
* Language : C++, Korean, English
* last modified : 2024.01.09
* From : BAEKJOON25304
*/
#include<stdio.h>

int main(){
    int x,y = 0,n,a,b;
    scanf("%d",&x);
    scanf("%d",&n);

    for(int i = 0 ; i < n ; i++){
        scanf("%d %d", &a, &b);
        y += a*b;
    }
    if(x == y){
        printf("Yes");
    }else{
        printf("No");
    }
    return 0;
}
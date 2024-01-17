/*
* Language : C11, Korean, English
* last modified : 2024.01.17
* From : BAEKJOON1085
*/
#include<stdio.h>
int main(){
    int x=0,y=0,w=0,h=0;
    scanf("%d %d %d %d",&x,&y,&w,&h);
    if(x<=w-x&&x<=y&&x<=h-y){
        printf("%d",x);
    }else if(y<=x&&y<=w-x&&y<=h-y){
        printf("%d",y);
    }else if(w-x<=h-y){
        printf("%d",w-x);
    }else{
        printf("%d",h-y);
    }

    return 0;
}
/*
* Language : C11, Korean, English
* last modified : 2024.01.14
* From : BAEKJOON2869
*/
#include<stdio.h>

int main(){
    int a=0,b=0,v=0,temp=0,ans=0;

    scanf("%d %d %d",&a,&b,&v);
    if((v-a)%(a-b)!=0){
        temp=(v-a)/(a-b)+1;
        ans=temp+1;
    }else{
        temp=(v-a)/(a-b);
        ans=temp+1;
    }
    
    printf("%d",ans);
    return 0;
}
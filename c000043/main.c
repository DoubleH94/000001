/*
* Language : C11, Korean, English
* last modified : 2024.01.14
* From : BAEKJOON2292
*/
#include<stdio.h>

int main(){
    int n=0,temp=1,ans=0;

    scanf("%d",&n);
    if(n==1){
        ans=1;
    }else{
        for(int i =1;;i++){
            temp+=(6*i);
            if(n<=temp){
                ans=i+1;
                break;
            }
        }
    }

    printf("%d",ans);
    return 0;
}
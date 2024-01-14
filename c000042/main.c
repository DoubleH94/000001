/*
* Language : C11, Korean, English
* last modified : 2024.01.14
* From : BAEKJOON1193
*/
#include<stdio.h>

int main(){
    int x=0,temp=0,cnt=0,a=0,b=0;
    scanf("%d",&x);

    for(int i =1;;i++){
        temp=(i*(i+1))/2;
        if(x <=temp){
            cnt=i;
            break;
        }
    }
    //printf("%d",cnt);
    if(cnt%2==0){
        a=x-((cnt-1)*(cnt-1+1))/2;
        b=cnt+1-a;
    }else{
        b=x-((cnt-1)*(cnt-1+1))/2;
        a=cnt+1-b;
    }
    printf("%d/%d",a,b);
    return 0;
}
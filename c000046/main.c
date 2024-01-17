/*
* Language : C11, Korean, English
* last modified : 2024.01.18
* From : BAEKJOON2501
*/
#include<stdio.h>

int main(){
    int n=0,k=0,cnt=0,ans=0;

    scanf("%d %d",&n,&k);
    for(int i =1;i<=(n/2);i++){
        if(n%i==0){
            cnt++;
            if(cnt==k){
                ans=i;
                break;
            }else{}
        }else{}
        if(i==(n/2)){
            cnt++;
            if(cnt==k){
                ans=n;
                break;
            }else{}
        }else{}
    }

    printf("%d",ans);
    return 0;
}
/**
 * 시간복잡도를 줄이기위해 (n/2)까지 for문을 돌리니까 n이 약수인것은 무시됨>if문 추가
*/
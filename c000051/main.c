/*
* Language : C11, Korean, English
* last modified : 2024.01.18
* From : BAEKJOON9063
*/
#include<stdio.h>
#include<memory.h>

int main(){
    int n=0;
    long long xtemp=0,ytemp=0;
    long long x[2],y[2];
    memset(x,0,2*sizeof(long long));
    memset(y,0,2*sizeof(long long));

    scanf("%d",&n);
    scanf("%lld %lld",&xtemp,&ytemp);
    x[0]=xtemp;x[1]=xtemp;y[0]=ytemp;y[1]=ytemp;

    for(int i =1;i<n;i++){
        scanf("%lld %lld",&xtemp,&ytemp);
        if(xtemp<=x[0]){
            x[0]=xtemp;
        }else if(xtemp >=x[1]){
            x[1]=xtemp;
        }else{}

        if(ytemp<=y[0]){
            y[0]=ytemp;
        }else if(ytemp >=y[1]){
            y[1]=ytemp;
        }else{}
    }
    //printf("%lld %lld %lld %lld",x[1],x[0],y[1],y[0]);
    printf("%lld",(x[1]-x[0])*(y[1]-y[0]));
    return 0;
}
/**
 * 초기화 하려면 min은 최댓값(10,000), max는 최솟값(-10,000)으로 > 첫번째 입력이 제대로 들어오도록 
*/
/*
* Language : C11, Korean, English
* last modified : 2024.01.18
* From : BAEKJOON2581
*/
#include<stdio.h>

int main(){
    int m=0,n=0,sum=0,min=10001;
    scanf("%d %d",&m,&n);

    for(int i=m;i<=n;i++){
        if(i==2){
            sum+=2;
            min=2;
            continue;
        }else if(i==3){
            sum+=3;
            if(min>3)min=3;
            continue;
        }
        for(int j=2;j<=(i/2);j++){
            if(i%j==0){
                break;
            }else{}
            if(j==(i/2)){
                sum += i;
                if(min>i){
                    min=i;
                }else{}
            }else{}
        }
    }
    if(min == 10001){
        printf("-1");
    }else{
        printf("%d\n%d",sum,min);
    }
    return 0;
}

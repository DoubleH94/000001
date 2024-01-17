/*
* Language : C11, Korean, English
* last modified : 2024.01.18
* From : BAEKJOON9506
*/
// ref : 약수==divisor
#include<stdio.h>
#include<memory.h>

int main(){
    int n=0,ntemp=0,cnt=0;
    int div[100001];
    memset(div, 0, 100001*sizeof(int));

    while(1){
        scanf("%d",&n);
        if(n==-1){
            break;
        }else{
            for(int i =1;i<=(n/2);i++){
                if(n%i==0){
                    div[cnt]=i;
                    cnt++;
                }else{}
            }
            for(int i=0;i<cnt;i++){
                ntemp += div[i];
            }
            if(n==ntemp){
                printf("%d =",n);
                for(int i=0;i<cnt;i++){
                    printf(" %d",div[i]);
                    if(i < (cnt-1)){
                        printf(" +");
                    }else if(i == (cnt-1)){
                        printf("\n");
                    }else{}
                }
            }else{
               printf("%d is NOT perfect.\n",n); 
            }
        }
        n=0;ntemp=0;cnt=0;
        memset(div, 0, 100001*sizeof(int));
    }
    return 0;
}
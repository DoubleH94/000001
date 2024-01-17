/*
* Language : C11, Korean, English
* last modified : 2024.01.18
* From : BAEKJOON11653
*/
#include<stdio.h>
#include<stdbool.h>

int main(){
    int n=0,ntemp=0;
    bool flag=false;
    scanf("%d",&n);
    ntemp=n;
    if(ntemp !=1){
        for(int i =2;i<=n;i++){
            while(1){
                if(ntemp%i !=0){
                    break;
                }else{
                    printf("%d",i);
                    ntemp /=i;
                    //printf(", ntemp : %d",ntemp);
                    if(ntemp != 1){
                        printf("\n");
                    }else{
                        flag=true;
                        break;
                    }
                }
            }
            if(flag==true){
                break;
            }else{}
        }
    }
    return 0;
}
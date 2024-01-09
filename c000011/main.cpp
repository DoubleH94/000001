/*
* Language : C++, Korean, English
* last modified : 2024.01.09
* From : BAEKJOON10807
*/
#include<stdio.h>

int main(){
    int temp,v,cnt=0;
    scanf("%d",&temp);

    int N[temp] = {0, };
    //printf("temp : %d\n", temp);
    for(int i = 0 ; i < temp ; i++ ){
        scanf("%d", &N[i]);
    }
    scanf("%d", &v);
    for(int i = 0 ; i < temp ; i++ ){
        if(v == N[i])cnt++;
    }
    
    printf("%d",cnt);

    return 0;
}
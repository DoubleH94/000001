/*
* Language : C++, Korean, English
* last modified : 2024.01.09
* From : BAEKJOON10810
*/
#include<stdio.h>

int main(){
    int temp,m;
    int i,j,k;
    scanf("%d %d",&temp, &m);
    int n[temp] = {0, };

    for(int a =0; a<m; a++){
        scanf("%d %d %d",&i,&j,&k);
        for(int b =0; b<(j-i+1); b++){
            n[(i+b)-1] = k;
        }
    }

    for(int a =0; a<temp; a++){
        printf("%d",n[a]);
        if(a != (temp-1))printf(" ");
    }

    return 0;
}
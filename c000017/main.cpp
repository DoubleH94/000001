/*
* Language : C++, Korean, English
* last modified : 2024.01.09
* From : BAEKJOON10811
*/
#include<stdio.h>

int main(){

    int ntemp,m;
    int i,j;
    scanf("%d %d", &ntemp, &m);
    int n[ntemp],temp[ntemp]={0};

    for(int a =0; a<ntemp; a++){
        n[a] = a+1;
    }

    for(int a =0; a<m; a++){
        scanf("%d %d",&i,&j);

        if(i != j){
            for(int b=0; b<(j-i+1); b++){
                temp[b]=n[i+b-1];
            }
            for(int b=0; b<(j-i+1); b++){
                n[(j-1)-b]=temp[b];
            }
        }else{}

    }

    for(int a =0; a<ntemp; a++){
        printf("%d",n[a]);
        if(a != (ntemp-1))printf(" ");
    }
    return 0;
}
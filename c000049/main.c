/*
* Language : C11, Korean, English
* last modified : 2024.01.17
* From : BAEKJOON3009
*/
#include<stdio.h>
#include<memory.h>

int main(){
    int x[4],y[4];
    memset(x,0,4*sizeof(int));
    memset(y,0,4*sizeof(int));

    for(int i=0;i<4;i++){
        scanf("%d %d",&x[i],&y[i]);//getchar()필요한지체크
    }
    if(x[0]==x[1]){
        x[3]=x[2];
    }else if(x[0]==x[2]){
        x[3]=x[1];
    }else{
        x[3]=x[0];
    }
    if(y[0]==y[1]){
        y[3]=y[2];
    }else if(y[0]==y[2]){
        y[3]=y[1];
    }else{
        y[3]=y[0];
    }

    printf("%d %d",x[3],y[3]);
    return 0;
}
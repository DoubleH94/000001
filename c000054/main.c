/*
* Language : C11, Korean, English
* last modified : 2024.01.18
* From : BAEKJOON14215
*/
#include<stdio.h>

int main(){
    int sida=0,sidb=0,sidc=0;

    scanf("%d %d %d",&sida,&sidb,&sidc);
    if(sida+sidb>sidc&&sida+sidc>sidb&&sidb+sidc>sida){
        printf("%d",sida+sidb+sidc);
    }else if(sida+sidb<=sidc){
        printf("%d",(2*sida)+(2*sidb)-1);
    }else if(sida+sidc<=sidb){
        printf("%d",(2*sida)+(2*sidc)-1);
    }else if(sidb+sidc<=sida){
        printf("%d",(2*sidb)+(2*sidc)-1);
    }
    return 0;
}
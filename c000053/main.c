/*
* Language : C11, Korean, English
* last modified : 2024.01.18
* From : BAEKJOON5073
*/
#include<stdio.h>
int main(){
    int sida=0,sidb=0,sidc=0;

    for(int i =0;;i++){
        scanf("%d %d %d",&sida,&sidb,&sidc);
        //printf("%d %d %d\n",sida,sidb,sidc);
        if(sida==0&&sidb==0&&sidc==0){
            break;
        }else if(sida+sidb<=sidc||sidb+sidc<=sida||sida+sidc<=sidb){
            printf("Invalid\n");
        }else if(sida==sidb&&sida==sidc){
            printf("Equilateral\n");
        }else if(sida==sidb||sida==sidc||sidb==sidc){
            printf("Isosceles\n");
        }else{
            printf("Scalene\n");
        }
    }

    return 0;
}
/**
 * 개행문자 안넣어서 틀림>넣어야됨
*/  
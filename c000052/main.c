/*
* Language : C11, Korean, English
* last modified : 2024.01.17
* From : BAEKJOON10101
*/
#include<stdio.h>
int main(){
    int anga=0,angb=0,angc=0;
    scanf("%d %d %d",&anga,&angb,&angc);

    if(anga+angb+angc != 180){
        printf("Error");
    }else if(anga==60&&angb==60){
        printf("Equilateral");
    }else if(anga==angb||anga==angc||angb==angc){
        printf("Isosceles");
    }else{
        printf("Scalene");
    }
    return 0;
}
/*
* Language : C++, Korean, English
* last modified : 2024.01.09
* From : BAEKJOON5597
*/
#include<stdio.h>
#include<stdbool.h> // bool, true, false
/**
 * C에서 stdbool.h를 추가하면 bool,true,false를 사용할 수 있음
 * C99에 추가된 표준임.
 * https://medium.com/@kyle_seongwoo_jun/c%EC%97%90%EC%84%9C-bool-%ED%83%80%EC%9E%85-%EA%B7%B8%EB%A6%AC%EA%B3%A0-%EC%9D%B4%EC%97%90-%EB%8C%80%ED%95%9C-%EA%B3%A0%EC%B0%B0-105ecaf1db02
*/
int main(){
    int temp=0;bool flag = false;
    bool student[30]= {false, };

    for(int i =0; i<28;i++){
        scanf("%d",&temp);
        student[(temp-1)] = true;
    }

    for(int i =0; i<30;i++){
        if(student[i] == false){
            printf("%d",i+1);
            if(flag == false)printf("\n");
            flag = true;
        }
    }
    return 0;
}
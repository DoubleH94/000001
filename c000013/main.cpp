/*
* Language : C++, Korean, English
* last modified : 2024.01.09
* From : BAEKJOON2562
*/
#include<stdio.h>

int main(){
    int temp = 0;
    int a[9] = {0, };

    for(int i =0;i< 9;i++){
        scanf("%d", &a[i]);
    }

    for(int i =0;i< 9;i++){
        if(i==0){
            temp = i;
        }else if(a[temp] < a[i]){
            temp = i;
        }
    }

    printf("%d\n%d", a[temp], (temp+1));

    return 0;
}
/*
* Language : C11, Korean, English
* last modified : 2024.01.11
* From : BAEKJOON2444
*/

#include<stdio.h>

int main(){
    int n=0;
    scanf("%d", &n);

    for(int i =1;i<=(n-1) ;i++){
        for(int j =0 ; j<(n-i);j++)     {printf(" ");}
        for(int j =0 ; j<(2*i-1);j++)   {printf("*");}
        //for(int j =0 ; j<(n-i);j++)     {printf(" ");}
        printf("\n");
    }
    
    for(int i =0;i<(2*n-1) ;i++)        {printf("*");}

    printf("\n");

    for(int i =(n-1);i>=1 ;i--){
        for(int j =0 ; j<(n-i);j++)     {printf(" ");}
        for(int j =0 ; j<(2*i-1);j++)   {printf("*");}
        //for(int j =0 ; j<(n-i);j++)     {printf(" ");}
        printf("\n");
    }

    return 0;
}
/*
* Language : C++, Korean, English
* last modified : 2024.01.09
* From : BAEKJOON10809
*/
#include<stdio.h>
/**
 * 문자열을 처리할 때에는 항상 문자열+1칸을 확보해야함. 문자열의 마지막에 NULL값이 들어가기 때문에
*/
int main(){
    int len=0;
    char s[101]={0};
    int p[26]={0};
    for(int i =0 ; i< 26; i++){p[i]=-1;}

    scanf("%s",s);
    for(int i =0 ; i<101 ; i++){
        if(s[i] == 0){
          len=i;
          break;
        } 
    }
    for(int i =0 ; i<len ; i++){
        if(p[(s[i]-97)] == -1){
            p[(s[i]-97)] = i;
        }
        
    }
    for(int i =0 ; i<26 ; i++){
        printf("%d",p[i]);
        if(i < 25)printf(" ");
    }

    return 0;
}
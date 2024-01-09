/*
* Language : C++, Korean, English
* last modified : 2024.01.09
* From : BAEKJOON27866
*/

#include<stdio.h>

int main(){
    char s[1000];
    int i;
    scanf("%s",s);
    scanf("%d", &i);
    
    printf("%c",s[(i-1)]);

    return 0;
}
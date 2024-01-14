/*
* Language : C++, Korean, English
* last modified : 2024.01.09
* From : BAEKJOON9086
*/
#include<stdio.h>
//#include<string.h>
/**
 * https://www.acmicpc.net/board/view/133392#post
 * https://stackoverflow.com/questions/3082914/c-compile-error-variable-sized-object-may-not-be-initialized
*/
int main(){
    int t,cnt=0;
    scanf("%d",&t);
    char s[t][1000]={0};
    int l[t]={0};

    for(int i=0; i<t;i++){
        scanf("%s",s[i]);
    }

    for(int i=0; i<t;i++){
        while(s[i][cnt]!=0){cnt++;}
        l[i] = cnt;
        cnt = 0;
    }
/*
    for(int i=0; i<t;i++){
        printf("%d\n",l[i]);
    }
*/
    for(int i=0; i<t;i++){
        printf("%c%c\n",s[i][0],s[i][(l[i]-1)]);
    }
/**
    for(int i=0; i<t;i++){
        printf("%c%c\n",s[i][0],s[i][strlen(s[i])-1]);
    }

*/
    return 0;
}
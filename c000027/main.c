/*
* Language : C11, Korean, English
* last modified : 2024.01.10
* From : BAEKJOON11718
*/
#include<stdio.h>
#include<string.h>  // memset, strlen

#define inputLEN 100
#define strLEN 101

int main(){

    char str[inputLEN*strLEN];
    memset(str, 0, inputLEN*strLEN*sizeof(char));

    while(scanf("%[^\n]s",str) != EOF){
        printf("%s\n", str);
        getchar();
    }
/*  테스트
    scanf("%[^\n]s",str);
    getchar();
    printf("%s", str);

    scanf("%[^\n]s",str);
    getchar();
    printf("%s", str);

    scanf("%[^\n]s",str);
    getchar();
    printf("%s", str);
*/

/*  첫줄만 받고 무한루프

    while(scanf("%[^\n]s",str) != EOF){
        printf("%s\n", str);
    }

*/
/* 안됨
    char str[inputLEN][strLEN];
    memset(str, 0, inputLEN*strLEN*sizeof(char));

    for(int i =0;scanf("%[^\n]s",str[i]) != EOF ;i++){    }
    for(int i =0;str[i][0] != 0 ;i++){
        printf("%s\n",str[i]);
    }
*/    
    return 0;
}

/**
 * https://plustag.tistory.com/1
 * 입력버퍼 초기화 : getchar();
 * 
 * https://donggod.tistory.com/55
 * scanf()는 에러가 발생하거나 EOF를 만나면 -1을 return함.
 * 
 * Windows 환경에서는 EOF를 발생시키기 위해 Ctrl+Z와 Enter를 입력하면 됨
*/


/*
* Language : C++, Korean, English
* last modified : 2024.01.09
* From : BAEKJOON2743
*/
#include<stdio.h>
/**
 * NULL값은 출력이 안된다
*/
int main(){
    int cnt=0;
    char a[100]={0};

    /*for(int i=0; i< 100; i++){
        a[i] = 97;
        printf("%c", a[i]);
    }
    */
    scanf("%s",a);
    while(a[cnt] != 0)cnt++;

    printf("%d", cnt);

    return 0;
}

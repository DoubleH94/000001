/*
* Language : C11, Korean, English
* last modified : 2024.01.10
* From : BAEKJOON1152
*/
#include<stdio.h>
#include<string.h> // strlen
#define LEN 1000000

int main(){
    int cnt=0, len =0 ;
    char s[LEN];

    scanf("%[^\n]s",s);
    //printf("%s1\n",s);
    len= strlen(s);
    //printf("%d\n",len);

    cnt++;
    for(int i =1 ; i<len ; i++){
        if(s[i] == ' ')cnt++;
    }
    //if(s[0] == ' ')cnt--;
    if(s[len-1] == ' ')cnt--;

    printf("%d",cnt);
/*
    scanf("%s",s);
// scanf("[^\n]%s",s);
// printf("%s",s); // 출력없음
    len= strlen(s);
    printf("%d\n",len);
    for(int i =0 ; i < len ; i++){
        printf("%c",s[i]);
    }
    printf("%d",cnt);
*/

    return 0;
}
/**
 * https://omyodevelop.tistory.com/120
*/
/*
* Language : C11, Korean, English
* last modified : 2024.01.10
* From : BAEKJOON5622
*/
#include<stdio.h>
#include<string.h>  // memset, strlen

#define LEN 15

int main(){
    int cnt =0, len =0;
    char str[LEN];
    memset(str, 0, LEN*sizeof(char));

    scanf("%s",str);
    len=strlen(str);

    for(int i=0;i<len;i++){
        switch(str[i]){
            case 'A': case 'B': case 'C':
                cnt += 3;
                break;
            case 'D': case 'E': case 'F':
                cnt += 4;
                break;
            case 'G': case 'H': case 'I':
                cnt += 5;
                break;
            case 'J': case 'K': case 'L':
                cnt += 6;
                break;
            case 'M': case 'N': case 'O':
                cnt += 7;
                break;
            case 'P': case 'Q': case 'R': case 'S':
                cnt += 8;
                break;
            case 'T': case 'U': case 'V':
                cnt += 9;
                break;
            case 'W': case 'X': case 'Y': case 'Z':
                cnt += 10;
                break;    
            default:
                break;
        }
    }

    printf("%d", cnt);

    return 0;
}
/**
 * https://wikidocs.net/26932
 * https://www.includehelp.com/c-programs/duplicate-case-value-error-in-c.aspx
 * Error: duplicate case value // case문에 동일한 case가 2개 이상이면 발생
*/
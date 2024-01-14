/*
* Language : C11, Korean, English
* last modified : 2024.01.11
* From : BAEKJOON10988
*/
#include<stdio.h>
#include<string.h>  // memset, strlen
#include<stdbool.h> // bool, true, false

int main(){
    int len=0;
    bool even = false,flag=true;
    char str[101];
    memset(str, 0, 101*sizeof(char));

    scanf("%s", str);
    len = strlen(str);
    if((len%2) == 0)even = true;

    switch(even){
        case true :
            for(int i =0;i<(len/2);i++){
                if(str[i] != str[(len-1-i)])flag=false;
            }
            break;
        case false :
            for(int i =0;i<((len-1)/2);i++){
                if(str[i] != str[(len-1-i)])flag=false;
            }
        
            break;
        deafult :
            break;
    }
    
    printf("%d", flag);

    return 0;
}
/*
* Language : C11, Korean, English
* last modified : 2024.01.14
* From : BAEKJOON2745
*/
#include<stdio.h>
#include<string.h>  //memset, strlen

int main(){
    int n=0,len=0,result=0, temp=0;
    char str[31];
    memset(str, 0, 31*sizeof(char));

    scanf("%s %d",str,&n);
    len=strlen(str);

    for(int i =0; i<len;i++){
        if(str[i]>= 'A'){
            temp=str[i]-'A'+10;
            for(int j =0;j<(len-1-i);j++){
                temp *= n;
            }
        }else if(str[i]>='0'){
            temp=str[i]-'0';
            for(int j =0;j<(len-1-i);j++){
                temp *= n;
            }            
        }else{}
        result += temp;
    }

    printf("%d",result);
    return 0;
}
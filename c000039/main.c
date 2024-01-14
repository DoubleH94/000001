/*
* Language : C11, Korean, English
* last modified : 2024.01.14
* From : BAEKJOON11005
*/
#include<stdio.h>
#include<string.h>  //memset, strlen

int main(){
    int n=0,len=0,b=0,temp=0;
    char str[31];//10억(2) : 30자리
    memset(str, 0, 31*sizeof(char));

    scanf("%d %d",&n,&b);

    if(b> 10){
        for(int i =0;n!=0;i++){
            temp = n%b;
            if(temp>=10){
                str[i]=temp-10+'A';
                n/=b;
            }else{
                str[i]=temp+'0';
                n/=b;
            }
        }
    }else{
        for(int i =0; n!=0 ;i++){
            str[i]=n%b+'0';
            n/=b;
        }
    }

    len=strlen(str);
    for(int i =len-1; i>=0;i--){
        printf("%c",str[i]);
    }
    
    return 0;
}
/**
 * https://sweetnew.tistory.com/218
*/
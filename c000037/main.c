/*
* Language : C11, Korean, English
* last modified : 2024.01.13
* From : BAEKJOON2563
*/
#include<stdio.h>
#include<memory.h> //memset

int main(){
    int n=0,cnt=0;
    int white[101][101]={0, },black[2]={0, };
    
    scanf("%d",&n);
    //getchar();

    for(int i =0; i<n;i++){
        scanf("%d %d",&black[0], &black[1]);
        //printf("%d %d\n",black[0], black[1]);

        for(int i = black[0]; i<(black[0]+10);i++){
            for(int j = black[1]; j<(black[1]+10);j++){
                    white[i][j]= 1;
            }
        }
    }
    for(int i=0;i<100;i++){
        for(int j=0;j<100;j++){
            if(white[i][j] == 1)cnt++;
        }
    }
    printf("%d",cnt);
    
    return 0;
}
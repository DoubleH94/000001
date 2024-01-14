/*
* Language : C11, Korean, English
* last modified : 2024.01.10
* From : BAEKJOON2675
*/
#include<stdio.h>
#include<string.h> // memset, strlen

int main(){
    int t=0, r[1000]={0};
    int len=0, cnt =0;
    scanf("%d",&t);
    char s[t][21];
    char s2[t][161];
    memset(s, 0, t*21*sizeof(char));
    memset(s2, 0, t*161*sizeof(char));

    for(int i=0; i< t; i++){
        scanf("%d %s",&r[i],s[i]);

    }
/*
    for(int i=0; i< t; i++){
        printf("%d %s\n",r[i],s[i]);
    }
*/
    for(int i=0; i< t; i++){
        len = strlen(s[i]);
        for(int j=0;j<(r[i]*len) ;j++){
            if(j != 0 && (j%r[i]) == 0)cnt++;
            s2[i][j]=s[i][cnt];
        }
        cnt = 0;
    }

    for(int i = 0 ; i< t;i++){
        printf("%s\n",s2[i]);
    }

    return 0;
}
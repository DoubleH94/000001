/*
* Language : C11, Korean, English
* last modified : 2024.01.13
* From : BAEKJOON1316
*/
#include<stdio.h>
#include<string.h>  // memset, strlen
#include<stdbool.h> // bool, false, true

int main(){
    int n=0, len=0, cnt=0;
    bool flag=true;
    char str[101];
    int alp[26];
    memset(str, 0, 101*sizeof(char));
    memset(alp, 0, 26*sizeof(int));

    scanf("%d",&n);

    for(int i =0;i<n;i++){
        scanf("%s",str);
        len=strlen(str);

        alp[str[0]-'a']++;
        for(int j=1;j<len;j++){
            if(str[j]!=str[j-1]){

                alp[str[j]-'a']++;
                for(int k=0;k<26;k++){
                    if(alp[k] > 1){
                        //printf("false : %c\n",k+'a');
                        flag=false;break;
                    }

                }

            }

            if(flag==false){break;}
        }
        if(flag == true){
            cnt++;
        }else{
            flag = true;
        }
        //len=0;
        memset(str,0,101*sizeof(char));
        memset(alp,0,26*sizeof(int));
    }

    printf("%d",cnt);
    return 0;
}
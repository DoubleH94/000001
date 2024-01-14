/*
* Language : C11, Korean, English
* last modified : 2024.01.13
* From : BAEKJOON2941
*/
#include<stdio.h>
#include<string.h>  // memset, strlen

int main(){
    int len=0,cnt=0;
    char str[101];
    memset(str, 0, 101*sizeof(char));

    scanf("%s",str);
    len=strlen(str);

    for(int i =0;i<len;i++){
        switch(str[i]){
            case 'c' :
                if(str[i+1] == '='){cnt++;i++;}
                else if(str[i+1] == '-'){cnt++;i++;}
                else{cnt++;}
                break;
            case 'd' : 
                if(str[i+1] == 'z' && str[i+2] == '='){cnt++;i += 2;}
                else if(str[i+1] == '-'){cnt++;i++;}
                else{cnt++;}
                break;
            case 'l' :
                if(str[i+1] == 'j'){cnt++;i++;}
                else{cnt++;}
                break;
            case 'n' :
                if(str[i+1] == 'j'){cnt++;i++;}
                else{cnt++;}
                break;
            case 's' :
                if(str[i+1] == '='){cnt++;i++;}
                else{cnt++;}
                break;
            case 'z' :
                if(str[i+1] == '='){cnt++;i++;}
                else{cnt++;}
                break;
            default : 
                cnt++;
                break;
        }

    }

    printf("%d",cnt);

    return 0;
}
/*
* Language : C11, Korean, English
* last modified : 2024.01.13
* From : BAEKJOON10798
*/
#include<stdio.h>
#include<string.h>  // memset, strlen


int main(){
/*  원하는 문자까지 입력 처리가 어려움
    char arr[5][16]={0,};

    for(int i=0;i<5;i++){
        for(int j=0;j<15;j++){
            arr[i][j] = -1;
        }
    }

    for(int i=0;i<5;i++){
        for(int j=0;j<16;j++){
            scanf("%c",&arr[i][j]);
            if(getchar() == '\n'){  //** scanf를 한번 더 돌리는 효과라 한 글자씩 씹힘
                break;              //**
            }
        }
    }

    for(int i=0;i<15;i++){
        for(int j=0;j<5;j++){
            if(arr[j][i] != 0){
                printf("%c",arr[j][i]);
            }
        }
    }
    printf("----------------------\n");
    for(int i=0;i<5;i++){
        for(int j=0;j<15;j++){
            printf("%c",arr[i][j]);
            if(j != 14)printf(" ");
        }
        printf("\n");
    }
*/
    int len[5];
    char str[5][16];
    memset(len, 0, 5*sizeof(int));
    memset(str, 0, 5*16*sizeof(char));

    for(int i =0;i<5;i++){
        scanf("%s",str[i]);
        len[i]=strlen(str[i]);
        //getchar();
    }
/*
    for(int i =0;i<5;i++){
        printf("%s : %d\n",str[i],len[i]);
    }
*/
    for(int i=0;i<15;i++){
        for(int j =0;j<5;j++){
            if(str[j][i] != 0)printf("%c",str[j][i]);//c11에서는 if문이 없어도 잘 출력됨, NULL값은 출력 안되는듯?, c99에서는 NULL값이 출력됨
        }
    }
    return 0;

}
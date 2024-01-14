/*
* Language : C11, Korean, English
* last modified : 2024.01.13
* From : BAEKJOON2738
*/
#include<stdio.h>
#include<stdlib.h>  // malloc, free
#include<memory.h>  //memset

int main(){

    int n=0,m=0;
    
    scanf("%d %d",&n,&m);
/*
    int arra[n][m],arrb[n][m];
    memset(arra, 0, n*m*sizeof(int));
    memset(arrb, 0, n*m*sizeof(int));
*/

    int** arra = (int**)malloc(sizeof(int*)*n);
    for(int i =0;i<n;i++){
        arra[i]=(int*)malloc(sizeof(int)*m);
    }
    int** arrb = (int**)malloc(sizeof(int*)*n);
    for(int i =0;i<n;i++){
        arrb[i]=(int*)malloc(sizeof(int)*m);
    }

    for(int i =0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d",&arra[i][j]);
        }
        getchar();
    }

    for(int i =0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d",&arrb[i][j]);
        }
        getchar();
    }

    for(int i =0;i<n;i++){
        for(int j=0;j<m;j++){
            printf("%d",(arra[i][j]+arrb[i][j]));
            if(j != m-1){printf(" ");}
        }
        printf("\n");
    }


    for(int i =0;i<n;i++){
        free(arra[i]);
    }
    free(arra);
    for(int i =0;i<n;i++){
        free(arrb[i]);
    }
    free(arrb);

    return 0;
}
/**
 * https://coding-factory.tistory.com/672
 * 2차원배열의 동적할당
 * https://hoit1302.tistory.com/156
 * 2차원배열의 동적할당
*/
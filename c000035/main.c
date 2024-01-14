/*
* Language : C11, Korean, English
* last modified : 2024.01.13
* From : BAEKJOON2566
*/
#include<stdio.h>
#include<memory.h> //memset
int main(){
    int n=0,m=0,max=0;
    int arr[9][9]={0, };

    for(int i =0;i<9;i++){
        for(int j =0;j<9;j++){
            scanf("%d",&arr[i][j]);            
        }
        getchar();
    }

    for(int i =0;i<9;i++){
        for(int j =0;j<9;j++){
            if(arr[i][j] > max){
                max=arr[i][j];
                n=i;
                m=j;
            }
        }
    }

    printf("%d\n%d %d",max,(n+1),(m+1));
    return 0;
}
/**
 * https://dojang.io/mod/page/view.php?id=1766
 * 2차원배열 초기화
*/
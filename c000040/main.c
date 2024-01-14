/*
* Language : C11, Korean, English
* last modified : 2024.01.14
* From : BAEKJOON2720
*/
#include<stdio.h>
// ref : 쿼터==Quarter,다임==Dime,니켈==Nickel,페니==penny
int main(){
    int t=0,qua=0,dim=0,nic=0,pen=0;
//  int arr[t]; //scanf("%d",&t);보다 뒤에 있어야됨

    scanf("%d",&t);
    int arr[t];
    
    for(int i =0;i<t;i++){
        scanf("%d",&arr[i]);

        qua=0;dim=0;nic=0;pen=0;

        qua = arr[i]/25;
        arr[i]%=25;
        dim = arr[i]/10;
        arr[i]%=10;
        nic = arr[i]/5;
        pen = arr[i]%5;
        printf("%d %d %d %d\n",qua,dim,nic,pen);
        //if(i <(t-1))printf("\n");
    }
    return 0;
}


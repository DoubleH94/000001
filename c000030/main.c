/*
* Language : C11, Korean, English
* last modified : 2024.01.13
* From : BAEKJOON1157
*/
#include<stdio.h>
#include<stdbool.h> // bool, true, false
#include<string.h>  // memset, strlen

int main(){
    int len=0, imax=0, cmax=0;
    char str[1000001];
    int alp[26];
    memset(str, 0, 1000001*sizeof(char));
    memset(alp, 0, 26*sizeof(int));

    bool flag=false;

//  입력이 4095개밖에 안됨
    scanf("%s",str);
    len=strlen(str);
    
    for(int i =0; i<len;i++){
        if((str[i])<'a'){ 
            alp[(str[i])-'A']++;
        }else{
            alp[(str[i])-'a']++;
        }
    }

    for(int i =0; i< 26;i++){
        if(imax < alp[i]){
            imax=alp[i];
            cmax=i;
            flag=false;
        }else if(imax == alp[i]){
            flag=true;
        }else{}
    }

    if(flag == false){
        printf("%c",(char)(cmax+65));
    }else{
        printf("?");
    }

    return 0;

/* 엔터가 안들어감
    while(~scanf("%999s",str)){
        scanf("\n");
        //while(getchar()!= '\n');

        len=strlen(str);

        for(int i =0; i<len;i++){
            if((int)(str[i])<97){
                alp[(int)(str[i])-65]++;
            }else{
                alp[(int)(str[i])-97]++;
            }
        }
    }
*/  

/*  무한루프
    while(~scanf("%[^\n]c", &c) ){
        if((int)c<97){ 
            alp[(int)c-65]++;
        }else{
            alp[(int)c-97]++;
        }
        getchar();
    }
*/
}
/**
 * https://m.blog.naver.com/PostView.naver?isHttpsRedirect=true&blogId=sharonichoya&logNo=220343621192
 * 형변환(type casting) : 상황에 따라서, 또는 필요에 따라서 변수의 자료형이 다른 자료형으로 변환됨. 특별한 경우에 암묵적으로 변환되며, 작성자가 명시적으로 변환할 수 있음.
 * https://sewcode.tistory.com/6
 * 서식지정자 플래그, 옵션 %와 s 사이에 여러가지 숫자 혹은 문자를 입력해 입력 옵션을 지정함.
 * 한 문자로 100만개 꽂히면 int도 오버플로우 뜨는거 아니야?>int는 4byte, 약 +-21억
*/

///하는중
/*
* Language : C11, Korean, English
* last modified : 2024.01.13
* From : BAEKJOON25206
*/
// ref: 과목명=object,학점=grades,등급=rating
#include<stdio.h>
#include<string.h>
#include<stdbool.h>

int main(){
    int gsum=0;
    float sum=0.0,rcnt=0.0,result=0.0;
    bool flag = false;
    char stro[51], strg[4], strr[3];
    memset(stro, 0, 51*sizeof(char));
    memset(strg, 0, 4*sizeof(char));
    memset(strr, 0, 3*sizeof(char));

    for(int i =0 ; i<20;i++){
        scanf("%s %s %s",stro,strg,strr);
        //printf("%s/%s/%s>\n",stro,strg,strr);

        switch(strr[0]){
            case 'A' : 
                rcnt=4;
                break;
            case 'B' : 
                rcnt=3;
                break;
            case 'C' : 
                rcnt=2;
                break;
            case 'D' : 
                rcnt=1;
                break;
            case 'F' : 
                rcnt=0;
                break;
            case 'P' : 
                flag = true;
                break;
            default :
                break;
        }
        if(strr[1] == '+'){rcnt += 0.5;}

        if(flag != true){
            gsum += ((int)strg[0]-'0');
            sum += ((int)strg[0]-'0') * rcnt;
        }

        //printf("%d,%f += %d * %f,gsum=%d\n",flag,sum, strg[0]-'0', rcnt, gsum);
        flag = false;
        rcnt=0;
        memset(stro, 0, 51*sizeof(char));
        memset(strg, 0, 4*sizeof(char));
        memset(strr, 0, 3*sizeof(char));
        getchar();
    }
    
    //printf("%f %d\n",sum,gsum);
    result = sum/gsum;
    printf("%f",result);

    return 0;
}
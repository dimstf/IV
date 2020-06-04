#include <stdio.h>
#include <stdlib.h>
#include "irrverbs.h"
#include "irrverbs2.c"
int start()
{
    printf("\nThis program is for checking the");
    printf("knowledge of irregular verbs\n");
}
int irrverbs(IrrVerb *correct)
{
    FILE *a;
    if((a=fopen("IV.txt","r"))==NULL)
    {
        printf("Cannot open file IV.txt");
        return -1;
    }
    int score=0,point,mas[200]={0},i,k,n=40;
    for(i=0;i<n;i++)
    {
        point=0;
        char str1[15],str2[15];
        k=rand_verb(mas);
        read_verb(&correct,a,k);
        printf("%s",correct->verb[0]);
        scanf("%s%s",&str1,&str2);
        point=check_answer(&correct,&str1,&str2);
        score+=point;
        if(point==0)
        {
            printf("\n%s %s ",correct->verb[0],correct->verb[1]);
            printf("%s\n",correct->verb[2]);
        }
    }
    float result;
    result=score/40;
    printf("Percentage of correct answers %f",result);
    return 0;
}    
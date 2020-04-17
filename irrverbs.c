#include <stdio.h>
#include <stdlib.h>
#include "irrverbs.h"
#include "irrverbs2.c"
int start
{
    printf("\nThis program is for checking the");
    printf("knowledge of irregular verbs\n");
}
int irrverbs()
{
    FILE *a;
    if((a=fopen("IV.txt","r"))==NULL)
    {
        printf("Cannot open file IV.txt");
        return -1;
    }
    int score=0,point,mas[200]={0},j,i,k,n=40;
    IrrVerb correct;
    for(i=0;i<n;i++)
    {
        int point=0;
        char str1[13],str2[13];
        k=randverb(&mas);
        read_verb(&correct);
        printf("%s",correct->verb[0]);
        scanf("%s%s",&str1,&str2);
        point=check_answer(&correct,&str1,&str2);
        score+=point;
        if(point==0)
        {
            printf("\n%s %s %s\n",correct->verb[0],correct->verb[1],
            correct->verb[2]);
        }
    }
    float result;
    result=score/40;
    printf("Percentage of correct answers %f",result);
    return 0;
}    

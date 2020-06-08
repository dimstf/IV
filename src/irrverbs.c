#include <stdio.h>
#include <stdlib.h>
#include "i2.h"
void start()
{
    printf("\nThis program is for checking the");
    printf("knowledge of irregular verbs\n");
}
int irrverbs(IrrVerb *correct)
{
    FILE *a;
    a=fopen("dictionary/IV.txt","r");
    if(a==NULL)
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
        read_verb(correct,a,k);
        printf("%s",correct->verb[0]);
        scanf("%s%s",str1,str2);
        str1[14]='\0';
        str2[14]='\0';
        point=check_answer(correct,str1,str2);
        score+=point;
        if(point==0)
        {
            printf("\n%s %s ",correct->verb[0],correct->verb[1]);
            printf("%s\n\n",correct->verb[2]);
        } else {
		    printf("\n+\n");
		}
        printf("************************************************(%d)\n\n",i+1);
    }
    float result;
    result=score/40;
    printf("Percentage of correct answers %f\n",result);
    return 0;
}    

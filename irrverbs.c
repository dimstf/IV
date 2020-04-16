#include <stdio.h>
#include <stdlib.h>
#include "irrverbs.h"
ini irrverbs()
{
    FILE *a;
    if((a=fopen("IV.txt","r"))==NULL)
    {
        printf("Cannot open file IV.txt");
        return -1;
    }
    int score=0,mas[200],j,i,k,n=40;
    IrrVerb correct;
    for(i=0;i<n;i++)
    {
        int point=0;
        char str1[13],str2[13];
        k=randverb(&mas);
        read_verb(&correct);
        printf("%s",correct->verb[0]);
        scanf("%s%s",&str1,&str2);
        point++;
        for(i=0;i<13;i++)
        {
            if(str1[i]!=correct->verb[1][i])
            {
                point--;
            }
        }
    }


}    

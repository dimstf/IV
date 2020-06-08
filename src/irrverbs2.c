#include "i3.h"
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
int check_answer(IrrVerb *corr,char *s1,char *s2)
{
    int i,p=1;
    for(i=0;i<13;i++)
    {
        if(corr->verb[1][i]!=s1[i])
        {
            p=0;
        }
        if(corr->verb[2][i]!=s2[i])
        {
            p=0;
        }
        if(p==0)
            break;
    }
    return p;
}
int rand_verb(int *arr)
{
    srand(time(NULL));
    int value=0;
    while(value==0)
    {
        value=(rand())%200+1;
        if(arr[value]!=0)
        {
            value=0;
        } else {
            arr[value]++;
        }
    }
    return value;
}
int read_verb(IrrVerb *ans,FILE *f,int line)
{
    char d;
    int l,string=0;
    d=fgetc(f);
    while((d!='\n')&&(string<=line-1)&&(line>1))
    {
        d=fgetc(f);
        if(d=='\n')
        {
            string++;
        }        
    }
    for(l=0;l<3;l++)
    {
        fscanf(f,"%s",ans->verb[l]);
    }
    fseek(f,0,SEEK_SET);
    return 0;
}

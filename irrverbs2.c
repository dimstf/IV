#include <stdlib.h>
#include <stdio.h>
#include <time.h>
int check_answer(IrrVerb *corr,char *s1,char *s2)
{
    int p=1;i;
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
        if(arr[val]!=0)
        {
            value=0;
        } else {
            arr[value]++;
        }
    }
    return value;
}
int readverb(IrrVerb *ans,FILE *f,int line)
{
    int l,string=0;
    while((fgets(f)!='\0')&&(string<=line-1)&&(line>1))
    {
        fseek(f,1,SEEK_CUR);
        string++;
    }
    for(l=0;l<3;l++)
    {
        fscanf(f,"%s",ans->verb[j]);
    }
    fseek(f,0,SEEK_SET);
}

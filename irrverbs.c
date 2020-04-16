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
    int mas[200],i,k,n=40;
    IrrVerb correct,user;
    for(i=0;i<n;i++)
    {
        k=randverb(&mas);
        read_verb(&correct);
		user->verb[0]=correct->verb[0];
        
    }


}    

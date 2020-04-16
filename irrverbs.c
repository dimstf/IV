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
    
}

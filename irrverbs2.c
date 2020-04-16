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

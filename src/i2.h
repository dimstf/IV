#if !defined irrverbs_h
#define irrverbs_h
typedef struct {
    char verb[3][14];
} IrrVerb;
extern int check_answer(IrrVerb *corr,char *s1,char *s2);
extern int rand_verb(int *arr);
extern void read_verb(IrrVerb *ans,FILE *f,int line);
#endif

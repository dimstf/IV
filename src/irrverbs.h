#if !defined irrverbs_h
#define irrverbs_h
typedef struct {
    char verb[3][14];
} IrrVerb;
extern void start();
extern int irrverbs(IrrVerb *correct);
#endif


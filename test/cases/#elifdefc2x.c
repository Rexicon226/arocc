//aro-args -std=c2x -E
#ifdef FOO
long long
#elifdef FOO
long
#elifndef FOO
int
#endif

#define BAR
#ifdef FOO
long long
#elifdef BAR
long
#elifndef FOO
int
#endif
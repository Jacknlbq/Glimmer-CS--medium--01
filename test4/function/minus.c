#include"../head.h"
#include <string.h>
void minus(char *A,char *b,char *C)
{
    if(b[0]=='+')//变号，做加法
    b[0]='-';
    else b[0]='+';
    plus(A,b,C);
}
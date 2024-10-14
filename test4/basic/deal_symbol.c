//给正数加上符号位
#include <string.h>
void symbol(char* A)
{
    int n=strlen(A);
    for(;n>0;)
    {
        A[n]=A[n-1];
        n--;
    }
    A[0]='+'; 
}
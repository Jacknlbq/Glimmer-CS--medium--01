#include <string.h>
void delete(char *A)
{
    int j=strlen(A)-2;
    for(int i=0;i<j;i++)
       A[i]=A[i+1];
    A[j]=0;   
}
#include "../head.h"
#include <string.h>
void zero(char *A)
{
    int status=0,n=strlen(A);//定位非零开头
    for(int i=1;i<n;i++)
        if(A[i]!='0')
        {
            status=i;
            break;
        }
        if(status!=0)
    {
        for(int i=status;i<n;i++)
        A[i-status+1]=A[i];
        for(int i=n-status+1;i<n;i++)
        A[i]=0;
    }    
    else {
        A[0]='+';
        A[1]='0';
    }
}
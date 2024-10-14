#include "../head.h"
#include <string.h>
#include<stdio.h>
void  plus(char *A,char *B,char *C)
{
    int n1,n2;
    int sta=0;
    if(A[0]==B[0])//同号相加
    {
        compare(A,B);
        n1=strlen(A);
        n2=strlen(B);
        int m=n1;
        for(;m-1>0;)
        {
            n2--;
            n1--;
            if(n2>0)
            C[m-1]=A[n1]+B[n2]-'0';
            if(n2<=0)C[m-1]=A[n1];
            if(sta==1)
            C[m-1]+=1;
            if(C[m-1]>'9')
            {
                C[m-1]-=10;
                sta=1;
            }
            else sta=0;
            m--;
        }
        C[0]=A[0];
    }
    else//异号相减
    {
        compare(A,B);
        n1=strlen(A);
        n2=strlen(B);
        int m=n1;
        C[0]=A[0];
        for(;m-1>0;)
        {
            n2--,n1--;
            if(n2>0)
            C[m-1]=A[n1]+'0'-B[n2];
            if(n2<=0) C[m-1]=A[n1];
            if(sta==1)
            C[m-1]-=1;
            if(C[m-1]<48)
            {
                C[m-1]+=10;
                sta=1;
            }
            else sta=0;
            m--;
        }
    }
}
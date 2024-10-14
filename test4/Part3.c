#include <stdio.h>
#include <string.h>
void delete(char *A)
{
    int j=strlen(A)-2;
    for(int i=0;i<j;i++)
       A[i]=A[i+1];
    A[j]=0;   
}
int main ()
{
    char a[50]={0},b[50]={0},sign;
    scanf("%s %c %s",a,&sign,b);
    if(a[0]=='(')delete(a);
    if(b[0]=='(')delete(b);
    printf("操作数1: %s\n操作数2: %s\n操作符: %c\n",a,b,sign);
}
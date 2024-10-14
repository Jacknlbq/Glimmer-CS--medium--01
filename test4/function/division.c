#include <stdio.h>
#include "../head.h" 
#include <string.h>
void division(char *A,char *B,char *C)
{
    //符号
    if(A[0]==B[0])C[0]='+';
    else C[0]='-';

    //将A，B改为正数
    A[0]='+';
    B[0]='+';

    int n1=strlen(A),n2=strlen(B);
    int head=1,tail=n2-1;//"截取数组"的指针
    int n=n1-n2+1;//要截取的次数
    
    //商为零
    if(n1<n2)
        C[1]=0;
    
    else
    {
      //创建用于截取的字符串
        char catch[50]={'+'};
       //第一次截取（初始化）
       for(int j=1;j<=tail-1;j++)
             catch[j]=A[j];
       
       char b[50];

       for(int j=1;j<=n;j++)
       {
           strcpy(b,B);
           int t=strlen(catch);
           catch[t]=A[tail];//插入新的数字
               tail++;
            zero(catch);
            for(int i=1;i<=9;i++)//做差
           {
               char H[50]={0};
               minus(catch,b,H);
               b[0]='+';
               if(H[0]=='-')
              {
                  C[j]=i-1+'0';
                   break;
              }
                zero(catch);
                strcpy(catch,H);
           }
           strcpy(catch,b);
        }
    }
}
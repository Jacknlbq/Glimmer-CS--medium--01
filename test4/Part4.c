#include "head.h"
#include<stdio.h>
#include<string.h>
int main(){
    char a[50]={0},b[50]={0},c[100]={0},sign,putin[100];
    scanf("%s",putin);//读入整个字符串
    
    int n=strlen(putin),s;
    //先定位符号
    for(int i=0;i<n;i++)
        if(putin[i]=='+'||putin[i]=='-'||putin[i]=='*'||putin[i]=='/')
           if((putin[i-1]==')'||putin[i-1]!='('))
                  {
                    sign=putin[i];
                    s=i;
                    break;
                  }
    //拆解输入
    for(int i=0;i<s;i++)
        a[i]=putin[i];
    for(int i=s+1;i<n;i++)
        b[i-s-1]=putin[i];

    //预处理
    if(a[0]=='(')delete(a);//去括号
    if(b[0]=='(')delete(b);//去括号
    if(a[0]!='-'&&a[0]!='+')symbol(a);//添加符号位（正数）
    if(b[0]!='-'&&b[0]!='+')symbol(b);//添加符号位（正数）
    
    //执行计算
    if(sign=='+')
    plus(a,b,c);
    if(sign=='-')
    minus(a,b,c);
    if(sign=='*')
    multiply(a,b,c);
    if(sign=='/')
    division(a,b,c);
    
    //输出结果
    int status=0;//定位非零开头
    for(int i=1;i<strlen(c);i++)
        if(c[i]!='0')
        {
            status=i;
            break;
        }
    if(status==0)//结果为0时单独输出
    printf("0");
    else{
        //负号输出
        if(c[0]=='-')
        printf("%c",c[0]);
        for(;status<strlen(c);)
            printf("%c",c[status++]);
    }
    printf("\n");
    return 0;
}
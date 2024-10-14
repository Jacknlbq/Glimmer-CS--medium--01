#include "head.h"
#include<stdio.h>
#include<string.h>
int main(){
    char a[50]={0},b[50]={0},c[100]={0},sign;
    scanf("%s %c %s",a,&sign,b);
    if(a[0]!='-')symbol(a);//添加符号位（正数）
    if(b[0]!='-')symbol(b);//添加符号位（正数）

    if(sign=='+')
    plus(a,b,c);
    if(sign=='-')
    minus(a,b,c);

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
        if(c[0]=='-'&&status!=0)
        printf("%c",c[0]);
        for(;status<strlen(c);)
            printf("%c",c[status++]);
    }
    printf("\n");
    return 0;
}
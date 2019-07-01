#include <stdio.h>
//求出两个数的最大值
int main(){
    int max(int a,int b);
    int a,b,c;
    printf("请输入两个数字：");
    scanf("%d%d",&a,&b);
    c = max(a,b);
    printf("最大值为：%d\n",c);
}

int max(int a,int b){
    return a>b?a:b;
}

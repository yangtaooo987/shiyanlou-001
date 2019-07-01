#include <stdio.h>

int main(){
    //10个数
    //输入10个数，求出最大值并求该数是第几个
    int max(int,int);
    int a[10],m,n,i;

    printf("please enter 10 numbers:");
    for(i=0;i<10;i++){
        scanf("%d",&a[i]);
    }
    printf("\n");

    for(i=1,m=a[0],n=0;i<10;i++){
        if(max(m,a[i])>m){
            m = max(m,a[i]);
            n = i;
        }
    }

    printf("the largest number is %d\n it is the index :%d\n",m,n);

}

int max(int a,int b){
    return a>b?a:b;
}

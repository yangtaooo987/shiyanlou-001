#include<stdio.h>
#include<stdlib.h>

int main(){

    //从键盘输入一些字符，逐个把他们送到磁盘，直到遇到#结束
    FILE *fp;
    char ch,filename[10];
    printf("please enter the filename:");
    scanf("%s",filename);
    if((fp=fopen(filename,"w"))==NULL){

        printf("Unable to open this file\n");
        exit(0);
    }
    ch = getchar();
    printf("please enter a string in the disk(end with #):");
    ch = getchar();
    while(ch!='#'){

        fputc(ch,fp);
        putchar(ch);
        ch=getchar();
    }

    fclose(fp);
    putchar(10);
    return 0;
}

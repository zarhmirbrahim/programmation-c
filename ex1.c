#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
    int a=-2,b=a++,c=--b-2,*p1=&a,*p2=&b;
    printf("a=%d\tb=%d\tc=%d\t*p1=%d\t*p2=%d\n",a,b,c,*p1,*p2);
    *p1=(*p2)+++2;
    printf("a=%d\tb=%d\tc=%d\t*p1=%d\t*p2=%d\n",a,b,c,*p1,*p2);
    p1=p2;
    printf("a=%d\tb=%d\tc=%d\t*p1=%d\t*p2=%d\n",a,b,c,*p1,*p2);
    p2=&c;
    printf("a=%d\tb=%d\tc=%d\t*p1=%d\t*p2=%d\n",a,b,c,*p1,*p2);
    *p1-=(*p2)++;
    printf("a=%d\tb=%d\tc=%d\t*p1=%d\t*p2=%d\n",a,b,c,*p1,*p2);
    ++(*p2);
    printf("a=%d\tb=%d\tc=%d\t*p1=%d\t*p2=%d\n",a,b,c,*p1,*p2);
    *p1*=++(*p2);
    printf("a=%d\tb=%d\tc=%d\t*p1=%d\t*p2=%d\n",a,b,c,*p1,*p2);
    a=++(*p2)*(*p1);
    printf("a=%d\tb=%d\tc=%d\t*p1=%d\t*p2=%d\n",a,b,c,*p1,*p2);
    p1=&a;
    printf("a=%d\tb=%d\tc=%d\t*p1=%d\t*p2=%d\n",a,b,c,*p1,*p2);
    *p2=*p1/=*p2;
    printf("a=%d\tb=%d\tc=%d\t*p1=%d\t*p2=%d\n",a,b,c,*p1,*p2);



    return 0;
}

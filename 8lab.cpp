#include <stdio.h>
#include <conio.h>

void bin_print(unsigned n) {
    if ( n ) {
        bin_print(n >> 1);
        printf("%u", n & 1);
    }
}

int main() {
    int m=1,n,e;
    short a=0,b=0,f=1;
    printf("1 - десятичное число\n2 - восьмеричное число\n3 - шестнадцатиричное число\n");
    scanf("%d",&e);
    switch(e){
        case 1: 
            scanf("%d",&n);
            break;
        case 2: 
            scanf("%o",&n);
            break;
        case 3: 
            scanf("%x",&n);
            break;
    }
    printf("Исходное число в 2-й сс: ");
    bin_print(n);
    printf("\n");
    do
    {
        if(n & m) a|=f;
        m<<=1;
        if(n & m) b|=f;
        m<<=1;
        f<<=1;
    }
    while(m);
    getch();
    printf("Нечетные - %d | ",a);
    bin_print(a);
    printf("\n");
    printf("Четные - %d | ",b);
    bin_print(b);
}

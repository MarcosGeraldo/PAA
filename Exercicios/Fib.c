#include  <stdio.h>

int fib(int n);

int main()
{
    printf("Hello World");
    int result = fib(5);
    printf("Resultado = %d",result);

    return 0;
}

int fib(int n){
    if(n<=0){
        return 0;
    }
    int i=n-1;
    int a=1;
    int b=0;
    int c=0;
    int d=1;
    int aux1=0;
    int aux2=0;
    while(i>0){
        if((i%2)==1){
            aux1=d*b+c*a;
            aux2=d*(2*c+d);
            c=aux1;
            d=aux2;
            i=i/2;
        }
    }
    return a+b;
}

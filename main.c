#include <stdio.h>
#include <math.h>

int main() {

    double y,x,a,b,c,j;

    puts("Insert x");

    j = scanf("%lf",&x);

    if(j != 1)
        return 1;

    puts("Insert a");

    j = scanf("%lf",&a);

    if(j != 1)
        return 1;

    puts("Insert b");

    j = scanf("%lf",&b);

    if(j != 1)
        return 1;

    puts("Insert c");

    j = scanf("%lf",&c);

    if(j != 1)
        return 1;
    if(a == 0)
        printf("Sqrt result is supposed to be above 0\n\n");

    y = (a * pow(x,2)*log(b))/sin(sqrt(a)+c);

    printf("%f",y);5

    return 0;
}

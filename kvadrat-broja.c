#include <stdio.h>
#include <math.h>
int main ()
{
    double a, kvadrat, kvadrat2;
    printf("Unesite broj:");
    scanf("%lf", &a);
    kvadrat = a*a;
    kvadrat2 = pow(a, 2);
    printf("Kvadrat unesenog broja %.2lf, je %.4lf\n",a, kvadrat);
    printf("Kvadrat unesenog broja %.2lf, je %.4lf\n",a, kvadrat2);
    return 0;
}
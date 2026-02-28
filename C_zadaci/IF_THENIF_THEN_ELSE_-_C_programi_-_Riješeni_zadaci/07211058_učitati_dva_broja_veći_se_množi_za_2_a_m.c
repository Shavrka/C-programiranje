/*
 * ZADATAK 46 - 07211058
 * Učitati dva broja veći se množi za 2 a manji dijeli sa 3.
 * Kategorija: IF THEN/IF THEN ELSE - C programi - Riješeni zadaci
 * Izvor: https://www.znanje.org/knjige/computer/c/v/072C/07211058.htm
 */

#include <stdio.h>
int main ()
{
double a,b;
printf("Veci * 2, manji / 3\n");       // naslov
printf("Unesite vasa 2 broja: ");
scanf("%lf", &a);
scanf("%lf", &b);

if (a > b)                   // prvi broj veci od drugog?
printf("a*2 = %lf * 2 = %lf\t b / 3 = %lf  / 3 = %lf \n", a, a, b, b);   // prvi broj veci
else
printf("b*2 = %lf * 2 = %lf\t a / 3 = %lf  / 3 = %lf \n", b, b, a, a);   // drugi broj veci

return 0;
}

II varijanta
// 07211058
#include <stdio.h>
int main()
{
int a, b, y ;
printf("1. broj: ");   // ulaz
scanf("%d", &a);
printf("2. broj: ");
scanf("%d", &b);

if (a < b) {           // b je veci od a?
b = 2 * b;         // b je veci od a
a = a / 3;
}
else {                 // a je veci od b?
a = 2 * a;         // a je veci od b
b = b /3;
}

printf("1. broj =  %d \t2. broj =  %d", a, b);  // ispis vrijednosti prvog pa drugog broja

return 0;
}
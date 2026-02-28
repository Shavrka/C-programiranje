/*
 * ZADATAK 230_9 - 23010090
 * Učitati 4 cijela broja. Ako je bar jedan od njih pozitivan izračunati im proizvod i Ispisati ga. Ako je bar jedan od njih negativan izračunati im zbir i Ispisati ga.
 * Kategorija: IF THEN/IF THEN ELSE - C programi - Riješeni zadaci
 * Izvor: https://www.znanje.org/knjige/computer/c/v/230c/23010090.htm
 */

#include <stdio.h>
#include <stdlib.h>

int main ()
{
int a, b, c, d;
double rezultat;

printf("Prvi broj: ");
scanf("%d",&a);

printf("Drugi broj ");
scanf("%d",&b);

printf("Treći broj: ");
scanf("%d",&c);

printf("Cetvrti broj ");
scanf("%d",&d);

if (a > 0 || b > 0 || c > 0 || d > 0) {    // barem jedan broj pozitivan
rezultat = a * b * c * d;
printf("Proizvod = %f \n", rezultat);  // proizvod: a*b*c*d
}

if (a < 0 || b < 0 || c < 0 || d < 0) {
rezultat = a + b + c + d;
printf("Suma = %f \n", rezultat);      // suma: a+b+c+d
}

if (a==0 && b==0 && c==0 && d==0)          // svi brojevi nula
printf("Svi brojevi su nule!");

return 0;
}
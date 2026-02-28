/*
 * ZADATAK 230_8 - 23010080
 * Učitati 2 realna broja različita od 0. Ako su različitog predznaka sabrati ih, a ako su istog predznaka pomnožiti ih. Rezulat Ispisati na ekran.
 * Kategorija: IF THEN/IF THEN ELSE - C programi - Riješeni zadaci
 * Izvor: https://www.znanje.org/knjige/computer/c/v/230c/23010080.htm
 */

#include <stdio.h>
int main ()
{
int a, b;
double rezultat;

printf("Prvi broj: ");
scanf("%d",&a);

while (a == 0) {
printf("Broj mora biti različit od 0. Ponovi unos: ");
scanf("%d",&a);
}

printf("Drugi broj ");
scanf("%d",&b);

while (b == 0) {
printf("Broj mora biti razlicit od 0. Ponovi unos: ");
scanf("%d",&b);
}

if ((a < 0 && b > 0) || (a > 0 && b < 0))
rezultat = a + b;
else
rezultat = a * b;

printf("Rezultat = %f \n", rezultat);

return 0;
}

II varijanta
#include <stdio.h>

int main ()
{
int a, b;
double rezultat;

printf("Prvi broj: ");
scanf("%d",&a);

while (a == 0) {
printf("Broj mora biti razlicit od 0. Ponovi unos: ");
scanf("%d",&a);
}

printf("Drugi broj ");
scanf("%d",&b);

while (b == 0) {
printf("Broj mora biti različit od 0. Ponovi unos: ");
scanf("%d",&b);
}

if ((a * b ) < 0)         // ako su brojevi sa raličitim predznacima proizvod je < 0
rezultat = a + b;
else
rezultat = a * b;

printf("Rezultat = %f \n", rezultat);

return 0;
}
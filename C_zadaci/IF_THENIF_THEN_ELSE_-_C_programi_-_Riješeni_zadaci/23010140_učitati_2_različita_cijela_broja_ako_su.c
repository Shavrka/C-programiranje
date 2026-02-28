/*
 * ZADATAK 230_14 - 23010140
 * Učitati 2 različita cijela broja. Ako su oba parna podijeliti veći sa manjim brojem. Ako su oba neparna od većeg oduzeti manji broj. Inače sabrati ta dva broja.
 * Kategorija: IF THEN/IF THEN ELSE - C programi - Riješeni zadaci
 * Izvor: https://www.znanje.org/knjige/computer/c/v/230c/23010140.htm
 */

#include <stdio.h>

int main()
{
int a, b;

printf("Ucitati dva razlicita cijela broja trougla \n");
printf("Prvi broj: ");
scanf("%d",&a);

printf("Drugi broj: ");
scanf("%d",&b);
while (a == b) {
printf("Brojevi moraju biti razliciti. Ponovi unos: ");
scanf("%d",&b);
}

if (a%2==0 && b%2==0)           // provjera paranosti oba broja
if (a>b)                    // da li je prvi veci
printf("Oba parna: %d / %d = %f", a, b, (double)a / (double)b);
else
printf("Oba parna: %d / %d = %f", b, a, (double)b / (double)a);
else if (a%2!=0 && b%2!=0)      // provjera neparnosti brojeva
if (a>b)                    // da li je prvi veci
printf("Oba neparna: %d - %d = %d", a, b, a-b);
else
printf("Oba meparna: %d - %d = %d", b, a, b-a);
else                            // inace nisu ni parni ni neparni
printf("Paran i neparan: %d * %d = %d", a, b, a+b);

return 0;
}
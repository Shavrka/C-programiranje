/*
 * ZADATAK 230_7 - 23010070
 * Učitati 3 različita realna broja. Ispisati ih u rastućem redoslijedu na ekran.
 * Kategorija: IF THEN/IF THEN ELSE - C programi - Riješeni zadaci
 * Izvor: https://www.znanje.org/knjige/computer/c/v/230c/23010070.htm
 */

#include <stdio.h>
int main ()
{
float a, b, c, max, min, mid, proizvod;

printf("Ucitati 3 razlicita broja \n");

printf("Prvi broj: ");
scanf("%f",&a);

printf("Drugi broj ");
scanf("%f",&b);
while (b == 0) {
printf("Broj mora biti različit od prvog broja. Ponovi unos: ");
scanf("%f",&b);
}

printf("Treci broj ");
scanf("%f",&c);
while (c == 0) {
printf("Broj mora biti različit od prethodna dva. Ponovi unos: ");
scanf("%f",&c);
}
printf("Ulazni redoslijed: ");
printf("%f   %f   %f\n", a , b, c);

max = a;             // nadji maksimum
if (b > max)
max = b;
if (c > max)
max = c;

min = a;             // nadji minimum
if (b < min)
min = b;
if (c < min)
min = c;

mid = a;                     // nadji srednji broj
if (a != max && a != min)
mid = a;
if (b != max && b != min)
mid = b;
if (c != max && c != min)
mid = c;

printf("Izlazni redoslijed: ");
printf("%f   %f   %f", min , mid, max);

return 0;
}

II varijanta
/*23010070 Učitati 3 različita realna broja. Ispisati ih u rastućem redoslijedu na ekran.*/

#include <stdio.h>
int main ()
{
float a, b, c, max, min, mid, proizvod;

printf("Ucitati 3 razlicita broja \n");

printf("Prvi broj: ");
scanf("%f",&a);

printf("Drugi broj ");
scanf("%f",&b);
while (b == 0) {
printf("Broj mora biti različit od prvog broja. Ponovi unos: ");
scanf("%f",&b);
}

printf("Treci broj ");
scanf("%f",&c);
while (c == 0) {
printf("Broj mora biti različit od prethodna dva. Ponovi unos: ");
scanf("%f",&c);
}
printf("Ulazni redoslijed: ");
printf("%f   %f   %f\n", a , b, c);

printf("Izlazni redoslijed: ");
if (a < b && b < c)
printf("%f   %f   %f", a, b, c);
else if(a < c && c < b)
printf("%f   %f   %f", a, c, b);
else if(b < a && a < c)
printf("%f   %f   %f", b, a, c);
else if(b < c && c < a)
printf("%f   %f   %f", b, c, a);
else if(c < a && a < b)
printf("%f   %f   %f", c, a, b);
else
printf("%f   %f   %f", c, b, a);

return 0;
}
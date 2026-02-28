/*
 * ZADATAK 230_6 - 23010060
 * Učitati 3 pozitivna različita realna broja. Izračunati razliku najvećeg i najmanjeg, pa tu razliku podijeliti sa srednjim od ta 3 broja. Konačni rezultat Ispisati na ekran.
 * Kategorija: IF THEN/IF THEN ELSE - C programi - Riješeni zadaci
 * Izvor: https://www.znanje.org/knjige/computer/c/v/230c/23010060.htm
 */

#include <stdio.h>

int main ()
{
float a, b, c, max, min, mid, rezultat;

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

printf("Ulaz: ");
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

rezultat = (max - min) / mid;

printf("Razlika najveceg i najmanjeg, podjeljena sa srednjim je: \n");
printf("(%f - %f ) / %f = %f", max, min , mid, rezultat);

return 0;
}

II varijanta
// 23010060 Učitati 3 pozitivna različita realna broja. Izračunati razliku najvećeg i najmanjeg, pa tu razliku podijeliti sa srednjim od ta 3 broja. Konačni rezultat štampati na ekran.
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

printf("Ulaz: ");
printf("%f   %f   %f\n", a , b, c);

printf("Razlika najveceg i najmanjeg, podjeljena sa srednjim je: \n");

if (a < b && b < c)
printf("(%f - %f ) / %f = %f", c, b, a, (c - a)/b);
else if(a < c && c < b)
printf("(%f - %f ) / %f = %f", b, a, c, (b - a)/c);
else if(b < a && a < c)
printf("(%f - %f ) / %f = %f", c, b, a, (c - b)/a);
else if(b < c && c < a)
printf("(%f - %f ) / %f = %f", a, b, c, (a - b)/c);
else if(c < a && a < b)
printf("(%f - %f ) / %f = %f", b, c, a, (b - c)/a);
else
printf("(%f - %f ) / %f = %f", a, c, b, (a - c)/b);

return 0;
}
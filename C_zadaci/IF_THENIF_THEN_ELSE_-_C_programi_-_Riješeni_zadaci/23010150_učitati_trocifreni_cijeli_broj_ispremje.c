/*
 * ZADATAK 230_15 - 23010150
 * Učitati trocifreni cijeli broj. Ispremještati mu cifre tako da se dobije najveći mogući broj sastavljen od te tri cifre. Npr. 476 ==> 764.
 * Kategorija: IF THEN/IF THEN ELSE - C programi - Riješeni zadaci
 * Izvor: https://www.znanje.org/knjige/computer/c/v/230c/23010150.htm
 */

#include <stdio.h>

int main()
{
int broj, j, d, s, t, rezultat;

printf("Trocifren broj: ");
scanf("%d",&broj);

while (broj < 100 || broj > 999) {
printf("Broj mora biti trocifren. Ponovi unos: ");
scanf("%d",&broj);
}
j = broj % 10;
d = (broj / 10);
d = d % 10;
s = broj / 100;

if (j > d) {
t = j;
j = d;
d = t;
}
if (j > s) {
int t = j;
j = s;
s = t;
}
if (d > s) {
t = d;
d = s;
s = t;
}

rezultat = s * 100 + d * 10 + j;
printf("Rezultat: %d", rezultat);

return 0;
}
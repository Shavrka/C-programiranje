/*
 * ZADATAK 62_2 - 07211108
 * Od tri učitana broja (a, b, c) sa tastature naći srednji mid(a, b, c).
 * Kategorija: IF THEN/IF THEN ELSE - C programi - Riješeni zadaci
 * Izvor: https://www.znanje.org/knjige/computer/c/v/072C/07211108.htm
 */

#include<stdio.h>

int main()
{
int a, b, c, min, mid, max; // deklarisanje varjabli
printf("Srednji od 3 broja\n");
printf("1. broj: ");
scanf("%d", &a);    // ulaz
printf("2. broj: ");
scanf("%d", &b);    // ulaz
printf("3. broj: ");
scanf("%d", &c);    // ulaz

if (a > b) {         // poredjenje prva dva broja
max = a;          // max je a
min = b;          // min je b
}
else {               // b je vece
max = b;          // max je b
min = a;          // min je a
}

if (c > max)         // c veci od prva dva?
mid = max;        // mid je veco od prva dva
else
if (c < min)      // c manji od prva dva?
mid = min;    // mid je manji od prva dva
else              // c je izmedju min i max
mid = c;      // mid je c

printf("Od brojeva %d %d %d \n", a, b, c);       // ispis
printf("Srednji je %d", mid);       // ispis

return 0;
}
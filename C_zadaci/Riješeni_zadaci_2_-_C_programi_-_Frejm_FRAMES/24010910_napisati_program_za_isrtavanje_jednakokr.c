/*
 * ZADATAK 24010910 - 24010910
 * Napisati program za isrtavanje jednakokragog trougla kao na slici.  Prva učitana vrijednost je visina trougla a druga znak koji se koristi za crtanje.
 * Kategorija: Riješeni zadaci 2 - C programi - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/240c/24010910.htm
 */

#include <stdio.h>

int main()
{
int i, j, n;
printf("Do broja: ");
scanf("%d",&n);

for (j = 1; j < n; j++) { // vrh trougla
printf(" ");
}
printf("x");

printf(" \n"); // stranice trougla
for (i = 2; i < n; i++) {
for (j = 1; j <= n - 1; j++) { // lijeva stranica
if ((i + j) == (n + 1))
printf("x");      // na sporednoj dijagonali
else
printf(" ");      // izvan sporedne dijagonale
}

for (j = 1; j < n; j++) { // desna stranica
if (i == j)           // glavna dijagonala?
printf("x");      // na glavnoj dijagonali
else
printf(" ");      // izvan glavne dijagonale
}
printf("\n");
}

for (j = 1; j < 2 * n; j++)  // donja stranica trougla
printf("x");

return 0;
}
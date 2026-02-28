/*
 * ZADATAK 08614042 - 08614042
 * Napisati program za ispis trougla kao na slici sa željenim brojem redova:
 * Kategorija: WHILE petlja u petlji - C programi - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/085c/08614042.htm
 */

#include <stdio.h>

int main()
{
int i, j, n;
printf("Do broja: ");
scanf("%d",&n);

j = 1;
while  (j < n) { // vrh trougla
printf(" ");
j++;
}
printf("x");

printf(" \n"); // stranice trougla

i = 2;
while (i < n) {
j = 1;
while (j <= n - 1) { // lijeva stranica
if ((i + j) == (n + 1))
printf("x");      // na sporednoj dijagonali
else
printf(" ");      // izvan sporedne dijagonale
j++;
}

j = 1;
while (j < n) { // desna stranica
if (i == j)           // glavna dijagonala?
printf("x");      // na glavnoj dijagonali
else
printf(" ");      // izvan glavne dijagonale
j++;
}
printf("\n");
i++;
}

j = 1;
while (j < 2 * n) {  // donja stranica trougla
printf("x");
j++;
}

return 0;
}
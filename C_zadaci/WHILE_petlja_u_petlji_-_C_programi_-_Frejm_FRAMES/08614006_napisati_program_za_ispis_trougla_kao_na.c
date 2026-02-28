/*
 * ZADATAK 08614006 - 08614006
 * Napisati program za ispis trougla kao na slici sa željenim brojem redova:
 * Kategorija: WHILE petlja u petlji - C programi - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/085c/08614006.htm
 */

#include <stdio.h>

int main ()
{
int i, j, n;

printf("Do broja: ");
scanf("%d",&n);

i = 1;                    // pocetna vrijednosti i
while (i <= n)  {         // dok je i <= n ponavljaj - pocetak petlje
j = 1;
while (j <= n) {        // elementi reda
if (i + j >= n + 1)  // ispod sporedne dijagonale?
printf("x");     // ispis teksa sa razmakom iza
else
printf(" ");     // ispis prazno
j++;
}    // kraj While petlje j
printf("\n");
i++;
}   // kraj While petlje i
return 0;
}

II varijanta
// 08614006
# include <stdio.h>

int main ()
{
int i, j, k, n;

printf("Do broja: ");
scanf("%d",&n);

i = 1;                    // pocetna vrijednosti i
while (i <= n)  {         // dok je i <= n ponavljaj - pocetak petlje
j = 0;
while (j <= n - i) {  // prazan prostor
printf(" ");
j++;
}    // kraj While petlje j
k = 1;
while (k <= i) {
printf("x");      // ispis znaka
k++;
}          // kraj While petlje k
printf("\n");
i++;
}   // kraj While petlje i
return 0;
}

II varijanta
// 08614006
# include <stdio.h>

int main ()
{
int i, j, k, n;

printf("Do broja: ");
scanf("%d",&n);

i = 1;                    // pocetna vrijednosti i
while (i <= n)  {         // dok je i <= n ponavljaj - pocetak petlje
j = 0;
while (j <= n - i) {  // prazan prostor
printf(" ");
j++;
}    // kraj While petlje j
k = 1;
while (k <= i) {
printf("x");      // ispis znaka
k++;
}          // kraj While petlje k
printf("\n");
i++;
}   // kraj While petlje i
return 0;
}
/*
 * ZADATAK 25 - 08702104
 * Učitati prirodne brojeve K i M sa tastature. Od broja K ispisati M parnih brojeva.
 * Kategorija: Ciklična strukura - kombinovani zadaci - Riješeni zadaci
 * Izvor: https://www.znanje.org/knjige/computer/c/v/087c/08702104.htm
 */

#include <stdio.h>

int main ()
{

int k, m;
printf("Od broja: ");
scanf("%d", &k);
printf("Zeljeni broj m: ");
scanf("%d", &m);
int i, br;
i = k;      // početna vrijednost
br = 0;     // brojač parnih brojeva - početna vrijednost

while (br < m) {           // dok nije ispisan željeni broj parnih brojeva ponavljaj - pocetak petlje
if (i % 2 == 0) {      // paran
printf("%d \n",i); // ispis parnog broja
br = br + 1;       // brojač parnih uvečaj za 1
}
i++;    // napredovanje kroz petlju
}
return 0;
}

Verzija 2
// 08702104
#include <stdio.h>

int main ()
{

int k, m;
printf("Od broja: ");
scanf("%d", &k);
printf("Zeljeni broj m: ");
scanf("%d", &m);

int par;            // početna vrijednost za parne
if (k%2 == 0)       // odredi paran broj od k ili k +1
par = k;        // k paran startaj k
else
par = k + 1;    // k neparna startaj od slijedećeg broja k+1 (to je paran broj)

for (int i=0; i < m; i++)    // ponavljanje za i=0 do i < m - pocetak petlje
printf("%d \n", par + 2 * i); // startna vrijednost + 2*i
return 0;
}

Ispis na ekranu:
Od broja k= 123
Željeni broj m= 5
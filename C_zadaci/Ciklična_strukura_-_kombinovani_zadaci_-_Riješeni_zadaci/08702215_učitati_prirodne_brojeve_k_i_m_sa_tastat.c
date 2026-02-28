/*
 * ZADATAK 43 - 08702215
 * Učitati prirodne brojeve K i M sa tastature. Od broja K izračunati sumu M parnih brojeva.
 * Kategorija: Ciklična strukura - kombinovani zadaci - Riješeni zadaci
 * Izvor: https://www.znanje.org/knjige/computer/c/v/087c/08702215.htm
 */

#include <stdio.h>

int main ()
{
printf("Od k izracunati sumu m parnih brojeva\n");
int k, m;                   // deklarisanje varijabli
int i, br, s;               // deklarisanje varijabli
printf("Od broja: ");
scanf("%d", &k);
printf("Koliko parnih: ");
scanf("%d", &m);
s=0;        // pocetna vrijednost sume
i = k;      // početna vrijednost kontrolne varijable
br = 0;     // brojač parnih brojeva - početna vrijednost

while (br < m) {           // dok nije sabran željeni broj parnih brojeva ponavljaj - pocetak petlje
if (i % 2 == 0) {      // broj je paran?
s = s + i;         // da - paran, uvecaj sumu
br = br + 1;       // brojač parnih uvečaj za 1
}
i++;                   // napredovanje kroz petlju
}
printf("Suma je %d ", s);     // ispis susme
return 0;
}

II varijanta       s += i;
// 08702215
#include <stdio.h>

int main ()
{
printf("Od k izracunati sumu m parnih brojeva\n");
int k, m;                   // deklarisanje varijabli
int i, br, s;               // deklarisanje varijabli
printf("Od broja: ");
scanf("%d", &k);
printf("Koliko parnih: ");
scanf("%d", &m);
s=0;        // pocetna vrijednost sume
i = k;      // početna vrijednost kontrolne varijable
br = 0;     // brojač parnih brojeva - početna vrijednost

while (br < m) {           // dok nije sabran željeni broj parnih brojeva ponavljaj - pocetak petlje
if (i % 2 == 0) {      // broj je paran?
s += i;            // da - broj je paran, uvecaj sumu
br = br + 1;       // brojač parnih uvečaj za 1
}
i++;                   // napredovanje kroz petlju
}
printf("Suma je %d ", s);     // ispis susme
return 0;
}

Ispis na ekranu:
Od k izracunati sumu m parnih brojeva
Od broja: 2
Koliko parnih: 7
Suma je 56
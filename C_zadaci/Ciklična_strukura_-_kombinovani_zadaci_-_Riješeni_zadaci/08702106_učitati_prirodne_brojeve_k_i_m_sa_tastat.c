/*
 * ZADATAK 44 - 08702106
 * Učitati prirodne brojeve K i M sa tastature. Od broja K izračunati sumu M neparnih brojeva.
 * Kategorija: Ciklična strukura - kombinovani zadaci - Riješeni zadaci
 * Izvor: https://www.znanje.org/knjige/computer/c/v/087c/08702106.htm
 */

#include <stdio.h>

int main ()
{
printf("Od k izracunati sumu m neparnih brojeva\n");
int k, m;                   // deklarisanje varijabli
int i, br, s;               // deklarisanje varijabli
printf("Od broja: ");
scanf("%d", &k);
printf("Koliko neparnih: ");
scanf("%d", &m);
s=0;        // pocetna vrijednost sume
i = k;      // početna vrijednost kontrolne varijable
br = 0;     // brojač neparnih brojeva - početna vrijednost

while (br < m) {           // dok nije sabran željeni broj neparnih brojeva ponavljaj - pocetak petlje
if (i % 2 != 0) {      // broj je neparan?
s = s + i;         // da - neparan, uvecaj sumu
br = br + 1;       // brojač neparnih uvečaj za 1
}
i++;                   // napredovanje kroz petlju
}
printf("Suma je %d ", s);  // ispis susme
return 0;
}

II varijanta       s += i;
// 08702106
#include <stdio.h>

int main ()
{
printf("Od k izracunati sumu m neparnih brojeva\n");
int k, m;                   // deklarisanje varijabli
int i, br, s;               // deklarisanje varijabli
printf("Od broja: ");
scanf("%d", &k);
printf("Koliko neparnih: ");
scanf("%d", &m);
s=0;        // pocetna vrijednost sume
i = k;      // početna vrijednost kontrolne varijable
br = 0;     // brojač neparnih brojeva - početna vrijednost

while (br < m) {           // dok nije sabran željeni broj neparnih brojeva ponavljaj - pocetak petlje
if (i % 2 != 0) {      // broj je neparan?
s += i;            // da - broj je neparan, uvecaj sumu
br = br + 1;       // brojač neparnih uvečaj za 1
}
i++;                   // napredovanje kroz petlju
}
printf("Suma je %d ", s);  // ispis susme
return 0;
}

Ispis na ekranu:
Od k izracunati sumu m neparnih brojeva
Od broja: 2
Koliko neparnih: 7
Suma je 63
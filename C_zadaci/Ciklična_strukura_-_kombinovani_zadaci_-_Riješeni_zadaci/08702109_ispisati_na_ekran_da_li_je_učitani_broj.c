/*
 * ZADATAK 171 - 08702109
 * Ispisati na ekran da li je učitani broj palindrom.
 * Kategorija: Ciklična strukura - kombinovani zadaci - Riješeni zadaci
 * Izvor: https://www.znanje.org/knjige/computer/c/v/087c/08702109.htm
 */

#include <stdio.h>

int main() {
int n, n1, suprot = 0, ostat;

printf("Ucitati broj:");
scanf("%d", &n);
n1 = n;                // kopija ucitanog broja - testni broj

while (n > 0){         // dok je vrijednost testnog broj > 0 ponavljaj - pocetak petlje
ostat = n % 10;    // ostatak dijeljenja
suprot = suprot * 10 + ostat;    // dodaj cifru desne strane broju u suprotnom smjeru
n = n / 10;        // nova vrijednost testni broja - odbaci cifru sa desne strane
}

if (n1 == suprot){     // provjera da li ucitani broj palindrom
printf("Ucitani broj je palindrom");
}
else{
printf("Ucitani broj nije palindrom");
}
return 0;
}

Ispis na ekranu:
Ucitati broj:12344321
Ucitani broj je palindrom

Drugo izvođenje:
Ucitati broj:1234321
Ucitani broj je palindrom

Treće izvođenje:
Ucitati broj:12345
Ucitani broj nije palindrom
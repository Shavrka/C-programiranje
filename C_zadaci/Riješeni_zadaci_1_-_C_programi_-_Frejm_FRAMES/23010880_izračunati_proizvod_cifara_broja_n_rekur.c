/*
 * ZADATAK 23010880 - 23010880
 * Izračunati proizvod cifara broja n rekurzivnom f-jom.
 * Kategorija: Riješeni zadaci 1 - C programi - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/230c/23010880.htm
 */

#include <stdio.h>

#include <stdio.h>

int proizvod_cifara(int n) {
if(n < 10) return n;        // posljednja cifra broja?, kraj - rekurzije
return n%10 * proizvod_cifara(n / 10);   // sumu uvecaj za cifru, podijeli n sa 10 i pozovi istu funkciju
}

int main () {
printf("Proizvod cifara datog broja - Rekurzija\n");
int broj_n, p;

printf("Broj: ");      // ulazne vrijednosti
scanf("%d", &broj_n);

p = proizvod_cifara(broj_n);      // poziv funkcije proizvod_cifara

printf("Dati broj %d ima proizvod cifara %d ", broj_n, p);
return 0;
}

Ispis na ekranu:
Proizvod cifara datog broja - Rekurzija
Broj: 12345
Dati broj 12345 ima proizvod cifara 120
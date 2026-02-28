/*
 * ZADATAK 09411014 - 09411014
 * Napisati rekurzivnu funkciju za izračunavanje proizvoda parnih od prvih n prirodnih brojeva.
 * Kategorija: Funkcije - Rekurzija /FUNCTIONS - RECURSION/ - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/094c/09411014.htm
 */

#include <stdio.h>

int proizvod_par(unsigned n) {
if(n == 2)      // ponavljanje do granicne vrijednosti ulazne varijable?
return 2;   // prvi paran broj je 2 - kraj rekurzije
else
return n*proizvod_par(n-2);   // slijedeci paran je umanjen za 2
}

int main () {
printf("Prozvod parnih brojeva do n . Rekurzija\n");
int broj_n, p;

printf("Broj: ");      // ulazne vrijednosti
scanf("%d",&broj_n);
printf("Prozvod parnih brojeva od 1 do %d je ", broj_n);  // ispis vrijednosti ulznih i izlaznih varijabli
if(broj_n % 2 != 0)     // provjera neparanosti?
broj_n--;           // radi samo do parne vrijednosti n

p = proizvod_par(broj_n);   // poziv funkcije proizvod_par

printf("%d", p);       // izracunata vrijednost
return 0;
}

Ispis na ekranu:
Prozvod parnih brojeva do n . Rekurzija
Broj: 5
Prozvod parnih brojeva od 1 do 5 je 8
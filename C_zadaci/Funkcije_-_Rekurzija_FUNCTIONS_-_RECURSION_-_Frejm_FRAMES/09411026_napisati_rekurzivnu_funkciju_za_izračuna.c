/*
 * ZADATAK 09411026 - 09411026
 * Napisati rekurzivnu funkciju za izračunavanje sume parnih u intervalu od 3 do 8.
 * Kategorija: Funkcije - Rekurzija /FUNCTIONS - RECURSION/ - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/094c/09411026.htm
 */

#include <stdio.h>

int suma_paran(int k, int n) {
if(k > n)           // ponavljanje do izlaska iz granica dok je k <= n?
return 0;    // kraj rekurzije

if(k % 2 == 0)       // k parno?
return k + suma_paran(k + 1, n);  // povratne vrijednost i poziv iste funkcije sa uvecanim k za 1
else
return suma_paran(k + 1, n);    // poziv iste funkcije sa uvecanim k za 1 bez uticaja na sumu
}

int main () {
printf("Suma parnih prirodnih brojeva od 3 do 8. Rekurzija\n");
int k=3, n=8, s;

s = suma_paran(k, n);      // poziv funkcije suma

printf("Suma parnih brojeva od 3 do 8 je %d", s);     // ispis vrijednosti ulaznih i izlaznih varijabli

return 0;
}

Ispis na ekranu:
Suma parnih prirodnih brojeva od 3 do 8. Rekurzija
Suma parnih brojeva od 3 do 8 je 18
/*
 * ZADATAK 09411025 - 09411025
 * Napisati rekurzivnu funkciju za izračunavanje sume prirodnih brojeva od k do n.
 * Kategorija: Funkcije - Rekurzija /FUNCTIONS - RECURSION/ - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/094c/09411025.htm
 */

#include <stdio.h>
int suma(int k1, int n1) {
if( n1 == k1)   // ponavljanje do granicne vrijednosti ulazne varijable?
return k1;  // kraj rekurzije
return n1 + suma(k1, n1 - 1);    // izracunavanje izlazna vrijednost funkcije
}

int main () {
printf("Suma prirodnih brojeva od k do n - Rekurzija\n");
int k, n, s;

printf("Od broja: ");      // ulazne vrijednosti
scanf("%d",&k);
printf("Do broja: ");      // ulazne vrijednosti
scanf("%d",&n);

s = suma(k, n);      // poziv funkcije suma

printf("Suma brojeva od %d do %d je %d", k, n, s);     // ispis vrijednosti ulaznih i izlaznih varijabli
return 0;
}

II verzija
// 09411025
#include <stdio.h>

int suma(int k1, int n1) {

if(k1 == n1)    // ponavljanje do granicne vrijednosti ulazne varijable?
return n1;  // kraj rekurzije
return k1 + suma(k1 + 1, n1);    // izracunavanje izlazna vrijednost funkcije
}

int main () {
printf("Suma prirodnih brojeva od k do n - Rekurzija\n");
int k, n, s;

printf("Od broja: ");      // ulazne vrijednosti
scanf("%d",&k);
printf("Do broja: ");      // ulazne vrijednosti
scanf("%d",&n);

s = suma(k, n);      // poziv funkcije suma
printf("Suma brojeva od %d do %d je %d", k, n, s);     // ispis vrijednosti ulaznih i izlaznih varijabli

return 0;
}

Ispis na ekranu:
Suma prirodnih brojeva od k do n - Rekurzija
Od broja: 3
Do broja: 6
Suma brojeva od 3 do 6 je 18
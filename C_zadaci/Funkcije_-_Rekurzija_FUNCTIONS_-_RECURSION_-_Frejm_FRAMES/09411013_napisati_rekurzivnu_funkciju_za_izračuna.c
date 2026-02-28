/*
 * ZADATAK 09411013 - 09411013
 * Napisati rekurzivnu funkciju za izračunavanje sume parnih od prvih n prirodnih brojeva.
 * Kategorija: Funkcije - Rekurzija /FUNCTIONS - RECURSION/ - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/094c/09411013.htm
 */

#include <stdio.h>

int suma_par(unsigned n) {
if(n == 2)      // ponavljanje do granicne vrijednosti ulazne varijable?
return 2;   // prvi paran broj je 2 - kraj rekurzije
else
return n + suma_par(n-2);   // slijedeci paran je umanjen za 2
}

int main () {
printf("Suma parnih brojeva do n - Rekurzija\n");
int broj_n, s;

printf("Broj: ");      // ulazne vrijednosti
scanf("%d",&broj_n);
printf("Suma parnih brojeva od 1 do %d je ", broj_n);  // ispis vrijednosti ulzne  varijabli
if(broj_n % 2 != 0)     // provjera neparanosti?
broj_n--;           // radi samo do parne vrijednosti n

s = suma_par(broj_n);   // poziv funkcije suma_par

printf("%d", s);       // izracunata vrijednost
return 0;
}

II verzija
// 09411013_v2
#include <stdio.h>

int suma_paran(unsigned n) {
if(n == 2)      // ponavljanje do granicne vrijednosti parnih brojeva?
return 2;   // posljednji paran 2

if(n % 2 == 0)       // k parno?
return n + suma_paran(n - 1);  // formira sumu i poziv iste funkcije sa umanjemnim n za 1
else
return suma_paran(n - 1);      // poziv iste funkcije sa umanjemnim n za 1
}

int main () {
printf("Suma parnih brojeva do n - Rekurzija\n");
int broj_n;

printf("Broj: ");      // ulazne vrijednosti
scanf("%d",&broj_n);

printf("Suma parnih brojeva od 1 do %d je %d", broj_n, suma_paran(broj_n));  // ispis vrijednosti ulzne  varijabli
return 0;
}

Ispis na ekranu:
Suma parnih brojeva do n - Rekurzija
Broj: 5
Suma parnih brojeva od 1 do 5 je 6
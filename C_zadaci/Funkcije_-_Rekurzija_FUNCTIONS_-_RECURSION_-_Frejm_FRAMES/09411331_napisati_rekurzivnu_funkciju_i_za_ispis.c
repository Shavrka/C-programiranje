/*
 * ZADATAK 09411331 - 09411331
 * Napisati rekurzivnu funkciju i za ispis sume vrijednosti prvih n brojeva niza: 1/2 + 1/4 + ... + 1/2*n.
 * Kategorija: Funkcije - Rekurzija /FUNCTIONS - RECURSION/ - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/094c/09411331.htm
 */

#include <stdio.h>

double suma(int n1) {
if(n1 == 1)         // ponavljanje do granicne vrijednosti ulazne varijable?
return 1.0/2;   // kraj rekurzije
else
return 1.0/(2 * n1) + suma(n1 -1);    // povratne vrijednost i poziv iste funkcije sa umanjenim n za 1
}

int main () {
printf("Suma prvih n brojeva (1/2n). Rekurzija\n");
int broj;

printf("Broj: ");      // ulazne vrijednosti
scanf("%d",&broj);

printf("Suma brojeva od 1 do %d je %f", broj, suma(broj));     // ispis vrijednosti ulaznih i izlaznih varijabli
return 0;
}

Ispis na ekranu:
Suma prvih n brojeva (1/2n). Rekurzija
Broj: 3
Suma brojeva od 1 do 3 je 0.916667

Drugo izvođenje:
Suma prvih n brojeva (1/2n). Rekurzija
Broj: 14
Suma brojeva od 1 do 14 je 1.625781
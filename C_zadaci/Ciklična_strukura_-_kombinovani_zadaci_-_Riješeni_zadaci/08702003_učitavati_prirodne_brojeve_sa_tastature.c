/*
 * ZADATAK 3 - 08702003
 * Učitavati prirodne brojeve sa tastature i izračunati njihov proizvod. Proces se prikida učitavanjem 0.
 * Kategorija: Ciklična strukura - kombinovani zadaci - Riješeni zadaci
 * Izvor: https://www.znanje.org/knjige/computer/c/v/087c/08702003.htm
 */

#include <stdio.h>

int main ()
{
printf("Množenje brojeva dok se ne ucita 0\n");
int broj;                    // deklarisanje varijabli
int p = 1;                   // pocetna vrijednost sume

printf("Broj ili 0: ");      // prvi broj
scanf("%d", &broj);          // ulaz

while (broj != 0) {          // ponavljaj sve dok se ne ucita 0
p = p * broj;            // pomnoži proizvod p sa ucitanim brojem
//        printf("Suma %d\n", s);   // ispis proizvoda ako zelite prikaz za svaki broj
printf("Broj ili 0: ");  // novi broj
scanf("%d", &broj);      // ulaz
}
printf("Proizvod %d\n", p);   // ispis proizvoda

return 0;
}

Ispis na ekranu:
Množenje brojeva dok se ne ucita 0
Broj ili 0: 2
Broj ili 0: 5
Broj ili 0: 3
Broj ili 0: 0
Proizvod 30
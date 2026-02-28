/*
 * ZADATAK 2 - 08702002
 * Učitavati prirodne brojeve sa tastature i izračunati njihovu sumu. Proces se prikida učitavanjem 0.
 * Kategorija: Ciklična strukura - kombinovani zadaci - Riješeni zadaci
 * Izvor: https://www.znanje.org/knjige/computer/c/v/087c/08702002.htm
 */

#include <stdio.h>

int main ()
{
printf("Sabiranje brojeva dok se ne ucita 0\n");
int broj;                    // deklarisanje varijabli
int s = 0;                   // pocetna vrijednost sume

printf("Broj ili 0: ");      // prvi broj
scanf("%d", &broj);          // ulaz

while (broj != 0) {          // ponavljaj sve dok se ne ucita 0
s = s + broj;            // uvecaj sumu sa ucitanim brojem
//        printf("Suma %d\n", s);   // ispis sume ako zelite prikaz za svaki broj
printf("Broj ili 0: ");  // novi broj
scanf("%d", &broj);      // ulaz
}
printf("Suma %d\n", s);   // ispis sume

return 0;
}

Ispis na ekranu:
Sabiranje brojeva dok se ne ucita 0
Broj ili 0: 2
Broj ili 0: 4
Broj ili 0: 5
Broj ili 0: 0
Suma 11
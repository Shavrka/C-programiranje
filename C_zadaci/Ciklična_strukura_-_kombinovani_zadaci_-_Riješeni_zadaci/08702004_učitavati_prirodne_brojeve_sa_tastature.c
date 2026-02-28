/*
 * ZADATAK 4 - 08702004
 * Učitavati prirodne brojeve sa tastature i izračunati njihovu aritmetičku sredinu. Proces se prikida učitavanjem 0.
 * Kategorija: Ciklična strukura - kombinovani zadaci - Riješeni zadaci
 * Izvor: https://www.znanje.org/knjige/computer/c/v/087c/08702004.htm
 */

#include <stdio.h>

int main ()
{
printf("Aritmeticka sredina brojeva dok se ne ucita 0\n");
int broj;                    // deklarisanje varijabli
float asr;                   // deklarisanje varijabli
int s = 0, br;               // pocetna vrijednost sume i brojaca

printf("Broj ili 0: ");      // prvi broj
scanf("%d", &broj);          // ulaz

while (broj != 0) {          // ponavljaj sve dok se ne ucita 0
s = s + broj;            // uvecaj sumu sa ucitanim brojem
br++;                    // uvecaj brojac
//        printf("Suma %d\n", s);   // ispis sume ako zelite prikaz za svaki broj
//        printf("Brojac %d\n", br);   // ispis brojac ako zelite prikaz za svaki broj
printf("Broj ili 0: ");  // novi broj
scanf("%d", &broj);      // ulaz
}
asr = (double)s / br;        // aritmeticka sredina
printf("Aritmeticka sredina brojeva = %f \n",asr);
return 0;
}

Ispis na ekranu:
Aritmeticka sredina brojeva dok se ne ucita 0
Broj ili 0: 3
Broj ili 0: 4
Broj ili 0: 7
Broj ili 0: 0
Aritmeticka sredina brojeva = 4.666667
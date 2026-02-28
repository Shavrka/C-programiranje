/*
 * ZADATAK 96 - 08702209
 * Za učitano n i m učitati n brojeva te izračunati aritmetičku sredinu brojeva većih od m.
 * Kategorija: Ciklična strukura - kombinovani zadaci - Riješeni zadaci
 * Izvor: https://www.znanje.org/knjige/computer/c/v/087c/08702209.htm
 */

#include <stdio.h>

int main()
{
int n, m, a;
double asr;

printf("Aritmeticka sredina n brojeva vecih od m\n");
printf("Koliko brojeva : ");
scanf("%d",&n);                 // koliko brojeva će se ucitati
printf("Granicna vrijednost: ");
scanf("%d",&m);                 // granicna vrijednost (trazi se veci od granice)

int br = 0, s = 0;              // pocetne vrijednosti suma i brojac

for (int i=1; i<= n; i++){      // ponavljaj n puta ucitavanje
printf("%d. broj : " , i);  // broj
scanf("%d",&a);             // ucitaj broj
if (a > m) {                // ucitani broj veci od granice?
s = s + a;              // da, uvecaj sumu
br = br + 1;            // da, uvećaj brojac jos jedan broj
}
}

if (br > 0) {                   // da li ima brojeva većih od granice?
asr = (double)s / br;       // izracunaj asr
printf("s = %d    ima veci od granice = %d\n" , s, br);
printf("Aritmeticka sredina brojeva vecih od %d je: %lf", m, asr);
} else {
printf("Svi ucitani brojevi nisu veci od granice");
}
return 0;
}

Ispis na ekranu:
Aritmeticka sredina n brojeva vecih od m
Koliko brojeva 5
Granicna vrijednost 3
1. broj 5
2. broj 4
3. broj 3
4. broj 22
5. broj 1
s = 31  ima veci od granice = 3
Aritmeticka sredina brojeva vecih od 3 je 10.333333333333334
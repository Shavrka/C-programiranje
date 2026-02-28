/*
 * ZADATAK 95 - 08702208
 * Za učitano n i m učitati n brojeva te izračunati aritmetičku sredinu brojeva manjih od m.
 * Kategorija: Ciklična strukura - kombinovani zadaci - Riješeni zadaci
 * Izvor: https://www.znanje.org/knjige/computer/c/v/087c/08702208.htm
 */

#include <stdio.h>

int main()
{
int n, m, a;
double asr;

printf("Aritmeticka sredina n brojeva brojeva manjih od m\n");
printf("Koliko brojeva : ");
scanf("%d",&n);                 // koliko brojeva će se ucitati
printf("Granicna vrijednost: ");
scanf("%d",&m);                 // granicna vrijednost (trazi se veci od granice)

int br = 0, s = 0;              // pocetna vrijednost

for (int i=1; i<= n; i++){      // ponavljaj n puta ucitavanje
printf("%d. broj : " , i);  // broj
scanf("%d",&a);             // ucitaj broj
if (a < m) {                // ucitani broj manji od granice
s = s + a;              // uvecaj sumu
br = br + 1;            // jos jedan broj
}
}

if (br > 0) {                   // da li ima brojeva manjih od granice?
asr = (double)s / br;       // izracunaj asr
printf("s = %d    ima manji od granice = %d\n" , s, br);
printf("Aritmeticka sredina brojeva manjih od %d je: %lf", m, asr);
} else {
printf("Svi ucitani brojevi nisu manji od granice");
}
return 0;
}

Ispis na ekranu:
Aritmeticka sredina n brojeva brojeva manjih od m
Koliko brojeva 5
Granicna vrijednost 3
1. broj 5
2. broj 3
3. broj 4
4. broj 1
5. broj 2
s 3 je 2
Aritmeticka sredina brojeva manjih od 3 je 1.5
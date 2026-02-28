/*
 * ZADATAK 104 - 08702229
 * Za učitano n i m učitati n brojeva te izračunati aritmetičku sredinu brojeva većih od m. Izračunati proizvod ostalih učitanih brojeva.
 * Kategorija: Ciklična strukura - kombinovani zadaci - Riješeni zadaci
 * Izvor: https://www.znanje.org/knjige/computer/c/v/087c/08702229.htm
 */

#include <stdio.h>

int main()
{
int n, m, a;
double asr;

printf("Aritmeticka sredina n brojeva vecih od m i proizvod ostalih\n");
printf("Koliko brojeva : ");
scanf("%d",&n);                 // koliko brojeva će se ucitati
printf("Granicna vrijednost: ");
scanf("%d",&m);                 // granicna vrijednost (trazi se veci od granice)

int br = 0, s = 0;              // pocetne vrijednosti
float p = 1;                    // pocetna vrijednost proizvoda

for (int i=1; i<= n; i++){      // ponavljaj n puta ucitavanje
printf("%d. broj : " , i);  // broj
scanf("%d",&a);             // ucitaj broj
if (a > m) {                // ucitani broj veci od granice?
s = s + a;              // da, uvecaj sumu
br = br + 1;            // da, uvećaj brojac jos jedan broj
} else {                     // inace
p = p * a;              // da, uvecaj proizvod
}
}

if (br > 0) {                   // da li ima brojeva većih od granice?
asr = (double)s / br;       // izracunaj asr
printf("s = %d    ima veci od granice = %d\n" , s, br);               // ispis suam i brojac
printf("Aritmeticka sredina brojeva vecih od %d je: %lf\n", m, asr);  // ipsis aritme. sredina
} else {
printf("Svi ucitani brojevi nisu veci od granice\n");                   // nema brojava vecih od m
}
printf("proizvod = %f", p);                                               // ispis proizvoda
return 0;
}

Ispis na ekranu:
Aritmeticka sredina n brojeva vecih od m i proizvod ostalih
Koliko brojeva : 5
Granicna vrijednost: 3
1. broj : 3
2. broj : 5
3. broj : 4
4. broj : 2
5. broj : 1
s = 9    ima veci od granice = 2
Aritmeticka sredina brojeva vecih od 3 je: 4.500000
proizvod = 6.000000
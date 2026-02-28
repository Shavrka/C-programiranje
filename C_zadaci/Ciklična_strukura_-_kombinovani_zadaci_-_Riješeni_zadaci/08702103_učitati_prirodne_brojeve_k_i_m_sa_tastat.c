/*
 * ZADATAK 24 - 08702103
 * Učitati prirodne brojeve K i M sa tastature. Od broja K ispisati M neparnih brojeva.
 * Kategorija: Ciklična strukura - kombinovani zadaci - Riješeni zadaci
 * Izvor: https://www.znanje.org/knjige/computer/c/v/087c/08702103.htm
 */

#include <stdio.h>

int main ()
{
printf("Ipis m neparnih od k \n");
int i, k, brnep, m;            // deklarisanje varijabli i, n
printf("Od broja: ");
scanf("%d", &k);               // od kog broj pocinje pretraga neparnih
printf("Koliko neparnih m: ");
scanf("%d", &m);               // koliko neparnih se ispisuje
brnep = 0;                     // pocetna vrijednost neparnih

for (int i=k; brnep < m; i++)  // ponavljanje za i=k do brojac neparnih brnep < m - pocetak petlje
if (i%2 != 0)   {          // i neparan broj od k ili k +1
printf("%d \n",  i);   // da, ispis neparih
brnep++;               // brojac neparnih uvecaj
}
return 0;
}

II verzija   while petlja
// 08702103
#include <stdio.h>

int main ()
{
int k, m;
printf("Od broja: ");
scanf("%d", &k);
printf("Zeljeni broj m: ");
scanf("%d", &m);
int i, br;
i = k;      // početna vrijednost
br = 0;     // brojač - početna vrijednost

while (br < m) {           // dok nije ispisan željeni broj neparnih broeva ponavljaj - pocetak petlje
if (i % 2 != 0) {      // da li je broj paran
printf("%d \n",i); // ispis neparnog
br = br + 1;       // brojač neparnih uvečaj za 1
}
i++;    // napredovanje kroz petlju
}
return 0;
}

III verzija  nadji prvi parni od startnog broja
// 08702103
#include <stdio.h>

int main ()
{
int k, m;
printf("Od broja: ");
scanf("%d", &k);
printf("Zeljeni broj m: ");
scanf("%d", &m);

int nepar;            // početna vrijednost za neparne
if (k%2 != 0)         // odredi neparan broj od k ili k +1
nepar = k;        // k neparan startaj k
else
nepar = k + 1;    // k nije neparna startaj od slijedećeg broja k+1 (to je neparan broj)

for (int i=0; i < m; i++)    // ponavljanje za i=0 do i < m - pocetak petlje
printf("%d \n", nepar + 2 * i); // startna vrijednost + 2*i
return 0;
}

Ispis na ekranu:
Od broja k= 123
Željeni broj m= 5
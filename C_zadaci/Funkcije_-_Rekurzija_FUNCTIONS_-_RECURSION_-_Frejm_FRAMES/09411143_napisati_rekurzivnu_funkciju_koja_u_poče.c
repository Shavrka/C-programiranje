/*
 * ZADATAK 09411143 - 09411143
 * Napisati rekurzivnu funkciju koja u početnom zapisu broja n izbacuje svaku neparnu cifru, ukoliko se ispred te cifre nalazi cifra 2. Napisati program koji testira ovu funkciju, tako što sa standardnog ulaza učitava cio broj x, i na standardni izlaz ispisuje vrijednost funkcije f3(x). U slučaju greške ispisati -1 na standardni izlaz za greške.Napomena: Zadatak mora biti uradjen rekurzivno. Nije dozvoljeno korišćenje statičkih i globalnih promenljivih, menjanje zaglavlja funkcije i pisanje pomoćnih funkcija.Primjer 1:  Primjer 2:  Primjer 3:  Primjer 4:325         23523       12345       032          252         1245        0
 * Kategorija: Funkcije - Rekurzija /FUNCTIONS - RECURSION/ - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/094c/09411143.htm
 */

#include <stdio.h>

int izdvoji_3_iza_2(int n)
{
int cifra1, cifra2;
cifra1 = n%10;            // 1. cifra sdesna
cifra2 = (n%100) / 10;    // 2. cifra sdesna

if(n < 10)                // posljednja cifra ?
{
printf("%d", n);      // Samo prve cifre broja
return;               // kraj dijeljenja - rekurzije
}

// provjera neparan poslije 2
if(cifra1 % 2 != 0)       // 1. cifra nije neparna ?
{
if(cifra2 == 2)       // 2. cifra je 2?
{
if(n/100 != 0)               // ima jos cifara?
{
izdvoji_3_iza_2(n/100);  // umanji broj za dvije cifre (32)
}
printf("2");                 // izbaci 3 i ispisi 2
return;
}
else
{
izdvoji_3_iza_2(n/10);  // slijedeca cifra
printf("%d", cifra1);   // samo prve cifre broja
return;
}
}
else
{
izdvoji_3_iza_2(n/10);  // slijedeca cifra
printf("%d", cifra1);   // samo prve cifre broja
return;
}
}

int main()
{
printf("Formiraj novi broj bez neparnih ako je ispred nje 2 - Rekurzija\n");
int n, p;

printf("Broj: ");      // ulazne vrijednosti
scanf("%d",&n);

printf("Dati broj: %d \n", n); // dati broj
printf("Novi broj: ");          // Bez neparnih ako je 2 ispred njih
izdvoji_3_iza_2(n);             // izdvaja i provjerava cifre

return 0;
}

Ispis na ekranu:
Formiraj novi broj bez cifre 3 ako je ispred nje 2 - Rekurzija
Broj: 23452323
Dati broj:  23452323
Novi broj bez cifre 3 ako je ispred 2: 24522
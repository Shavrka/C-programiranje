/*
 * ZADATAK 09411142 - 09411142
 * Napisati rekurzivnu funkciju koja u početnom zapisu broja n izbacuje svaku cifru 3 ispred koje je cifra 2.Primjer 1:  Primjer 2:  Primjer 3:  Primjer 4:234         23523       12345       024          252         1245        0
 * Kategorija: Funkcije - Rekurzija /FUNCTIONS - RECURSION/ - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/094c/09411142.htm
 */

#include <stdio.h>

int izdvoji_3_iza_2(int n)
{
int cifra;
if(n < 10)                // posljednja cifra ?
{
printf("%d", n);      // Samo prve cifre broja
return;               // kraj dijeljenja - rekurzije
}
// provjera cifra 3 ispred 2
if(n % 100 == 23)              // cifre sa desna su 23?
{
if(n/100 != 0)              // ima jos cifara?
{
izdvoji_3_iza_2(n/100);  // umanji broj za dvije cifre (32)
}
printf("2");               // izbaci 3 i ispisi 2
return;
}
else
{
izdvoji_3_iza_2(n/10);  // slijedeca cifra
printf("%d", n%10);      // Samo prve cifre broja
return;
}
}

int main()
{
printf("Formiraj novi broj bez cifre 3 ako je ispred nje 2 - Rekurzija\n");
int n, p;

printf("Broj: ");      // ulazne vrijednosti
scanf("%d",&n);

printf("Dati broj: %d \n", n);            // dati broj
printf("Novi broj: ");   // Samo parne cifre broja
izdvoji_3_iza_2(n);   // broj bez kombinacije cifara 23

return 0;
}

Ispis na ekranu:
Formiraj novi broj bez cifre 3 ako je ispred nje 2 - Rekurzija
Broj: 23452323
Dati broj:  23452323
Novi broj bez cifre 3 ako je ispred 2: 24522
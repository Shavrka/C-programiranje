/*
 * ZADATAK 24010552 - 24010552
 * Napisati program koji traži da se sa tastature ucita neki dekadni broj, a koji nakon toga ispisuje isti broj pretvoren u binarni brojni sistem. Na primjer, ukoliko se učita broj 107, rezultat treba da bude 1101011, jer je (107)10= (1101011)2...
 * Kategorija: Riješeni zadaci 2 - C programi - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/240c/24010552.htm
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
int s = 0;                          // binarani broj
int dek, cif;                       // deklarisanje varijabli
printf("Ucitaj dekadni broj: ");
scanf("%d", &dek);                  // ucitaj novi dekadni broj
int p=1, a=dek;

p = 1;                              // koeficijent
a = dek;                            // vrijednost pomocne varijable
while(a >= 1)                       // pretvaranje binarnog broja
{
cif = a % 2;                    // izdvojena cifra s desna
a = a / 2;                      // odbaci cifru s desna
s = s % p;                      // odbaci jedinicu koju cuva nule u binarnom broju
s = s + cif * p;                // dekadni broj
p = p * 10;                     // koeficijent
s = s + p;                      // dodaj jedinicu na pocetak da bi sacuvali nule
printf("p %d \tdio broja %d \tcifra %d  \tbin  = %d \td = %d\n", p, a, cif, s, s - p); // vrijednosti varijabli
}

s = s % p;                          // odbaci jedinicu koju cuva nule
printf("Dekadni broj = %d ima binaranu vrijednost = %d", dek, s);
return 0;
}

Ispis na ekranu (vrijednosti varijabli u toku izvodjenja programa):
Ucitaj dekadni broj: 107
p 10    dio broja 53    cifra 1         bin  = 11       d = 1
p 100   dio broja 26    cifra 1         bin  = 111      d = 11
p 1000  dio broja 13    cifra 0         bin  = 1011     d = 11
p 10000         dio broja 6     cifra 1         bin  = 11011    d = 1011
p 100000        dio broja 3     cifra 0         bin  = 101011   d = 1011
p 1000000       dio broja 1     cifra 1         bin  = 1101011  d = 101011
p 10000000      dio broja 0     cifra 1         bin  = 11101011         d = 1101011
Dekadni broj = 107 ima binaranu vrijednost = 1101011
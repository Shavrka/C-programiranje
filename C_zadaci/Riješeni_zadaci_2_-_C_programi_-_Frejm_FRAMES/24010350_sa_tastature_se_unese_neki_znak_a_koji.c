/*
 * ZADATAK 24010350 - 24010350
 * Sa tastature se unese neki znak, a koji će zatim na ekranu ispisati njegovu ASCII šifru, kao i znakove koji prethode unesenom znaku odnosno koji slijede iza njega prema tablici ASCII šifri.
 * Kategorija: Riješeni zadaci 2 - C programi - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/240c/24010350.htm
 */

#include <stdlib.h>
#include <string.h>

int main()
{
char c;
printf("Unesite znak:");
scanf("%c",&c);
printf("ASCII kod unesenog znaka:%0x\n",c);
char d2 = (char) ((int)c + 1);
char d1 = (char) ((int)c - 1);
printf("Znak prije:%c, znak poslije:%c",d1,d2);
return 0;
}
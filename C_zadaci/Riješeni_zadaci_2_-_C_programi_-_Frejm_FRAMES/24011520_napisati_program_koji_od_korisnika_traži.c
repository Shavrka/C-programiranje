/*
 * ZADATAK 24011520 - 24011520
 * Napisati program koji od korisnika traži da sa tastature unese rečenicu, a koji će zatim ispisati unesenu rečenicu bez prve riječi te rečenice.
 * Kategorija: Riješeni zadaci 2 - C programi - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/240c/24011520.htm
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
char recenica[100];
char *pok;
gets(recenica);
pok=&recenica[0];
while((*pok >= 'a'&&*pok<='z')||(*pok >= 'A'&&*pok<='Z'))
pok++;
while((*pok<'a'||*pok > 'z')&&(*pok < 'A'||*pok>'Z'))
pok++;
while(*pok!=0)
printf("%c", *pok++);
return 0;
}
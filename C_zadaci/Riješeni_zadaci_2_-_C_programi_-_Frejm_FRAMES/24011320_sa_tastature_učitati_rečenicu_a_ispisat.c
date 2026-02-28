/*
 * ZADATAK 24011320 - 24011320
 * Sa tastature učitati rečenicu, a ispisati svaku riječ te rečenice u posebnom redu, kao i informaciju koliko ta rečenica ima slova (ne računajući interpunkcijske znakove) i riječi...
 * Kategorija: Riješeni zadaci 2 - C programi - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/240c/24011320.htm
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
char s[100];
printf("Unesite recenicu:");
gets(s);
int k=0, j=0;
for(int i=0; i<=strlen(s)-1; i++)
{
if(!((s[i]<'A'||s[i]>'Z')&&(s[i]<'a'||s[i]>'z')))
{
k++;
printf("%c", s[i]);
}
if(((s[i+1]<'A'||s[i+1]>'Z')&&(s[i+1]<'a'||s[i+1]>'z'))&&!((s[i]<'A'||s[i]>'Z')&&(s[i]<'a'||s[i]>'z')))
{
printf("\n");
j++;
}
}
printf("Broj slova je %d, a broj rijeci %d.", k, j);
return 0;
}
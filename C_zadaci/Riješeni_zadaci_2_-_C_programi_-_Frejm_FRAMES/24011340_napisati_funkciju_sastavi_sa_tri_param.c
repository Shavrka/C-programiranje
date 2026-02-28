/*
 * ZADATAK 24011340 - 24011340
 * Napisati funkciju “Sastavi“ sa tri parametra “A”, “B“ i “C“. Sva tri parametra predstavljaju nul-terminirane nizove znakova (klasične stringove). Funkcija treba da u parametar “C“ smjesti string koji se dobija nadovezivanjem stringa “A“ na string “B”...
 * Kategorija: Riješeni zadaci 2 - C programi - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/240c/24011340.htm
 */

#include <stdio.h>
#include <stdlib.h>

int sastavi(const char a[], const char b[], char c[])
{
int i=0;
while(a[i]!=0)
{
c[i]=a[i];
i++;
}
int j=0;
while(b[j]!=0)
{
c[i++]=b[j++];
}
c[i]='\0';
}

int main()
{
char a[50], b[50], c[50];
printf("Unesite recenicu:");
gets(a);
printf("Unesite jos jednu:");
gets(b);
sastavi(a,b,c);
printf("%s", c);
return 0;
}
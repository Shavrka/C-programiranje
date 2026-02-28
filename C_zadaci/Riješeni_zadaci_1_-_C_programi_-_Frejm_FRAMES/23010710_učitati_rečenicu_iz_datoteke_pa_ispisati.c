/*
 * ZADATAK 23010710 - 23010710
 * Učitati rečenicu iz datoteke pa ispisati na ekran koliko ima samoglasnika a koliko suglasnika.
 * Kategorija: Riješeni zadaci 1 - C programi - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/230c/23010710.htm
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
char rec[100];
int i,duzina,samogl=0,sugl=0;
FILE *ulaz;
if(ulaz=fopen("ulaz.txt","r"))
{
{
while(fscanf(ulaz,"%s", rec)!=EOF)
{
i=0;
duzina=strlen(rec);
while(i < duzina)
{
if(rec [i]!='a' && rec [i]!='e' && rec [i]!='i' && rec [i]!='o' && rec [i]!='u' && rec [i]!='A' && rec [i]!='E' && rec [i]!='I' && rec [i]!='O' && rec [i]!='U' && rec [i]!=' ')
sugl++;
else if(rec[i]!=' ')
samogl++;
i++;
}
}
fclose(ulaz);
}
printf("Recenica ima %d samoglasnika i %d suglasnika.", samogl,sugl);
}
return 0;
}
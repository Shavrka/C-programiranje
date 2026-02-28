/*
 * ZADATAK 23010700 - 23010700
 * Rečenicu iz ulazne datoteke napisati bez samoglasnika u izlaznu datoteku.
 * Kategorija: Riješeni zadaci 1 - C programi - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/230c/23010700.htm
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
char rec[100];
int i,duzina;
FILE *ulaz;
if(ulaz=fopen("ulaz.txt","r"))
{
FILE* izlaz;
izlaz=fopen("izlaz.txt","w");
{
while(fscanf(ulaz,"%s", rec)!=EOF)
{
i=0;
duzina=strlen(rec);
while(i < duzina)
{
if(rec [i]!='a' && rec [i]!='e' && rec [i]!='i' && rec [i]!='o' && rec [i]!='u' && rec [i]!='A' && rec [i]!='E' && rec [i]!='I' && rec [i]!='O' && rec [i]!='U')
fputc(rec[i++],izlaz);
else
i++;
}
}
fclose(izlaz);
fclose(ulaz);
}
}
return 0;
}
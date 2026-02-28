/*
 * ZADATAK 23010750 - 23010750
 * Rečenicu iz ulazne datoteke napisati obrnuto u izlaznu datoteku.
 * Kategorija: Riješeni zadaci 1 - C programi - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/230c/23010750.htm
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
char rec[200];
int i=0;
FILE *ulaz;
if(ulaz=fopen("ulaz.txt","r"))
{
FILE *izlaz=fopen("izlaz.txt","w");
while((rec[i]=fgetc(ulaz))!=EOF)
i++;
for(int j=i-1; j>=0; j--)
fputc(rec[j],izlaz);
fclose(izlaz);
fclose(ulaz);
}
return 0;
}
/*
 * ZADATAK 23010680 - 23010680
 * Učitati niz od 10 cijelih brojeva pomoću datoteke. Sabrati sve brojeve bez ponavljanja i spremiti brojeve bez ponavljanja i sumu u drugu datoteku.
 * Kategorija: Riješeni zadaci 1 - C programi - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/230c/23010680.htm
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
FILE *ulaz;
if(ulaz=fopen("niz.txt","r"))
{
FILE* izlaz;
izlaz=fopen("sumabezpon.txt","w");
{
int a[10],suma=0;
int dupli[10]= {0};
for(int i=0; i < 10; i++)
fscanf(ulaz,"%d ",&a[i]);
for(int i=0; i < 9; i++)
for(int j=i+1; j < 10; j++)
{
if(a[i]==a[j])
dupli[j]=1;
}
for(int i=0; i < 10; i++)
if(dupli[i]==0)
{
suma=suma+a[i];
fprintf(izlaz,"%d ",a[i]);
}
fprintf(izlaz,"Suma bez ponavljanja: %d", suma);
fclose(izlaz);
fclose(ulaz);
}
}
return 0;
}
/*
 * ZADATAK 08115002 - 08115002
 * Učitati visine za n osoba. Ispisati prosječnu i najveću visinu.
 * Kategorija: FOR petlja - C programi - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/081c/08115002.htm
 */

#include <stdio.h>
#include <math.h>
main()
{
int i,n,max,s,br,x;
double as;

printf("Najveca i prosjecna visina od n ucitanih \n");
printf("Broj visina: ");
scanf("%d",&n);
printf("1. visina: ");
scanf("%d",&x);

max=x;
s=x;
br=1;
for(i=2; i<=n; i++)
{
printf("%d",i);
printf(". visina: ");
scanf("%d",&x);
s=s+x;
br=br+1;
if(x > max)
max = x;
}
as=s/br;
printf("Najveci od: %d \n",n);
printf(" ucitanih je %d \n",max);
printf("Prosjecna vrijednost od: %d \n",n);
printf(" ucitanih je %lf \n",as);
getchar();
return 0;
}
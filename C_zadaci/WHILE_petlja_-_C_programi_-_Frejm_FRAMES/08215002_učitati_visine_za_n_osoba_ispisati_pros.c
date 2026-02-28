/*
 * ZADATAK 08215002 - 08215002
 * Učitati visine za n osoba. Ispisati prosječnu i najveću visinu.
 * Kategorija: WHILE petlja - C programi - Frejm /FRAMES/
 * Izvor: http://www.znanje.org/knjige/computer/c/v/082c/08215002.htm
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
i=2;
while(i<=n)
{
printf("%d",i);
printf(". visina: ");
scanf("%d",&x);
s=s+x;
br=br+1;
if(x > max)
max = x;
i++;
}
as=s/br;
printf("Najveci od: %d \n",n);
printf(" ucitanih je %d \n",max);
printf("Prosjecna vrijednost od: %d \n",n);
printf(" ucitanih je %lf \n",as);
getchar();
return 0;
}
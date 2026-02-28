/*
 * ZADATAK 08115003 - 08115003
 * Učitati visine i težinu za n osoba. Ispisati prosječnu, najmanju i najveću visinu i težinu.
 * Kategorija: FOR petlja - C programi - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/081c/08115003.htm
 */

#include <stdio.h>
#include <math.h>
main()
{
int i,n,maxvis,maxtez,minvis,mintez,svis,stez,brvis,brtez,vis,tez;
double asvis,astez;

printf("Najveci,najmanji,najtezi i najlaksi kao i prosjecni od n ucitanih \n");
printf("n= ");
scanf("%d",&n);
printf("Visina:  ");
scanf("%d",&vis);
printf("Tezina: ");
scanf("%d",&tez);

maxtez=tez;
maxvis=vis;
mintez=tez;
minvis=vis;
svis=vis;
brvis=1;
stez=tez;
brtez=1;

for(i=2; i<=n; i++)
{
printf("Visina: ");
scanf("%d",&vis);
printf("Tezina: ");
scanf("%d",&tez);
svis=svis+vis;
brvis=brvis+1;
stez=stez+tez;
brtez=brtez+1;
if(tez > maxtez)
maxtez=tez;
if(vis > maxvis)
maxvis=vis;
if(tez < mintez)
mintez=tez;
if(vis < minvis)
minvis=vis;
}
asvis=svis/brvis;
astez=stez/brtez;
printf("Najvisi od: %d \n",n);
printf("ucitanih je %d \n",maxvis);

printf("Najtezi od: %d \n",n);
printf("ucitanih je %d \n",maxtez);
printf("Najnizi od: %d \n",n);
printf("ucitanih je %d \n",minvis);
printf("Najlaksi od: %d \n",n);
printf("ucitanih je %d \n",mintez);
printf("Prosjecna vrijednost visine od: %d \n",n);
printf("ucitanih je %lf \n",asvis);
printf("Prosjecna vrijednost tezine od: %d \n",n);
printf("ucitanih je %lf \n",astez);
getchar();
return 0;
}
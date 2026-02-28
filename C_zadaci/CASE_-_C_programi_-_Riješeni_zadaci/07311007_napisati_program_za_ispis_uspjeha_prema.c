/*
 * ZADATAK 12 - 07311007
 * Napisati program za ispis uspjeha, prema slijedećoj tabeli:
 * Kategorija: CASE - C programi - Riješeni zadaci
 * Izvor: http://www.znanje.org/knjige/computer/c/v/073c/07311007.htm
 */

#include <stdio.h>

int main() {
float bb;
int ibb;
printf("Uspjeh: ");
scanf("%f",&bb);

ibb = (int) (bb + 0.5);  // dodaj 0.5 i odbaci decimalna mjesta

switch(ibb) {
case 0 ... 1:
printf("Nedovoljan\n");
break;
case 2:
printf("Dovoljan\n");
break;
case 3:
printf("Dobar\n");
break;
case 4:
printf("Vrlodobar\n");
break;
case 5:
printf("Odlican\n");
break;
default:
printf("Nevalidan unos\n");
break;
}
return 0;
}

II varijanta sa if-else
//07311007
#include <stdio.h>

int main(){
double a;
printf("Ocjena-Prosjek\nProsjek:\n");
scanf("%lf",&a);

if ((a>=0)&&(a<=1.4))
{
printf("Nedovoljan\n");
}

else if ((a>=1.5)&&(a<=2.4))
{
printf("Dovoljan\n");
}

else if ((a>=2.5)&&(a<=3.4))
{
printf("Dobar\n");
}

else if ((a>=3.5)&&(a<=4.4))
{
printf("Vrlodobar\n");
}

else if ((a>=4.5)&&(a<=5))
{
printf("Odlican\n");
}
else{
printf("Nevalidan unos\n");
}

return 0;
}
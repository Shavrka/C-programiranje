/*
 * ZADATAK 60 - 07211014
 * Od tri učitana broja (a, b, c) sa tastature naći najveći max(a, b, c).
 * Kategorija: IF THEN/IF THEN ELSE - C programi - Riješeni zadaci
 * Izvor: https://www.znanje.org/knjige/computer/c/v/072C/07211014.htm
 */

#include <stdio.h>

int main ()

{
double a,b,c,max;
printf("Vasa 3 broja:   \n");
scanf("%f", &a);
scanf("%f", &b);
scanf("%f", &c);
max=a;            // pretpostavimo da je prvi broj najveći
if (b > max)      // ako je drugi broj veći od pretpostavljenog
max=b;      // to je novi max
if (c > max)      // ako je treći broj veći od pretpostavljenog
max=c;       // to je novi max
printf("Od brojeva %f %f %f \n", a, b, c);
printf("Najveci je %f \n", max);

return 0;
}

Verzija 2
#include <stdio.h>
int main(){

int a, b, c;
printf("Vasa 3 broja: ");
scanf("%d %d %d", &a, &b, &c);

printf("Od brojeva %d %d %d \n", a, b, c);
if (a > b && a > c) {                // da li je prvi najveći
printf("Najveci je %d \n", a);   // prvi je najveći
}
else if (b > a && b > c) {           // da li je drugi najveći
printf("Najveci je %d \n", b);   // drugi je najveći
}
else if (c > a && c > b) {           // da li je treći najveći
printf("Najveci je %d \n", c);   // treći je najveći
}
else {
printf("Dva ili tri broj su ista");
}
return 0;
}
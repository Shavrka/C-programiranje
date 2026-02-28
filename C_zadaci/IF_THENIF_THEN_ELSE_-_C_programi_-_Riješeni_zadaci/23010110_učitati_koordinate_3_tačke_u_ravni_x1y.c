/*
 * ZADATAK 230_11 - 23010110
 * Učitati koordinate 3 tačke u ravni: x1,y1; x2, y2; x3,y3. Te 3 tačke predstavljaju tjemena trougla u ravni. Izračunati i Ispisati obim i površinu tog trougla. Za površinu koristiti Heronovu formulu.
 * Kategorija: IF THEN/IF THEN ELSE - C programi - Riješeni zadaci
 * Izvor: https://www.znanje.org/knjige/computer/c/v/230c/23010110.htm
 */

#include <stdio.h>
#include <math.h>

int main ()
{
float a, b, c, x1, x2, x3, y1, y2, y3, obim, s, povrsina;

printf("Koordinate 3 tacke\n");
printf("Vrijednost x1: ");
scanf("%f",&x1);
printf("Vrijednost y1: ");
scanf("%f",&y1);
printf("Vrijednost x2: ");
scanf("%f",&x2);
printf("Vrijednost y2: ");
scanf("%f",&y2);
printf("Vrijednost x3: ");
scanf("%f",&x3);
printf("Vrijednost y3: ");
scanf("%f",&y3);

a = sqrt((x2-x1)*(x2-x1)+ (y2-y1)*(y2-y1));  // duzina stranice a
b = sqrt((x3-x2)*(x3-x2)+ (y3-y2)*(y3-y2));  // duzina stranice b
c = sqrt((x3-x1)*(x3-x1)+ (y3-y1)*(y3-y1));  // duzina stranice c
obim = a + b + c;                          // obim trougla
s = obim / 2    ;                              // polubom za Heronovu formulu
povrsina = s *(s - a)*(s - b)*(s - c); // sqrt(s *(s - a)*(s - b)*(s - c));  // povrsina trougla

printf("Stranice: a=%f  b=%f  c=%f \n", a, b, c);
printf("s = %f \n", s);
printf("Obim = %f \n", obim);
printf("Povrsina = %f \n", povrsina);

return 0;
}
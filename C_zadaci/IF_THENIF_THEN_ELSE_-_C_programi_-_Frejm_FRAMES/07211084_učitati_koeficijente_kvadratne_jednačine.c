/*
 * ZADATAK 07211084 - 07211084
 * Učitati koeficijente kvadratne jednačine. Ispis ima odgovarajući izgled:
 * Kategorija: IF THEN/IF THEN ELSE - C programi - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/072c/07211084.htm
 */

#include <stdio.h>
#include <math.h>

int main()
{
double a, b, c, // Koeficijenti jednacine
d,              // Diskriminanta
x,              // Rjesenje je linearno
x1, x2,         // Realni dijelovi korijena
y1, y2;         // Imaginarni dijelovi korijena

printf("Ulaz koeficijenata kvadratne jednacine\n");
printf("a, b, c: ");
scanf ("%lf%lf%lf", &a, &b, &c);

y1=0.0;
y2=0.0;
if(a != 0.0) {
d = b * b  -4 * a * c;  // Diskriminanta
if (d > 0) {
x1 = (- b + sqrt(d)) / (2 * a);
x2 = (- b - sqrt(d)) / (2 * a);
printf("Realna rjesenja su:\n");
printf("x1=%f, x2=%f\n",x1, x2);
} else if (d == 0) {
x = - b/(2 * a);
printf("Rjesenje je linearno:\n");
printf("x1=%f\n",x);
} else{
x1 = -b / (2 * a);         x2 = x1;
y1 = sqrt(-d) / (2 * a);   y2 = - y1;
printf("Kompleksna rjesenja su:\n");
printf("z1=%f + i*(%f) \nz2=%f + i*(%f)\n",x1, y1, x2, y2);
}
}
else {
printf("Jednacina nije kvadratna.\n");
}

return 0;
}
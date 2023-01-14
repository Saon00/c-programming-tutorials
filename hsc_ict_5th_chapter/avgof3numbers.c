/*
Author
Md. Saon Sikder
BSc. in Computer Science & Engineering
Faridpur Engineering College
Youtube-Facebook-Instagram ID: BlackOsRa
*/

#include <stdio.h>
int main()
{
    int a, b, c, sum;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    sum = a + b + c;
    float avg = (float)sum / 3;
    printf("The avg is: %f", avg);
    return 0;
}

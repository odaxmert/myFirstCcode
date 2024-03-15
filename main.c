#include <stdio.h>
#include <stdlib.h>

int main()
{
int mynumber,square,cube;
printf("Enter the number whose square and cube you want me to find: %d\n",mynumber);
scanf("%d",&mynumber);
square=mynumber*mynumber;
cube=mynumber*mynumber*mynumber;
printf("Square your number: %d\n Cube your number: %d",square, cube);
    return 0;

}

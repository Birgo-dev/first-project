#include <stdio.h>
#include <stdlib.h>


int main ()
{
    printf("hello world!");
    int x, y ,z;
    x = y = z = 0;
    printf("enter x, y and z values\n ");
    scanf("x = %d",x);
    scanf("y = %d",y);
    scanf("z = %d",z);
    printf("x = %d y = %d z = %d\n",x,y,z); 
    x = x + y;
    y = x - y;
    x = x - y;
    printf("x = %d y = %d z = %d\n",x,y,z);
    z = z * x;
    printf("new z = %d",z);

    return 0;
}
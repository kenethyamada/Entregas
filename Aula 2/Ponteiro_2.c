#include <stdio.h>
#include <stdlib.h>

void swap (int *p1, int *p2){
int temp ;
temp = *p1;
*p1=*p2;
*p2= temp;
}

int main()

{
    int x=10,y=20;
    swap(&x,&y);
    printf("x: %d, y: %d\n", x, y);
}

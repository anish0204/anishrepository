#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a[10] = {1,2,3,4,5,6,7,8,9,10};
    printf("%d",a[9]);
    int i=10;
   
    int *ptr;
    //ptr=&i;
    printf("%d",*ptr);
    printf("%d",i);
    int b;
    b++;
    printf("%d",b);
}

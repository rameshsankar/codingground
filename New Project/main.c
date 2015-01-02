#include <stdio.h>

int main()
{
    //printf("Hello, World!\n");
    int i = 5;
    int* j = &i;
    int*k = j;
    
    int* l;
    
    printf("%d \n", *j);
    printf("%d \n", *k);
    printf("%d \n", &l);
    return 0;
}
    
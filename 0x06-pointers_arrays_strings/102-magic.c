#include <stdio.h>

int main(void)
{
int n;
int a[5];
int *p;

a[2] = 1024;
p = &n;
/*
* Add the following line of code...
*/
printf("a[2] = %d\n", 98);
/* ...so that this prints a[2] = 98, followed by a new line */
printf("a[2] = %d\n", a[2]);
return (0);
}

#include<stdio.h>

int i;

for ( i = 1; i <= 100; ++i)

{	if( i%3 == 0)
	{printf("Fizz");
	if( i%5 == 0)
	{prinf("Fuzz");}
	if( i%3 == 0 && i%5 == 0)
	{printf("Fizz-Fuzz!")};
}

return 0;
}

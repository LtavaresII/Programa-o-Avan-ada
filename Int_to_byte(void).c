#include <stdio.h>

void IntParaByte(int *x);

int main()
{
	int x = 3748;
	
	printf("Numero em Inteiro: %d\n", x );
	
	IntParaByte( &x );
	
	return 0;
}

void IntParaByte(int *x)
{
	int y;
 	int i;
 	
 	printf("Numero em Bytes: \n");
  
	for(i = 31; i >= 0; i--) {
    	y = *x >> i;  
    	if(y & 1) {
        	printf("1");
    	}else {
        	printf("0");
    	}
 	}
 	
}


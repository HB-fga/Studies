#include <stdio.h>

int main () {

	int count = 0;
	int N = 1025;
	
	for( int k = 0; k < N; k++ )
	{
		count = 0;
	
		for (int i = k; i > 0; i /= 2) {
		   for (int j = 0; j < i; j++) {
		      count += 1;
		   }
		}
	
		printf( "N = %d: count = %d\n", k, (2*k)-count );
	
	}
	
   return 0;
}

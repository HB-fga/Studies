#include <stdio.h>
	
int main()
{
	// ptr+1;
	// (*ptr)+1;
	// *(ptr+1);
	// *(ptr+10);

	/*
	int v[5] = { 4, 2, 1, 5, 6 };
	int *ptr;
	ptr = v;
	
	printf("0 - ##############################\n", ptr);
	printf("%d\n", ptr);
	printf("%p\n", ptr);
	
	printf("1 - ##############################\n", ptr);
	printf("%d\n", ptr+1);
	printf("%p\n", ptr+1);
	
	printf("2 - ##############################\n", ptr);
	printf("%d\n", (*ptr)+1);
	printf("%p\n", (*ptr)+1);
	
	printf("3 - ##############################\n", ptr);
	printf("%d\n", *(ptr+1));
	printf("%p\n", *(ptr+1));
	
	printf("4 - ##############################\n", ptr);
	printf("%d\n", *(ptr+10));
	printf("%p\n", *(ptr+10));
	*/
	
	printf("size of int:  %d\n", sizeof(int));
	printf("size of char: %d\n\n", sizeof(char));
	
	printf("'s' na tabela ascii: %d\n", 's');
	printf("'s' - 3584 em ascii: %c\n", 's'-3584);
	printf("'s' - 3584:          %d\n\n", 's'-3584);
	
        int var;
        char *ptr;
        ptr = &var;
        ptr[0] = 's';
        
        printf("%d, %c\n", var, var);
        
        ptr[1] = 'o';
        ptr[2] = 'l';
        ptr[3] = '\0';
        
        //printf("%d, %c\n", var, var);
        
        printf( "%s ... var = %d\n\n", (char *) ptr, var);
        var = var - 3584;
	printf( "%s ... var = %d\n\n", (char *) ptr, var);
	
	return 0;
}

//  0000000001100001-01100100011000010111001101100001-01100011001000000110100101101111

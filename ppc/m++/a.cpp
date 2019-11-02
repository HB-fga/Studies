#include <bits/stdc++.h>

using namespace std;
 
int main()
{
	
	int n;
	char s[20];
	char r[20];
	
	scanf("%d", &n);
	
	// te pa
	// pa pe
	// pe la
	// la S
	// S  te
	// te la
	// la pa
	// pa S
	// S  pe
	// pe te
	
	
	for (int i=1;i<=n;i++)
	{
		scanf("%s %s", s, r);
		
		/*0*/if ((s[0]==r[0]) && (s[1]==r[1]))
		{
			printf("Caso #%d: De novo!\n", i);
		}
		/*1*/else if ((s[0]=='t') && (s[1]=='e') && (r[0]=='p') && (r[1]=='a'))
		{
			printf("Caso #%d: Bazinga!\n", i);
		}
		/*2*/else if ((s[0]=='p') && (s[1]=='a') && (r[0]=='p') && (r[1]=='e'))
		{
			printf("Caso #%d: Bazinga!\n", i);
		}
		/*3*/else if ((s[0]=='p') && (s[1]=='e') && (r[0]=='l') && (r[1]=='a'))
		{
			printf("Caso #%d: Bazinga!\n", i);
		}
		/*4*/else if ((s[0]=='l') && (s[1]=='a') && (r[0]=='S'))
		{
			printf("Caso #%d: Bazinga!\n", i);
		}
		/*5*/else if ((s[0]=='S') && (r[0]=='t') && (r[1]=='e'))
		{
			printf("Caso #%d: Bazinga!\n", i);
		}
		/*6*/else if ((s[0]=='t') && (s[1]=='e') && (r[0]=='l') && (r[1]=='a'))
		{
			printf("Caso #%d: Bazinga!\n", i);
		}
		/*7*/else if ((s[0]=='l') && (s[1]=='a') && (r[0]=='p') && (r[1]=='a'))
		{
			printf("Caso #%d: Bazinga!\n", i);
		}
		/*8*/else if ((s[0]=='p') && (s[1]=='a') && (r[0]=='S'))
		{
			printf("Caso #%d: Bazinga!\n", i);
		}
		/*9*/else if ((s[0]=='S') && (r[0]=='p') && (r[1]=='e'))
		{
			printf("Caso #%d: Bazinga!\n", i);
		}
		/*10*/else if ((s[0]=='p') && (s[1]=='e') && (r[0]=='t') && (r[1]=='e'))
		{
			printf("Caso #%d: Bazinga!\n", i);
		}
		/*11*/else if ((r[0]=='t') && (r[1]=='e') && (s[0]=='p') && (s[1]=='a'))
		{
			printf("Caso #%d: Raj trapaceou!\n", i);
		}
		/*12*/else if ((r[0]=='p') && (r[1]=='a') && (s[0]=='p') && (s[1]=='e'))
		{
			printf("Caso #%d: Raj trapaceou!\n", i);
		}
		/*13*/else if ((r[0]=='p') && (r[1]=='e') && (s[0]=='l') && (s[1]=='a'))
		{
			printf("Caso #%d: Raj trapaceou!\n", i);
		}
		/*14*/else if ((r[0]=='l') && (r[1]=='a') && (s[0]=='S'))
		{
			printf("Caso #%d: Raj trapaceou!\n", i);
		}
		/*15*/else if ((r[0]=='S') && (s[0]=='t') && (s[1]=='e'))
		{
			printf("Caso #%d: Raj trapaceou!\n", i);
		}
		/*16*/else if ((r[0]=='t') && (r[1]=='e') && (s[0]=='l') && (s[1]=='a'))
		{
			printf("Caso #%d: Raj trapaceou!\n", i);
		}
		/*17*/else if ((r[0]=='l') && (r[1]=='a') && (s[0]=='p') && (s[1]=='a'))
		{
			printf("Caso #%d: Raj trapaceou!\n", i);
		}
		/*18*/else if ((r[0]=='p') && (r[1]=='a') && (s[0]=='S'))
		{
			printf("Caso #%d: Raj trapaceou!\n", i);
		}
		/*19*/else if ((r[0]=='S') && (s[0]=='p') && (s[1]=='e'))
		{
			printf("Caso #%d: Raj trapaceou!\n", i);
		}
		/*20*/else if ((r[0]=='p') && (r[1]=='e') && (s[0]=='t') && (s[1]=='e'))
		{
			printf("Caso #%d: Raj trapaceou!\n", i);
		}
	}
	
	return 0;
}
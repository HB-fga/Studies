#include <stdio.h>

//{}	Compilou!
//{	Nao deu =/
//}	Nao deu =/
//}{	Nao deu =/

int main() {
	
	char carac='x';
	int f=0, c=1;
	
	while(carac!='#')
	{
		scanf("%c", &carac);
		
		if(carac=='{')
		{
			if(f==0)
			{
				f++;
			}
		}
		else if(carac=='}')
		{
			if(f>=1)
			{
				f--;
			}
			else
			{
				c=0;
			}
		}
	}
	
	if((c==1) && (f==0))
	{
		printf("Compilou!\n");
	}
	else
	{
		printf("Nao deu =/\n");
	}
	
	return 0;
}

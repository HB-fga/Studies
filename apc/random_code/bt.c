#include<stdio.h>
int main(){
	char bt;
	int vet[110][110];
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			scanf(" %c",&bt);
			if(bt=='b'){
			vet[i][j]=1;
			}
			else{
			vet[i][j]=0;
			}
		}
	}
	int m;
	int x,y;
	scanf("%d",&m);
	for(int i=0;i<m;i++){
		scanf("%d %d",&x,&y);
		if(vet[x][y]==1){
			printf("Acertou\n");
		}
		else{
		printf("Erou\n");
		}
	}
return 0;
}

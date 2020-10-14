#include <stdio.h>

int main(){
	int t, n, L[4], R[4], i, j=0, esq=0, dir=0, d=0, esg=0, dig=0, comp=0, nd=0;
	scanf("%d", &t); 
	scanf("%d", &n);
	int vet[n];
	while(j<n){
		esq=0;
		dir=0;
		//fim
		//inserindo valores no vetor correspondente ao lado esquerdo
		for(i=0;i<4;i++){
			scanf("%d", &L[i]);
		}
		//fim
	
		//inserindo valores no vetor correspondente ao lado direito
		for(i=3;i>=0;i--){
			scanf("%d", &R[i]);
		}
		//fim
		
		if((t>L[3])){
			d=1;
		}
		else if((t>R[3])  ){
			d=2;
		}
		else if( (t>L[3]) && (t>R[3])  ){
			d=3;
		}
		else{
			d=0;
		}
		
		//Fazendo comparações
		for(i=0;i<3;i++){
			if(d==2){
				if(t>L[i]){
					esq++;
				}
				
			}
			if(d==1){
					if(t>R[i]){
					dir++;
				}
			}
			if(d==3){
				if(t>L[i]){
					esq++;
				}
				if(t>R[i]){
					dir++;
				}
			}
			if(d==0){
				i=5;
			}
		}
		//central direita ganha
		if( (d==2) && (esq>=3) ){
			comp=2;
		}

		//fim
		
		//central esquerda ganha

		else if( (d==1) && (esq>=3) && (esq>dir)){
			comp=2;
		}
		//fim
		
		// os dois centrais ganham
		else if( (d==3) &&  (esq>dir) && (esq>=3)){
			comp=1;
		}	
		else if( (d==3) &&  (dir>esq) && (dir>=3)){
			comp=2;
		}
		else if( (d==3) &&  (esq>=3) && (dir>=3)){
			comp=1;
		}
		//fim
		

		else if( (d==1) && (dir<3) ){
			comp=0;
		}
		

		else if( (d==2) && (esq<3) ){
			comp=0;
		}	
		
		else if( (d==3) && (esq<3) && (dir<3) ){
			comp=0;
		}	
		
		else if(d==0){
				comp=0;
			}
		
		vet[j]=comp;
	
	j++;	
	}
	
	for(i=0;i<n;i++){
		if(vet[i]==0){
			printf("NO PERFORM!!!\n");
			nd++;
		}
		else if(vet[i]==2){
			printf("RIGTH SIDE!\n");
				dig++;
		}
		else if(vet[i]==1){
			printf("LEFT SIDE!\n");
			esg++;
		}
	}
		
	if( (dig>esg)){
		printf("RIGTH SIDE!!! THE STRONG SIDE!!!");
	}
	else if( (dig<esg) ){
		printf("LEFT SIDE!!! THE STRONG SIDE");
	}
	else if((esg==0) && (dig==0)){
		printf("WEAK SIDE!!! BOTH SIDE!!!");
	}
	
}

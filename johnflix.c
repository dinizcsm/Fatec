#include <stdio.h>

int main(){
	int n, z, f, inicio, i, j;
	scanf("%d", &n);
	scanf("%d", &z);
	scanf("%d", &f);
	int buffer = z*2+1;
	int res[buffer];
	inicio = f-z;
	j = inicio;
	
	// Inserindo valores no vetor
	for(i=0; i<buffer;i++){
		res[i] = j;
		j++;
	}
	//fim
	
	//Imprimindo os valores corretos
	for(i=0; i<buffer; i++){
		if ((i < buffer) && (i > 0)){
			printf("-");
		}
		if ( (res[i]<0) || (res[i]>n+1 ) ){
			printf("[]");
		}
		else if(res[i]==f){
			printf("{%d}", f);
		}
		else if(res[i]==0){
			printf("[BOV]");
		}
		else if(res[i]==n+1){
			printf("[EOV]");
		}
		else{
			printf("[%d]", res[i]);
		}
	}
	//fim
	
}
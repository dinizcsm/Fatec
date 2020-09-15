#include <stdio.h>

int main(){
	int x, m, i, final;
	scanf("%d", &x);
	scanf("%d", &m);
	
	for(i=0;i<=30;i++){
		if(x%m==0){
			final = 1;
		}
		else{
		x = x+(x%m);
		final = 0;
		}
		
	}
	if(final==0){
			printf("NONSTOP");
		}
		else{
			printf("STOP");
		}
	
}

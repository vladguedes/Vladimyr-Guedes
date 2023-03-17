#include <stdio.h>

int main() {
	int x, y, i, foi = 1;
	scanf("%d%d", &x,&y);
	
	for(i = 1; i <= y; i++){
		if(foi != x){
			foi++;
			printf("%d ", i);			
		}else{
			printf("%d\n", i);	
			foi = 1;
		}
	}
	return (0);
}
#include <stdio.h>

int main(void){

	int startR, endR, total = 0;
	printf("Start Range -> ");
	scanf("%d", &startR);
	printf("End Range -> ");
	scanf("%d", &endR);
	printf("\n");
	
	while(startR <= endR){
		if(startR == 2 || startR == 3 || startR == 5 || startR == 7){
			printf("%d ", startR);
			total++;
		}
		if(startR%2 && startR%3 && startR%5 && startR%7 && startR>1){
			printf("%d ", startR);
			total++;
		}
		startR++;
	}
	printf("\a\n\n");

	printf("Total -> %d\n", total);

	return 0;
}

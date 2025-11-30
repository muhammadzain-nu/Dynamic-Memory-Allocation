#include <stdio.h>
#include <stdlib.h>

int main(){
	int n, extra, i;
	float total=0;
	printf("Enter total number of days:");
	scanf("%d", &n);
    float *sale=(float*)malloc(n*sizeof(float));
printf("\nEnter Sales for N days\n");
	for(i=0;i<n;i++){
		scanf("%f", &sale[i]);
		total+=sale[i];
	}
    printf("\nTotal sales for %d days = %.2f\n", n, total);
    printf("\nEnter Extra Days:");
    scanf("%d", &extra);
sale = realloc(sale, (n + extra) * sizeof(float));
    if (sale == NULL) {
        printf("Memory reallocation failed!\n");
        return 1;
    }
    printf("\n Enter %d more values\n", extra);
    for(i=n;i<n+extra;i++){
    	scanf("%f", &sale[i]);
    	total+=sale[i];
	}
	printf("\nAfter Adding extra days the total sale is %.2f", total);
    free(sale);

	return 0;
	

	
}

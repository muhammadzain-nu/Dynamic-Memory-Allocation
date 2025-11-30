#include <stdio.h>
int main(){
	int n, i=0;
	printf("Enter the size of an array:");
	scanf("%d", &n);
	int *arr=(int*)malloc(n*sizeof(int));
	if(arr==NULL){
		printf("Memory Allocation failed");
		return 1;
	}
	printf("Enter %d values:", n);
	 for(i=0;i<n;i++){
	 	scanf("%d", &arr[i]);
	 }
	 int newsize=n*2;
	 arr=(int*)realloc(arr, newsize*sizeof(int));
	 if(arr==NULL){
	 	printf("Reallocation failed");
	 return 1;
	 }
	 printf("\nEnter more values:");
	 for(i=n;i<newsize;i++){
	 	scanf("%d", &arr[i]);
	 }
     printf("\nUpdated Array:\n");
    for (i = 0; i < newsize; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    free(arr);

    return 0;
}

	


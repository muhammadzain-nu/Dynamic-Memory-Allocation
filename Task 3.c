#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int n, i, j;
    printf("Enter number of strings: ");
    scanf("%d", &n);

    char **arr = (char**)malloc(n * sizeof(char*));
    if (arr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    int len;

    for (i = 0; i < n; i++) {
        printf("Enter length of string %d: ", i + 1);
        scanf("%d", &len);

        arr[i] = (char*)malloc((len + 1) * sizeof(char));
        if (arr[i] == NULL) {
            printf("Memory allocation failed!\n");
            return 1;
        }

        printf("Enter string %d: ", i + 1);
        scanf("%s", arr[i]);
    }

    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            if (strcmp(arr[i], arr[j]) > 0) {
                char *temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    printf("\nSorted Strings:\n");
    for (i = 0; i < n; i++) {
        printf("%s\n", arr[i]);
    }

    for (i = 0; i < n; i++) {
        free(arr[i]);
    }
    free(arr);

    return 0;
}


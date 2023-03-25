#include <stdio.h>
#include <stdlib.h>

void count()
{
    int arr[] = {1, 4, 3, 5, 7, 3, 1, 6, 9, 7, 5, 2, 5};
    int len = sizeof(arr) / sizeof(arr[0]);
    int *counts = (int *)calloc(len, sizeof(int));

    for (int i = 0; i < len; i++) {
        counts[i] = 1;
        for (int j = i + 1; j < len; j++) {
            if (arr[i] == arr[j]) {
                counts[i]++;
            }
        }
    }

    printf("\nCac phan tu co so lan xuat hien tuong ung la :\n");
    for (int i = 0; i < len; i++) {
        int duplicate = 0;
        for (int j = 0; j < i; j++) {
            if (arr[i] == arr[j]) {
                duplicate = 1;
                break;
            }
        }
        if (!duplicate) {
            printf("%d xuat hien %d lan\n", arr[i], counts[i]);
        }
    }

    free(counts);
}

void arrange()
{
    int arr[] = {1, 4, 3, 5, 7, 3, 1, 6, 9, 7, 5, 2, 5};
    int n = sizeof(arr)/sizeof(arr[0]);

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    printf("Mang sau khi sap xep:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
}

int main() {
    
    arrange();
    count();
    return 0;
}






#include <stdio.h>

int main() {
    int arr[] = {1, 5, 2, 3, 23, 5, 1, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    int maxCount = 0;

    for (int i = 0; i < n; i++) {
        int count = 0;
        
        for (int j = 0; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }

        if (count > maxCount) {
            maxCount = count;
        }
    }

    printf("Cac phan tu co so lan xuat hien nhieu nhat: ");
    for (int i = 0; i < n; i++) {
        int count = 0;

        for (int j = 0; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }

        if (count == maxCount) {
            printf("%d ", arr[i]);

            for (int k = i + 1; k < n; k++) {
                if (arr[k] == arr[i]) {
                    arr[k] = -1; 
                }
            }
        }
    }

    printf("\n");

    return 0;
}

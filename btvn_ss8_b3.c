#include <stdio.h>

int main() {
    int n;

    printf("Nhap mot so nguyen: ");
    scanf("%d", &n);

    int arr[n][n];

    printf("Nhap gia tri cho ma tran %dx%d:\n", n, n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("Nhap phan tu [%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    printf("Ma tran vuong:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}


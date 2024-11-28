#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int n = 5;
    int x;

    printf("Nhap phan tu can tim: ");
    scanf("%d", &x);

    for (int i = 0; i < n; i++) {
        if (arr[i] == x) {
            printf("Vi tri phan tu trong mang la: %d\n", i);
            return 0;
        }
    }

    printf("Phan tu khong ton tai trong mang.\n");

    return 0;
}

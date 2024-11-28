#include <stdio.h>

int main() {
    int arr[3][3] = {{1, 5, 3}, {7, 2, 8}, {4, 6, 9}};
    int max = arr[0][0];

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (arr[i][j] > max) {
                max = arr[i][j];
            }
        }
    }

    printf("Phan tu lon nhat trong mang la: %d\n", max);

    return 0;
}

#include <stdio.h>

int main() {
    int n, pos, x;
    int arr[101];

    printf("Enter size: ");
    if(scanf("%d", &n) != 1) return 0;

    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter position and value: ");
    scanf("%d %d", &pos, &x);

    for (int i = n; i >= pos; i--) {
        arr[i] = arr[i - 1];
    }

    arr[pos - 1] = x;

    printf("Result: ");
    for (int i = 0; i <= n; i++) {
        printf("%d", arr[i]);
        if (i < n) printf(" ");
    }
    printf("\n");

    return 0;
}
#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int binary = 0;
    int a = 0;
    int place = 1;

    while (N > 0) {
        binary = binary + (N % 2) * place;
        N = N / 2;
        place = place * 10;
    }

    printf("%d\n", binary);

    return 0;
}

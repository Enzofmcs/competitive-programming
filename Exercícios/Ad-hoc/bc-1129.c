#include <stdio.h>

int main() {
    int N;

    while (scanf("%d", &N) && N != 0) {
        for (int i = 0; i < N; i++) {
            int cinza[5];
            int pretas = 0, marcada = -1;

            for (int j = 0; j < 5; j++) {
                scanf("%d", &cinza[j]);

                if (cinza[j] <= 127) {
                    pretas++;
                    marcada = j;
                }
            }

            if (pretas == 1) {
                printf("%c\n", 'A' + marcada);
            } else {
                printf("*\n");
            }
        }
    }

    return 0;
}

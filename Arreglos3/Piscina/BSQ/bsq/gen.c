#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[]) {
    if (argc!= 4) {
        fprintf(stderr, "program x y density\n");
        return 1;
    }

    int x = atoi(argv[1]);
    int y = atoi(argv[2]);
    int density = atoi(argv[3]);

    printf("%d.ox\n", y);

    srand(time(NULL)); // seed the random number generator

    for (int i = 0; i < y; i++) {
        for (int j = 0; j < x; j++) {
            if (rand() % (y * 2) < density) {
                printf("o");
            } else {
                printf(".");
            }
        }
        printf("\n");
    }

    return 0;
}

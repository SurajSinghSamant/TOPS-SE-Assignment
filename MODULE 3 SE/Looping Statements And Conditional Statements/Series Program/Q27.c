// 1/2 - 2/3 + 3/4 - 4/5 + 5/6 .......... n
#include <stdio.h>

int main() {
    int n;
    float sum = 0;

    printf("Enter The Value Of n : ");
    scanf("%d", &n);

    for (int i=1; i<=n; i++) {
        if (i % 2 == 0) {
            sum -= (float)i / (i + 1);
        } else {
            sum += (float)i / (i + 1);
        }
    }

    printf("The Sum Of The Series Up To %d Terms Is : %f\n", n, sum);

    return 0;
}


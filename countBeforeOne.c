#include <stdio.h>

int count_before_one(int *A, int N) {
    int countBeforeOne = 0;
    for (int i = 0; i < N; i++) {
        if (A[i] != 1) {
            countBeforeOne++;
        } else {
            break;
        }
    }
    return countBeforeOne;
}

int main() {
    int N;
    scanf("%d", &N);
    int A[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &A[i]);
    }
    int countBeforeOne = count_before_one(A, N);
    printf("%d", countBeforeOne);
    return 0;
}

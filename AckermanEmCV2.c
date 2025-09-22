#include <stdio.h>

int FunçãoAckerman(int m, int n) {
    if (m == 0) {
        return n + 1;
    } else if (m > 0 && n == 0) {
        return FunçãoAckerman(m - 1, 1) + 1;
    } else {
        return FunçãoAckerman(m - 1, FunçãoAckerman(m, n - 1));
    }
}

int main() {
    int M, N;
    printf("digite seu primeiro numero:\n");
    scanf("%d", &M);
    printf("digite seu segundo numero\n");
    scanf("%d", &N);

    if (M < 0 || N < 0) { return 0; }

    int result = FunçãoAckerman(M, N);
    printf("Resultado = %d\n", result);
    return 0;
}

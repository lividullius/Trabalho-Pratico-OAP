
#include <stdio.h>
int resultGlobal = 0;
int MequalZERO(int M, int N){
        resultGlobal= N + 1;
        return resultGlobal;
}
int Mbigger0Nequal0(int M, int N){
    resultGlobal = MequalZERO(M - 1, 1) + 1;
    return resultGlobal;
}
int Mbigger0Nbigger0(int M, int N) {
    int TesteN = 0;

    if (M == 0) {
        TesteN = MequalZERO(M, N - 1);
    } else if (M > 0 && (N - 1) == 0) {
        TesteN = Mbigger0Nequal0(M, N - 1);
    } else {
        TesteN = Mbigger0Nbigger0(M, N - 1);
    }

    if ((M - 1) == 0) {
        resultGlobal = MequalZERO(M - 1, TesteN);
    } else if ((M - 1) > 0 && TesteN == 0) {
        resultGlobal = Mbigger0Nequal0(M - 1, TesteN);
    } else {
        resultGlobal = Mbigger0Nbigger0(M - 1, TesteN);
    }
    return resultGlobal;
}

int main()
{
    int M, N;
    printf("Digite seu primeiro numero:\n");
    scanf("%d", &M);
    printf("Digite seu segundo numero:\n");
    scanf("%d", &N);
    if (M == 0){
        MequalZERO(M, N);
    } else if (M > 0 && N == 0){
        Mbigger0Nequal0(M, N);
    } else if (M > 0 && N > 0){
        Mbigger0Nbigger0(M, N);
    }
    
    printf("Resultado Ackerman = %d\n", resultGlobal);
    
}
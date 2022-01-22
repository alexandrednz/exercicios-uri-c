#include <stdio.h>

void insertionsort(int v[], int n){
    for(int i = 1;i < n; i++) {
        int j = i;
        while(j > 0 && v[j] < v[j-1]) {
            int temp = v[j];
            v[j] = v[j-1];
            v[j-1] = temp;
            j--;
        }
    }
}

int main(){
    int marmores, consultas, consulta, caso, achou;
    caso = 0;
    scanf("%d %d", &marmores, &consultas);
    int v[10000];

    while (marmores != 0 || consultas != 0){
        caso += 1;

        // Armazenando os valores dos marmores no vetor
        for (int i = 0; i < marmores; i++)
            scanf("%d", &v[i]);
        
        //  Ordenando o vetor
        insertionsort(v, marmores);
        printf("CASE# %d:\n", caso);

        //Consultando no vetor
        for (int i = 0; i < consultas; i++){
            scanf("%d", &consulta);
            achou = 0;

            for (int j = 0; j < marmores && achou == 0; j++)
                if (v[j] == consulta){
                    achou = 1;;
                    printf("%d found at %d\n", consulta, j + 1);
                }
            
            if (achou == 0)
                printf("%d not found\n", consulta);
        }

        scanf("%d %d", &marmores, &consultas);
    }
    return 0;
}

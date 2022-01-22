#include <stdio.h>
#define MAX 1000

typedef struct{
    int ascii;
    int freq;
} elemento;

void troca(elemento *a, elemento *b){
    elemento aux;
    aux = *a;
    *a = *b;
    *b = aux;
    return;
}

int separa(int p, int r, elemento v[MAX]){
    int x, i, j;
    x = v[p].freq;
    i = p - 1;
    j = r + 1;
    while (i < j) {
        do {
            j--;
        } while (v[j].freq > x);
        do {
            i++;
        } while (v[i].freq < x);
        if (i < j)
            troca(&v[i], &v[j]);
        }
    return j;
}

void quicksort(int p, int r, elemento v[MAX]){
    int q;
    if (p < r) {
        q = separa(p, r, v);
        quicksort(p, q, v);
        quicksort(q+1, r, v);
    }
}

int main(){
    int i, j;
    char linha[MAX + 1];
    elemento v[MAX];

    int leitura = scanf("%s", linha);
    while (leitura != EOF){

        // O primeiro elemento sempre será novo
        v[0].ascii = (int)linha[0];
        v[0].freq = 1;

        int indiceRegistros = 1; // Esse índice estará sempre parado na primeira posição vaga do vetor

        // Loop para trabalhar caractere por caractere na string
        for (i = 1; linha[i] != '\0'; i++){
            int elementoNovo = 1;

            // Comparando o elemento novo com os registros ja existentes no vetor
            for (j = 0; j < indiceRegistros; j++){
                if ((int)linha[i] == v[j].ascii){   // O elemento que entrar dentro desse if é classificado como REPETIDO
                    v[j].freq += 1;
                    elementoNovo = 0;
                }
            }

            // Caso seja um elemento novo, um novo registro é adicionado ao vetor e o índice anda pra frente
            if (elementoNovo == 1){
                v[indiceRegistros].ascii = (int)linha[i];
                v[indiceRegistros].freq = 1;
                indiceRegistros += 1;
            }            
        }

        // Ordenando o vetor pela frequência
        quicksort(0, indiceRegistros - 1, v);

        // Ordenando o vetor pelo código ASCII
        for (int a = 0; a < indiceRegistros; a++){
            for (int b = 0; b < indiceRegistros; b++){
                if (v[a].freq == v[b].freq){
                    if (v[a].ascii > v[b].ascii){
                        troca(&v[a], &v[b]);
                    }
                }
            }            
        }

        for (int a = 0; a < indiceRegistros; a++){
            printf("%d %d\n", v[a].ascii, v[a].freq);
        }

        leitura = scanf("%s", linha);

        if (leitura != EOF){
            printf("\n");
        }
    }
    return 0;
}
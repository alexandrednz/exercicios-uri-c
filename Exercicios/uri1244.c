#include <stdio.h>
#include <string.h>
#define MAX 1000

typedef struct{
    char letras[MAX + 1];
    int tamanho;
} palavra;

void insertionsort(palavra v[MAX + 1], int n){
    for(int i = 1;i < n; i++) {
        int j = i;
        while(j > 0 && v[j].tamanho > v[j-1].tamanho) {
            palavra temp = v[j];
            v[j] = v[j-1];
            v[j-1] = temp;
            j--;
        }
    }
}

int main(){
    int n;
    scanf("%d", &n);
    char linha[MAX + 1];
    palavra v[MAX];

    for (int i = 0; i < n; i++){

		scanf(" %[^\n]", linha);
        
        int indiceRegistro = 0;
        int indiceLetra = 0;

        // Separando as strings por registro 
        for (int j = 0; j < strlen(linha); j++){
            if (linha[j] == ' ' || j + 1 == strlen(linha)){
                if (j + 1 == strlen(linha)){
                    v[indiceRegistro].letras[indiceLetra] = linha[j];
                    v[indiceRegistro].letras[indiceLetra + 1] = '\0';
                    indiceRegistro++;
                }
                else{
                    v[indiceRegistro].letras[indiceLetra] = '\0';
                    indiceRegistro++;
                    indiceLetra = 0;
                }
            }
            else{
                v[indiceRegistro].letras[indiceLetra] = linha[j];
                indiceLetra++;
            }
        }

        // Adicionando o tamanho das strings em cada registro
        for (int j = 0; j < indiceRegistro; j++){
            v[j].tamanho = strlen(v[j].letras);
        }

        // Ordenando os registros em ordem decrescente de acordo com o tamanho
        insertionsort(v, indiceRegistro);

        // Imprimindo as strings ordenadas
        for (int j = 0; j < indiceRegistro - 1; j++){
            printf("%s ", v[j].letras);
        }
        printf("%s\n", v[indiceRegistro - 1].letras);
    }
    return 0;    
}
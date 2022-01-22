#include <stdio.h>

void countingSort(unsigned char v[], int n) {
  unsigned char output[n];

  unsigned char max = v[0];

  for (int i = 1; i < n; i++) {
    if (v[i] > max)
      max = v[i];
  }

  int count[max+1];

  for (int i = 0; i <= max; ++i) {
    count[i] = 0;
  }

  for (int i = 0; i < n; i++) {
    count[v[i]]++;
  }

  for (int i = 1; i <= max; i++) {
    count[i] += count[i - 1];
  }

  for (int i = n - 1; i >= 0; i--) {
    output[count[v[i]] - 1] = v[i];
    count[v[i]]--;
  }

  for (int i = 0; i < n; i++) {
    v[i] = output[i];
  }
}

int main(){
    int n, j;
    int pessoas;
    unsigned int aux;
    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        scanf("%d", &pessoas);
        unsigned char alturas[pessoas];

        for(j = 0; j < pessoas; j++){
            scanf("%u", &aux);
            alturas[j] = aux;
        }

        countingSort(alturas, pessoas);

        for(j = 0; j < pessoas - 1; j++){
            printf("%u ", alturas[j]);
        }
        printf("%u\n", alturas[pessoas - 1]);
    }
    return 0;
}
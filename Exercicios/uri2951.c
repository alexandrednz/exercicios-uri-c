#include <stdio.h>

int main(){
    int n, g, x, amizade_total;
    amizade_total = 0;
    scanf("%d %d", &n, &g);

    char runas[100];
    char runa_recitada;
    int amizades[100];

    for (int i = 0; i < n; i++) {
        scanf(" %c %d", &runas[i], &amizades[i]);
    }

    scanf("%d", &x);

    for (int i = 0; i < x; i++){
        scanf(" %c", &runa_recitada);
        
        for (int j = 0; j < n; j++){
            if (runas[j] == runa_recitada)
                amizade_total += amizades[j];
        }
    }

    printf("%d\n", amizade_total);

    if (amizade_total >= g)
        printf("You shall pass!\n");
    else
        printf("My precioooous\n");
    
    return 0;
}   
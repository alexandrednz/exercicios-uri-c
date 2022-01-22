#include <stdio.h>

int main(){
    int c, esferas;
    scanf("%d", &c);

    for (int i = 0; i < c; i++){
        scanf("%d", &esferas);
        int esferas_necessarias = 0;

        for (int j = 1; j <= esferas; j++){
            int divisores = 0;

            for (int k = 1; k <= esferas; k++){
                if (j % k == 0){
                    divisores += 1;
                }
            }

            if (divisores % 2 == 0){
                esferas_necessarias += 1;
            }
        }

        printf("%d\n", esferas_necessarias);
    }

    return 0;
}
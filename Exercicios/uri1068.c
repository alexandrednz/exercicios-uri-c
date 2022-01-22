#include <stdio.h>
#define MAX 1000

int main(){
    char *p;
    char expressao[MAX + 1];
    while (scanf("%s", expressao) == 1){
        int parenteses = 0;
        int incorreto = 0;
        for(p = expressao; *p != '\0'; p++){
            if (*p == '('){
                parenteses++;
            }
            else if (*p == ')'){
                parenteses--;
                if (parenteses < 0){
                    incorreto = 1;
                }
            }
        }

        if (parenteses == 0 && incorreto == 0){
            printf("correct\n");
        }
        else{
            printf("incorrect\n");
        }
    }
    return 0;
}
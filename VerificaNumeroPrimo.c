#include <stdio.h>

int main(){
    int n, i, primo, ris;

    printf("Inserisci un numero\n");
    scanf("%d", &n);

    for(i = 1; i < n; i++){
        ris = n % i;
        if(ris == 0 && i != n && i != 1){
            primo = 0;
            break;
        }
        else{
            primo = 1;
        }
    }
    if(primo == 0){
        printf("Il numero non e' primo ed e' divisibile per %d\n", i);
    }
    else{
        printf("Il numero e' primo\n");
    }
}
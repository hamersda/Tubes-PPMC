#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "CetakKata.h"

void CetakKata(int nkata, struct n_gram *ambiltabel){
    int r_numb, i,j;
    struct n_gram* temp = (struct n_gram*) malloc(sizeof(struct n_gram));
    temp = ambiltabel->next;
    r_numb = rand()%100;
    printf("...");
    for(i=0;i<r_numb;i++){
        ambiltabel = temp;
        temp = ambiltabel->next;
    }
    for(j=0;j<nkata;j++){
        printf("%s ", ambiltabel->value);
        temp = ambiltabel->next;
        ambiltabel = temp;
    }
    printf("...");

}

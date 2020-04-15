//Belum selesai
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct n_gram{
    char key[50];
    char value[10];
    struct n_gram *next;
};

int main(){
    char w[10][10];
    char enter;
    int n,i,tingkat;
    struct n_gram *table;
    w[0]='kenapa';
    w[1]='sadis';
    w[2]='luar biasa';
    w[3]='kenapa';
    w[4]='begini';
    w[5]='aku';
    w[6]='berbaikanlah';
    w[7]='niscaya';
    w[8]='semesta';
    w[9]='mendukungmu';
    printf("n-gram berapa: \n");
    scanf("%d",&tingkat);
    printf("Enter number of elements: ");
    scanf("%d", &n);
    table = malloc(n * sizeof(*table));
    // if memory cannot be allocated
    if(table == NULL){
        printf("Error! memory not allocated.");
        exit(0);
    }
    scanf("%c",&enter);
    for ( i = 0; i < n; i++){
        if (tingkat==1){
            if(i==n)
            strcpy((table->key)+i,w[i]);
            strcpy((table->value)+i+1,w[i+1]);
            table->next=*table+1;
        }
        
    }
    
    /*
    for(i = 0; i < n; i++){
        printf("Enter The Keys: ");
        fgets((table->key)+i,sizeof(table->key),stdin);
        printf("key=%s\n",(table->key)+i);
        printf("Enter The value: ");
        fgets((table->value)+i,sizeof(table->value),stdin);
        printf("value=%s\n",(table->value)+i);
    }*/

    return 0;
}

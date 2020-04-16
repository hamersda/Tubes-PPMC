#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct n_gram{
    char key[50];
    char value[10];
    struct n_gram *next;
};

void push(struct n_gram **head_ref, char key[50],char value[10]) { 
    struct n_gram *ptr1 = (struct n_gram *)malloc(sizeof(struct n_gram)); 
    struct n_gram *temp = *head_ref; 
    strcpy(ptr1->key,key);
    strcpy(ptr1->value,value);
    ptr1->next = *head_ref; 
    /* If linked list is not NULL then set the next of last node */
    if (*head_ref != NULL) { 
        while (temp->next != *head_ref) 
            temp = temp->next; 
        temp->next = ptr1; 
    } 
    else
        ptr1->next = ptr1; /*For the first node */
    *head_ref = ptr1; 
} 

void printTable(struct n_gram *head) { 
    struct n_gram *temp = head; 
    if (head != NULL) { 
        do{ 
            printf("%s ", temp->key); 
            temp = temp->next; 
        } 
        while (temp != head); 
    } 
} 

int main(){
    //inisiasi variable
        char w[10][10];
        char enter;
        int n,i,tingkat;
        struct n_gram *head=NULL;
    //Contoh parsing kata
        strcpy(w[0],"kenapa");
        strcpy(w[1],"sadis");
        strcpy(w[2],"luar");
        strcpy(w[3],"kenapa");
        strcpy(w[4],"begini");
        strcpy(w[5],"aku");
        strcpy(w[6],"berbaikanlah");
        strcpy(w[7],"niscaya");
        strcpy(w[8],"semesta");
        strcpy(w[9],"mendukungmu");
    printf("n-gram berapa: ");
    scanf("%d",&tingkat);
    printf("Enter number of elements: ");
    scanf("%d", &n);
    //table = malloc(n * sizeof(*table));
    // if memory cannot be allocated
    scanf("%c",&enter);
    for (i = n; i >= 0; --i){
        if (tingkat==1){
            if (n!=i){
                push(&head,w[i],w[i+1]);
            }
            else if (n==i){
                push(&head,w[i],w[0]);
            }
        }
    }
    printTable(head);
    return 0;
    /*
    for ( i = 0; i < n; ++i){
        if (tingkat==1){
            if(i==n){
                (table->next)+i = *(table+0);
                strcpy((table->key),w[i]);
                strcpy((table->value),w[0]);
            }
            else if (i=!n){
                strcpy((table->key)+i,w[i]);
                strcpy((table->value)+i+1,w[i+1]);
                table->next=*(table+1+i);
            }
        }
        if (tingkat==2){
            if(i==n){
                (table->next)+i = *table;
                strcpy((table->key),w[i]);
                strcpy((table->value),w[0]);
                table->next=*table;
            }
            else if (i=!n){
                strcpy((table->key)+i,w[i]);
                strcpy((table->value)+i+1,w[i+1]);
                table->next=*table+1+i;
            }
        }
    }*/
    /*
    for(i = 0; i < n; i++){
        printf("Enter The Keys: ");
        fgets((table->key)+i,sizeof(table->key),stdin);
        printf("key=%s\n",(table->key)+i);
        printf("Enter The value: ");
        fgets((table->value)+i,sizeof(table->value),stdin);
        printf("value=%s\n",(table->value)+i);
    }*/
}
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

/*void printTable(struct n_gram *head) { 
    struct n_gram *temp = head; 
    if (head != NULL) { 
        do{ 
            printf("%s ", temp->key); 
            temp = temp->next; 
        } 
        while (temp != head); 
    } 
} */

int main(){
    //inisiasi variable
        char w[10][10],temp[30];
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
    scanf("%c",&enter);
    //Membuat Circular linked list dari belakang
    for (i = n; i >= 0; --i){
        //n-gram 1
        if (tingkat==1){
            if (n!=i){
                push(&head,w[i],w[i+1]);
            }
            else if (n==i){
                push(&head,w[i],w[0]);
            }
        }
        //n-gram 2
        else if(tingkat==2){
            if (i==n){
                strcpy(temp,w[i]);
                strcat(temp,w[0]);
                push(&head,temp,w[1]);
            }
            else if (i==n-1){
                strcpy(temp,w[i]);
                strcat(temp,w[i+1]);
                push(&head,temp,w[0]);
            }
            else{
                strcpy(temp,w[i]);
                strcat(temp,w[i+1]);
                push(&head,temp,w[i+2]);
            }
        }
        //n-gram 3
        else if(tingkat==3){
            if (i==n){
                strcpy(temp,w[i]);
                strcat(temp,w[0]);
                strcat(temp,w[1]);
                push(&head,temp,w[2]);
            }
            else if (i==n-1){
                strcpy(temp,w[i]);
                strcat(temp,w[n]);
                strcat(temp,w[0]);
                push(&head,temp,w[1]);
            }
            else if (i==n-2){
                strcpy(temp,w[i]);
                strcat(temp,w[n-1]);
                strcat(temp,w[n]);
                push(&head,temp,w[0]);
            }
            else{
                strcpy(temp,w[i]);
                strcat(temp,w[i+1]);
                strcat(temp,w[i+2]);
                push(&head,temp,w[i+3]);
            }
        }
    }
    return 0;
}
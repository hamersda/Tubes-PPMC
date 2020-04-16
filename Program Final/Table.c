/* EL2208 Praktikum Pemecahan Masalah dengan C 2019/2020
* MODUL 9 - TUGAS BESAR
* Kelompok : 2
* Hari dan Tanggal : Jumat, 10 April 2020
* Asisten (NIM) : Devi Tara Avalokita (18316024)
* Nama File : Table.c
* Deskripsi : Program untuk membuat table n-gram
*/

#include "stdio.h"
#include "string.h"
#include "stdlib.h"
#include "Table.h"

//struct table n_gram
struct n_gram{
    char key[50];
    char value[10];
    struct n_gram *next;
};

//Push to linked list
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

//Procedure print key linked list
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

//Prosedur table_ngram, dengan inisiasi struct n_gram *head=NULL;
void table_ngram(char **w,int tingkat,int n,struct n_gram **head_ref){
    int i;
    char temp[30];
    for (i = n; i >= 0; --i){
        //n-gram 1
        if (tingkat==1){
            if (n!=i){
                push(&head_ref,w[i],w[i+1]);
            }
            else if (n==i){
                push(&head_ref,w[i],w[0]);
            }
        }
        //n-gram 2
        else if(tingkat==2){
            if (i==n){
                strcpy(temp,w[i]);
                strcat(temp,w[0]);
                push(&head_ref,temp,w[1]);
            }
            else if (i==n-1){
                strcpy(temp,w[i]);
                strcat(temp,w[i+1]);
                push(&head_ref,temp,w[0]);
            }
            else{
                strcpy(temp,w[i]);
                strcat(temp,w[i+1]);
                push(&head_ref,temp,w[i+2]);
            }
        }
        //n-gram 3
        else if(tingkat==3){
            if (i==n){
                strcpy(temp,w[i]);
                strcat(temp,w[0]);
                strcat(temp,w[1]);
                push(&head_ref,temp,w[2]);
            }
            else if (i==n-1){
                strcpy(temp,w[i]);
                strcat(temp,w[n]);
                strcat(temp,w[0]);
                push(&head_ref,temp,w[1]);
            }
            else if (i==n-2){
                strcpy(temp,w[i]);
                strcat(temp,w[n-1]);
                strcat(temp,w[n]);
                push(&head_ref,temp,w[0]);
            }
            else{
                strcpy(temp,w[i]);
                strcat(temp,w[i+1]);
                strcat(temp,w[i+2]);
                push(&head_ref,temp,w[i+3]);
            }
        }
    }
}

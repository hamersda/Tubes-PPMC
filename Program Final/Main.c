/* EL2208 Praktikum Pemecahan Masalah dengan C 2019/2020
* MODUL 9 - TUGAS BESAR
* Kelompok : 2
* Hari dan Tanggal : Jumat, 10 April 2020
* Asisten (NIM) : Devi Tara Avalokita (18316024)
* Nama File :Main.c
* Deskripsi : Program main untuk semua fungsi.
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"Table.h"
#include"PilihFile.h"
struct n_gram{
    char key[50];
    char value[10];
    struct n_gram *next;
};
void main(){
    struct n_gram *list = NULL;
    char *kata;
    int ngram, nkata;
    int boolean;
    int menu;
    menu = 1;
    printf("Menulis Kata Referensi\n");
    printf("Program ini dapat menulis sesuai dengan referensi yang anda berikan\n");
    switch(menu){
    case 1:
        PilihFile(&kata);
        // parsing
        menu = 2;
    case 2:
        printf("Masukkan jumlah n pada n-gram yang anda inginkan");
        scanf("%d",&ngram);
        table_ngram();
        menu = 3;
    case 3:
        printf("Masukkan jumlah kata yang ingin dicetak");
        scanf("%d",&nkata);
        CetakKata(nkata);
        menu = 4;
    case 4:
        printf("Apakah anda ingin memasukan kata lagi?\n");
        printf("Ketik 1 jika ya, ketik 0 jika tidak");
        scanf("%d",&boolean);
        while (boolean!= 1 && boolean!= 0){
            printf("Input salah silahkan masukkan input kembali");
            scanf("%d",&boolean);
        }
        if(boolean == 1){
            menu = 3;
        }
        else{
            menu = 5;
        }
    case 5:
        printf("Apakah anda ingin memilih file referensi lagi?\n");
        printf("Ketik 1 jika ya, ketik 0 jika tidak");
        scanf("%d",&boolean);
        while (boolean!= 1 && boolean!= 0){
            printf("Input salah silahkan masukkan input kembali");
            scanf("%d",&boolean);
        }
        if(boolean == 1){
            menu = 1;
        }
        else{
            printf("Program Selesai! Terima kasih sudah menggunakan program kami");
            break;
        }

}

}

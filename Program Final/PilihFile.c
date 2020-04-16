/* EL2208 Praktikum Pemecahan Masalah dengan C 2019/2020
* MODUL 9 - TUGAS BESAR
* Kelompok : 2
* Hari dan Tanggal : Kamis, 9 April 2020
* Asisten (NIM) : Devi Tara Avalokita (18316024)
* Nama File :PilihFile.c
* Deskripsi : Pengambilan File Referensi
*/



#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void PilihFile(char **text){
    FILE *fp;
    char filename[255];
    char *text_r;
    int c;
    int n = 0;
    int size = 1;
    printf("Masukkan nama file referensi : ");
    gets(filename);
    text_r = (char*)malloc(size);
    fp = fopen(filename, "r");
    if (fp == NULL){
        printf("Could not open file %s",filename);
    }
    do{
        c = fgetc(fp);
        text_r = (char*) realloc(text_r, size+1);
        text_r[n]=c;
        n++;
        size++;
    }while(c!= EOF);
    text_r[n] = 0;
    *text = text_r;
    fclose(fp);
}
/*void main(){
    char *kata;
    PilihFile(&kata);
    printf(kata);
}  */
/* EL2208 Praktikum Pemecahan Masalah dengan C 2019/2020
* MODUL 9 - TUGAS BESAR
* Kelompok : 2
* Hari dan Tanggal : Jumat, 10 April 2020
* Asisten (NIM) : Devi Tara Avalokita (18316024)
* Nama File : PecahKata.c
* Deskripsi : Program untuk memecah kalimat menjadi kata
*/

#include <stdio.h>
#include <string.h>


char PecahKata( char *kata)
{
    char kalimat[100];
    char *kata = kalimat;
    char array_words[999][10]; 
    int i,j,cnt;
    j=0; 
    cnt=0;
    
    for(i=0;i<=(strlen(kalimat));i++)
    {
        if( kalimat[i]==' '|| kalimat[i] =='\0')  // ditemukan spasi atau Null, asign array_words[cnt]
        {
            array_words[cnt][j]='\0';
            cnt++;  
            j=0;    
        }
        else
        {
            array_words[cnt][j]=kalimat[i];
            j++;
        }
    }
    return array_words;
}



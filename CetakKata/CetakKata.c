#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

void CetakKata(int n)
{
    int kataawalacak, k, i, j, pilihrandomvalue, jumlahrandom;
    char kata_dicetak;
    kataawalacak=rand()%i+1;//i ini indeksnya si key milih key random dulu buat awalan
    printf("...");
    for(k=0;k<(jumlahrandom-n);k++)//k ini indeks untuk menghitung jumlah kata random yang tercetak
    {
        if (n_gram.value[i]==1)//jika di value cuma ada 1 nilai maka mencetak nilai selanjutnya diambil dari value yg diincrement
        {
            kata_dicetak=(n_gram.value[i]+" ");
            printf("%c",kata_dicetak);
        }
        else if (n_gram.value[i]==2)
        {
            pilihrandomvalue=rand()%2+1;
            strcat(n_gram.value[pilihrandomvalue], n_gram.key[pilihrandomvalue+1]);
        }
    }
    printf("...");
}

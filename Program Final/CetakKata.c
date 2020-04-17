#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <CetakKata.h>

char CetakKata(int nkata, struct n_gram *ambiltabel)
{
    int kataawalacak, k, i, j, pilihrandomvalue, tingkat;
    char kata_dicetak;
    kataawalacak=rand()%i+1;//i ini indeksnya si key milih key random dulu buat awalan
    printf("...");
    printf("%s", ambiltabel->key[kataawalacak]);
    i=kataawalacak;
    for(k=0;k<(nkata-tingkat);k++)//k ini indeks untuk menghitung jumlah kata random yang tercetak
    {
        if (ambiltabel->value[i]==1)//jika di value cuma ada 1 nilai maka mencetak nilai selanjutnya diambil dari value yg diincrement
        {
            kata_dicetak=(ambiltabel->value[i]+" ");
            printf("%s",kata_dicetak);
        }
        else if (ambiltabel->value[i]==2)
        {
            pilihrandomvalue=rand()%2+1;
            strcat(ambiltabel->value[pilihrandomvalue], ambiltabel->key[pilihrandomvalue+1]);
        }
        else if (ambiltabel->value[i]>2)
        {
            pilihrandomvalue=rand()%3+1;
            strcat(ambiltabel->value[pilihrandomvalue], ambiltabel->key[pilihrandomvalue+1]);
        }
        i=i+1;
    }
    printf("...");
}

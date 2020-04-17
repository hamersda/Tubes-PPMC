#include <stdio.h>
#include <string.h>


char PecahKata( char *kata)
{
    char kalimat[100];
    char *kata = kalimat;
    char array_words[10][10]; 
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



#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *PecahKata(char kalimat[100])
{
    char *array_words[10][10]; 
    int i,j,cnt;
    j=0; 
    cnt=0;
    for(i=0;i<=(strlen(kalimat));i++)
    {
        if(kalimat[i]==' '||kalimat[i]=='\0')  // ditemukan spasi atau Null, asign array_words[cnt]
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

int main(){
    char sentence[100];
    char *array_words = PecahKata(sentence); 
    int i,j,cnt;
    printf("Enter a string: "); 
    scanf("%s",sentence);
    for(i=0;i < cnt;i++)
        printf("%s\n", array_words);
        free(array_words);
    return 0;
}
#ifndef Table
#define Table

void push(struct n_gram **head_ref, char key[50],char value[10]);
void printTable(struct n_gram *head);
void table_ngram(char **w,int tingkat,int n,struct n_gram **head_ref);


#endif
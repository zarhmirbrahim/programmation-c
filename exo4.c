 #include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char ph[20];
    char **tab=NULL;
    int i,nb_M,begin_M;
    printf("enter your tence\n");
    scanf("%s",ph);
    begin_M=nb_M=0;
    for(i=0 ;i<strlen(ph)+1;i++){
        if(ph[i]==' ' || ph[i]=='\0'){
            if(tab==NULL){
                tab=(char**)malloc(sizeof(char*));
            }
            else{
                tab=(char**)realloc(tab,(nb_M+1)*sizeof(char*));
            }

        tab[nb_M]=(char*)malloc((i-begin_M+1)*sizeof(char));
        strncpy(tab[nb_M],ph+begin_M,i-nb_M);
        tab[nb_M][i-begin_M]='\0' ;
       
        nb_M++;
        begin_M=i+1;
    }

  }
    printf("the words of tence :\n");
    for(i=0;i<nb_M;++i){
        printf("word %d:",i);
        puts(tab[i]);
    }



    return 0;
}




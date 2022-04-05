#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
    //char s[]="1001110119d";
    //char s[]="       1001110119d";
    
    int i = 0;
    char *s = malloc(100);
    /*
    4 octets

    print ("%s", str)

    int i = 0;
    while( str[i] != '\0' )
    {
       printf("%c", str[i]);
       ++i
    }


    5
    */
    scanf("%s",s);

    /*
    4 oct de int
    */
    while (s[i] != '\0')
    {
        if(s[i]==' '){
            i++;
        }
        else if(s[i]=='0' || s[i]=='1'){
            i++;
        }
        else{
            s[i]='\0';
            break;
        }
    }
    
    printf("la nouvele valeur de s est:%s\n\n\n", s);
    free(s);
    return 0;
}

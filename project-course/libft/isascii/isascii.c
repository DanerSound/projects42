#include<unistd.h> 
#include<stdio.h>
#include<ctype.h>

int myisascii(int ch){
     return (ch >= 0 && ch <= 127);
}

int    main(void) 
{ 
     int ch;
     printf("inserisci un carattere: ");
          scanf("%d", &ch);
          printf("la funzione base ritorna %d\n", isascii(ch));
          printf("la tua funzione ritorna %d\n ", myisascii(ch)); 
  
     return(0); 
} 

#include<unistd.h> 
#include<stdio.h>
#include <ctype.h>

//int myisprint(int ch){}
 
int    main(void) 
{ 
  
       int ch;
     printf("inserisci un carattere: ");
          scanf("%d", &ch);
          printf("la funzione base ritorna %d\n", isprint(ch));
          //printf("la tua funzione ritorna %d\n ", myisascii(ch)); 
  
     return(0); 
} 

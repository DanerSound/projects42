#include <stdio.h>

struct dict {
    char letter;
    int times;
};

int main() {
    
	struct dict alph[26]; // Dichiarazione di una variabile di tipo MyStruct
	int letter = 65;
	int index = 1;
	while (index < 26)
	{
		alph->letter = 65;
    		alph->times = index;
		index++;
		letter++;
	}
	
	index = 1;
	while (index < 26)
	{
		printf("Carattere = %c, Numero = %d\n", alph->letter, alph->times);
		index++;
	}
	
    return 0;
}


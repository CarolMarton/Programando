//O PROGRAMA JUNTAS AS DUAS STRINGS DIGITADAS.
#include <stdio.h>

	int main(){
	
		char string1[80];
		char string2[80];
		
		printf("Entre com duas string: ");
		scanf("%s %s", &string1, &string2);
		mystery1(string1, string2);
		printf("%s", string1);
	
	
	
	return 0;
	}

	void mystery1 (char *s1, const char *s2){
		
		while (*s1 != '\0'){
			s1++;
			
		}
		for( ; *s1 = *s2; s1++, s2++){
			;
		}
	}
	
	

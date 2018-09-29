#include <stdio.h>
#include "myStrcmp.h"

int main(){
	
	char pvar1[] = "acde";
	char pvar2[] = "b";
	char pvar3[] = "acde";
	char *pa = "abd";
	
	printf("The use of strcmp and strncmp: \n");
	
	printf("\nUsing strcmp to compare:\n\n");
	
	//strcmp:
	printf("Comparing %s and %s : \n\t", pvar1, pvar2);
	printf("%d ... -1 Means that var1 was less than var 2 \n", strcmp(pvar1, pvar2));
	
	printf("Comparing %s and %s : \n\t", pvar2, pvar1);
	printf("%d ... 1 Means that var1 was greater than var 2 \n", strcmp(pvar2, pvar1));
	
	printf("Comparing %s and %s : \n\t", pvar1, pvar3);
	printf("%d ... 0 Even though the first character is the same, the rest do not match causing tht inbalance.\n ----------------------------\n", strcmp(pvar1, pvar3));
	
	/*
	printf("Using strncmp to compare:\n\n");
	
	printf("Comparing %s and %s up to %d: \n\t", pvar1, pvar3, 1);
	printf("%d... only comparing [0,1)\n", strncmp(pvar1, pvar3, 1));
	
	printf("Comparing %s and %s up to %d: \n\t", pvar1, pvar3, 4);
	printf("%d... no error\n", strncmp(pvar1, pvar3, 4));
	
	*/
	return 0;
}

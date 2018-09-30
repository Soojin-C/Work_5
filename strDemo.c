#include <stdio.h>
#include "myStrcmp.h"
#include <string.h>

int main(){
	
  char pvar1[] = "a";
  char pvar2[] = "b";
  char pvar3[] = "acde";
  char *pa = "abd";
	
  printf("The use of strcmp and strncmp: \n");
	
  printf("\nUsing strcmp to compare:\n\n");
	
  //strcmp:
  printf("Comparing %s and %s : \n\t", pvar1, pvar2);
  printf("%d ... %d Means that var1 was less than var 2 \n", myStrcmp(pvar1, pvar2), strcmp(pvar1, pvar2));
	
  printf("Comparing %s and %s : \n\t", pvar2, pvar1);
  printf("%d ... %d Means that var1 was greater than var 2 \n",myStrcmp(pvar2, pvar1) , strcmp(pvar2, pvar1));
	
  printf("Comparing %s and %s : \n\t", pvar1, pvar3);
  printf("%d ... %d Even though the first character is the same, the rest do not match causing tht inbalance.\n ----------------------------\n", myStrcmp(pvar1, pvar3), strcmp(pvar1, pvar3));
	
  
    printf("Using strncmp to compare:\n\n");
	
    printf("Comparing %s and %s up to %d: \n\t", pvar1, pvar3, 1);
    printf("%d...%d only comparing [0,1)\n", myStrncmp(pvar1, pvar3, 1) , strncmp(pvar1, pvar3, 1));	
    printf("Comparing %s and %s up to %d: \n\t", pvar1, pvar3, 4);
    printf("%d... %d no error\n", myStrncmp(pvar1, pvar2, 4), strncmp(pvar1, pvar3, 4));

  char val1[20] = "hello";
  char val2[] = "hi";
  char val3[20] = "hello";
  char val4[] = "hi";
  
  
  printf ("%s \n", myStrcpy(val1, val2));
  printf ("%s \n", strcpy(val3, val4));
    
  return 0;
}

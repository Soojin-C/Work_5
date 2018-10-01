#include <stdio.h>
#include <stdlib.h>
#include "myStrhead.h"
#include <string.h>

int main(){

  char val[] = "hello";
	
  char pvar1[] = "a";
  char pvar2[] = "b";
  char pvar3[] = "acde";
  char *pa = "abd";

  printf("strlen(\"acde\"): \nOurs:%d \nStandard:%lu \n\n", myStrlen(val), strlen(val));
	
  //strcmp:
  printf("strcmp(\"a\", \"b\"): \nOurs:%d \nStandard:%d \n", myStrcmp(pvar1, pvar2), strcmp(pvar1, pvar2));
	
  printf("strcmp(\"a\", \"acde\"): \nOurs:%d \nStandard:%d \n\n", myStrcmp(pvar1, pvar3), strcmp(pvar1, pvar3));
	
  printf("strncmp(\"b\", \"acde\", 1): \nOurs:%d \nStandard:%d \n", myStrncmp(pvar2, pvar3, 1), strncmp(pvar2, pvar3, 1));
	
  printf("strncmp(\"a\", \"acde\", 1): \nOurs:%d \nStandard:%d \n\n", myStrncmp(pvar1, pvar3, 1), strncmp(pvar1, pvar3, 1));

  char val1[20] = "first";
  char val2[] = "second";
  char val3[20] = "first";
  char val4[] = "third";

   printf ("strcpy(\"first\", \"second\"): \nOurs: %s \n", myStrcpy(val1, val2));
  printf ("Standard: %s \n\n", strcpy(val3, val2));
  
  
  printf ("strncpy(\"second\",\"third\", 2): \nOurs: %s \n", myStrncpy(val1, val4, 2));
  printf ("Standard: %s \n\n", strncpy(val3, val4, 2));


  char test1[20] = "hello";
  char test2[] = "world";
  char test3[20] = "hello";

  char a = 'l';

  printf("strcat(\"hello\", \"world\"): \nOurs: %s\n", myStrcat(test1, test2));
  printf("Standard: %s\n", strcat(test3, test2));
  

  printf("\nstrchar(\"helloworld\", \'l\'): \nOur: %p \n", myStrchr(test1, 'l'));
  printf("Standard: %p\n", strchr(test1, 'l'));

  return 0;
}

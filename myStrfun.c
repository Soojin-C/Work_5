#import "myStrhead.h"
#import <stdio.h>
#import <stdlib.h>

int myStrlen(char* s){
  int retVal = 0;
  while (*(s + retVal)){
    retVal += 1;
  }
  return retVal;
}

int myStrcmp(char *s1, char *s2 ){
  int retVal = 0;
  if (*s1 || *s2){
    if (*s1 < *s2){
      //printf ("1");
      retVal -= 1;
      return retVal;
    }
    else if (*s1 > *s2){
      //printf ("2");
      retVal += 1;
      return retVal;
    }
    else{
      //printf ("3");
      s1 += 1;
      s2 += 1;
      return myStrcmp(s1, s2);
    }
  }
  //printf("answer");
  return retVal;
}

int myStrncmp(char *s1, char *s2, int n){
  int retVal = 0;
  while (n){
    if (*s1 || *s2){
      if (*s1 < *s2){
	//printf ("1");
	retVal -= 1;
	return retVal;
      }
      else if (*s1 > *s2){
	//printf ("2");
	retVal += 1;
	return retVal;
      }
      else{
	n--;
	s1+= 1;
	s2+= 1;
	return myStrncmp(s1, s2, n);
      }
    }
    else{
      break;
    }
  }
  return retVal;
}


char * myStrcpy(char *dest, char*source){
  char *temp = dest;
  while (*source){
    *temp = *source;
    source += 1;
    temp += 1;
  }
  *temp = *source;
  return dest;
}

char * myStrncpy(char *dest, char *source, int n){
  char*temp = dest;
  while (n){
    *temp = *source;
    source += 1;
    temp += 1;
    n--;
  }
  return dest;
}

char* myStrcat(char *dest , char *source){
  char *temp = dest;
  while (*temp ){
    temp++;
  }
  while (*source){
    *temp = *source;
    temp++;
    source++;
  }
  *temp = *source;
  return dest;
}

char * myStrchr( char *s, char c ){
  for(int x = 0;*(s+x); x++){
    if(*(s+x) == c){
      return s+x;
    }
  }
  return NULL;
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "mystrchr.h"

int main(){
  char s1[] = "[??W?]";
  char s2[] = "[hello]";
  char s3[] = "[goodbye]";
  
  
  printf("Testing strchr(s2,'l'):\n[standard]:[%p]\n[mine]:[%p]",strchr(s2,'l'),Mystrchr(s2,'l'));
}
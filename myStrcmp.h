int strcmp(char *s1, char *s2 ){
  int retVal = 0;
  if (*s1 < *s2){
    //printf ("%d",*s1 < *s2);
      retVal -= 1;
      return retVal;
    }
  else if (*s1 > *s2){
      retVal += 1;
      return retVal;
    }
  else{
    s1 += 1;
    s2 += 1;
    return strcmp(s1, s2);
  }
  return retVal;
}

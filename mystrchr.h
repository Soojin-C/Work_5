int Mystrlen(char *s){
  int ans = 0;
  while(*(s+ans)){
    ans += 1;
  }
  return ans;
}


char * Mystrchr( char *s, char c ){
  for(int x = 0; x <= Mystrlen(s); x++){
    if(*(s + x) == c){
      return s+x;
    }
    return NULL;
  }
}

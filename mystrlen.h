int Mystrlen(char *s){
  int ans = 0;
  while(*(s+ans)){
    ans += 1;
  }
  return ans;
}

/* int main(){ */
/*   char *s = "hello"; */
/*   char s1[] = "hello"; */
/*   printf("s points to: %p\n", s); */
/*   printf("s1 points to: %p\n",s1); */
/*   printf("address of \"hello\": %p\n", &"hello"); */
/*   printf("length: %d\n",length(s1)); */
/* } */

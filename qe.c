main () {
  char *s="main () {%c  char *s=%c%s%c;%c  printf(s,10,34,s,34,10,10,10);%c}%c";
  printf(s,10,34,s,34,10,10,10);
}

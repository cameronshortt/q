#define Y putchar
char x=1,*p="#define Y putchar\n"
"char x=1,*p=%;\n"
"o (c) { Y (c-10?34:92);\n"
"  c-10?m (10):Y (110);\n"
"  x?Y (34),Y (10):0;\n"
"  c-10?0:Y (34); }\n"
"m (d) { char *s=p;\n"
"  while (*s) { x=*s-47 && x;\n"
"    if (*s==d) o (d);\n"
"    else Y (*s);\n"
"    ++s;\n"
"  } }\n"
"main () { m (37); }//\n";
o (c) { Y (c-10?34:92);
  c-10?m (10):Y (110);
  x?Y (34),Y (10):0;
  c-10?0:Y (34); }
m (d) { char *s=p;
  while (*s) { x=*s-47 && x;
    if (*s==d) o (d);
    else Y (*s);
    ++s;
  } }
main () { m (37); }//

int x;
int x; 

int a[10];
int a[5]; /* conflicting */

char *x; /* conflicting */

int g();
int *g(); /* conflicting */
int (*g)(); /* conflicting */

int *f();

int *f_void(void) {
    int **g(); /* conflicting */
}

int f; /* conflicting */

int h;
int h_void(); 
int h_void(void) { 
    return 0;
}

int (*p)();
int (*p)(); 

int f_int_int_int(); 
int f_int_int_int(int a, int b, int c) { 
  return a + b + c;
}

int add_int_int(); 
char add_int_char(int x, char y) { 
  return x + y;
}

int a_int[10];
int a_int[20];  /* conflicting */

char *p_char;
int *p_int; 

int (*q_int)(); 
char (*q_char)(); 

char add_int_char_2(int x, char y) { 
  return x + y;
}
int add_int_char_2(int x, char y) { /* redefinition */
    return x + y;
}
int add_int_char_2(int x, int y) { /* redefinition */
    return x + y;
}
char add_int_char_2(char x, char y) { /* redefinition */
    return x + y;
}
int add_int_char_2(char x, int y) { /* redefinition */
    return x + y;
}

int main(int x, int x) { /* redeclaration */
  int x; /* redeclaration */
  {
    x = 2; 
    printf("%d", x); /* undeclared */
  }
  printf("%d", x); /* undeclared */

  return 0;
}

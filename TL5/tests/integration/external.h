#define EXTERNAL_CONST 12

typedef struct Native {
  int x;
  int y;
} *Native;

extern int external_int;

void MY_Some_external(void);

Native external1(int i, char* s, int* a);

int external2(Native n);

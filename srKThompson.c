#include <stdio.h>
char s[] = {
  '\t',
  '0',
  '\n',
  '|',
  ':',
  '\n',
  '\n',
  '/',
  '"',
  '\n',
};

main()
{
  int i;

  printf("char\ts{ } = {\n");
  for(i=0; s[i]; i++)
    printf("\n%d,\n",s[i]);
  printf("%s", s);
}

#include <stdio.h>

int znak_count(char *stng)
{
  int i, j, znk=0;

  for (i=0; i<10; i++)
  {
  for (j = 48; j < 58; j++)
    if (stng[i]==j)
      {znk++;}

  }
  
return znk;
}

int main()
{

  char stng[10];

  printf( "Vvedite stroku: " );

  fgets( stng, 10, stdin );
  
  printf("simvolov:%d", znak_count(stng));

return 0;
}

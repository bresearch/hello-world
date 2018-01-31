#include <stdio.h>
#include <math.h>

int  count_chars(const char* str)
{
  int c = 0;
  for(const char* p = str; *p; ++p)
    ++c;

  double x = 7.82;
  int y = ceil(x);
  printf("ceiling is: %d", y);
  
  return c;
}

int main(int argc, const char* argv[])
{
  if (argc < 2)
    {
      printf("Please enter a text message\n");
      return 1;
    }
  
  printf("HelloWorld\n");
  printf("HelloWorld\n");
  printf("HelloWorld\n");
  printf("HelloWorld\n");

  int nbr = count_chars(argv[1]);
  printf("Number of characters entered is: %d\n", nbr);

}




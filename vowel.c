#include <stdio.h>
void main()
{
  char c;
 
  printf("Input a character\n");
  scanf("%c", &c);
 
  switch(c)
  {
    case 'a':
    case 'A':
    case 'e':
    case 'E':
    case 'i':
    case 'I':
    case 'o':
    case 'O':
    case 'u':
    case 'U':
      printf("%c is a vowel.\n", c);
      break;
    default:
      printf("%c is not a vowel.\n", c);
  }
}

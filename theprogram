#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
  int words = 0, n = 7000;
  
  char text[n];
  printf("");
  fgets(text, sizeof(text), stdin);
  
  for (int i = 0; i < n; i++)
  {
    if (isspace(text[i]))
    {
      words++;
    }
    if (text[i] == NULL)
    {
      break;
    }
    if (words >= 8 && text[i] == '.' || words >= 8 && text[i] == '!' || words >= 8 && text[i] == '?')
    {
      printf("%c", text[i];
      printf("\n");
      i++;
    }
    else
    {
      if (text[i - 1] == "\n")
      {
        i++;
        printf("%c", text[i]);
      }
      else
      {
        printf("%c", text[i]);
      }
    }
  }
  return 0;
}

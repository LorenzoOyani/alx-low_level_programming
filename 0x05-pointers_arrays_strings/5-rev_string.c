#include "main.h"

/**
 * rev_string - prints a reverse string
 *@s: A pointer to an int that will be changed
 *
 *Return: void
 */

void rev_string(char *s)
{
char *start_c, *end_c, tmp;
int i, count;
int length = 0;

for (i = 0; s[i]; i++)
{
   length++;
}

count = length;

start_c = s;
end_c = s;

for (i = 0; i < count - 1; i++)
{
   end_c ++;
}

for (i = 0; i <count / 2; i++)
{
   tmp = *end_c;
   *end_c = *start_c;
   *start_c = tmp;

   start_c ++;
   end_c--;
}

}
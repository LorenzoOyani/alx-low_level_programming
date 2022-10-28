#include "main.h"


/**
* *cap_string - Capitalizes all words of a string
*@c: string to change
*Return: char changed
*/

char *cap_string(char *s)
{
int i, c;
int count;

char sym[] = ",;.!?(){}\n\t\" ";
for( i = 0, count = 0; s[i] !='\0'; i++ )
{
if (s[0] > 96 && s[0] < 123)
count =1;
for( c = 0; sym[c] !='\0'; c++)
{
if(sym[c] == s[i])
count =1;    
}
if(count)
{
if(s[i] > 96 && s[i] < 123)
{
s[i] -=32;
count = 0;    
}
else if ( s[i] > 64 && s[i] < 91)
count = 0;
else if ( s[i] > 48 && s[i] < 58)
count =0 ;   
}

}
return (s);
}  
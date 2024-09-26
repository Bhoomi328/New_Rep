#include <stdio.h>
#include <string.h>
#include <stdlib.h>
//Added This Commit For Feature1
char  get_lastwd(char *str);
char str[100];
char str2[100];
int main()
{
    printf("enter the line:");
    fgets(str,100,stdin);
    get_lastwd(str);
    return 0;
}
char  get_lastwd(char *str)
{
   int j = 0;
   int len = strlen(str)-1;
   int i = len-1;
   int end = i;
   while( i>=0 && str[i]!=' ')
   {
       i--;
   }
   int start = i+1;
   while(start <= end)
   {
       str2[j++] = str[start++];
   }
   str2[j] = '\0';
   printf("the last word is %s",str2);
   printf("the last word length is %d",strlen(str2));
   return 0;
}

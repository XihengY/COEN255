#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int IsPasswordOK(void)
{
  char Password [256];
  printf("Password at %p\n",&Password[0]);
  (void) gets(Password);
  return 0 == strcmp (Password, "goodpass");
}
int main (void)
{
  int PwStatus;
  puts("Enter Password: ");
  PwStatus=IsPasswordOK( );
  if (!PwStatus) {
    puts("Access denied");
    exit(-1);
  }
  else
    puts("Access granted");
}

#include "main.h"
#include <stdio.h>	

int main(void)
{
<<<<<<< HEAD
  int retVal;
retVal = _printf("%s", NULL);
printf("\n%d\n", retVal);
=======
int retVal, retVal2;
retVal = _printf("%s", NULL);
retVal2 = printf("%s", NULL);
printf("\n%d%d\n", retVal, retVal2);
>>>>>>> master

return (0);
}

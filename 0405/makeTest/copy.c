#include <stdio.h>
#include "copy.h"
/* copy: from
을 to 에 복사 ; to 가 충분
히 크다고 가정*/
void copy(char from[], char to[])
{
  int i;
  i = 0;
while ((to[i] = from[i]) != '\0')
  ++i;
}

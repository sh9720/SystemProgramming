#include <stdio.h>
#include <stdlib.h>

/*모든 명령을 인수로 출력한다.*/
int main(int argc, char *argv[])
{
 int i;
 for(i=0; i < argc; i++)
	printf("argv[%d]: %s \n", i ,argv[i]);
 exit(0);
}

#include <stdio.h>
#include <unistd.h>

/**
*Show ppid
*Return always 0
*/
int main()
{
	pid_t my_ppid = getpid();

	printf("the ppid is %u\n",my_ppid);

	return (0);
} 

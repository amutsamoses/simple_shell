#include <stdio.h>
#include <unistd.h>

/**
 * main - main function to parent ID
 *
 * Return: Always 0 if success
 */
int main(void)
{
	pid_t my_pid;

	my_pid = getpid();
	printf("%u\n", my_pid);
	return (0);
}

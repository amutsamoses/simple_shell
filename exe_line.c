#include "main.h"

/**
 * exec_line - function that locates builtins and commands
 *
 * @datash: data relevant (args)
 *
 * Return: 1 if successful otherwise 0
 */
int exec_line(data_shell *datash)
{
	int (*builtin)(data_shell *datash);

	if (datash->args[0] == NULL)
		return (1);

	builtin = get_builtin(datash->args[0]);

	if (builtin != NULL)
		return (builtin(datash));

	return (cmd_exec(datash));
}

#include "shell.h"

/**
 * main - Entry point for shell, handles args to shell
 * @ac: Arg counts
 * @av: Arr of args
 * @env: Environment
 * Return: 0;
 */
int main(int ac, char **av, char **env)
{
	if (!ac)
		(void)ac;
	if (!av)
		(void)av;
	if (!env)
		(void)env;
	shell(ac, av, env);
	return (0);
}


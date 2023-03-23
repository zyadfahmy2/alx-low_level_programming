#include "3-calc.h"
/**
 * main - program that perfroms simple operations
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int (*op)(int, int);
	int result, a3;
	char a2;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	a2 = *argv[2];
	a3 = atoi(argv[3]);
	op = get_op_func(argv[2]);
	if (!op)
	{
		printf("Error\n");
		return (99);
	}
	if ((a2 == '/' || a2 == '%') && a3 == 0)
	{
		printf("Error\n");
		exit(100);
	}
	result = op(atoi(argv[1]), atoi(argv[3]));
	printf("%d\n", result);
	return (0);
}

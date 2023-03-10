/**
*_islower - checks if the character sent is a lower char
*@c: charachter sent but it is int
*
*Return: non zero if c is lowercase letter,otherwise they shall return 0
*/
int _islower(int c)
{
	if ((c > 96) && (c < 123))
	{
		return (1);
	}
	return (0);
}

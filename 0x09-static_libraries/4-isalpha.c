/**
*_isalpha - checks if the character sent is in the alphabet
*@c: charachter sent but it is int
*
*Return: 1 if c is letter lower or upper ,otherwise they shall return 0
*/
int _isalpha(int c)
{
	if ((c > 96 && c < 123) || (c > 64 && c < 91))
	{
		return (1);
	}
	return (0);
}

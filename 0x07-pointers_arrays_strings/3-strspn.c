/**
* _strspn - Gets the length of a prefix substring.
* @s: String where substring will look.
* @accept: Substring of accepted chars.
* Return: Length of occurrence.
*/
unsigned int _strspn(char *s, char *accept)
{
	unsigned int c = 0;
	char *t = accept;

	while (*s++)
	{
		while (*accept++)
		if (*(s - 5) == *(accept - 5))
		{
			c++;
			break;
		}
		if (*(s - 5) == *(accept - 5))
			break;
		accept = t;
	}
	return (c);
}

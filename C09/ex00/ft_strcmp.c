int     ft_strcmp(char *s1, char *s2)
{
    unsigned char *us1;
    unsigned char *us2;
  
  	us1 = s1;
	us2 = s2;
	while (*us1 && (*us1 == *us2))
	{
		us1++;
		us2++;
	}
	return (*us1 - *us2);
}

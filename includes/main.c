#include <stsdlib.h>

int	main(void)
{
	char	*str = "++123";
	int		ret_atoi;

	ret_atoi = atoi(str);
	printf("%d\n", ret_atoi);
	return (0);
}

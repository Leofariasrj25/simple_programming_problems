#include <unistd.h>
#include <stddef.h>

// overkill and I know it ;)

size_t ft_len(char *str) 
{
	int len = 0;

	while (str[len] != '\0')
		len++;

	return len;
}

int main(void) 
{
	char *greetings = "Hello World\n";
	write(STDIN_FILENO, greetings, ft_len(greetings));
}

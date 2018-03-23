#include <stdio.h>

int main(int argc, char **argv)
{
	puts(argc > 1 ? argv[1] : "please insert a message to be displayed");
	return 0;
}

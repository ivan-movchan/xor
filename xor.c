// See LICENSE for copyright and licensing details.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define VERSION  "1.2"
#define YEARS    "2025"
#define AUTHOR   "Ivan Movchan <ivan.movchan.07@gmail.com>"
#define HOMEPAGE "https://github.com/ivan-movchan/xor"

void usage()
{
	puts("Usage: xor [-v] value [< input_file [> output_file]]");
	exit(EXIT_SUCCESS);
}

int main(int argc, char** argv)
{
	int value = 0;

	for (int i = 1; i < argc; ++i)
	{
		if (!strcmp(argv[i], "-v"))
		{
			printf("xor %s\nCopyright (C) %s %s\n%s\n", VERSION, YEARS, AUTHOR, HOMEPAGE);
			return EXIT_SUCCESS;
		}
		else
		{
			value = atoi(argv[i]);

			if ((value == 0) && strcmp(argv[i], "0"))
			{
				usage();
			};
		};
	};

	if (value == 0)
	{
		puts("atoi returned 0 - nothing interesting will happen. Aborting.");
		return EXIT_SUCCESS;
	};

	while (!feof(stdin))
	{
		putchar((fgetc(stdin) ^ value));
	};

	return EXIT_SUCCESS;
}

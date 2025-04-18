/*
 * Copyright (c) 2025 Ivan Movchan <ivan.movchan.07@gmail.com>
 *
 * This file is a part of xor.
 *
 * xor is free software released under the terms of MIT License.
 * See LICENSE file for further details.
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define VERSION  "1.2"
#define YEARS    "2025"
#define AUTHOR   "Ivan Movchan <ivan.movchan.07@gmail.com>"
#define HOMEPAGE "https://github.com/ivan-movchan/xor"
#define LICENSE  "MIT License"

void usage()
{
	puts("Usage: xor [-v] value [< input_file [> output_file]]");
	exit(EXIT_SUCCESS);
}

void version()
{
	printf(
		"xor %s — Copyright (C) %s %s.\n"
		"This is free software released under the terms of %s.\n"
		"%s\n",
		VERSION, YEARS, AUTHOR, LICENSE, HOMEPAGE
	);
	exit(EXIT_SUCCESS);
}

int main(int argc, char** argv)
{
	int value = 0;

	if (argc == 1)
	{
		usage();
	};

	for (int i = 1; i < argc; ++i)
	{
		if (!strcmp(argv[i], "-v"))
		{
			version();
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
		puts("atoi returned 0 — nothing will happen. Aborting.");
		return EXIT_SUCCESS;
	};

	while (!feof(stdin))
	{
		putchar((fgetc(stdin) ^ value));
	};

	return EXIT_SUCCESS;
}

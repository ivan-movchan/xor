// See LICENSE for copyright and licensing details.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define VERSION  "1.0"
#define YEARS    "2025"
#define AUTHOR   "Ivan Movchan <ivan.movchan.07@gmail.com>"
#define HOMEPAGE "https://github.com/ivan-movchan/xor"

void main(int argc, char** argv)
{
    if (argc == 1)
    {
        printf("Usage: xor integer_value [< input_file [> output_file]]\n");
	printf("       xor -v\n");
    }
    else if (!strcmp(argv[1], "-v"))
    {
        printf("xor %s\nCopyright (c) %s %s\n%s\n", VERSION, YEARS, AUTHOR, HOMEPAGE);
    }
    else
    {
        int value = atoi(argv[1]);

        while (!feof(stdin))
        {
            putchar((fgetc(stdin) ^ value));
        };
    };
}

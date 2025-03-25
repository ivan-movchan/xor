// See LICENSE for copyright and licensing details.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define VERSION  "1.1"
#define YEARS    "2025"
#define AUTHOR   "Ivan Movchan <ivan.movchan.07@gmail.com>"
#define HOMEPAGE "https://github.com/ivan-movchan/xor"

int main(int argc, char** argv)
{
    if (argc == 1)
    {
        puts("Usage: xor [-v] value [< input_file [> output_file]]");
        return EXIT_SUCCESS;
    };

    if (!strcmp(argv[1], "-v"))
    {
        printf("xor %s\nCopyright (C) %s %s\n%s\n", VERSION, YEARS, AUTHOR, HOMEPAGE);
        return EXIT_SUCCESS;
    };

    int value = atoi(argv[1]);

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

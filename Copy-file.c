#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *source, *destination;
    char ch;

    source = fopen("input.txt", "r");
    if (source == NULL)
    {
        printf("Error: Cannot open source file input.txt\n");
        exit(1);
    }

    destination = fopen("output.txt", "w");
    if (destination == NULL)
    {
        printf("Error: Cannot open destination file output.txt\n");
        fclose(source);
        exit(1);
    }

    while ((ch = fgetc(source)) != EOF)
    {
        fputc(ch, destination);
    }

    fclose(source);
    fclose(destination);

    printf("File copied successfully.\n");

    return 0;
}

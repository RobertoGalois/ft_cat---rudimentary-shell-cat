#include    <stdio.h>
#include    <stdlib.h>
#include    <string.h>

int     main(int argc, char* argv[])
{
        char    string[1000] = "cat ";

        if (argc == 2)
            system(strcat(string, argv[1]));
        return (0);
}

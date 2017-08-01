#include    <stdio.h>

void    ft_fread(FILE* p_file)
{
        char    buffer_c;

        while ((buffer_c = fgetc(p_file)) != EOF)
            putchar(buffer_c);
}

void    ft_cat(char*    p_file_way)
{
        FILE*   file;

        file = fopen(p_file_way, "r");
        if (file != NULL)
        {
            ft_fread(file);
            fclose(file);
        }
        else 
        {
            printf("ft_cat: %s: Aucun fichier de ce type\n", p_file_way);
        }
}

int     main(int argc, char* argv[])
{
        if (argc != 2)
            printf("Mauvaise syntaxe de la commande.\n");
        else
            ft_cat(argv[1]);
        return (0);
}

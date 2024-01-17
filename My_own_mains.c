#include <stdio.h>
#include <unistd.h>
#include <string.h>

//To test the code of ex00

int main(void)
{
	ft_putchar('c');
	ft_putchar('\n');
	return(0);
}

//To test the code of ex01
int main(void)
{
        ft_print_alphabet();
	return(0);
}

//To test the code of ex02
int main(void)
{
        ft_print_alphabet();
        return(0);
}

//To test the code of ex03
int main(void)
{
        ft_print_numbers();
        return(0);
}

//To test the code of ex04

int main(void)
{
        ft_is_negative(0);
        return(0);
}

//////////////////////////////////////////////////C01

//To test the code of ex00


//To test the code of ex01


//To test the code of ex02

int     main(void)
{
        int nbr1;
        int nbr2;

        nbr1 = 42;
        nbr2 = 43;

        ft_swap(&nbr1, &nbr2);

        printf("%d \n", nbr1);
        printf("%d \n", nbr2);
        return(0);
}

//To test the code of ex03

int main(void)
{
        int     divi;
        int     modu;

        ft_div_mod(50, 3, &divi , &modu);
        printf("%d \n", divi);
        printf("%d \n", modu);
}

// To test the code of ex04

#include <stdio.h>

int     main(void)
{
        int     a;
        int     b;

        a = 15;
        b = 5;
        ft_ultimate_div_mod(&a, &b);
        printf("%d \n", a);
        printf("%d \n", b);
}

// To test the code of ex05

int     main(void)
{
        char    *str1;

        str1 = "0123456789";
        ft_putstr(str1);
}

// To test the code of ex06

int             main(void)
{
        char str[] = "0123456789";
        char str1[] = "test";

        printf("%d\n", ft_strlen(str));
        printf("%d\n", ft_strlen(str1));
}

// To test the code of ex07

int     main(void)
{
        int     i = 0;
        int     tab[5] = {0, 1, 2, 3, 4};
        int     size = 5;

        ft_rev_int_tab(tab, size);
        while (i < size)
        {
                printf("%d", tab[i]);
                i++;
        }
        return (0);
}


// To test the code of ex08

int     main(void)
{
        int     tab[5] = {7, 8, 3, 1, 5};
        int     size = 5;
        int     i = 0;

        ft_sort_int_tab(tab, size);

        while (i < size)
        {
                printf("%d", tab[i]);
                i++;
        }
        return (0);
}

//	while (varbool == 0) //(i < size - 1)

//////////////////////////////////////////////////C02

//To test the code of ex00

#include <unistd.h>
#include <stdio.h>
#include <string.h>

int     main(void)
{
        char    src[] = "this is a string";
        char    dest[200];

        ft_strcpy(dest, src);
        printf("Src : %s\n", src);
        printf("Dest : %s\n", dest);

        return (0);
}

//To test the code of ex01

int     main(void)
{
        char str[] = "string test";
        char *str2 = "abc";

        ft_strncpy(str, str2, 6);
        printf("%s\n", str);
        return (0);
}

//To test the code of ex02

int main (void)
{
        char    str[] = "abcdefg";

        printf("%d",ft_str_is_alpha(str));
        return(0);
}

//To test the code of ex03

int main (void)
{
        char    str[] = "0123456789";

        printf("%d",ft_str_is_numeric(str));
        return(0); 
}

//To test the code of ex04

int main (void)
{
        char    str[] = "0123456789";

        printf("%d",ft_str_is_lowercase(str));
        return(0); 
}


//To test the code of ex05

int main (void)
{
        char    str[] = "0123456789";

        printf("%d",ft_str_is_uppercase(str));
        return(0); 
}

//To test the code of ex06

int main (void)
{
        char    str[] = "!\"#$%&\'()*+,-.0123456789:;<=>?@ABCDEFGHIJKLMNOPQRSTUVWXYZ[\\]^_`abcdefghijklmnopqrstuvwxyz{|}~";

        printf("%d",ft_str_is_printable(str));
        return(0); 
}

//To test the code of ex07

int main (void)
{
        char    str[] = "111aaaaaRRRR";

        printf("%s",ft_strupcase(str));
}

//To test the code of ex08
int main (void)
{
        char    str[] = "111aaaaaRRRR";

        printf("%s",ft_strlowcase(str));
}

//To test the code of ex09

int main (void)
{
        char    str[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";

        printf("%s",ft_strcapitalize(str));
        return(0);
}


code working;
char    *ft_strcapitalize(char *str)
{
        int     i;

        i = 0;
        while (str[i] != '\0')
        {
                if (i == 0)
                {
                        if ((str[i] >= 97) && (str[i] <= 122))
                        {
                                str[i] = str[i] - 32;
                                i++;
                        }
                }
                if ((str[i] == ' ') || ((str[i] < 48) && (str[i + 1] != ' ')))
                {
                        i++;
                        if((str[i] >= 97) && (str[i] <= 122))
                        {       
                                str[i] = str[i] - 32;
                                i++;
                        }
                }
                else if ((str[i] >= 65) && (str[i] <= 90))
                        str[i] = str[i] + 32;
                i++;
        }
        return (str);
}

//Code and main of ex10

unsigned int    ft_strlcpy(char *dest, char *src, unsigned int size)
{
        unsigned int    i;

        i = 0;
        if (size > 0)
        {
                while ((*src + size) != '\0')
                {
                        if (i == size)
                        {
                                i--;
                        }
                        *(dest + i) = *(src + i);
                        i++;
                }
        }

        while((*src + i) != '\0')
        {
                i++;
        }
        return (i);
        *dest = '\0';
}

int     main(void)
{
        char    src[] = "Sour";
        char    dest[] = "Destination";
        int     size;

        size = ft_strlcpy(dest, src, 2);

        printf("Copied '%s' into '%s', length %d\n", src, dest, size);
        printf("Dest is now %s", dest );

        return(0);
}

#include <bsd/string.h>
#include <stdio.h>

int main()
{
	char array[6];
	printf("ft --->%d\n", ft_strlcpy(array, "pouet", 0));
	printf("lib--->%ld\n", strlcpy(array, "pouet", 0));
}

//////////////////////////////////////////////////C03

//To test the code of ex00

int     main(int argc, char **argv)
{
        if (argc != 3)
                return(0);
        int     ret = ft_strcmp(argv[1], argv[2]);

        if (ret > 0)
                printf("s1 est plus grand que s2");
        else if (ret < 0)
                printf("s1 est plus petit que s2");
        else
                printf("s1 et s2 font la meme taille");
        return (0);
}

//To test the code of ex01

int     main(int argc, char **argv)
{
        unsigned int    n = 4;

        if (argc != 3)
                return(0);

        int     ret = ft_strncmp(argv[1], argv[2], n);
        
        if (ret > 0)
                printf("s1 est plus grand que s2");
        else if (ret < 0)
                printf("s1 est plus petit que s2");
        else
                printf("s1 et s2 font la meme taille");
        return (0);
}

//To test the code of ex02

int     main(int argc, char **argv)
{
        if (argc != 3)
                return(0);
        char     *ret = ft_strcat(argv[1], argv[2]);

        printf("Destination is now %s", ret);
        return (0);
}

//To test the code of ex03

int     main(int argc, char **argv)
{
        if (argc != 3)
                return(0);
        unsigned int    n = 4;
        char    *ret = ft_strncat(argv[1], argv[2], n);

        printf("Destination is now %s", ret);
        return (0);
}

//First code of ex04

char    *ft_strstr(char *str, char *to_find)
{
        int     i;

        if (*str == 0 || *to_find == 0)
                return ("");
        while (*str)
        {
                i = 0;
                while (str[i] == to_find[i] && to_find[i] != '\0'
                        && str[i] != '\0')
                {
                        i++;
                }
                if (to_find[i] == '\0')
                {
                        break ;
                }
                str++;
        }
        return (str);
}

//Second code of ex04

char    *ft_strstr(char *str, char *to_find)
{
        int     i;
        int     j;

        i = 0;
        if (to_find[0] == '\0')
                return (str);
        while (str[i] != '\0')
        {
                j = 0;
                while (str[i + j] == to_find[j] && str[i + j] != '\0')
                {
                        if (to_find[j + 1] == '\0')
                                return (&str[i]);
                        j++;
                }
                i++;
        }
        return (0);
}

//To test the code of ex04

int     main(void)
{
        char *ret = ft_strstr("Ceci est une string", "une");

        printf("%s", ret);
}

//To test the code of ex05

int     main(int argc, char **argv)
{
        if (argc != 3)
                return(0);
        unsigned int     ret = ft_strlcat(argv[1], argv[2], 3);

        printf("Destination size would've been %d", ret);
        return (0);
}

//////////////////////////////////////////////////C04

//To test the code of ex01

int     main(void)
{
        char    *str1;

        str1 = "012345qqqq6789";
        ft_putstr(str1);
}

//To test the code of ex02

#include <stdio.h>
#include <stdlib.h>

int     main(int argc, char **argv)
{
        if (argc != 2)
                return (0);
        char     ret = ft_putnbr(argv[1]);
        printf("%s\n", ret);
}

//To test the code of ex03

#include <stdio.h>

int	main(void)
{
	printf("%d", ft_atoi(" ---+--+1234ab567"));
}

//////////////////////////////////////////////////C05

//To test the code of ex00

#include <stdio.h>
#include <stdlib.h>

int     main(int argc, char **argv)
{
        if (argc != 2)
                return (0);
        int     ret = ft_iterative_factorial(atoi(argv[1]));
        printf("%d\n", ret);
}

//To test the code of ex01

original code;
int ft_recursive_factorial(int nb)
{
        if (nb < 0)
                return(0);
        else if (nb <= 1)
                return (1);
        else
                return (nb * ft_recursive_factorial(nb - 1));
}

#include <stdio.h>
#include <stdlib.h>

int     main(int argc, char **argv)
{
        if (argc != 2)
                return (0);
        int     ret = ft_recursive_factorial(atoi(argv[1]));
        printf("%d\n", ret);
}

//To test the code of ex02

#include <stdio.h>
#include <stdlib.h>

int     main(int argc, char **argv)
{
        if (argc != 3)
                return (0);
        int     ret = ft_iterative_power(atoi(argv[1]), atoi(argv[2]));
        printf("%d\n", ret);
}

//To test the code of ex03

#include <stdio.h>

int     main(int argc, char **argv)
{
        if (argc != 3)
                return (0);
        int     ret = ft_recursive_power(atoi(argv[1]), atoi(argv[2]));
        printf("%d\n", ret);
}

//To test the code of ex04



//To test the code of ex05

int     main(void)
{
        printf("%d", ft_sqrt(2147483647));
}

//To test the code of ex06

///////OLD CODE/////////

int ft_is_prime(int nb)
{
        int     n;

        n = 2;
        if (nb < 2)
                return (0);
        while (n * n <= nb)
        {
                if (nb % n == 0)
                        return (0);
        n++;
        }
        return (1);
}

#include <stdio.h>
#include <stdlib.h>

int     main(int argc, char **argv)
{
        if (argc != 2)
                return (0);
        int     ret = ft_is_prime(atoi(argv[1]));
        printf("%d\n", ret);
}



//To test the code of ex07

#include <stdio.h>
#include <stdlib.h>

int     main(int argc, char **argv)
{
        if (argc != 2)
                return (0);
        int     ret = ft_find_next_prime(atoi(argv[1]));
        printf("%d\n", ret);
}


//////////////////////////////////////////////////C06



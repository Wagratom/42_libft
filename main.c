/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwallas- <wwallas-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 15:01:02 by bankai            #+#    #+#             */
/*   Updated: 2022/06/03 18:33:20 by wwallas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <bsd/string.h>

//						atoi
/*  int main()
{

	printf("original: %d\n", atoi(""));
	printf("my atoi: %d\n", ft_atoi(""));

	printf("original: %d\n", atoi("-123a123"));
	printf("my atoi: %d\n", ft_atoi("-123a123"));

	printf("original: %d\n", atoi("--123"));
	printf("my atoi: %d\n", ft_atoi("--123"));

	printf("original: %d\n", atoi("    +123a123"));
	printf("my atoi: %d\n", ft_atoi("    +123a123"));

	printf("original: %d\n", atoi("    a123a123"));
	printf("my atoi: %d\n", ft_atoi("   a123a123"));
	printf("\n");
}
 */

//							ft_strncpy
/* int main()
{
	char	*t;

	t = (char *) malloc(9);

	ft_strlcpy(t, "wagratom", 10);
	printf("original :%d\n", strncmp(t, "", -1));
	printf("my func  :%d\n", ft_strncmp(t, "w", -1));
} */

//							ft_isalnum
/*
int main(void)
{
    int i;

    i = -10;
    while (i <= 127)
    {
        printf("%d = %d  | %d = %d\n", i, isalnum(i), i, ft_isalnum(i));
        i++;
    }
}
 */

//							ft_isalpha
/* int main(void)
{
    int i;

    i = -10;
    while (i <= 127)
    {
        printf("%d = %d  | %d = %d\n", i, isalpha(i), i, ft_isalpha(i));
        i++;
    }
} */

//							ft_isascii
/*
int main()
{
    int i = -10;

	while (i <= 200)
    {
        printf("%d = %d  | %d = %d \n",i, isascii(20000000000), i, ft_isascii(20000000000));
        i++;
    }

} */

//							ft_isdigit
/*
int main()
{
	int i = 0;

	while (i < 60)
	{
		printf("%d = %d  | %d = %d\n",i, isdigit(i),i, ft_isdigit(i));
		i++;
	}
} */

//							ft_isprint
/* int main(void)
{
	int i = 0;

	while (i < 3000)
	{
		printf("%d = %d  | %d = %d \n",i, isprint(i), i, ft_isprint(i));
		i++;
	}
} */

//							ft_itoa
/*
int main()
{
	char	*numbs;

	numbs = ft_itoa(-2147483648);
	printf("numb: %s\n", numbs);
	free(numbs);
}
//					teste tripolue patrocina
{

	char * s = ft_itoa(INT_MAX);
	| 1 | check(!strcmp(s, to_string(INT_MAX).c_str()));
	| 2 | mcheck(s, strlen(to_string(INT_MAX).c_str()) + 1); free(s); showLeaks();

	s = ft_itoa(INT_MIN);
	| 3 | check(!strcmp(s, to_string(INT_MIN).c_str()));
	| 4 | mcheck(s, strlen(to_string(INT_MIN).c_str()) + 1); free(s); showLeaks();

	s = ft_itoa(0);
	| 5 | check(!strcmp(s, to_string(0).c_str()));
	| 6 | mcheck(s, strlen(to_string(0).c_str()) + 1); free(s); showLeaks();
	s = ft_itoa(1);
	| 7 | check(!strcmp(s, to_string(1).c_str()));
	| 8 | mcheck(s, strlen(to_string(1).c_str()) + 1); free(s); showLeaks();
	s = ft_itoa(-1);
	| 9 | check(!strcmp(s, to_string(-1).c_str()));
	| 10 | mcheck(s, strlen(to_string(-1).c_str()) + 1); free(s); showLeaks();

	s = ft_itoa(42);
	| 11 | check(!strcmp(s, to_string(42).c_str()));
	| 12 | mcheck(s, strlen(to_string(42).c_str()) + 1); free(s); showLeaks();
	write(1, "\n", 1);
	return (0);
} */
//							ft_memchr
/*
int main()
{
	char	*teste;
	char	*teste2;

	teste = (char *) malloc(10);
	teste2 = (char *) malloc(10);

	ft_strlcpy(teste, "wagratom", 9);
	ft_strlcpy(teste2, "wagratom", 9);

	teste = memchr(teste, 't', ft_strlen(teste));
	teste2 = ft_memchr(teste2, 't', ft_strlen(teste2));

	write(1, teste, ft_strlen(teste));
	write(1,"\n", 1);
	write(1, teste2, 4);
	free(teste);
	free(teste2);
} */

//							ft_memcmp
/*
int main()
{
	printf("\nstr01 > str02\n\n");
	printf("original: %d\n", memcmp("wa", "ww", 2));
	printf("my func:  %d\n", ft_memcmp("wa", "ww", 2));
	printf("_______________________\n\n");

	printf("str01 < str02\n\n");
	printf("original: %d\n", memcmp("ww", "Wa", 3));
	printf("my func:  %d\n", ft_memcmp("ww", "Wa", 3));
	printf("_______________________\n\n");

	printf("str01 == str02\n\n");
	printf("original: %d\n", memcmp("wag", "w", 3));
	printf("my func:  %d\n", ft_memcmp("wag", "w", 3));
	printf("_______________________\n\n");

} */

//							ft_memcpy
/*
int main () {
   char str1[15];
   char str2[15];
   int ret;

   ft_memcpy(str1, "abcdef", 6);
   ft_memcpy(str2, "ABCDEF", 6);

   ret = memcmp(str1, str2, 5);

   if(ret > 0) {
      printf("str2 is less than str1");
   } else if(ret < 0) {
      printf("str1 is less than str2");
   } else {
      printf("str1 is equal to str2");
   }

   return(0);
} */

//							ft_memmove
/*
int main ()
{
    char *string1;
    char *string2;

    string1 = strdup("abcdefgh");
    string2 = string1 + 4;
    ft_memmove(string2, string1, 5);
    printf("%s\n", string2);
    return (0);
} */

//							ft_memset
/*
int main ()
{
   char str[50];

   ft_strlcpy(str,"This is string.h library function", 34);
   puts(str);

   ft_memset(str,'$',7);
   puts(str);

   return(0);
} */

//							ft_split

/*
int main()
{
	char	**tab = ft_split("tripouille", 0);
	int 	i;

	i = -1;
	while (tab[++i])
		printf("mat[%d]: %s\n", i, tab[i]);
	printf("mat[%d]: %p\n", i, tab[i]);
	i = -1;
	while (tab[++i])
		free(tab[i]);
	free(tab);
}
//						testes tripolue patrocina
{


	char * * tab = ft_split("  tripouille  42  ", ' ');
	| 1 |mcheck(tab, sizeof(char *) * 3);

	| 2 | check(!strcmp(tab[0], "tripouille"));
	| 3 | mcheck(tab[0], strlen("tripouille") + 1);

	| 4 | check(!strcmp(tab[1], "42"));
	| 5 | mcheck(tab[1], strlen("42") + 1);

	| 6 | check(tab[2] == NULL);
	freeTab(tab); showLeaks();

	tab = ft_split("tripouille", 0);
	| 7 | check(!strcmp(tab[0], "tripouille"));
	| 8 | check(tab[1] == NULL);
	freeTab(tab); showLeaks();

	tab = ft_split("     ", ' ');
	| 9 | check(tab[0] == NULL);
	free(tab); showLeaks();

	char * invalidReadCheck = new char; *invalidReadCheck = 0;
	tab = ft_split(invalidReadCheck, 0);
	| 10 | check(tab[0] == NULL); delete invalidReadCheck;
	free(tab); showLeaks();

	tab = ft_split("chinimala", ' ');
	| 11 | mcheck(tab, sizeof(char *) * 2);
	| 12 | check(!strcmp(tab[0], "chinimala"));
	| 13 | check(tab[1] == NULL);
	freeTab(tab); showLeaks();

	tab = ft_split("", ' ');
	| 14 | mcheck(tab, sizeof(char *) * 1);
	| 15 | check(tab[0] == NULL);
	freeTab(tab); showLeaks();

	| sguerra- |
	char * splitme = strdup("Tripouille");
	tab = ft_split(splitme, ' ');
	| 16 | mcheck(tab, sizeof(char *) * 2);
	| 17 | check(!strcmp(tab[0], "Tripouille"));
	| 18 | check(tab[1] == NULL);
	free(splitme); freeTab(tab); showLeaks();

	splitme = strdup("Tripouille ");
	tab = ft_split(splitme, ' ');
	| 19 | mcheck(tab, sizeof(char *) * 2);
	| 20 | check(!strcmp(tab[0], "Tripouille"));
	| 21 | check(tab[1] == NULL);
	free(splitme); freeTab(tab); showLeaks();

	splitme = strdup(" Tripouille");
	tab = ft_split(splitme, ' ');
	| 22 | mcheck(tab, sizeof(char *) * 2);
	| 23 | check(!strcmp(tab[0], "Tripouille"));
	| 24 | check(tab[1] == NULL);
	free(splitme); freeTab(tab); showLeaks();

	splitme = strdup(" Tripouille ");
	tab = ft_split(splitme, ' ');
	| 25 | mcheck(tab, sizeof(char *) * 2);
	| 26 | check(!strcmp(tab[0], "Tripouille"));
	| 27 | mcheck(tab[0], strlen("Tripouille") + 1);
	| 28 | check(tab[1] == NULL);
	free(splitme); freeTab(tab); showLeaks();

	| wleite |
	splitme = strdup("--1-2--3---4----5-----42");
	tab = ft_split(splitme, '-');
	| 29 | mcheck(tab, sizeof(char *) * 7);
	| 30 | check(!strcmp(tab[0], "1"));
	| 31 | mcheck(tab[0], strlen("1") + 1);| 20 |
	| 32 | check(!strcmp(tab[1], "2"));
	| 33 | mcheck(tab[1], strlen("2") + 1);

	| 34 | check(!strcmp(tab[2], "3"));
	| 35 | mcheck(tab[2], strlen("3") + 1);

	| 36 | check(!strcmp(tab[3], "4"));
	| 37 | mcheck(tab[3], strlen("4") + 1);

	| 38 | check(!strcmp(tab[4], "5"));
	| 39 | mcheck(tab[4], strlen("5") + 1);

	| 40 | check(!strcmp(tab[5], "42"));
	| 41 | mcheck(tab[5], strlen("42") + 1);

	| 42 | check(tab[6] == NULL);
	free(splitme); freeTab(tab); showLeaks();

	write(1, "\n", 1);
	return (0);
}
*/

//									ft_strchr
/*
int	main()
{
	char		str2[] = "wagratom";

	printf("%s\n", ft_strchr(str2, 'w'));
	printf("%s\n", ft_strchr(str2, 'a'));
	printf("%s\n", ft_strchr(str2, 'g'));
	printf("%s\n", ft_strchr(str2, 't'));
	printf("%s\n", ft_strchr(str2, 'y'));
	printf("%s\n", ft_strchr(str2, '\0'));
	printf("%s\n", ft_strchr(str1, '\0'));
	return (0);

	//expected
	//wagratom
	//agratom
	//gratom
	//tom
	// NULL
	//
	//
}*/

//								ft_striteri
/*
void numb(unsigned int i, char * s)
{
	int iTest = 1;
	*s += i;
}

int main()
{
	char teste[] = "0000000000";
	ft_striteri(teste, &numb);

	printf("teste : %s\n", teste);
} */

//								ft_strlcat
/*
int main()
{
	char	*teste;
	char	*teste2;
	int 	i;

	teste = (char *) malloc(8);
	ft_strlcpy(teste,"Ban", 7);
	teste2 = (char *) malloc(8);
	ft_strlcpy(teste2,"Ban", 7);

 	i = 0;
 	while (i <= 11)
	{
		printf("\ntestes com %d\n\n", i);
		printf("original: %ld\n", strlcat(teste, "wagratom", i));
		printf("my func:  %ld\n", ft_strlcat(teste2, "wagratom", i));
		printf("original: %s\n", teste);
		printf("my func:  %s\n", teste2);
		printf("____________________\n\n");
		i++;
	}

	printf("original: %ld\n", strlcat(teste, "\n", 16));
	printf("my func:  %ld\n", ft_strlcat(teste2, "", 16));
	printf("original: %s\n", teste);
	printf("my func:  %s\n", teste2);
}
 */

//							ft_strlcpy
/*
int main()
{
	char *dest;
	dest = (char *)malloc(sizeof(*dest) *15);

	memset(dest, 0, 15);
	memset(dest, 'r', 6);
	printf("%ld\n", strlcpy(dest, "lorem", 15));
	write(1, dest, 15);
	printf("\n%ld\n", ft_strlcpy(dest, "lorem", 15));
	write(1, dest, 15);


	memset(dest, 0, 15);
	memset(dest, 'r', 6);
	printf("%ld\n", strlcpy(dest, "", 15));
	write(1, dest, 15);
	printf("\n%ld\n", ft_strlcpy(dest, "", 15));
	write(1, dest, 15);

 	memset(dest, 0, 15);
	memset(dest, 'r', 6);
	printf("%ld\n", strlcpy(dest, "lorem ipsum dolor sit amet", 0));
	printf("dest: %s\n",dest);
	printf("%ld\n", ft_strlcpy(dest, "lorem ipsum dolor sit amet", 0));
	printf("dest: %s\n",dest);
} */

//							ft_strlen
/*
int main () {
   char str[50];
   int len;

   strcpy(str, "This is tutorialspoint.com");

   len = strlen(str);
   printf("Length of |%s| is |%d|\n", str, len);

   return(0);
} */

//						ft_strrchr
/*
int main()
{
	char	t1[] = "wagratom.";
	char	t2[] = ".wagratom";
	char	t3[] = "wagratom.com";
	char	t4[] = "wagratom\ntom";
	char	t5[] = "wagratom\2om";


	printf("original: %s\n" ,strrchr(t1, '.'));
	printf("my func:  %s\n", ft_strrchr(t1, '.'));
	printf("_______________________\n");

	printf("original: %s\n", strrchr(t2, '.'));
	printf("my func:  %s\n" ,ft_strrchr(t2, '.'));
	printf("_______________________\n");

	printf("original: %s\n", strrchr(t3, '.'));
	printf("my func:  %s\n", ft_strrchr(t3, '.'));
	printf("_______________________\n");

	printf("original: %s\n", strrchr(t4, '\\'));
	printf("my func:  %s\n", ft_strrchr(t4, '\\'));
	printf("_______________________\n");

	printf("original: %s\n", strrchr(t4, '\\'));
	printf("my func:  %s\n", ft_strrchr(t4, '\\'));
	printf("_______________________\n");

	printf("original: %s\n", strrchr("", '\\'));
	printf("my func:  %s\n", ft_strrchr("", '\\'));
	printf("_______________________\n");
}
 */

//						ft_strnstr
/*
int	main(void)
{
	char teste[] = "lorem ipsum dolor sit amet";

	//expected: "lorem ipsum dolor sit amet"
	printf("%s\n", strnstr(teste, "lorem", 15));
	printf("%s\n", ft_strnstr(teste, "lorem", 15));

	//expected: NULL
	char teste[] = "lorem ipsum dolor sit amet";
	//printf("%s\n", strnstr(teste, "dolor", 15));
	teste = ft_strnstr(teste, "dolor", 15);
	printf("%s\n", teste);
}
*\

	//						ft_strtrim
	/* int main()
	{
		char	teste[] = "wagratom wallas wagratom";
		char	teste1[] = "tom wagratom ";
		char	teste2[] = " tom wagratom";
		char	teste3[] = "tom? não e wagratom?";
		char	teste4[] = "wagratom wallas wagratom";

		printf("//expected: wallas\n");
		printf("%s\n\n", ft_strtrim(teste, "margotaw"));

		printf("//expected: wagratom\n");
		printf("%s\n\n", ft_strtrim(teste1, "tmo"));

		printf("//expected: tom wagra\n");
		printf("%s\n\n", ft_strtrim(teste2, "otm"));

		printf("//expected: não e wagra\n");
		printf("%s\n\n", ft_strtrim(teste3, "?tmo"));

		printf("//expected: wagratom wallas wagratom\n");
		printf("%s\n\n", ft_strtrim(teste4, ""));

	} */

//						ft_substr
/*
int main(void)
{
	title("ft_substr\t: ")

	char * s = ft_substr("tripouille", 0, 42000);
	printf("expectec \"tripouille\"\n");
	printf("resp %s\n", s);
	//expected free of ft_Strlen(tripoule) + 1
	free(s);

	s = ft_substr("tripouille", 1, 1);
	printf("expectec \"r\"\n");
	printf("resp %s\n", s);
	//expected size free of 2
	free(s);

	s = ft_substr("tripouille", 100, 1);
	printf("expectec \" \"\n");
	printf("resp %s\n", s);
	//expected size free of 1
	free(s);

	char * str = strdup("1");
	printf("expectec \" \"\n");
	s = ft_substr(str, 42, 42000000);
	printf("resp %s\n", s);
	//expected size free 1
	free(s);

	str = strdup("0123456789");
	s = ft_substr(str, 9, 10);
	printf("expectec \"9\"\n");
	printf("resp %s\n", s);
	//expected size free 2
	free(2);

	s = ft_substr("42", 0, 0);
	printf("expectec \"\"\n");
	printf("resp %s\n", s);
	//expected size free 1
	free(s);

	s = ft_substr("BONJOUR LES HARICOTS !", 8, 14);
	printf("expectec \"LES HARICOTS !\"\n");
	printf("resp %s\n", s);
	//expected free size of 15
	free(s);

	s = ft_substr("test", 1, 2);
	printf("expectec \"es\"\n");
	printf("resp %s\n", s);
	//expected size free 3
	free(s);

	write(1, "\n", 1);
	return (0);
} */

//						ft_tolower
/*
int main()
{
	char *alphabet;

	alphabet = ".abcdefghijklmnopqrstuvwxyz";
	while (*alphabet++)
		printf("%c\n", ft_tolower(*alphabet));
} */

//						ft_toupper
/*
int main()
{
	char *alphabet;

	alphabet = ".abcdefghijklmnopqrstuvwxyz";
	while (*alphabet++)
		printf("%c\n", ft_toupper(*alphabet));
}*/

//mains para as fd

/* int main()
{
	int fd;

	fd = open("testeeeeeeee", O_WRONLY);
	ft_putstr_fd("wagratom wallas ferreira santos", fd);
}
 */






















  1 /* ************************************************************************** */
  1 /* ************************************************************************** */
  1 /* ************************************************************************** */
  1 /* ************************************************************************** */
  1 /* ************************************************************************** */
Last login: Mon Sep 14 09:21:54 on ttys001
➜  ~ cd Documents/Piscine/C-00/ex06
➜  ex06 ls
ft_print_comb2.c
➜  ex06 vim ft_print_comb2.c
➜  ex06 ls -la
total 32
drwxr-xr-x   4 jbreard  2020    136 Sep 14 09:23 .
drwxr-xr-x  10 jbreard  2020    340 Sep 11 15:12 ..
-rw-r--r--   1 jbreard  2020  12288 Sep 13 19:32 .ft_print_comb2.c.swp
-rw-r--r--   1 jbreard  2020   1297 Sep 12 20:00 ft_print_comb2.c
➜  ex06 rm .ft_print_comb2.c.swp
➜  ex06 ls -la
total 8
drwxr-xr-x   3 jbreard  2020   102 Sep 14 09:23 .
drwxr-xr-x  10 jbreard  2020   340 Sep 11 15:12 ..
-rw-r--r--   1 jbreard  2020  1297 Sep 12 20:00 ft_print_comb2.c
➜  ex06 vim ft_print_comb2.c
➜  ex06 vim ft_print_comb2.c
➜  ex06 vim ft_print_comb2.c
➜  ex06 vim ft_print_comb2.c
➜  ex06 vim ft_print_comb2.c
➜  ex06 cd ..
➜  C-00 cat */*
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbreard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/09 18:38:59 by jbreard           #+#    #+#             */
/*   Updated: 2020/09/12 20:03:40 by jbreard          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbreard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/09 18:34:03 by jbreard           #+#    #+#             */
/*   Updated: 2020/09/12 20:04:18 by jbreard          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	write(1, "abcdefghijklmnopqrstuvwxyz", 26);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbreard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/10 12:59:21 by jbreard           #+#    #+#             */
/*   Updated: 2020/09/13 12:28:21 by jbreard          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char c;

	c = 'z';
	while (c >= 'a')
	{
		write(1, &c, 1);
		c--;
	}
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbreard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/10 14:06:55 by jbreard           #+#    #+#             */
/*   Updated: 2020/09/13 12:18:07 by jbreard          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	char n;

	n = '0';
	while (n <= '9')
	{
		write(1, &n, 1);
		n++;
	}
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbreard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/10 16:04:43 by jbreard           #+#    #+#             */
/*   Updated: 2020/09/12 19:53:58 by jbreard          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	if (n < 0)
	{
		write(1, "N", 1);
	}
	else
	{
		write(1, "P", 1);
	}
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbreard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/10 16:48:26 by jbreard           #+#    #+#             */
/*   Updated: 2020/09/13 19:30:54 by jbreard          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print(char a, char b, char c)
{
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, &c, 1);
	if (a != '7')
		write(1, ", ", 2);
}

void	ft_print_comb(void)
{
	char a;
	char b;
	char c;

	a = '0';
	c = '0';
	while (a <= '7')
	{
		b = a + 1;
		while (b <= '8')
		{
			c = b + 1;
			while (c <= '9')
/* ************************************************************************** */
			{
				print(a, b, c);
				c++;
			}
			b++;
		}
		a++;
	}
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbreard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/11 12:36:01 by jbreard           #+#    #+#             */
/*   Updated: 2020/09/14 09:30:25 by jbreard          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print(int i)
{
	int d;

	d = 0;
	d = i / 10;
	d = '0' + d;
	write(1, &d, 1);
	d = i % 10;
	d = '0' + d;
	write(1, &d, 1);
}

void	ft_print_comb2(void)
{
	int a;
	int b;

	a = 0;
	b = 1;
	while (a <= 98)
	{
		while (b <= 99)
		{
			print(a);
			write(1, " ", 1);
			print(b);
			if (a != 98)
				write(1, ", ", 2);
			b++;
		}
		a++;
		b = a + 1;
	}
}
➜  C-00 cd ..
➜  Piscine ls
C-00        C-01        Rush-00     Shell-00    Shell-01    Shell-01bis
➜  Piscine ls Shell-01
ex01 ex02 ex03 ex04 ex05 ex06
➜  Piscine ls Shell-01bis
➜  Piscine cd C-01
➜  C-01 ls
ex00 ex01 ex02
➜  C-01 cd ex02
➜  ex02 ls
ft_swap.c
➜  ex02 vim ft_swap.c
➜  ex02 cd ..
➜  C-01 cd ..
➜  Piscine ls
C-00     C-01     Rush-00  Shell-00 Shell-01
➜  Piscine cd C-00
➜  C-00 ls
ex00 ex01 ex02 ex03 ex04 ex05 ex06
➜  C-00 ls -la
total 0
drwxr-xr-x  9 jbreard  2020  306 Sep 14 09:53 .
drwxr-xr-x  8 jbreard  2020  272 Sep 14 10:01 ..
drwxr-xr-x  3 jbreard  2020  102 Sep 12 20:03 ex00
drwxr-xr-x  3 jbreard  2020  102 Sep 14 10:33 ex01
drwxr-xr-x  3 jbreard  2020  102 Sep 14 09:54 ex02
drwxr-xr-x  3 jbreard  2020  102 Sep 13 13:31 ex03
drwxr-xr-x  3 jbreard  2020  102 Sep 12 19:54 ex04
drwxr-xr-x  3 jbreard  2020  102 Sep 14 09:54 ex05
drwxr-xr-x  3 jbreard  2020  102 Sep 14 09:30 ex06
➜  C-00 ls
ex00 ex01 ex02 ex03 ex04 ex05 ex06
➜  C-00 cat */*
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbreard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/09 18:38:59 by jbreard           #+#    #+#             */
/*   Updated: 2020/09/12 20:03:40 by jbreard          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbreard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/09 18:34:03 by jbreard           #+#    #+#             */
/*   Updated: 2020/09/14 10:33:04 by jbreard          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	write(1, "abcdefghijklmnopqrstuvwxyz", 26);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbreard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/10 12:59:21 by jbreard           #+#    #+#             */
/*   Updated: 2020/09/13 12:28:21 by jbreard          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char c;

	c = 'z';
	while (c >= 'a')
	{
		write(1, &c, 1);
		c--;
	}
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbreard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/10 14:06:55 by jbreard           #+#    #+#             */
/*   Updated: 2020/09/13 12:18:07 by jbreard          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	char n;

	n = '0';
	while (n <= '9')
	{
		write(1, &n, 1);
		n++;
	}
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbreard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/10 16:04:43 by jbreard           #+#    #+#             */
/*   Updated: 2020/09/12 19:53:58 by jbreard          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	if (n < 0)
	{
		write(1, "N", 1);
	}
	else
	{
		write(1, "P", 1);
	}
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbreard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/10 16:48:26 by jbreard           #+#    #+#             */
/*   Updated: 2020/09/13 19:30:54 by jbreard          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print(char a, char b, char c)
{
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, &c, 1);
	if (a != '7')
		write(1, ", ", 2);
}

void	ft_print_comb(void)
{
	char a;
	char b;
	char c;

	a = '0';
	c = '0';
	while (a <= '7')
	{
		b = a + 1;
		while (b <= '8')
		{
			c = b + 1;
			while (c <= '9')
			{
				print(a, b, c);
				c++;
			}
			b++;
		}
		a++;
	}
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/* ************************************************************************** */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/* ************************************************************************** */
/*                                                    +:+ +:+         +:+     */
/* ************************************************************************** */
/*   By: jbreard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/* ************************************************************************** */
/* ************************************************************************** */
/*   Created: 2020/09/11 12:36:01 by jbreard           #+#    #+#             */
/* ************************************************************************** */
/*   Updated: 2020/09/14 09:30:25 by jbreard          ###   ########lyon.fr   */
/* ************************************************************************** */
/*                                                                            */
/* ************************************************************************** */
/* ************************************************************************** */

#include <unistd.h>

void	print(int i)
/* ************************************************************************** */
{
	int d;

/* ************************************************************************** */
	d = 0;
	d = i / 10;
	d = '0' + d;
	write(1, &d, 1);
	d = i % 10;
	d = '0' + d;
	write(1, &d, 1);
}

void	ft_print_comb2(void)
{
	int a;
	int b;

	a = 0;
	b = 1;
	while (a <= 98)
	{
		while (b <= 99)
		{
			print(a);
			write(1, " ", 1);
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbreard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/13 19:07:10 by jbreard           #+#    #+#             */
/*   Updated: 2020/09/14 12:22:34 by jbreard          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_swap(int *a, int *b)
{
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
}

int     main(void)
{
    int     z;
    int     y;

    z = 0;
    y = 2064;
    y = ft_swap(&z, &y);
    return (0);
}


"bonjour"
"sqlut"
"coucou"
"ya quoi"

char *a = "bonjour";

a[0] = 'b'

char **b = "bonjour\0"
            "sqlut\0"
            "coucou\0"
            "ya quoi\0"

b[1][0] = 's'

*b + 1 = 'o'


int *i = {23, 54, 345, -5904836756}

int i;

i = 0;

while (a[i])
    i++;


while (*a)
    write(1, a, 1);
    a++;

write(1, a, 1)
~
ft_swap.c [+]                                                              48,14-23       All


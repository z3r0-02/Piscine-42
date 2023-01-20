/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   c04main.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thbui <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 00:58:44 by thbui             #+#    #+#             */
/*   Updated: 2022/10/28 01:30:58 by thbui            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <string.h>

#include "ex00/ft_strcpy.c"
#include "ex01/ft_strncpy.c"
#include "ex02/ft_str_is_alpha.c"
#include "ex03/ft_str_is_numeric.c"
#include "ex04/ft_str_is_lowercase.c"
#include "ex05/ft_str_is_uppercase.c"
#include "ex06/ft_str_is_printable.c"
#include "ex07/ft_strupcase.c"
#include "ex08/ft_strlowcase.c"
#include "ex09/ft_strcapitalize.c"
#include "ex10/ft_strlcpy.c"
#include "ex11/ft_putstr_non_printable.c"

int	main(void)
{
	printf("\n-------ex00------\n");
	char src[] = "Gay";
	char dest[] = "You";
	printf("dest = %s: src = %s", dest, src);
	printf("\n%s", ft_strcpy(dest, src));
	printf("\n%s", strcpy(dest, src));
	
	printf("\n\n-------ex01------\n");
	char src1[] = "Gay";
	char dest1[] = "Youyyy";
 	printf("dest = %s: src = %s", dest1, src1);
 	printf("\n%s", ft_strncpy(dest1, src1, 3));
 	printf("\n%s", strncpy(dest1, src1, 3));

	printf("\n\n-------ex02------\n");
	printf("Should be 0 (G4y):\t%d", ft_str_is_alpha("G4y"));
	printf("\nShould be 1 (Guay):\t%d", ft_str_is_alpha("Guay"));
	printf("\nShould be 1 (" "):\t%d", ft_str_is_alpha(""));
	
	printf("\n\n-------ex03------\n");
	printf("Should be 0 (not69):\t%d", ft_str_is_numeric("not69"));
	printf("\nShould be 1 (69):\t%d", ft_str_is_numeric("69"));
	printf("\nShould be 1 (" "):\t%d", ft_str_is_numeric(""));
	
	printf("\n\n-------ex04------\n");
	printf("Should be 0 (TOObigPP):\t%d", ft_str_is_lowercase("TOObigPP"));
	printf("\nShould be 1 (" "):\t%d", ft_str_is_lowercase(""));
	printf("\nShould be 1 (smolpp):\t%d", ft_str_is_lowercase("smolpp"));

	printf("\n\n-------ex05------\n");
	printf("Should be 0 (notENough): %d", ft_str_is_uppercase("notENough"));
	printf("\nShould be 1 (" "):\t%d", ft_str_is_uppercase(""));
	printf("\nShould be 1 (VERYBIG): %d", ft_str_is_uppercase("VERYBIG"));
	
	printf("\n\n-------ex06------\n");
	printf("Should be 0 (¶something wrong¶): %d", ft_str_is_printable("¶something wrong¶"));
	printf("\nShould be 1 (" "):\t%d", ft_str_is_printable(""));
	printf("\nShould be 1 (@#this should work *,): %d", ft_str_is_printable("@#this should work *,"));

	printf("\n\n-------ex07------\n");
	char upper[] = "BecomeABiggggggOneee";
	printf("BecomeABiggggggOneee = %s", ft_strupcase(upper));

	printf("\n\n-------ex08------\n");
	char lower[] = "ULIttLeBaByyY";
	printf("ULIttLeBaByyY = %s", ft_strlowcase(lower));

	printf("\n\n-------ex09------\n");
	char capitalize[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	printf("%s", ft_strcapitalize(capitalize));

	printf("\n\n-------ex10------\n");
	char x[] = "hello";
	char y[] = "world";
	printf("string to copy: %s before copy: %s\n", y, x);
	printf("len of string: %d string to copy: %s after copy: %s", ft_strlcpy(x, y, 10), y, x);

	printf("\n\n-------ex11------\n");
	char nonprint[] = "lololol\n\t";
	ft_putstr_non_printable(nonprint);

	return (0);
}

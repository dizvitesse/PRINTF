#include "ft_printf.h"
#include <stdio.h>
#include <limits.h>
#include <fcntl.h>

int	main(void)
{
	// int	our;
	// int	real;
	// int	n;

	// n = 42;

	/* 1. Normal text */
    close(1);
    int i = ft_printf("reda");
    int j  = printf("reda");
    printf("%d\n", i);
    printf("%d\n", j);
}
 // printf("%%%\n");
 // ft_printf("%%%\n");

// 	/* 2. All conversions */
// 	our = ft_printf("Char: %c | String: %s | Pointer: %p\n",'A', "hello", &n);
// 	real = printf("Char: %c | String: %s | Pointer: %p\n", 'A', "hello", &n);
// 	printf("Returns: ours=%d | real=%d\n\n", our, real);

// 	/* 3. Signed integers */
// 	our = ft_printf("Decimal: %d | Integer: %i\n", -42, 123);
// 	real = printf("Decimal: %d | Integer: %i\n", -42, 123);
// 	printf("Returns: ours=%d | real=%d\n\n", our, real);

// 	/* 4. Unsigned integer */
// 	our = ft_printf("Unsigned: %u\n", 4294967295u);
// 	real = printf("Unsigned: %u\n", 4294967295u);
// 	printf("Returns: ours=%d | real=%d\n\n", our, real);

// 	/* 5. Hexadecimal lowercase and uppercase */
// 	our = ft_printf("Lower: %x | Upper: %X\n", 255, 255);
// 	real = printf("Lower: %x | Upper: %X\n", 255, 255);
// 	printf("Returns: ours=%d | real=%d\n\n", our, real);

// 	/* 6. Percent sign */
// 	our = ft_printf("100%% complete\n");
// 	real = printf("100%% complete\n");
// 	printf("Returns: ours=%d | real=%d\n\n", our, real);

// 	/* 7. Zero values */
// 	our = ft_printf("%d | %i | %u | %x | %X\n", 0, 0, 0, 0, 0);
// 	real = printf("%d | %i | %u | %x | %X\n", 0, 0, 0, 0, 0);
// 	printf("Returns: ours=%d | real=%d\n\n", our, real);

// 	/* 8. Integer limits */
// 	our = ft_printf("%d | %d | %u\n", INT_MIN, INT_MAX, UINT_MAX);
// 	real = printf("%d | %d | %u\n", INT_MIN, INT_MAX, UINT_MAX);
// 	printf("Returns: ours=%d | real=%d\n\n", our, real);

// 	/* 9. Empty string */
// 	our = ft_printf("[%s]\n", "");
// 	real = printf("[%s]\n", "");
// 	printf("Returns: ours=%d | real=%d\n\n", our, real);

// 	/* 10. Null pointer */
// 	our = ft_printf("Pointer: %p\n", (void *)0);
// 	real = printf("Pointer: %p\n", (void *)0);
// 	printf("Returns: ours=%d | real=%d\n\n", our, real);

// 	/* 11. Consecutive conversions */
// 	our = ft_printf("%d%s%x\n", 42, "hello", 255);
// 	real = printf("%d%s%x\n", 42, "hello", 255);
// 	printf("Returns: ours=%d | real=%d\n\n", our, real);

// 	/* 12. No conversions */
// 	our = ft_printf("Just a normal string.\n");
// 	real = printf("Just a normal string.\n");
// 	printf("Returns: ours=%d | real=%d\n\n", our, real);

// 	/* 13. Empty format */
// 	our = ft_printf("");
// 	real = printf("");
// 	printf("Returns: ours=%d | real=%d\n\n", our, real);

// 	return (0);
// }
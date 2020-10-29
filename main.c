#include <stdio.h>
#include <string.h>

extern void *ft_memset(void *arr, int symbol, size_t size);

int main(void)
{
	unsigned char src1[15] = "0123456789";
	unsigned char src2[15] = "0123456789";
	unsigned char src3[10] = "01234";
	
	unsigned char ft_src1[15] = "0123456789";
	unsigned char ft_src2[15] = "0123456789";
	unsigned char ft_src3[10] = "01234";	
	
	printf("\n");
	printf("ft_memset____________________\n");
	
	memset(src1, '*', 10);
	printf("src1 memset: %s\n", src1);
	
	memset(src2, '*', 3);
	printf("src2 memset: %s\n", src2);
	
	memset(src3, '1', 9);
	printf("src3 memset: %s\n", src3);
	
	printf("-----------------------------\n");
	
	ft_memset(ft_src1, '*', 10);
	printf("ft_src1 memset: %s\n", ft_src1);
	
	ft_memset(ft_src2, '*', 3);
	printf("ft_src3 memset: %s\n", ft_src2);
	
	ft_memset(ft_src3, '1', 9);
	printf("ft_src3 memset: %s\n", ft_src3);
	

	printf("\n");
	printf("ft_memset____________________\n");
	

}

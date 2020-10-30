#include <stdio.h>
#include <string.h>

extern void *ft_memset(void *arr, int symbol, size_t size);
extern void ft_bzero(void *s, size_t n);
extern void *ft_memcpy(void *restrict dst, const void *restrict src, size_t size);
extern void *ft_memccpy(void *restrict dst, const void *restrict src, int symbol, size_t size);
//extern void *ft_memmove(void *dst, const void *src, size_t len);

void test_memset(void)
{
	unsigned char src1[15] = "0123456789";
	unsigned char src2[15] = "0123456789";
	unsigned char src3[10] = "01234";	
	unsigned char src4[10] = "01234";

	unsigned char ft_src1[15] = "0123456789";
	unsigned char ft_src2[15] = "0123456789";
	unsigned char ft_src3[10] = "01234";	
	unsigned char ft_src4[10] = "01234";

	//int arr[5] = {42, 42, 42, 42, 42};
	
	printf("\n");
	printf("ft_memset____________________\n");
	
	memset(src1, '*', 10);
	printf("src1 memset: %s\n", src1);
	
	memset(src2, '%', 3);
	printf("src2 memset: %s\n", src2);
	
	memset(src3, '1', 9);
	printf("src3 memset: %s\n", src3);
	
	memset(src4, '*', 1);
	printf("src4 memset: %s\n", src4);
	

	printf("-----------------------------\n");
	
	ft_memset(ft_src1, '*', 10);
	printf("ft_src1 memset: %s\n", ft_src1);
	
	ft_memset(ft_src2, '%', 3);
	printf("ft_src3 memset: %s\n", ft_src2);
	
	ft_memset(ft_src3, '1', 9);
	printf("ft_src3 memset: %s\n", ft_src3);
	
	ft_memset(ft_src4, '*', 1);
	printf("ft_src4 memset: %s\n", ft_src4);
	
	//ft_memset(arr, 111, 3);
	//printf("arr %s\n", arr);

	printf("\n");
}

void test_bzero(void)
{
	
	unsigned char src1[15] = "0123456789";
	unsigned char src2[15] = "0123456789";
	
	unsigned char ft_src1[15] = "0123456789";
	unsigned char ft_src2[15] = "0123456789";
	
	printf("\n");
	printf("ft_brezo____________________\n");
	
	bzero(src1, 3);
	printf("src1 bzero: %s\n", src1);
	
	bzero(src2, 1);
	printf("src2 bzero: %s\n", src2);
	
	printf("-----------------------------\n");
	
	ft_bzero(ft_src1, 3);
	printf("ft_src1 ft_bzero: %s\n", ft_src1);
	
	ft_bzero(ft_src2, 1);
	printf("ft_src2 ft_bzero: %s\n", ft_src2);

}

void test_memcpy(void)
{
	unsigned char src[10] = "123456";
	unsigned char dst[10] = "";

	unsigned char ft_src[10] = "123456";
	unsigned char ft_dst[10] = "";

	printf("\n");
	printf("ft_memcpy____________________\n");
	
	memcpy(dst, src, 6);
	printf("dst: %s\n",dst);

	printf("-----------------------------\n");

	ft_memcpy (ft_dst, ft_src, 6);
	printf("ft_dst: %s\n",ft_dst);
	

}

void test_memccpy(void)
{
	unsigned char src[15]="1234567890";
	unsigned char dst[15]="";
	unsigned char *res;
	
	unsigned char src1[15]="1234567890";
	unsigned char dst1[15]="";
	unsigned char *res1;
	
	unsigned char src2[15]="1234567890";
	unsigned char dst2[15]="";
	unsigned char *res2;


	unsigned char ft_src[15]="1234567890";
	unsigned char ft_dst[15]="";
	unsigned char *ft_res;
	
	unsigned char ft_src1[15]="1234567890";
	unsigned char ft_dst1[15]="";
	unsigned char *ft_res1;
	
	unsigned char ft_src2[15]="1234567890";
	unsigned char ft_dst2[15]="";
	unsigned char *ft_res2;



	printf("\n");
	printf("ft_memccpy____________________\n");

	res = memccpy (dst, src,'5', 10);
	printf("dst: %s\n",dst);
	printf("res: %s\n",res);
	printf("res: %c\n",res[-1]);
	
	res1 = memccpy (dst1, src1,'q', 10);
	printf("dst1: %s\n",dst1);
	printf("res1: %s\n",res1);
	
	res2 = memccpy (dst2, src2,'5', 3);
	printf("dst2: %s\n",dst2);
	printf("res2: %s\n",res2);


	printf("-----------------------------\n");

	ft_res = ft_memccpy (ft_dst, ft_src,'5', 10);
	printf("ft_dst: %s\n",ft_dst);
	printf("ft_res: %s\n",ft_res);
	printf("ft_res: %c\n",ft_res[-1]);

	ft_res1 = memccpy (ft_dst1, ft_src1,'q', 10);
	printf("ft_dst1: %s\n",ft_dst1);
	printf("ft_res1: %s\n",ft_res1);
	
	ft_res2 = ft_memccpy (ft_dst2, ft_src2,'5', 3);
	printf("ft_dst2: %s\n",ft_dst2);
	printf("ft_res2: %s\n",ft_res2);



}

/* void test_memmove(void) */
/* { */
/* 	unsigned char src[10]="1234567890"; */
/* 	printf ("src old: %s\n",src); */
/* 	memmove (&src[1], &src[3], 3); */
/* 	printf ("src new: %s\n",src); */
/*  */
/* 	unsigned char ft_src[10]="1234567890"; */
/* 	printf ("ft_src old: %s\n",ft_src); */
/* 	ft_memmove (&ft_src[1], &ft_src[3], 3); */
/* 	printf ("ft_src new: %s\n",ft_src); */
/* } */





int main (void)
{
	test_memset();
	//test_bzero();
	//test_memcpy();
	//test_memccpy();
	//test_memmove();
}

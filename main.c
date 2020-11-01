#include "libft.h"

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
	
	res2 = memccpy (dst2, src2,'5', 4);
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
	
	ft_res2 = ft_memccpy (ft_dst2, ft_src2,'5', 4);
	printf("ft_dst2: %s\n",ft_dst2);
	printf("ft_res2: %s\n",ft_res2);



}

void test_memmove(void)
{
	printf("\n");
	printf("ft_memmove____________________\n");

    unsigned char src[10]="1234567";
	unsigned char src1[10]="abcdef";
    printf("src old: %s\n",src);
	memmove(&src[2], &src1[2], 2);
	printf("src new: %s\n",src);
    
    unsigned char src3[10]="1234567";
    //printf("src old: %s\n",src3);
	memmove(&src3[2], &src3[4], 2);
	printf("src new: %s\n",src3);
    
    unsigned char src4[10]="1234567";
    //printf("src old: %s\n",src4);
	memmove(&src4[4], &src4[1], 4);
	printf("src new: %s\n",src4);

    char a[10] = "qwerty";
    memmove(a + 1, a, 3);
	printf("a new: %s\n", a);
    


	printf("-----------------------------\n");
    
    unsigned char ft_src[10]="1234567";
	unsigned char ft_src1[10]="abcdef";
    printf ("ft_src old: %s\n",ft_src);
	ft_memmove (&ft_src[2], &ft_src1[2], 2);
	printf ("ft_src new: %s\n",ft_src);

    unsigned char ft_src3[10]="1234567";
    //printf ("ft_src3 old: %s\n",ft_src3);
	memmove (&ft_src3[2], &ft_src3[4], 2);
	printf ("ft_src3 new: %s\n",ft_src3);
    
    unsigned char ft_src4[10]="1234567";
    //printf ("ft_src4 old: %s\n",ft_src4);
	memmove (&ft_src4[4], &ft_src4[1], 4);
	printf ("ft_src4 new: %s\n",ft_src4);
    
    char ft_a[10] = "qwerty";
    ft_memmove(ft_a + 1, ft_a, 3);
	printf("ft_a new: %s\n", ft_a);
    

}

void test_memchr(void)
{
    printf("\n");
	printf("ft_memchr____________________\n");

    unsigned char src[10]="1234567";
    unsigned char *res;
    res = memchr(src, '3', 6);
    printf("src %s\n", src);
    printf("src %s\n", res);

    unsigned char src1[10]="1234567";
    unsigned char *res1;
    res1 = memchr(src1, '4', 3);
    printf("src1 %s\n", src1);
    printf("res1 %s\n", res1);

	printf("-----------------------------\n");

    unsigned char ft_src[10]="1234567";
    unsigned char *ft_res;
    ft_res = ft_memchr(ft_src, '3', 6);
    printf("ft_src %s\n", ft_src);
    printf("ft_res %s\n", ft_res);

    unsigned char ft_src1[10]="1234567";
    unsigned char *ft_res1;
    ft_res1 = ft_memchr(ft_src1, '4', 3);
    printf("ft_src %s\n", ft_src1);
    printf("ft_res %s\n", ft_res1);




}

void test_memcmp(void)
{
    
	printf("\n");
	printf("ft_memcpy____________________\n");
	
    char str_a[10] = "qwfrtyu";
    char str_b[10] = "qwertyu";
    size_t len = 6;
    int result;
    result = memcmp(str_a, str_b, len);
    printf("memcmp(%s, %s, %ld) =  %d\n", str_a, str_b, len, result);

    char str_a1[10] = "qwerty";
    char str_b1[10] = "qwerty";
    size_t len1 = 11;
    int result1;
    result1 = memcmp(str_a1, str_b1, len1);
    printf("memcmp(%s, %s, %ld) =  %d\n", str_a1, str_b1, len1, result1);

    char str_a2[10] = "qweriy";
    char str_b2[10] = "qwerty";
    size_t len2 = 4;
    int result2;
    result2 = memcmp(str_a2, str_b2, len2);
    printf("memcmp(%s, %s, %ld) =  %d\n", str_a2, str_b2, len2, result2);

    char str_a3[10] = "qweriy";
    char str_b3[10] = "qwerty";
    size_t len3 = 5;
    int result3;
    result3 = memcmp(str_a3, str_b3, len3);
    printf("memcmp(%s, %s, %ld) =  %d\n", str_a3, str_b3, len3, result3);


    


	printf("-----------------------------\n");

	

}



void test(void)
{

	printf("\n");
	printf("ft_memcpy____________________\n");
	

	printf("-----------------------------\n");

	

}


int main (void)
{
	//test_memset();
	//test_bzero();
	//test_memcpy();
	//test_memccpy();
	//test_memmove();
    //test_memchr();
    test_memcmp();
}

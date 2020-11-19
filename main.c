#include "libft.h"
#include <ctype.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>

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

	printf("void %s\n", memcpy(((void *)0), ((void *)0), 3));
	
	printf("-----------------------------\n");

	ft_memcpy (ft_dst, ft_src, 6);
	printf("ft_dst: %s\n",ft_dst);
	
	printf("ft_void %s\n", ft_memcpy(((void *)0), ((void *)0), 3));
}

void test_memccpy(void)
{
	printf("\n");
	printf("ft_memccpy____________________\n");

	unsigned char src[15]="1234567890";
	unsigned char dst[15]="";
	char symbol = '5';
	int len = 10;
	unsigned char *res;
	res = memccpy (dst, src, symbol, len);
	printf("memccpy(%s, %s, %c, %d) = %s , pointer - 1 = %s\n", dst, src, symbol, len, res, res - 1);


	unsigned char src1[15]="1234567890";
	unsigned char dst1[15]="";
	unsigned char *res1;
	char symbol1 = 'q';	
	int len1 = 9;
	res1 = memccpy (dst1, src1,symbol1, len);
	printf("memccpy(%s, %s, %c, %d) = %s \n", dst1, src1, symbol1, len1, res1);

	
	unsigned char src2[15]="1234567890";
	unsigned char dst2[15]="";
	char symbol2 = '5';
	int len2 = 4;
	unsigned char *res2;
	res2 = memccpy (dst2, src2 ,symbol2 ,len2);
	printf("memccpy(%s, %s, %c, %d) = %s \n", dst2, src2, symbol2, len2, res2);


	
	
	printf("-----------------------------\n");

	unsigned char ft_src[15]="1234567890";
	unsigned char ft_dst[15]="";
	char ft_symbol = '5';
	int ft_len = 10;
	unsigned char *ft_res;
	ft_res = ft_memccpy (ft_dst, ft_src, ft_symbol, ft_len);
	printf("ft_memccpy(%s, %s, %c, %d) = %s , pointer - 1 = %s\n", ft_dst, ft_src, ft_symbol, ft_len, ft_res, ft_res - 1);


	unsigned char ft_src1[15]="1234567890";
	unsigned char ft_dst1[15]="";
	unsigned char *ft_res1;
	char ft_symbol1 = 'q';	
	int ft_len1 = 9;
	ft_res1 = ft_memccpy (ft_dst1, ft_src1,ft_symbol1, ft_len);
	printf("ft_memccpy(%s, %s, %c, %d) = %s \n", ft_dst1, ft_src1, ft_symbol1, ft_len1, ft_res1);

	
	unsigned char ft_src2[15]="1234567890";
	unsigned char ft_dst2[15]="";
	char ft_symbol2 = '5';
	int ft_len2 = 4;
	unsigned char *ft_res2;
	ft_res2 = ft_memccpy (ft_dst2, ft_src2 ,ft_symbol2 ,ft_len2);
	printf("ft_memccpy(%s, %s, %c, %d) = %s \n", ft_dst2, ft_src2, ft_symbol2, ft_len2, ft_res2);


	printf("\n");
	char buff1[] = "abcdefghijklmnopqrstuvwxyz";
	char buff2[] = "abcdefghijklmnopqrstuvwxyz";
	char *src3 = "string with\200inside !";
	

	printf("%s\n", buff1);
	printf("%s\n", buff2);
	printf("%s\n", src3);
	printf("memccpy(buff2, src, '\200', 21) = %s\n", memccpy(buff2, src3, '\200', 21));	
	printf("ft_memccpy(buff1, src, '\200', 21) = %s\n", ft_memccpy(buff1, src3, '\200', 21));

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
	
	printf("\n");
	printf("void %s\n", memmove(((void *)0), ((void *)0), 5));

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
	
	printf("\n");
	printf("ft_void %s\n", ft_memmove(((void *)0), ((void *)0), 5));
}

void test_memchr(void)
{
	printf("\n");
	printf("ft_memchr____________________\n");

	unsigned char src[10]="qwertyu";
	unsigned char *res;
	char symbol = 'e';
	int len = 6;
	res = memchr(src, symbol, len);
	printf("memchr(%s, %c, %d) = %s, pointer - 1 =   %s\n", src, symbol, len, res, res-1);

	unsigned char src1[10]="1234567";
	unsigned char *res1;
	char symbol1 = '4';
	int len1 = 3;
	res1 = memchr(src1, symbol1, len1);
	printf("memchr(%s, %c, %d) = %s\n", src1, symbol1, len1, res1);

	printf("-----------------------------\n");

	unsigned char ft_src[10]="qwertyu";
	unsigned char *ft_res;
	char ft_symbol = 'e';
	int ft_len = 6;
	ft_res = ft_memchr(ft_src, ft_symbol, ft_len);
	printf("memchr(%s, %c, %d) = %s, pointer - 1 =   %s\n", ft_src, ft_symbol, ft_len, ft_res, ft_res-1);
	
	unsigned char ft_src1[10]="1234567";
	unsigned char *ft_res1;
	char ft_symbol1 = '4';
	int ft_len1 = 3;
	ft_res1 = ft_memchr(ft_src1, ft_symbol1, ft_len1);
	printf("ft_memchr(%s, %c, %d) = %s\n", ft_src1, ft_symbol1, ft_len1, ft_res1);

	printf("\n");
	char *tsrc = "/|\x12\xff\x09\x42\2002\42|\\";
	int size = 10;

	printf("test %s\n", memchr(tsrc, '\200', size));
	printf("ft_test %s\n", ft_memchr(tsrc, '\200', size));

}

void test_memcmp(void)
{
	
	printf("\n");
	printf("ft_memcmp____________________\n");
	
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

	char ft_str_a[10] = "qwfrtyu";
	char ft_str_b[10] = "qwertyu";
	size_t ft_len = 6;
	int ft_result;
	ft_result = ft_memcmp(ft_str_a, ft_str_b, ft_len);
	printf("ft_memcmp(%s, %s, %ld) =  %d\n", ft_str_a, ft_str_b, ft_len, ft_result);

	char ft_str_a1[10] = "qwerty";
	char ft_str_b1[10] = "qwerty";
	size_t ft_len1 = 11;
	int ft_result1;
	ft_result1 = ft_memcmp(ft_str_a1, ft_str_b1, ft_len1);
	printf("ft_memcmp(%s, %s, %ld) =  %d\n", ft_str_a1, ft_str_b1, ft_len1, ft_result1);

	char ft_str_a2[10] = "qweriy";
	char ft_str_b2[10] = "qwerty";
	size_t ft_len2 = 4;
	int ft_result2;
	ft_result2 = ft_memcmp(ft_str_a2, ft_str_b2, ft_len2);
	printf("ft_memcmp(%s, %s, %ld) =  %d\n", ft_str_a2, ft_str_b2, ft_len2, ft_result2);

	char ft_str_a3[10] = "qweriy";
	char ft_str_b3[10] = "qwerty";
	size_t ft_len3 = 5;
	int ft_result3;
	ft_result3 = ft_memcmp(ft_str_a3, ft_str_b3, ft_len3);
	printf("ft_memcmp(%s, %s, %ld) =  %d\n", ft_str_a3, ft_str_b3, ft_len3, ft_result3);

}

void test_strlen(void)
{

	printf("\n");
	printf("ft_strlen____________________\n");
	
	char str[10] = "qwfrtyu";
	int result;
	result = strlen(str);
	printf("strlen(%s) =  %d\n", str, result);

	char str1[10] = "";
	int result1;
	result1 = strlen(str1);
	printf("strlen(%s) =  %d\n", str1, result1);

	
	printf("-----------------------------\n");

	char ft_str[10] = "qwfrtyu";
	int ft_result;
	ft_result = ft_strlen(ft_str);
	printf("ft_strlen(%s) =  %d\n", ft_str, ft_result);

	char ft_str1[10] = "";
	int ft_result1;
	ft_result1 = ft_strlen(ft_str1);
	printf("ft_strlen(%s) =  %d\n", ft_str1, ft_result1);


}

void test_strlcpy(void)
{

	printf("\n");
	printf("ft_strlcpy____________________\n");

	char str[10] = "qwerty";
	char dst[10] = "";
	int len = 3;
	int  result;
	printf("before: str = %s, dst = %s, len = %d\n", str, dst, len);
	result = strlcpy(dst, str, len);    
	printf("strlcpy(str, dst, len) = %d\n", result);
	printf("after: str = %s, dst = %s\n", str, dst);

	printf("\n");

	char str1[10] = "qwerty";
	char dst1[10] = "111111111";
	int len1 = 9;
	int  result1;
	printf("before: str = %s, dst = %s, len = %d\n", str1, dst1, len1);
	result1 = strlcpy(dst1, str1, len1);    
	printf("strlcpy(str, dst, len) = %d\n", result1);
	printf("after: str = %s, dst = %s\n", str1, dst1);
	printf("dst1 + 7 = %s\n", dst1+7);

	printf("\n");

	char str2[10] = "qwerty";
	char dst2[10] = "111111111";
	int len2 = 8;
	int  result2;
	printf("before: str = %s, dst = %s, len = %d\n", str2, dst2, len2);
	result2 = strlcpy(dst2, str2, len2);    
	printf("strlcpy(str, dst, len) = %d\n", result2);
	printf("after: str = %s, dst = %s\n", str2, dst2);
	printf("dst1 + 7 = %s\n", dst2+7);

	printf("\n");

	char str3[10] = "qwerty";
	char dst3[10] = "111111111";
	int len3 = 0;
	int  result3;
	printf("before: str = %s, dst = %s, len = %d\n", str3, dst3, len3);
	result3 = strlcpy(dst3, str3, len3);    
	printf("strlcpy(str, dst, len) = %d\n", result3);
	printf("after: str = %s, dst = %s\n", str3, dst3);
	printf("dst1 + 7 = %s\n", dst3+7);

	printf("-----------------------------\n");

	char ft_str[10] = "qwerty";
	char ft_dst[10] = "";
	int ft_len = 3;
	int  ft_result;
	printf("before: str = %s, dst = %s, len = %d\n", ft_str, ft_dst, ft_len);
	ft_result = ft_strlcpy(ft_dst, ft_str, ft_len);    
	printf("strlcpy(str, dst, len) = %d\n", ft_result);
	printf("after: str = %s, dst = %s\n", ft_str, ft_dst);

	printf("\n");

	char ft_str1[10] = "qwerty";
	char ft_dst1[10] = "111111111";
	int ft_len1 = 9;
	int  ft_result1;
	printf("before: str = %s, dst = %s, len = %d\n", ft_str1, ft_dst1, ft_len1);
	ft_result1 = ft_strlcpy(ft_dst1, ft_str1, ft_len1);    
	printf("strlcpy(str, dst, len) = %d\n", ft_result1);
	printf("after: str = %s, dst = %s\n", ft_str1, ft_dst1);
	printf("ft_dst1 + 7 = %s\n", ft_dst1+7);

	printf("\n");

	char ft_str2[10] = "qwerty";
	char ft_dst2[10] = "111111111";
	int ft_len2 = 8;
	int  ft_result2;
	printf("before: str = %s, dst = %s, len = %d\n", ft_str2, ft_dst2, ft_len2);
	ft_result2 = ft_strlcpy(ft_dst2, ft_str2, ft_len2);    
	printf("strlcpy(str, dst, len) = %d\n", ft_result2);
	printf("after: str = %s, dst = %s\n", ft_str2, ft_dst2);
	printf("ft_dst1 + 7 = %s\n", ft_dst2+7);

	printf("\n");

	char ft_str3[10] = "qwerty";
	char ft_dst3[10] = "111111111";
	int ft_len3 = 0;
	int  ft_result3;
	printf("before: str = %s, dst = %s, len = %d\n", ft_str3, ft_dst3, ft_len3);
	ft_result3 = ft_strlcpy(ft_dst3, ft_str3, ft_len3);    
	printf("strlcpy(str, dst, len) = %d\n", ft_result3);
	printf("after: str = %s, dst = %s\n", ft_str3, ft_dst3);
	printf("ft_dst1 + 7 = %s\n", ft_dst3+7);



}



void test_strlcat(void)
{

	printf("\n");
	printf("ft_strlcat____________________\n");

	char str[20] = "qwerty";
	char dst[12] = "12345";
	int len = 5;
	int  result;
	printf("before: str = %s, dst = %s, len = %d\n", str, dst, len);
	result = strlcat(dst, str, len);    
	printf("strlcat(str, dst, len) = %d\n", result);
	printf("after: str = %s, dst = %s\n", str, dst);

	printf("\n");

	char str1[20] = "qwerty";
	char dst1[12] = "12345";
	int len1 = 7;
	int  result1;
	printf("before: str = %s, dst = %s, len = %d\n", str1, dst1, len1);
	result1 = strlcat(dst1, str1, len1);    
	printf("strlcat(str, dst, len) = %d\n", result1);
	printf("after: str = %s, dst = %s\n", str1, dst1);

	printf("\n");

	char str2[20] = "qwerty";
	char dst2[20] = "12345";
	int len2 = 1;
	int  result2;
	printf("before: str = %s, dst = %s, len = %d\n", str2, dst2, len2);
	result2 = strlcat(dst2, str2, len2);    
	printf("strlcat(str, dst, len) = %d\n", result2);
	printf("after: str = %s, dst = %s\n", str2, dst2);

	printf("\n");

	char str3[20] = "qwerty";
	char dst3[20] = "12345";
	int len3 = 19;
	int  result3;
	printf("before: str = %s, dst = %s, len = %d\n", str3, dst3, len3);
	result3 = strlcat(dst3, str3, len3);    
	printf("strlcat(str, dst, len) = %d\n", result3);
	printf("after: str = %s, dst = %s\n", str3, dst3);

	printf("\n");

	char str4[20] = "qwerty";
	char dst4[20] = "12345";
	int len4 = 0;
	int  result4;
	printf("before: str = %s, dst = %s, len = %d\n", str4, dst4, len4);
	result4 = strlcat(dst4, str4, len4);    
	printf("strlcat(str, dst, len) = %d\n", result4);
	printf("after: str = %s, dst = %s\n", str4, dst4);

	printf("\n");

	printf("-----------------------------\n");

	char ft_str[20] = "qwerty";
	char ft_dst[12] = "12345";
	int ft_len = 5;
	int  ft_result;
	printf("before: ft_str = %s, ft_dst = %s, ft_len = %d\n", ft_str, ft_dst, ft_len);
	ft_result = ft_strlcat(ft_dst, ft_str, ft_len);    
	printf("ft_strlcat(ft_str, ft_dst, ft_len) = %d\n", ft_result);
	printf("after: ft_str = %s, ft_dst = %s\n", ft_str, ft_dst);

	printf("\n");

	char ft_str1[20] = "qwerty";
	char ft_dst1[12] = "12345";
	int ft_len1 = 7;
	int  ft_result1;
	printf("before: ft_str = %s, ft_dst = %s, ft_len = %d\n", ft_str1, ft_dst1, ft_len1);
	ft_result1 = ft_strlcat(ft_dst1, ft_str1, ft_len1);    
	printf("ft_strlcat(ft_str, ft_dst, ft_len) = %d\n", ft_result1);
	printf("after: ft_str = %s, ft_dst = %s\n", ft_str1, ft_dst1);

	printf("\n");

	char ft_str2[20] = "qwerty";
	char ft_dst2[20] = "12345";
	int ft_len2 = 1;
	int  ft_result2;
	printf("before: ft_str = %s, ft_dst = %s, ft_len = %d\n", ft_str2, ft_dst2, ft_len2);
	ft_result2 = ft_strlcat(ft_dst2, ft_str2, ft_len2);    
	printf("ft_strlcat(ft_str, ft_dst, ft_len) = %d\n", ft_result2);
	printf("after: ft_str = %s, ft_dst = %s\n", ft_str2, ft_dst2);

	printf("\n");

	char ft_str3[20] = "qwerty";
	char ft_dst3[20] = "12345";
	int ft_len3 = 19;
	int  ft_result3;
	printf("before: ft_str = %s, ft_dst = %s, ft_len = %d\n", ft_str3, ft_dst3, ft_len3);
	ft_result3 = ft_strlcat(ft_dst3, ft_str3, ft_len3);    
	printf("ft_strlcat(ft_str, ft_dst, ft_len) = %d\n", ft_result3);
	printf("after: ft_str = %s, ft_dst = %s\n", ft_str3, ft_dst3);

	printf("\n");

	char ft_str4[20] = "qwerty";
	char ft_dst4[20] = "12345";
	int ft_len4 = 0;
	int  ft_result4;
	printf("before: ft_str = %s, ft_dst = %s, ft_len = %d\n", ft_str4, ft_dst4, ft_len4);
	ft_result4 = ft_strlcat(ft_dst4, ft_str4, ft_len4);    
	printf("ft_strlcat(ft_str, ft_dst, ft_len) = %d\n", ft_result4);
	printf("after: ft_str = %s, ft_dst = %s\n", ft_str4, ft_dst4);

	printf("\n");


}

void test_strchr(void)
{

	printf("\n");
	printf("ft_strchr____________________\n");
	
	char *str = "qw*ert*y";
	int chr = 42;
	printf("strchr(%s, %d) = %s\n", str, chr, strchr(str, chr));	

	char *str1 = "qwerty";
	int chr1 = 42;
	printf("strchr(%s, %d) = %s\n", str1, chr1, strchr(str1, chr1));	

	char *str2 = "";
	int chr2 = 42;
	printf("strchr(%s, %d) = %s\n", str2, chr2, strchr(str2, chr2));	

	char *str3 = "q*we";
	int chr3 = 0;
	char *res3;
	res3 = strchr(str3, chr3);
	printf("strchr(%s, %d) - 1 = %s\n", str3, chr3, res3 - 1);	


	printf("-----------------------------\n");

	char *ft_str = "qw*ert*y";
	int ft_chr = 42;
	printf("ft_strchr(%s, %d) = %s\n", ft_str, ft_chr, ft_strchr(ft_str, ft_chr));	

	char *ft_str1 = "qwerty";
	int ft_chr1 = 42;
	printf("ft_strchr(%s, %d) = %s\n", ft_str1, ft_chr1, ft_strchr(ft_str1, ft_chr1));	

	char *ft_str2 = "";
	int ft_chr2 = 42;
	printf("ft_strchr(%s, %d) = %s\n", ft_str2, ft_chr2, ft_strchr(ft_str2, ft_chr2));	

	char *ft_str3 = "q*we";
	int ft_chr3 = 0;
	char *ft_res3;
	ft_res3 = ft_strchr(ft_str3, ft_chr3);
	printf("ft_strchr(%s, %d) - 1 = %s\n", ft_str3, ft_chr3, ft_res3 - 1);	

}

void test_strrchr(void)
{

	printf("\n");
	printf("ft_strrchr____________________\n");
	
	char *str = "q*we*rt*y";
	int chr = 42;
	printf("strrchr(%s, %d) = %s\n", str, chr, strrchr(str, chr));	

	char *str1 = "qwerty";
	int chr1 = 42;
	printf("strrchr(%s, %d) = %s\n", str1, chr1, strrchr(str1, chr1));	

	char *str2 = "";
	int chr2 = 42;
	printf("strrchr(%s, %d) = %s\n", str2, chr2, strrchr(str2, chr2));	

	char *str3 = "q*we";
	int chr3 = 0;
	char *res3;
	res3 = strrchr(str3, chr3);
	printf("strrchr(%s, %d) - 1 = %s\n", str3, chr3, res3 - 1);	



	printf("-----------------------------\n");

	char *ft_str = "q*we*rt*y";
	int ft_chr = 42;
	printf("ft_strrchr(%s, %d) = %s\n", ft_str, chr, ft_strrchr(ft_str, ft_chr));	

	char *ft_str1 = "qwerty";
	int ft_chr1 = 42;
	printf("ft_strrchr(%s, %d) = %s\n", ft_str1, ft_chr1, ft_strrchr(ft_str1, ft_chr1));	

	char *ft_str2 = "";
	int ft_chr2 = 42;
	printf("ft_strrchr(%s, %d) = %s\n", ft_str2, ft_chr2, ft_strrchr(ft_str2, ft_chr2));	

	char *ft_str3 = "q*we";
	int ft_chr3 = 0;
	char *ft_res3;
	ft_res3 = ft_strrchr(ft_str3, ft_chr3);
	printf("ft_strrchr(%s, %d) - 1 = %s\n", ft_str3, ft_chr3, ft_res3 - 1);	

	printf("\n");

	char *src = "abbbbbbbb";
	char *d1 = strrchr(src, 'a');
	char *d2 = ft_strrchr(src, 'a');
	printf("%s == ft %s\n", d1, d2);
}

void test_strnstr(void)
{

	printf("\n");
	printf("ft_strnstr____________________\n");
	
	const char *large_str = "Foo_Bar_Baz";

	const char *small_str = "Foo_";
	size_t len = 20;
	const char *result;
	const char *ft_result;
	result = strnstr(large_str, small_str, len);
	ft_result = ft_strnstr(large_str, small_str, len);
	printf("   strnstr(%s, %s, %zu) = %s\n", large_str, small_str, len, result);
	printf("ft_strnstr(%s, %s, %zu) = %s\n", large_str, small_str, len, ft_result);
	printf("\n");

	const char *small_str1 = "Bar_B";
	size_t len1 = 15;
	const char *result1;
	const char *ft_result1;
	result1 = strnstr(large_str, small_str1, len1);
	ft_result1 = ft_strnstr(large_str, small_str1, len1);
	printf("   strnstr(%s, %s, %zu) = %s\n", large_str, small_str1, len1, result1);
	printf("ft_strnstr(%s, %s, %zu) = %s\n", large_str, small_str1, len1, ft_result1);
	printf("\n");

	const char *small_str2 = "Baz";
	size_t len2 = 20;
	const char *result2;
	const char *ft_result2;
	result2 = strnstr(large_str, small_str2, len2);
	ft_result2 = ft_strnstr(large_str, small_str2, len2);
	printf("   strnstr(%s, %s, %zu) = %s\n", large_str, small_str2, len2, result2);
	printf("ft_strnstr(%s, %s, %zu) = %s\n", large_str, small_str2, len2, ft_result2);
	printf("\n");

	const char *small_str3 = "Bar";
	size_t len3 = 3;
	const char *result3;
	const char *ft_result3;
	result3 = strnstr(large_str, small_str3, len3);
	ft_result3 = ft_strnstr(large_str, small_str3, len3);
	printf("   strnstr(%s, %s, %zu) = %s\n", large_str, small_str3, len3, result3);
	printf("ft_strnstr(%s, %s, %zu) = %s\n", large_str, small_str3, len3, ft_result3);
	printf("\n");

	const char *small_str4 = "Bar";
	size_t len4 = 7;
	const char *result4;
	const char *ft_result4;
	result4 = strnstr(large_str, small_str4, len4);
	ft_result4 = ft_strnstr(large_str, small_str4, len4);
	printf("   strnstr(%s, %s, %zu) = %s\n", large_str, small_str4, len4, result4);
	printf("ft_strnstr(%s, %s, %zu) = %s\n", large_str, small_str4, len4, ft_result4);
	printf("\n");

	const char *small_str5 = "Foo";
	size_t len5 = 3;
	const char *result5;
	const char *ft_result5;
	result5 = strnstr(large_str, small_str5, len5);
	ft_result5 = ft_strnstr(large_str, small_str5, len5);
	printf("   strnstr(%s, %s, %zu) = %s\n", large_str, small_str5, len5, result5);
	printf("ft_strnstr(%s, %s, %zu) = %s\n", large_str, small_str5, len5, ft_result5);
	printf("\n");

	const char *small_str6 = "Foo";
	size_t len6 = 2;
	const char *result6;
	const char *ft_result6;
	result6 = strnstr(large_str, small_str6, len6);
	ft_result6 = ft_strnstr(large_str, small_str6, len6);
	printf("   strnstr(%s, %s, %zu) = %s\n", large_str, small_str6, len6, result6);
	printf("ft_strnstr(%s, %s, %zu) = %s\n", large_str, small_str6, len6, ft_result6);
	printf("\n");

	const char *small_str7 = "Foo_Bar_Baz";
	size_t len7 = 10;
	const char *result7;
	const char *ft_result7;
	result7 = strnstr(large_str, small_str7, len7);
	ft_result7 = ft_strnstr(large_str, small_str7, len7);
	printf("   strnstr(%s, %s, %zu) = %s\n", large_str, small_str7, len7, result7);
	printf("ft_strnstr(%s, %s, %zu) = %s\n", large_str, small_str7, len7, ft_result7);
	printf("\n");

	const char *small_str8 = "Foo_Bar_Baz";
	size_t len8 = 11;
	const char *result8;
	const char *ft_result8;
	result8 = strnstr(large_str, small_str8, len8);
	ft_result8 = ft_strnstr(large_str, small_str8, len8);
	printf("   strnstr(%s, %s, %zu) = %s\n", large_str, small_str8, len8, result8);
	printf("ft_strnstr(%s, %s, %zu) = %s\n", large_str, small_str8, len8, ft_result8);
	printf("\n");

	const char *small_str9 = "Foo_Bar_Baz";
	size_t len9 = 12;
	const char *result9;
	const char *ft_result9;
	result9 = strnstr(large_str, small_str9, len9);
	ft_result9 = ft_strnstr(large_str, small_str9, len9);
	printf("   strnstr(%s, %s, %zu) = %s\n", large_str, small_str9, len9, result9);
	printf("ft_strnstr(%s, %s, %zu) = %s\n", large_str, small_str9, len9, ft_result9);
	printf("\n");

	const char *small_str10 = "Foo_Bar_Baz_";
	size_t len10 = 11;
	const char *result10;
	const char *ft_result10;
	result10 = strnstr(large_str, small_str10, len10);
	ft_result10 = ft_strnstr(large_str, small_str10, len10);
	printf("   strnstr(%s, %s, %zu) = %s\n", large_str, small_str10, len10, result10);
	printf("ft_strnstr(%s, %s, %zu) = %s\n", large_str, small_str10, len10, ft_result10);
	printf("\n");

	const char *small_str11 = "Foo_Bar_Baz_";
	size_t len11 = 12;
	const char *result11;
	const char *ft_result11;
	result11 = strnstr(large_str, small_str11, len11);
	ft_result11 = ft_strnstr(large_str, small_str11, len11);
	printf("   strnstr(%s, %s, %zu) = %s\n", large_str, small_str11, len11, result11);
	printf("ft_strnstr(%s, %s, %zu) = %s\n", large_str, small_str11, len11, ft_result11);
	printf("\n");

	char *s1 = "oh no not the empty string !";
	char *s2 = "";
	size_t max = 0;
	char *i1 = strnstr(s1, s2, max);
	char *i2 = ft_strnstr(s1, s2, max);
	printf("   strnstr(%s, %s, %zu) = %s\n", s1, s2, max, i1);
	printf("ft_strnstr(%s, %s, %zu) = %s\n", s1, s2, max, i2);
	printf("\n");

	printf("   strnstr(\"lorem ipsum dolor sit amet\", \"dolor\", 0) = %s\n", strnstr("lorem ipsum dolor sit amet", "dolor", 0));
	printf("ft_strnstr(\"lorem ipsum dolor sit amet\", \"dolor\", 0) = %s\n", ft_strnstr("lorem ipsum dolor sit amet", "dolor", 0));


	printf("\n");
	const char *small_str12 = "";
	size_t len12 = 4;
	const char *result12;
	const char *ft_result12;
	result12 = strnstr(large_str, small_str12, len12);
	ft_result12 = ft_strnstr(large_str, small_str12, len12);
	printf("   strnstr(%s, %s, %zu) = %s\n", large_str, small_str12, len12, result12);
	printf("ft_strnstr(%s, %s, %zu) = %s\n", large_str, small_str12, len12, ft_result12);
	printf("\n");

}

void test_strncmp(void)
{

	printf("\n");
	printf("ft_memcpy____________________\n");
	
	char *str1 = "qwerty";
	char *str2 = "qwerty";
	size_t len = 3;
	printf("   strncmp(%s, %s, %ld) = %d\n", str1, str2, len,  strncmp(str1, str2, len));	
	printf("ft_strncmp(%s, %s, %ld) = %d\n", str1, str2, len,  ft_strncmp(str1, str2, len));
	printf("\n");
	
	char *str11 = "qwerty";
	char *str12 = "qwerty";
	size_t len1 = 100;
	printf("   strncmp(%s, %s, %ld) = %d\n", str11, str12, len1,  strncmp(str11, str12, len1));
	printf("ft_strncmp(%s, %s, %ld) = %d\n", str11, str12, len1,  ft_strncmp(str11, str12, len1));
	printf("\n");
	
	
	char *str21 = "qwerty";
	char *str22 = "qwerty";
	size_t len2 = 0;
	printf("   strncmp(%s, %s, %ld) = %d\n", str21, str22, len2,  strncmp(str21, str22, len2));
	printf("ft_strncmp(%s, %s, %ld) = %d\n", str21, str22, len2,  ft_strncmp(str21, str22, len2));
	printf("\n");
	
	
	char *str31 = "qwerty";
	char *str32 = "qwfrty";
	size_t len3 = 2;
	printf("   strncmp(%s, %s, %ld) = %d\n", str31, str32, len3,  strncmp(str31, str32, len3));
	printf("ft_strncmp(%s, %s, %ld) = %d\n", str31, str32, len3,  ft_strncmp(str31, str32, len3));
	printf("\n");
	
	
	char *str41 = "qwerty";
	char *str42 = "qwfrty";
	size_t len4 = 3;
	printf("   strncmp(%s, %s, %ld) = %d\n", str41, str42, len4,  strncmp(str41, str42, len4));
	printf("ft_strncmp(%s, %s, %ld) = %d\n", str41, str42, len4,  ft_strncmp(str41, str42, len4));
	printf("\n");
	
	
	char *str51 = "qwfrty";
	char *str52 = "qwerty";
	size_t len5 = 3;
	printf("   strncmp(%s, %s, %ld) = %d\n", str51, str52, len5,  strncmp(str51, str52, len5));
	printf("ft_strncmp(%s, %s, %ld) = %d\n", str51, str52, len5,  ft_strncmp(str51, str52, len5));
	printf("\n");
	
	char *str61 = "qwert";
	char *str62 = "qwe";
	size_t len6 = 6;
	printf("   strncmp(%s, %s, %ld) = %d\n", str61, str62, len6,  strncmp(str61, str62, len6));
	printf("ft_strncmp(%s, %s, %ld) = %d\n", str61, str62, len6,  ft_strncmp(str61, str62, len6));
	printf("\n");
	
	char *str71 = "qwe";
	char *str72 = "qwerty";
	size_t len7 = 6;
	printf("   strncmp(%s, %s, %ld) = %d\n", str71, str72, len7,  strncmp(str71, str72, len7));
	printf("ft_strncmp(%s, %s, %ld) = %d\n", str71, str72, len7,  ft_strncmp(str71, str72, len7));
	printf("\n");

	printf("   strncmp(\"test\", \"tEst\", 4) = %d\n", strncmp("test", "tEst", 4));
	printf("ft_strncmp(\"test\", \"tEst\", 4) = %d\n", ft_strncmp("test", "tEst", 4));
	printf("\n");

	printf("   strncmp(\"zyxbcdefgh\", \"abcdwxyz\", 0) = %d\n", strncmp("zyxbcdefgh", "abcdwxyz", 0));
	printf("ft_strncmp(\"zyxbcdefgh\", \"abcdwxyz\", 0) = %d\n", ft_strncmp("zyxbcdefgh", "abcdwxyz", 0));
	printf("\n");

	printf("   strncmp(\"abcdefgh\", \"\", 0) = %d\n", strncmp("abcdefgh", "", 0));
	printf("ft_strncmp(\"abcdefgh\", \"\", 0) = %d\n", ft_strncmp("abcdefgh", "", 0));
	printf("\n");
	
	printf("   strncmp(\"atoms\\0\\0\\0\\0\", \"atoms\\0abc\", 8) = %d\n", strncmp("atoms\0\0\0\0", "atoms\0abc", 8));
	printf("ft_strncmp(\"atoms\\0\\0\\0\\0\", \"atoms\\0abc\", 8) = %d\n", ft_strncmp("atoms\0\0\0\0", "atoms\0abc", 8));
	printf("\n");

	//printf("-----------------------------\n");

	

}


void test_atoi(void)
{

	printf("\n");
	printf("ft_atoi____________________\n");
	
	char *str1 = "+123";
	printf("atoi(%s) = %d\n", str1, atoi(str1));
	printf("ft_atoi(%s) = %d\n", str1, ft_atoi(str1));
	printf("\n");
	
	char *str3 = "+-123";
	printf("atoi(%s) = %d\n", str3, atoi(str3));
	printf("ft_atoi(%s) = %d\n", str3, ft_atoi(str3));
	printf("\n");
	
	char *str4 = "a123";
	printf("atoi(%s) = %d\n", str4, atoi(str4));
	printf("ft_atoi(%s) = %d\n", str4, ft_atoi(str4));
	printf("\n");
	
	char *str5 = "+z123";
	printf("atoi(%s) = %d\n", str5, atoi(str5));
	printf("ft_atoi(%s) = %d\n", str5, ft_atoi(str5));
	printf("\n");
	
	char *str6 = "-123a";
	printf("atoi(%s) = %d\n", str6, atoi(str6));
	printf("ft_atoi(%s) = %d\n", str6, ft_atoi(str6));
	printf("\n");
	
	char *str7 = "123z";
	printf("atoi(%s) = %d\n", str7, atoi(str7));
	printf("ft_atoi(%s) = %d\n", str7, ft_atoi(str7));
	printf("\n");
	
	char *str8 = "a123*34";
	printf("atoi(%s) = %d\n", str8, atoi(str8));
	printf("ft_atoi(%s) = %d\n", str8, ft_atoi(str8));
	printf("\n");
	
	char *str9 = " \f\n\r\t\v-123sgasr123g";
	printf("atoi(%s) = %d\n", str9, atoi(str9));
	printf("ft_atoi(%s) = %d\n", str9, ft_atoi(str9));
	printf("\n");
	
	char *str2 = " \f\n\r\t\v123";
	printf("atoi(%s) = %d\n", str2, atoi(str2));
	printf("ft_atoi(%s) = %d\n", str2, ft_atoi(str2));
	printf("\n");

	char *str10 = "-2147483649";
	printf("atoi(%s) = %d\n", str10, atoi(str10));
	printf("ft_atoi(%s) = %d\n", str10, ft_atoi(str10));
	printf("\n");

	char *str11 = "2147483648";
	printf("atoi(%s) = %d\n", str11, atoi(str11));
	printf("ft_atoi(%s) = %d\n", str11, ft_atoi(str11));
	printf("\n");

	char *str12 = "-99999999999999999999999999";
	printf("atoi(%s) = %d\n", str12, atoi(str12));
	printf("ft_atoi(%s) = %d\n", str12, ft_atoi(str12));
	printf("\n");

	char *str13 = "99999999999999999999999999";
	printf("atoi(%s) = %d\n", str13, atoi(str13));
	printf("ft_atoi(%s) = %d\n", str13, ft_atoi(str13));
	printf("\n");
	
	
	printf("-----------------------------\n");

	

}

void test_isalpha(void)
{

	printf("\n");
	printf("ft_isalpha____________________\n");
	
	printf("%c, %d\n", 'A', isalpha('A'));
	printf("%c, %d\n", '@', isalpha('@'));
	printf("%c, %d\n", 'a', isalpha('a'));
	printf("%c, %d\n", '`', isalpha('`'));
	
	printf("%c, %d\n", 'Z', isalpha('Z'));
	printf("%c, %d\n", '[', isalpha('['));
	printf("%c, %d\n", 'z', isalpha('z'));
	printf("%c, %d\n", '{', isalpha('{'));
	
	printf("%c, %d\n", '!', isalpha('!'));
	printf("%c, %d\n", '1', isalpha('1'));
	printf("%c, %d\n", '\n', isalpha('\n'));
	printf("%c, %d\n", '\0', isalpha('\0'));
	
	printf("-----------------------------\n");

	printf("%c, %d\n", 'A', ft_isalpha('A'));
	printf("%c, %d\n", '@', ft_isalpha('@'));
	printf("%c, %d\n", 'a', ft_isalpha('a'));
	printf("%c, %d\n", '`', ft_isalpha('`'));
	
	printf("%c, %d\n", 'Z', ft_isalpha('Z'));
	printf("%c, %d\n", '[', ft_isalpha('['));
	printf("%c, %d\n", 'z', ft_isalpha('z'));
	printf("%c, %d\n", '{', ft_isalpha('{'));
	
	printf("%c, %d\n", '!', ft_isalpha('!'));
	printf("%c, %d\n", '1', ft_isalpha('1'));
	printf("%c, %d\n", '\n', ft_isalpha('\n'));
	printf("%c, %d\n", '\0', ft_isalpha('\0'));
	


}

void test_isdigit(void)
{

	printf("\n");
	
	printf("ft_isdigit____________________\n");
	printf("%c, %d\n", '0', isdigit('0'));
	printf("%c, %d\n", '/', isdigit('/'));
	printf("%c, %d\n", '9', isdigit('9'));
	printf("%c, %d\n", ':', isdigit(':'));
	
	printf("%c, %d\n", '!', isdigit('!'));
	printf("%c, %d\n", 'a', isdigit('a'));
	printf("%c, %d\n", '\n', isdigit('\n'));
	printf("%c, %d\n", '\0', isdigit('\0'));
	
	printf("-----------------------------\n");

	printf("%c, %d\n", '0', ft_isdigit('0'));
	printf("%c, %d\n", '/', ft_isdigit('/'));
	printf("%c, %d\n", '9', ft_isdigit('9'));
	printf("%c, %d\n", ':', ft_isdigit(':'));
	
	printf("%c, %d\n", '!', ft_isdigit('!'));
	printf("%c, %d\n", 'a', ft_isdigit('a'));
	printf("%c, %d\n", '\n', ft_isdigit('\n'));
	printf("%c, %d\n", '\0', ft_isdigit('\0'));
	


}

void test_isalnum(void)
{

	printf("\n");
	printf("ft_isalnum____________________\n");
	
	printf("%c, %d\n", 'A', isalnum('A'));
	printf("%c, %d\n", '@', isalnum('@'));
	printf("%c, %d\n", 'a', isalnum('a'));
	printf("%c, %d\n", '`', isalnum('`'));
	
	printf("%c, %d\n", 'Z', isalnum('Z'));
	printf("%c, %d\n", '[', isalnum('['));
	printf("%c, %d\n", 'z', isalnum('z'));
	printf("%c, %d\n", '{', isalnum('{'));
	
	printf("%c, %d\n", '!', isalnum('!'));
	printf("%c, %d\n", '1', isalnum('1'));
	printf("%c, %d\n", '\n', isalnum('\n'));
	printf("%c, %d\n", '\0', isalnum('\0'));
	
	printf("%c, %d\n", '0', isalnum('0'));
	printf("%c, %d\n", '/', isalnum('/'));
	printf("%c, %d\n", '9', isalnum('9'));
	printf("%c, %d\n", ':', isalnum(':'));
	
	printf("%c, %d\n", '!', isalnum('!'));
	printf("%c, %d\n", 'a', isalnum('a'));
	printf("%c, %d\n", '\n', isalnum('\n'));
	printf("%c, %d\n", '\0', isalnum('\0'));
	
	
	printf("-----------------------------\n");

	printf("%c, %d\n", 'A', ft_isalnum('A'));
	printf("%c, %d\n", '@', ft_isalnum('@'));
	printf("%c, %d\n", 'a', ft_isalnum('a'));
	printf("%c, %d\n", '`', ft_isalnum('`'));
	
	printf("%c, %d\n", 'Z', ft_isalnum('Z'));
	printf("%c, %d\n", '[', ft_isalnum('['));
	printf("%c, %d\n", 'z', ft_isalnum('z'));
	printf("%c, %d\n", '{', ft_isalnum('{'));
	
	printf("%c, %d\n", '!', ft_isalnum('!'));
	printf("%c, %d\n", '1', ft_isalnum('1'));
	printf("%c, %d\n", '\n', ft_isalnum('\n'));
	printf("%c, %d\n", '\0', ft_isalnum('\0'));
	
	printf("%c, %d\n", '0', ft_isalnum('0'));
	printf("%c, %d\n", '/', ft_isalnum('/'));
	printf("%c, %d\n", '9', ft_isalnum('9'));
	printf("%c, %d\n", ':', ft_isalnum(':'));
	
	printf("%c, %d\n", '!', ft_isalnum('!'));
	printf("%c, %d\n", 'a', ft_isalnum('a'));
	printf("%c, %d\n", '\n', ft_isalnum('\n'));
	printf("%c, %d\n", '\0', ft_isalnum('\0'));
	



}


void test_isascii(void)
{

	printf("\n");
	printf("ft_isascii____________________\n");
	
	printf("code: %d, %d\n", -1000, isascii(-1000));
	printf("code: %d, %d\n", -1, isascii(-1));
	printf("code: %d, %d\n", 0, isascii(0));
	printf("code: %d, %d\n", 1, isascii(1));
	printf("code: %d, %d\n", 127, isascii(127));
	printf("code: %d, %d\n", 128, isascii(128));
	printf("code: %d, %d\n", 1000, isascii(1000));
	
	printf("-----------------------------\n");

	printf("code: %d, %d\n", -1000, ft_isascii(-1000));
	printf("code: %d, %d\n", -1, ft_isascii(-1));
	printf("code: %d, %d\n", 0, ft_isascii(0));
	printf("code: %d, %d\n", 1, ft_isascii(1));
	printf("code: %d, %d\n", 127, ft_isascii(127));
	printf("code: %d, %d\n", 128, ft_isascii(128));
	printf("code: %d, %d\n", 1000, ft_isascii(1000));
	


}


void test_isprint(void)
{

	printf("\n");
	
	printf("ft_isprint____________________\n");
	int i = -10;
	int error = 0;
	int code_error = 0;
	int res;
	int ft_res;
	while (i <= 500)
	{
		res = 0;
		ft_res = 0;

		if (isprint(i) != 0)
			res = 1;
		if (ft_isprint(i) != 0)
			ft_res = 1;
		if (res != ft_res)
		{
			error = 1;
			code_error = i;
			break;
		}
		i++;
	}
	
	if (error != 0)
		printf("error %d\n", code_error);
	else
		printf("OK\n");
	
	// int symbol = 32;
	// printf("ft_code: %d, %d\n", symbol, ft_isprint(symbol));
	// printf("code: %d, %d\n", symbol, isprint(symbol));

	printf("-----------------------------\n");

	

}


void test_toupper(void)
{

	printf("\n");
	
	printf("ft_toupper____________________\n");
	
	printf("symbol: %c, %c\n", 'a', toupper('a'));
	printf("symbol: %c, %c\n", 'a', ft_toupper('a'));
	
	printf("symbol: %c, %c\n", '!', toupper('!'));
	printf("symbol: %c, %c\n", '!', ft_toupper('!'));
	
	printf("symbol: %c, %c\n", 'A', toupper('A'));
	printf("symbol: %c, %c\n", 'A', ft_toupper('A'));
	
	
	printf("code: %d, %d\n", 'a', toupper('a'));
	printf("code: %d, %d\n", 'a', ft_toupper('a'));
	
	

	printf("-----------------------------\n");

	

}

void test_tolower(void)
{

	printf("\n");
	
	printf("ft_tolower____________________\n");
	
	printf("symbol: %c, %c\n", 'a', tolower('a'));
	printf("symbol: %c, %c\n", 'a', ft_tolower('a'));
	
	printf("symbol: %c, %c\n", '!', tolower('!'));
	printf("symbol: %c, %c\n", '!', ft_tolower('!'));
	
	printf("symbol: %c, %c\n", 'A', tolower('A'));
	printf("symbol: %c, %c\n", 'A', ft_tolower('A'));
	
	
	printf("code: %d, %d\n", 'a', tolower('a'));
	printf("code: %d, %d\n", 'a', ft_tolower('a'));
	
	

	printf("-----------------------------\n");

	

}

void test_calloc(void)
{

	printf("\n");

	printf("ft_calloc____________________\n");
	
	char *arr;
	char *ft_arr;
	int i;
	int n = 5;


	arr = (char *)calloc(n, sizeof(char));
	i = 0;
	while (i <= n)
	{
		arr[i] = 42;
		i++;
	}
	printf("   arr: %s\n", arr);
	

	ft_arr = (char *)ft_calloc(n, sizeof(char));
	i = 0;
	while (i <= n)
	{
		ft_arr[i] = 42;
		i++;
	}
	printf("ft_arr: %s\n", ft_arr);




	printf("-----------------------------\n");

	

}

void test_strdup(void)
{

	printf("\n");
	
	printf("ft_strdup____________________\n");

	char *str = "qwerty";
	char *str_cp;
	str_cp = strdup(str);
	printf("%s   ---   %s\n", str, str_cp);
	
	char *ft_str = "qwerty";
	char *ft_str_cp;
	ft_str_cp = ft_strdup(str);
	printf("%s   ---   %s\n", ft_str, ft_str_cp);
	
	printf("-----------------------------\n");

	

}

void test_ft_substr(void)
{

	printf("\n");
	
	printf("ft_ft_substr____________________\n");
	
	char *str = "0123qwert";
	
	int start_symbol = 0;
	size_t len = 4;
	char *result;
	result = ft_substr(str, start_symbol, len);
	printf("ft_substr(%s, %d, %zu) = %s\n", str, start_symbol, len, result);

	int start_symbol1 = 4;
	size_t len1 = 5;
	char *result1;
	result1 = ft_substr(str, start_symbol1, len1);
	printf("ft_substr(%s, %d, %zu) = %s\n", str, start_symbol1, len1, result1);

	int start_symbol2 = 4;
	size_t len2 = 0;
	char *result2;
	result2 = ft_substr(str, start_symbol2, len2);
	printf("ft_substr(%s, %d, %zu) = %s\n", str, start_symbol2, len2, result2);
	
	int start_symbol3 = 4;
	size_t len3 = 6;
	char *result3;
	result3 = ft_substr(str, start_symbol3, len3);
	printf("ft_substr(%s, %d, %zu) = %s\n", str, start_symbol3, len3, result3);
	
	int start_symbol4 = 4;
	size_t len4 = 4;
	char *result4;
	result4 = ft_substr(str, start_symbol4, len4);
	printf("ft_substr(%s, %d, %zu) = %s\n", str, start_symbol4, len4, result4);
	
	int start_symbol5 = 0;
	size_t len5 = 1;
	char *result5;
	result5 = ft_substr(str, start_symbol5, len5);
	printf("ft_substr(%s, %d, %zu) = %s\n", str, start_symbol5, len5, result5);
	
	int start_symbol6 = 8;
	size_t len6 = 1;
	char *result6;
	result6 = ft_substr(str, start_symbol6, len6);
	printf("ft_substr(%s, %d, %zu) = %s\n", str, start_symbol6, len6, result6);
	

	
	printf("-----------------------------\n");

	

}

void test_ft_strjoin(void)
{

	printf("\n");
	
	printf("ft_strjoin____________________\n");
		
	char *str_p = "qwe";
	char *str_s = "123";
	char *result;
	result = ft_strjoin(str_p, str_s);	
	printf("ft_strjoin(%s, %s) = %s\n", str_p, str_s, result);
	
	char *str_p1 = "qwe";
	char *str_s1 = "";
	char *result1;
	result1 = ft_strjoin(str_p1, str_s1);	
	printf("ft_strjoin(%s, %s) = %s\n", str_p1, str_s1, result1);
	
	char *str_p2 = "";
	char *str_s2 = "123";
	char *result2;
	result2 = ft_strjoin(str_p2, str_s2);	
	printf("ft_strjoin(%s, %s) = %s\n", str_p2, str_s2, result2);
	

	
	
	printf("-----------------------------\n");

	

}

void test_ft_strtrim(void)
{

	printf("\n");
	
	printf("ft_strtrim____________________\n");
	
	char *str = "%_@qw@ert";
	char *set = "_@%";
	char *result;
	result = ft_strtrim(str, set);
	printf("ft_strtrim(%s, %s) = %s\n", str, set, result);

	char *str1 = "qwe!#rt!#!";
	char *set1 = "!#";
	char *result1;
	result1 = ft_strtrim(str1, set1);
	printf("ft_strtrim(%s, %s) = %s\n", str1, set1, result1);
	
	char *str2 = "_!##_qw!ert_!#!";
	char *set2 = "!#_";
	char *result2;
	result2 = ft_strtrim(str2, set2);
	printf("ft_strtrim(%s, %s) = %s\n", str2, set2, result2);

	char *str3 = "qwert";
	char *set3 = "";
	char *result3;
	result3 = ft_strtrim(str3, set3);
	printf("ft_strtrim(%s, %s) = %s\n", str3, set3, result3);

	char *str4 = "qweewq";
	char *set4 = "qwe";
	char *result4;
	result4 = ft_strtrim(str4, set4);
	printf("ft_strtrim(%s, %s) = %s\n", str4, set4, result4);

	char *str5 = "";
	char *set5 = "qwe";
	char *result5;
	result5 = ft_strtrim(str5, set5);
	printf("ft_strtrim(%s, %s) = %s\n", str5, set5, result5);



	printf("-----------------------------\n");

	

}

void test_ft_itoa(void)
{

	printf("\n");
	
	printf("ft_itoa____________________\n");

	long int min_int = 1 << 31;
	long int max_int = ~(1 << 31);
	
	int num = 0;
	int num1 = 7;
	int num2 = -7;
	int num3 = 1234;
	int num4 = -1234;
	int num5 = 100;
	int num6 = -100;

	printf("%d --- %s\n", num, ft_itoa(num));	
	printf("%d --- %s\n", num1, ft_itoa(num1));	
	printf("%d --- %s\n", num2, ft_itoa(num2));	
	printf("%d --- %s\n", num3, ft_itoa(num3));	
	printf("%d --- %s\n", num4, ft_itoa(num4));	
	printf("%d --- %s\n", num5, ft_itoa(num5));	
	printf("%d --- %s\n", num6, ft_itoa(num6));	
	printf("%ld --- %s\n", min_int + 1, ft_itoa(min_int + 1));	
	printf("%ld --- %s\n", max_int - 1, ft_itoa(max_int - 1));	
	printf("%ld --- %s\n", min_int, ft_itoa(min_int));	
	printf("%ld --- %s\n", max_int, ft_itoa(max_int));	
	




	printf("-----------------------------\n");

	

}

//char *ft_strmapi(char const *s, char (*f)(unsigned int, char));


char change_symb(unsigned int i, char symbol)
{
	return (symbol + i);
}

void test_ft_strmapi(void)
{

	printf("\n");
	
	printf("ft_memcpy____________________\n");
	
	char *str = "12345";
	printf("%s %s\n",str, ft_strmapi(str, &change_symb));	
	
	printf("-----------------------------\n");

	
}

void test_ft_putchar_fd(void)
{

	printf("\n");
	
	printf("ft_putchar_fd____________________\n");
	
	printf("\n");	
	ft_putchar_fd('+', 1);	
	printf("\n");	

	printf("-----------------------------\n");

	
}

void test_ft_putstr_fd(void)
{

	printf("\n");
	
	printf("ft_memcpy____________________\n");

	printf("\n");	
	ft_putstr_fd("!OK_ok_OK!", 1);
	printf("\n");	

	printf("-----------------------------\n");

	
}

void test_ft_putendl_fd(void)
{

	printf("\n");
	
	printf("ft_memcpy____________________\n");
	
	printf("\n");
	ft_putendl_fd("new str--->", 1);
	printf("<---\n");	
	printf("\n");

	printf("-----------------------------\n");

	
}

void test_ft_putnbr_fd(void)
{

	printf("\n");
	
	printf("ft_putnbr_fd____________________\n");
	
	//ft_putnbr_fd(0 ,1);
	
	long int min_int = 1 << 31;
	long int max_int = ~(1 << 31);
	
	int num = 0;
	int num1 = 7;
	int num2 = -7;
	int num3 = 1234;
	int num4 = -1234;
	int num5 = 100;
	int num6 = -100;

	ft_putnbr_fd(num, 1);
	printf("\n");
	ft_putnbr_fd(num1, 1);
	printf("\n");
	ft_putnbr_fd(num2, 1);
	printf("\n");
	ft_putnbr_fd(num3, 1);
	printf("\n");
	ft_putnbr_fd(num4, 1);
	printf("\n");
	ft_putnbr_fd(num5, 1);
	printf("\n");
	ft_putnbr_fd(num6, 1);
	printf("\n");
	
	ft_putnbr_fd((min_int + 1), 1);	
	printf("\n");
	ft_putnbr_fd((max_int - 1), 1);	
	printf("\n");
	ft_putnbr_fd((min_int), 1);	
	printf("\n");
	ft_putnbr_fd((max_int), 1);	

	printf("\n");
	printf("-----------------------------\n");

	
}

void test_ft_split(void)
{

	printf("\n");
	
	printf("ft_split____________________\n");

	int i;

	char    *string = "***split*****thiis*for*me*!******";
	char    **result;
	char	chr = '*';
	result = ft_split(string, chr);	
	printf("ft_split(%s, %c) = \n", string, chr);
	i = 0;
	if (result == NULL)
	{
		printf("NULL\n");
		//return ;
	}
	while (result[i])
	{
		printf("[%d] => %s\n", i, result[i]); 
		i++;
	}
	if (result[i] == NULL)
	{
		printf("[%d] => NULL\n", i);
		//return ;
	}


	printf("\n");

	char    *string1 = "split******";
	char    **result1;
	char	chr1 = '*';
	result1 = ft_split(string1, chr1);	
	printf("ft_split(%s, %c) = \n", string1, chr1);
	i = 0;
	if (result1 == NULL)
	{
		printf("NULL\n");
		//return ;
	}
	while (result1[i])
	{
		printf("[%d] => %s\n", i, result1[i]); 
		i++;
	}
	if (result1[i] == NULL)
	{
		printf("[%d] => NULL\n", i);
		//return ;
	}

	printf("\n");

	char    *string2 = "split******";
	char    **result2;
	char	chr2 = '\0';
	result2 = ft_split(string2, chr2);	
	printf("ft_split(%s, %c) = \n", string2, chr2);
	i = 0;
	if (result2 == NULL)
	{
		printf("NULL\n");
		//return ;
	}
	while (result2[i])
	{
		printf("[%d] => %s\n", i, result2[i]); 
		i++;
	}
	if (result2[i] == NULL)
	{
		printf("[%d] => NULL\n", i);
		//return ;
	}


	printf("-----------------------------\n");

	
}

void test_ft_lstnew(void)
{

	printf("\n");
	printf("ft_lstnew____________________\n");
	printf("\n");
	
	char *content = "qwe";
	t_list *result;
	result = ft_lstnew(content);
	printf("%s\n", (char *)result->content);	
	printf("\n");

	char *content1 = "123";
	t_list *result1;
	result1 = ft_lstnew(content1);
	printf("%s\n", (char *)result1->content);	
	printf("\n");

	t_list *l1;
  	l1 = ft_lstnew(((void *)0));	
	printf("%s\n", (char *)l1->content);	

	t_list *l2;
	l2 = ft_lstnew(NULL);
	printf("%s\n", (char *)l2->content);	


	printf("-----------------------------\n");

	
}

void test_ft_lstadd_front(void)
{

	printf("\n");
	printf("ft_lstadd_front____________________\n");
	printf("\n");

	t_list	*frs = ft_lstnew(strdup("111"));
	t_list	*new = ft_lstnew(strdup("222"));


	printf("frs->content = %15s\n", (char *)frs->content);	
	printf("new->content = %15s\n", (char *)new->content);	

	ft_lstadd_front(&frs, new);	
	printf("\nft_lstadd_front(&frs, new)\n\n");	
	
	printf("new->content = %15s\n", (char *)new->content);	
	printf("new->next->content = %9s\n", (char *)new->next->content);	

	if (new->next->next == NULL)
		printf("222 -> 111 -> NULL\n");
	else
		printf("222 -> 111 -> not NULL\n");

	printf("-----------------------------\n");

	
}


void test_ft_lstsize(void) {

	printf("\n");
	
	printf("ft_lstsize____________________\n");

	
	t_list	*t_000 = NULL;
	printf("NULL = %d\n", ft_lstsize(t_000));

	t_list	*lst = ft_lstnew(strdup("111"));	
	printf("unut 1: 1->null = %d\n", ft_lstsize(lst));

	t_list	*t_222 = ft_lstnew(strdup("222"));
	ft_lstadd_front(&lst, t_222);
	printf(" add 2: 2->1->null = %d\n", ft_lstsize(lst));
		
	t_list	*t_333 = ft_lstnew(strdup("333"));
	ft_lstadd_front(&lst, t_333);
	printf(" add 3: 3->2->1->null = %d\n", ft_lstsize(lst));
		
	
	printf("\n");
	printf("-----------------------------\n");

	
}

void test_ft_lstlast(void) {

	printf("\n");
	
	printf("ft_lstlast____________________\n");

	
	/* t_list	*t_000 = NULL; */
	/* printf("NULL = %s\n", (char *)(ft_lstlast(t_000)->content)); */

	t_list	*lst = ft_lstnew(strdup("111"));	
	printf("unut 1: 1->null = %s\n", (char *)(ft_lstlast(lst)->content));

	t_list	*t_222 = ft_lstnew(strdup("222"));
	ft_lstadd_front(&lst, t_222);
	printf(" add 2: 2->1->null = %s\n", (char *)(ft_lstlast(lst)->content));

	t_list	*t_333 = ft_lstnew(strdup("333"));
	ft_lstadd_front(&lst, t_333);
	printf(" add 3: 3->2->1->null = %s\n", (char *)(ft_lstlast(lst)->content));

	t_list	*t_444 = ft_lstnew(strdup("444"));
	ft_lstadd_front(&lst, t_444);
	printf(" add 4: 4->3->2->1->null = %s\n", (char *)(ft_lstlast(lst)->content));


	
	printf("\n");
	printf("-----------------------------\n");

	
}




void test_ft_lstadd_back(void)
{
	printf("\n");
	
	printf("ft_lstadd_back____________________\n");


	t_list	*lst = ft_lstnew(strdup("111"));	
	t_list	*t_222 = ft_lstnew(strdup("222"));
	ft_lstadd_front(&lst, t_222);
	t_list	*t_333 = ft_lstnew(strdup("333"));
	ft_lstadd_front(&lst, t_333);
	t_list	*t_444 = ft_lstnew(strdup("444"));
	ft_lstadd_front(&lst, t_444);

	printf("\n");
	
	t_list	*new = ft_lstnew(strdup("-nEw-"));
	ft_lstadd_back(&lst, new);	

	printf("\n");
	while (lst)
	{
		printf("%s -> ", (char *)lst->content);
		lst = lst->next;
	}
	
	if (lst  == NULL)
		printf("NULL\n");
	else
		printf("not NULL\n");


	t_list  *l =  NULL;
	t_list  *n = ft_lstnew(strdup("OK"));
    ft_lstadd_back(&l, n);

	printf("\n");
	while (l)
	{
		printf("%s -> ", (char *)l->content);
		l = l->next;
	}
	
	if (l == NULL)
		printf("NULL\n");
	else
		printf("not NULL\n");


	printf("\n");
	printf("-----------------------------\n");



}

void lstdelone_f(void *d)
{
     free(d);
}

void test_ft_lstdelone(void)
{

	printf("\n");
	
	printf("ft_lstdelone____________________\n");


	printf("\n");
	printf("---Before---\n");


	t_list	*lst = ft_lstnew(strdup("111"));	
	t_list	*t_222 = ft_lstnew(strdup("222"));
	ft_lstadd_front(&lst, t_222);
	t_list	*t_333 = ft_lstnew(strdup("333"));
	ft_lstadd_front(&lst, t_333);
	
	while (lst)
	{
		printf("%s -> ", (char *)lst->content);
		lst = lst->next;
	}
	
	if (lst  == NULL)
		printf("NULL\n");
	else
		printf("not NULL\n");


	printf("\n");
	printf("---After---\n");


	t_list	*ft_lst = ft_lstnew(strdup("111"));	
	t_list	*ft_t_222 = ft_lstnew(strdup("222"));
	ft_lstadd_front(&ft_lst, ft_t_222);
	t_list	*ft_t_333 = ft_lstnew(strdup("333"));
	ft_lstadd_front(&ft_lst, ft_t_333);

	ft_lstdelone(ft_lst, lstdelone_f);

	while (ft_lst)
	{
		printf("%s -> ", (char *)ft_lst->content);
		ft_lst = ft_lst->next;
	}
	
	if (ft_lst  == NULL)
		printf("NULL\n");
	else
		printf("not NULL\n");

	printf("\n");


	printf("\n");
	printf("-----------------------------\n");

	
}

void test_ft_lstclear(void)
{

	printf("\n");
	
	printf("ft_lstclear____________________\n");

	printf("\n");
	printf("---Before---\n");


	t_list	*lst = ft_lstnew(strdup("111"));	
	t_list	*t_222 = ft_lstnew(strdup("222"));
	ft_lstadd_front(&lst, t_222);
	t_list	*t_333 = ft_lstnew(strdup("333"));
	ft_lstadd_front(&lst, t_333);
	
	while (lst)
	{
		printf("%s -> ", (char *)lst->content);
		lst = lst->next;
	}
	
	if (lst  == NULL)
		printf("NULL\n");
	else
		printf("not NULL\n");


	printf("\n");
	printf("---After---\n");


	t_list	*ft_lst = ft_lstnew(strdup("111"));	
	t_list	*ft_t_222 = ft_lstnew(strdup("222"));
	ft_lstadd_front(&ft_lst, ft_t_222);
	t_list	*ft_t_333 = ft_lstnew(strdup("333"));
	ft_lstadd_front(&ft_lst, ft_t_333);

	ft_lstclear(&ft_lst, lstdelone_f);

	while (ft_lst)
	{
		printf("%s -> ", (char *)ft_lst->content);
		ft_lst = ft_lst->next;
	}
	
	if (ft_lst  == NULL)
		printf("NULL\n");
	else
		printf("not NULL\n");

	printf("\n");



	printf("\n");
	printf("-----------------------------\n");

	
}

void lstiter_f(void *content) {
     char *s = content;
     s[0] = 'O';
     s[1] = 'K';
}


void test_ft_lstiter(void)
{

	printf("\n");
	
	printf("ft_lstiter____________________\n");

	printf("\n");
	printf("---Before---\n");


	t_list	*lst = ft_lstnew(strdup("111"));	
	t_list	*t_222 = ft_lstnew(strdup("222"));
	ft_lstadd_front(&lst, t_222);
	t_list	*t_333 = ft_lstnew(strdup("333"));
	ft_lstadd_front(&lst, t_333);
	
	while (lst)
	{
		printf("%s -> ", (char *)lst->content);
		lst = lst->next;
	}
	
	if (lst  == NULL)
		printf("NULL\n");
	else
		printf("not NULL\n");


	printf("\n");
	printf("---After---\n");


	t_list	*ft_lst = ft_lstnew(strdup("111"));	
	t_list	*ft_t_222 = ft_lstnew(strdup("222"));
	ft_lstadd_front(&ft_lst, ft_t_222);
	t_list	*ft_t_333 = ft_lstnew(strdup("333"));
	ft_lstadd_front(&ft_lst, ft_t_333);

	ft_lstiter(ft_lst, lstiter_f);
	
	while (ft_lst)
	{
		printf("%s -> ", (char *)ft_lst->content);
		ft_lst = ft_lst->next;
	}
	
	if (ft_lst  == NULL)
		printf("NULL\n");
	else
		printf("not NULL\n");

	printf("\n");


	printf("\n");
	printf("-----------------------------\n");

	
}

void *lstmap_f(void *content)
{
     (void)content;
     return ("OK !");
}

void test_ft_lstmap(void)
{

	printf("\n");
	
	printf("ft_memcpy____________________\n");

	printf("\n");
	printf("---Before---\n");


	t_list	*lst = ft_lstnew(strdup("111"));	
	t_list	*t_222 = ft_lstnew(strdup("222"));
	ft_lstadd_front(&lst, t_222);
	t_list	*t_333 = ft_lstnew(strdup("333"));
	ft_lstadd_front(&lst, t_333);

	t_list *ft_lst;
	ft_lst = lst;

	while (lst)
	{
		printf("%s -> ", (char *)lst->content);
		lst = lst->next;
	}

	if (lst  == NULL)
		printf("NULL\n");
	else
		printf("not NULL\n");


	printf("\n");
	printf("---Result---\n");

	t_list *result;
	result = ft_lstmap(ft_lst, lstmap_f, NULL);


	while (result)
	{
		printf("%s -> ", (char *)result->content);
		result = result->next;
	}
	
	if (result == NULL)
		printf("NULL\n");
	else
		printf("not NULL\n");


	printf("\n");
	printf("-----------------------------\n");

	
}





int main (void)
{
	// part 1
	/* test_memset(); */
	/* test_bzero(); */
	/* test_memcpy(); */
	/* test_memccpy(); */
	/* test_memmove(); */
	/* test_memchr(); */
	/* test_memcmp(); */
	/* test_strlen(); */
	/* test_strlcpy(); //bsd */
	test_strlcat(); //bsd
	/* test_strchr(); */
	/* test_strrchr(); */
	/* test_strnstr(); //bsd */
	/* test_strncmp(); */
	/* test_atoi(); */
	/* test_isalpha(); */
	/* test_isdigit(); */
	/* test_isalnum(); */
	/* test_isascii(); */
	/* test_isprint(); */
	/* test_toupper(); */
	/* test_tolower(); */
	/* test_calloc(); */
	/* test_strdup(); */

	// part 2
	/* test_ft_substr(); */
	/* test_ft_strjoin(); */
	/* test_ft_strtrim(); */
	/* test_ft_itoa(); */
	/* test_ft_strmapi(); */
	/* test_ft_putchar_fd(); */
	/* test_ft_putstr_fd(); */
	/* test_ft_putendl_fd(); */
	/* test_ft_putnbr_fd(); */
	/* test_ft_split(); */

	// bonus
	/* test_ft_lstnew(); */
	/* test_ft_lstadd_front(); */
	/* test_ft_lstsize(); */
	/* test_ft_lstlast(); */
	/* test_ft_lstadd_back(); */
	/* test_ft_lstdelone(); */
	/* test_ft_lstclear(); */
	/* test_ft_lstiter(); */
	/* test_ft_lstmap(); */
}

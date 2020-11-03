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
	printf("ft_strchr____________________\n");
	
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



}


void test(void)
{

	printf("\n");
	printf("ft_memcpy____________________\n");
	
	
	
	
	printf("-----------------------------\n");

	

}


int main (void)
{
	/* test_memset(); */
	/* test_bzero(); */
	/* test_memcpy(); */
	/* test_memccpy(); */
	/* test_memmove(); */
	/* test_memchr(); */
	/* test_memcmp(); */
	/* test_strlen(); */
	/* test_strlcpy(); */
	/* test_strlcat(); */
	test_strchr();
	//test_strrchr();
}

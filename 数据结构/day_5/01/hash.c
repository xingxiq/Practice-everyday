#include <stdio.h>

int my_hash_function(char my_char){
    	return my_char-'a';
}

int main(int argc, const char *argv[])
{
    	int num[26] = {0};
	char arr[50] = {'0'};
	scanf("%s",arr);
	
	char *p = arr;
	while('\0' != *p){
		num[my_hash_function(*p)]++;
		p++;
	}
	int i = 0;
	for(i = 0; i < 26; i++){
		printf("%c  :  %d\n",i+'a',num[i]);
	}
	return 0;
}

#include <stdio.h>

int main(int argc, char * argv[]){
	char c1 = 'r';
	char c2 = 't';
	printf("c1 : %c\tc2 : %c\n", c1, c2);
	char temp = c1;
	c1 = c2;
	c2 = temp;
	printf("c1 : %c\tc2 : %c\n", c1, c2);
	return 0;
}
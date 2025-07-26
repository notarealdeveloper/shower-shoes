/* Apparently this corrupted my filesystem. See bingo.png. Off to a good start! */
#include <stdio.h>

char *farmr = "There was a farmer had a dog.";
char *nameo = "And Bingo was his name-o.";
char *bingo = "BINGO";

int main() {
	int i;
	char *p = bingo;
	while (*p) {
		printf("%s %s\n", farmr, nameo);
		for (i = 0; i < 3; i++) { printf("%s\n", bingo); }
		printf("%s\n", nameo);
		p++;
		*p = '*';
		printf("%lu, %c\n", (unsigned long)p, *p);
	} 
}

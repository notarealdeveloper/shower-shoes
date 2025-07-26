#include <stdio.h>

// use char[] because char * are stored in readonly memory these days.
char farmr[] = "There was a farmer had a dog.\n";
char nameo[] = "And Bingo was his name-o.\n";
char bingo[] = "BINGO\n";

int main() {
	char *p = bingo;
	do {
		printf("%s%s", farmr, nameo);
		for (int i = 0; i < 3; i++) printf("%s", bingo);
		printf("%s", nameo);
		*p = '*';
	} while (*++p);
}

/* apparently this corrupted my filesystem (see pingo.png). off to a good start! */

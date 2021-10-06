#pragma GCC optimize("Ofast")
#include <stdio.h>

int main(int argc, char **argv) {
	char *str ;
	unsigned int nArg = 1 ;

	while((str = argv[nArg++])) {
		unsigned char dots = 0 ;
		unsigned int i = 0 ;
		char ch ;

		while ((ch = str[i++])) if (ch == '.') dots++ ;
		i = 0 ;

		while ((ch = str[i++])) {
			if (ch == '.' && !--dots && str[i]) break ;
			putchar(ch) ;
		}

		putchar('\n') ;
	} ;
}

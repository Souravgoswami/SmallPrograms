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
		unsigned char flag = 0 ;

		while ((ch = str[i++])) {
			if (ch == '.' && !--dots && str[i]) {
				flag = 1 ;
				break ;
			}
		}

		if (flag) while ((ch = str[i++])) putchar(ch) ;

		putchar('\n') ;
	} ;
}

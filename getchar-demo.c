#include <stdio.h>
#include <stdlib.h>



int main() {
	char c,string[30];
	int i=0;
	
	while((c=getchar())!='\n'){
		string[i++]=c;
	}
	string[i]='\0';
	puts(string);
	return 0;
}

#include <stdio.h>
#include <stdlib.h>

typedef struct test{
	int x;
	struct test *nextptr;
}Test;

int main() {
	int i;
	FILE *output=fopen("output.bin","wb");
	Test first={123,NULL},second={4,&first};

	fwrite(&first,sizeof(Test),1,output);
	fwrite(&second,sizeof(Test),1,output);
	printf("first x is: %d",second.nextptr->x);
	return 0;
}

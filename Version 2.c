#include <stdio.h>
#include <stdlib.h>
#define PRINTSHAPE 1
#define PRINTSIZE 2

int getinput(int printwhat);
int determineshape(int shape, int size);
void square(int size);
void rightpar(int size);
void leftpar(int size);
void squareinsquare(int size);
void uparrow(int size);
void downarrow(int size);

int main() {
	int shape,size;
	while (1==1){
		shape=getinput(PRINTSHAPE);
		if (shape==0){
				break;
		}
		size=getinput(PRINTSIZE);
		determineshape(shape,size);
	}
	return 0;
}

int getinput(int printwhat){
	int input;
	switch (printwhat){
		case 1:
			printf("Shapes:\n 1-->Square\n 2-->Right Parallelogram\n 3-->Left Parallelogram\n 4-->Square in Square\n 5-->Down Arrow\n 6-->Up Arrow\n 0-->Stop\n");
			printf("Please enter an interger: ");
			break;
		case 2:
			printf("Please enter an interger that determines the size of the shape you wish to print: ");
			break;
	}
	scanf("%d", &input);
	return input;
}

int determineshape(int shape, int size){
	printf("determineshape shape: %d size %d\n",shape,size);
	switch (shape){
		case 1:
			square(size);
			break;
		case 2:
			rightpar(size);
			break;
		case 3:
			leftpar(size);
			break;
		case 4:
			squareinsquare(size);
			break;
		case 5:
			downarrow(size);
			break;
		case 6:
			uparrow(size);
			break;
	}
}

void square(int size){
	int i,j;
	switch(size){
		case 0:
			break;
		case 1:
			printf("*\n");
			break;
		default:
			for (i=0;i<size;i++){
				if ((i==0) || (i==size-1)){
					for (j=0;j<size;j++){
						printf("*");
					}
					printf("\n");
				}
				else{
					for (j=0;j<size;j++){
						if ((j==0) || (j==size-1)){
							printf("*");
						}
						else{
							printf(" ");
						}
					}
					printf("\n");
				}
			}	
	}
}

void rightpar(int size){
	int i,j;
	switch (size){
		case 0:
			break;
		case 1:
			printf("*\n");
			break;
		default:
			for (i=0;i<size;i++){
				if ((i==0) || (i==size-1)){
					if (i==0){
						for (j=0;j<size;j++){
							printf("*");
						}
					}
					else{
						for (j=0;j<i;j++){
							printf(" ");
							}
						for (j=0;j<size;j++){
							printf("*");
						}
					}
					printf("\n");
				}
				else{
					for (j=0;j<i;j++){
						printf(" ");
					}
					for (j=0;j<size;j++){
						if ((j==0) || (j==size-1)){
							printf("*");
						}
						else{
							printf(" ");
						}
					}
					printf("\n");
				}
			}
	}
}

void leftpar(int size){
	int i,j;
	switch (size){
		case 0:
			break;
		case 1:
			printf("*\n");
			break;
		default:
			for (i=0;i<size;i++){
				if ((i==0) || (i==size-1)){
					if (i==0){
						for (j=0;j<size;j++){
							printf(" ");
						}
						for (j=0;j<size;j++){
							printf("*");
						}
					}
					else{
						printf(" ");
						for (j=0;j<size;j++){
							printf("*");
						}
					}
					printf("\n");
				}
				else{
					for (j=0;j<size-i;j++){
						printf(" ");
					}
					for (j=0;j<size;j++){
						if ((j==0) || (j==size-1)){
							printf("*");
						}
						else{
							printf(" ");
						}
					}
					printf("\n");
				}
			}
	}
}

void squareinsquare(int size){
	int i,j,counter=0,oldsize,innersquaresize;
	if (size%3!=0){
		oldsize=size;
		if ((size-1)%3==0){
			size-=1;
		}
		else{
			size+=1;
		}
	printf("Changed size value from %d to %d.\n", oldsize, size);
	}
	switch(size){
		case 0:
			printf("\n");
			break;
		case 3:
			printf("***\n***\n***\n");
			break;
		default:
			innersquaresize=size/3;
			for (i=0;i<size;i++){
				if (i==innersquaresize){
					counter+=1;
				}
				if ((i==0) || (i==size-1)){
					for (j=0;j<size;j++){
						printf("*");
					}
					printf("\n");
				}
				else{
					if (counter>innersquaresize){
						counter=0;
					}
					if (counter>0){
						if ((counter==1) || (counter==innersquaresize)){
							printf("*");
							for (j=0;j<((size-innersquaresize)/2)-1;j++){
								printf(" ");
							}
							for (j=0;j<innersquaresize;j++){
								printf("*");
							}
							counter+=1;
							for (j=0;j<((size-innersquaresize)/2)-1;j++){
								printf(" ");
							}
							printf("*\n");	
						}
						else{
							printf("*");
							for (j=0;j<((size-innersquaresize)/2)-1;j++){
								printf(" ");
							}
							for (j=0;j<innersquaresize;j++){
								if ((j==0) || (j==innersquaresize-1)){
									printf("*");
								}
								else{
									printf(" ");
								}
							}
							counter+=1;
							for (j=0;j<((size-innersquaresize)/2)-1;j++){
								printf(" ");
							}
							printf("*\n");
						}
					}
					else{
						for (j=0;j<size;j++){
							if ((j==0) || (j==size-1)){
								printf("*");
							}
							else{
								printf(" ");
							}
						}
						printf("\n");
					}
				}
			}
	}
}

void uparrow(int size){
	int i,j,oldsize,spaces,starspace;
	if (size%3!=0){
		oldsize=size;
		if ((size-1)%3==0){
			size-=1;
		}
		else{
			size+=1;
		}
	printf("Changed size value from %d to %d.\n", oldsize, size);
	}
	switch (size){
		case 0:
			break;
		case 3:
			printf(" *\n****\n *\n");
			break;
		default:
			if (size%6==0){
				spaces=size/2-1;
				starspace=0;
				for (i=0;i<size/2-1;i++){
					for (j=0;j<spaces;j++){
						printf(" ");
					}
					spaces-=1;
					printf("*");
					for (j=0;j<starspace;j++){
						printf(" ");
					}
					starspace+=2;
					printf("*\n");
				}
				for (i=1;i<4;i++){
					if (i==2){
						for (j=0;j<(size/3-2);j++){
							printf(" ");
						}
					}
					else{
						for (j=0;j<size/3+1;j++){
							printf("*");
						}
					}
				}
				printf("\n");
				for (i=0;i<size/2;i++){
					for (j=0;j<size/3;j++){
						printf(" ");
					}
					if (i==size/2-1){
						for (j=0;j<size/3;j++){
							printf("*");
						}
						printf("\n");
					}
					else{
						printf("*");
						for (j=0;j<size/3-2;j++){
							printf(" ");
						}
						printf("*\n");
					}
				}
			}
			else{
				spaces=(size-1)/2;
				starspace=0;
				for (i=0;spaces>0;i++){
					switch (starspace){
						case 0:
							for (j=0;j<spaces;j++){
								printf(" ");
							}
							printf("*\n");
							spaces-=1;
							starspace+=1;
							break;
						default:
							for (j=0;j<spaces;j++){
								printf(" ");
							}
							printf("*");
							for (j=0;j<starspace;j++){
								printf(" ");
							}
							printf("*\n");
							starspace+=2;
							spaces-=1;
					}
				}
				for (i=0;i<3;i++){
					if (i==1){
						for (j=0;j<size/3-2;j++){
							printf(" ");
						}
					}
					else{
						for (j=0;j<size/3+1;j++){
							printf("*");
						}
					}
				}
				printf("\n");
				for (i=0;i<(size-1)/2;i++){
					for (j=0;j<size/3;j++){
						printf(" ");
					}
					if (i==(size-1)/2-1){
						for (j=0;j<size/3;j++){
							printf("*");
						}
						printf("\n");
					}
					else{
						printf("*");
						for (j=0;j<size/3-2;j++){
							printf(" ");
						}
						printf("*\n");
					}
				}
			}
	}
}

void downarrow(int size){
 	int i,j,oldsize,spaces,starspace;
	if (size%3!=0){
		oldsize=size;
		if ((size-1)%3==0){
			size-=1;
		}
		else{
			size+=1;
		}
	printf("Changed size value from %d to %d.\n", oldsize, size);
	}
	switch (size){
		case 0:
			break;
		case 3:
			printf(" *\n****\n *\n");
			break;
		default:
			if (size%6==0){
				for (i=0;i<size/2;i++){
					for (j=0;j<size/3;j++){
						printf(" ");
					}
					if (i==0){
						for (j=0;j<size/3;j++){
							printf("*");
						}
						printf("\n");
					}
					else{
						printf("*");
						for (j=0;j<size/3-2;j++){
							printf(" ");
						}
						printf("*\n");
					}
				}
				for (i=0;i<3;i++){
					if (i==1){
						for (j=0;j<size/3-2;j++){
							printf(" ");
						}
					}
					else{
						for (j=0;j<size/3+1;j++){
							printf("*");
						}
					}
				}
				printf("\n");
				spaces=1;
				starspace=size-4;
				for (i=0;starspace>=0;i++){
					for (j=0;j<spaces;j++){
						printf(" ");
					}
					printf("*");
					spaces+=1;
					for (j=0;j<starspace;j++){
						printf(" ");
					}
					starspace-=2;
					printf("*\n");
				}
			}
			else{
				for (i=0;i<(size-1)/2;i++){
					for (j=0;j<size/3;j++){
						printf(" ");
					}
					if (i==0){
						for (j=0;j<size/3;j++){
							printf("*");
						}
						printf("\n");
					}
					else{
						printf("*");
						for (j=0;j<size/3-2;j++){
							printf(" ");
						}
						printf("*\n");
					}
				}
				for (i=0;i<3;i++){
					if (i==1){
						for (j=0;j<size/3-2;j++){
							printf(" ");
						}
					}
					else{
						for (j=0;j<size/3+1;j++){
							printf("*");
						}
					}
				}
				printf("\n");
				spaces=1;
				starspace=size-4;
				for (i=0;starspace>=0;i++){
					for (j=0;j<spaces;j++){
						printf(" ");
					}
					spaces+=1;
					printf("*");
					for (j=0;j<starspace;j++){
						printf(" ");
					}
					printf("*\n");
					starspace-=2;
				}
				for (i=0;i<(size-1)/2;i++){
					printf(" ");
				}
				printf("*\n");
			}
		}
}

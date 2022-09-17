#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i,carp,sayi[]={5,4,2};
	carp=1;
	for (i=0;i<3;i++){
		carp=carp*sayi[i];
		printf("%d\n",carp);
	}
	
	
	
	
	
	return 0;
}

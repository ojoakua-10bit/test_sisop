#include <stdio.h>
#include <stdlib.h>

int main(){
	int k = -65536;
	while(1){
		printf("aku sayang kamu (%d)\n", k);
		k++;
		sleep(2);
	}
	return 0;
}

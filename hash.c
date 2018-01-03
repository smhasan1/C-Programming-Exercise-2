#include<stdio.h>
#include<string.h>

int main(){
	
	char line[50];
	int i, sum = 0, k, collision = 0, unused = 0;

	scanf("%d", &k);
//printf("%d\n",k);

	int hash[k];
	memset(hash, 0, sizeof hash);
	
  	FILE *file = fopen ( "input.txt" , "r" );

	if ( file != NULL ){

	while( fgets(line , 50, file) != NULL){
	
//printf("%s",line);
		for(i = 0; line[i] != '\n'; i++){
		sum = sum + line[i];
//printf("%d\n",line[i]);
		}
		
		hash[sum%k]++;


//printf("%d\n",sum);
		sum = 0;

	}

	for(i = 0; i < k; i++){

	if(hash[i] > 1){
	collision++;
	}
	
	if(hash[i] == 0){
	unused++;
	}

	}	

	printf("The number of entries with collision is %-5d\n", collision);
	printf("The number of unused entries is %-5d\n", unused);

	}
	fclose(file);
}

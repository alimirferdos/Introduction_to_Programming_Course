/*
	In the name of God
	
	Seyed Ali Mirferdos
	Advanced Programming course
	Winter 1395
*/

#include<stdio.h>
#include<string.h>

int main(){
	/* You are allowed to enter a string with at last 1000 chars.
	 For example you can enter a hundred 10-char word*/
	char text[1000];
	char words[100][10] , repwords[100][10];
	int wordRepeat[100] = {0};
	
	printf("Please Enter your text below:\n");
	fgets (text, 1000, stdin);

	// Splitting text to words
	for(int i = 0; text[i] != '\0'; i++)
		if(text[i] < 'A' || text[i] > 'z')
		 	text[i] = ' ';

   char *token;
   int i = 0;   
   const char s[2] = " ";
   token = strtok(text, s);
   
   while( token != NULL ){
      strcpy(words[i], token);
      i++;
      token = strtok(NULL, s);
   }
	
	// Finding word repeats
	int wordcount = 0;
	for(int j = 0; j < i; j++){
		int k = 0;
		for(k; k < wordcount ; k++){
			if(strcmp(words[j] , repwords[k]) == 0){
				break;
			}
		}
		if(k == wordcount){
			strcpy(repwords[k], words[j]);
			wordcount++;
		}

		wordRepeat[k]++;
	}
	
	// Finding Max & Min repeats
	int max = 0 , min = 0;
	int maxpos = 0 , minpos = 0;
	for(int j = 0; j < wordcount; j++){
		if(wordRepeat[j] > max){
			max = wordRepeat[j];
			maxpos = j;
		}
		if(wordRepeat[j] < min){
			min = wordRepeat[j];
			minpos = j;
		}
	}
	
	// Printing the results
	printf("\n================\nResults:\n");
	for(int j = 0; j < wordcount; j++)
		printf("%s : %d times\n", repwords[j], wordRepeat[j]);	
	
	printf("Most Repeated Word is %s : %d times\n", repwords[maxpos], wordRepeat[maxpos]);
	printf("Least Repeated Word is %s : %d times\n", repwords[minpos], wordRepeat[minpos]);
	return 0;
}

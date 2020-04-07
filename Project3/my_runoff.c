#include <string.h>
#include <errno.h>
#include <stdio.h>
#include <stdlib.h>
typedef struct Candidates{
	char *name;
  int votes;
	int eliminated;
}Candidate;
void free2DArray(int, char**);
char **Make2DArray(int, char**);

int main(int argc, char **argv){

	int candidate_count = argc -1;
	
	if(argc < 2 || argc > 9){
		perror("Usage: runoff [candidate ...]\n");
		return 1;
	}
	
  char *voters = malloc(sizeof(char)*10);
  printf("Number of voters: ");
  fgets(voters,10,stdin);


  char **clist = Make2DArray(candidate_count, &argv[0]);
  if(!clist)
    return ENOMEM;
	
  Candidate *cndt = malloc(sizeof(Candidate)*candidate_count);

  cndt->name = &clist[0][0];
  //cndt->votes = 

  printf("%s\n", cndt->name);


  free2DArray(candidate_count, clist);
  //do{
      
	//}while(candidate_count--);
	
	return 0;
}
char **Make2DArray(int candidate_count, char **argv){
  int i;  
	char **p = malloc(candidate_count * sizeof(char*));
	if(!p)
		return NULL;
	for(i = 0; i < candidate_count; i++){
		p[i] = malloc(strlen(argv[i])*sizeof(char*));
    if(!*p){
      return NULL;
    }
	}

  return (p);
}
void free2DArray(int ct, char **a){
  int i;
  for(i = 0; i<ct; i++){
    free(a[i]);
  }
  free(a);
}

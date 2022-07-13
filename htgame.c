#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
  int i,value[5];
  int counth=0,countt=0;
  char name[30];

    srand(time(NULL));

    for(i=0;i<5;i++) value[i]=rand()%2;
    
    printf("Who are you?\n");
    printf(">");
    scanf("%s", name);
    printf("Hello, %s!\n", name);

    printf("Tossing a coin...\n");
    for(i=0;i<5;i++){
      if(value[i]==0){
	counth++;
	printf("Round %d: Heads\n", i+1);
      }
      else{
	countt++;
	printf("Round %d: Tails\n", i+1);
      }
      }
    printf("Heads: %d, Tails: %d\n",counth,countt);

    if( counth > countt ) { printf("%s won!\n", name); }
    else { printf("%s lost!\n", name); }

    return 0;

}

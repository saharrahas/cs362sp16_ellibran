////////////////////////
//drawCard Unit Test
////////////////////////

#include "dominion.h"
#include <stdio.h>

int failed = 0;

int myassert(int b,char* msg) {
  if (b == 0) {
    printf("drawCard Test Success: %s\n",msg);
    failed = 1;
  }
}

void checkasserts() {
  if (!failed) {
    printf ("drawCard Successful\n");
  }
}

int main()
{
	struct gameState g;
	int r;
	
	int k[10] = {smithy,adventurer,gardens,embargo,cutpurse,mine,ambassador,outpost,baron,tribute};
	
	initializeGame(2, k, 5, &g);
	
	r = drawCard(1, &g);
	myassert(r == 0, "drawCard, should return valid 0");
	
	checkasserts();	
}
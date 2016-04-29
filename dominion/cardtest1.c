////////////////////////
//smithy Unit Test
////////////////////////

#include "dominion.h"
#include <stdio.h>

int failed = 0;

int myassert(int b,char* msg) {
  if (b == 0) {
    printf("smithy Test Failure: %s\n",msg);
    failed = 1;
  }
}

void checkasserts() {
  if (!failed) {
    printf ("smithy Successful\n");
  }
}

int main()
{
	struct gameState g;
	int r;
	
	int k[10] = {smithy,adventurer,gardens,embargo,cutpurse,mine,ambassador,outpost,baron,tribute};

	initializeGame(2, k, 5, &g);
	
	r = cardEffect(7, 1, 1, 1, &g, 3, 0);
	myassert(r == 0, "buyCard, should return valid 0");

	checkasserts();
}
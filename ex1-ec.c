#include <stdio.h>

/* This is a comment. */
int main(int argc, char *argv[])
{
	int distance = 100;

	// this is also a comment
	printf("You are %d miles away.\n", distance);

	int distance_walked = 50;
	distance -= distance_walked;
	printf("You've walked %d miles and are now %d miles away.\n", distance_walked, distance);

	return 0; // akin to the result codes we see in our stack traces
}

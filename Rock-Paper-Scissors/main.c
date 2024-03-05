#include <stdio.h>
#include "outcome.h"

int main(void) {
	printf(output_result("rock", "scissors"));
	printf(output_result("rOCk", "scissors"));
	printf(output_result("1", "scissors"));
	printf(output_result("rk", "scissors"));
	printf(output_result("rock", "rock"));
}
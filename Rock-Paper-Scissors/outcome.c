#include <stdio.h>
#include <string.h> //for strcmp()
#include <ctype.h> //for tolower()

char* output_result(char* p1choice, char* p2choice) {
	//change input to lowercase
	char* p1 = (p1choice);
	char* p2 = (p2choice);


	printf("%s %s", p1, p2);
	if (strcmp(p1, p2) == 0) {
		return "Draw";
	}else if ((strcmp(p1, "rock") == 0 && strcmp(p2, "scissors") ==0) || (strcmp(p1, "scissors") == 0 && strcmp(p2, "paper") == 0) || (strcmp(p1, "paper") == 0 && strcmp(p2, "rock") == 0)) {
		return "Player1";
	}else if ((strcmp(p2, "rock") == 0 && strcmp(p1, "scissors") == 0) || (strcmp(p2, "scissors") == 0 && strcmp(p1, "paper") == 0) || (strcmp(p2, "paper") == 0 && strcmp(p1, "rock") == 0)) {
		return "Player2";
	}else {
		return "Invalid";
	}
}
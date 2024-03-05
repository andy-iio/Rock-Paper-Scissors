#include <stdio.h>
#include <string.h> //for strcmp()

char* output_result(char* p1choice, char* p2choice) {
	
	if (strcmp(p1choice, p2choice) == 0) {
		return "Draw";
	}else if ((strcmp(p1choice, "rock") == 0 && strcmp(p2choice, "scissors") ==0) || (strcmp(p1choice, "scissors") == 0 && strcmp(p2choice, "paper") == 0) || (strcmp(p1choice, "paper") == 0 && strcmp(p2choice, "rock") == 0)) {
		return "Player1";
	}else if ((strcmp(p2choice, "rock") == 0 && strcmp(p1choice, "scissors") == 0) || (strcmp(p2choice, "scissors") == 0 && strcmp(p1choice, "paper") == 0) || (strcmp(p2choice, "paper") == 0 && strcmp(p1choice, "rock") == 0)) {
		return "Player2";
	}else { //any other input that is not rock paper or scissors will return invalid (inc. capital letters)
		return "Invalid";
	}
}
#include <stdio.h>

char* output_result(char* p1choice, char* p2choice) {

	if (p1choice == p2choice) {
		return "Draw";
	}else if ((p1choice == "rock" && p2choice == "scissors") || (p1choice == "scissors" && p2choice == "paper") || (p1choice == "paper" && p2choice == "rock")) {
		return "Player1";
	}else if ((p2choice == "rock" && p1choice == "scissors") || (p2choice == "scissors" && p1choice == "paper") || (p2choice == "paper" && p1choice == "rock")) {
		return "Player2";
	}else {
		return "Invalid";
	}
}
#include <iostream>
#include <string>

int main() {
	std::string player1, player2, game_mode;
	int player1_score = 0, player2_score = 0;
	std::cout << "Welcome to Rock, Paper, Scissors!\n";
	std::cout << "The are two game modes; pvp(p) and player vs computer(c).\n" << "Enter the game mode (c or p): ";
	std::cin >> game_mode;
	if (game_mode == "p") {
		std::cout << "Player 1, enter your name: ";
		std::cin >> player1;
		std::cout << "Player 2, enter your name: ";
		std::cin >> player2;
		std::cout << "Enter 'r' for rock, 'p' for paper, and 's' for scissors.\n";
		std::cout << "Enter 'q' to quit.\n";
		std::string player1_choice, player2_choice;
		while (player1_choice != "q" && player2_choice != "q") {
			std::cout << player1 << ", enter your choice: ";
			std::cin >> player1_choice;
			std::cout << player2 << ", enter your choice: ";
			std::cin >> player2_choice;
			if (player1_choice == "r" && player2_choice == "s") {
				std::cout << player1 << " wins!\n";
				player1_score++;
			}
			else if (player1_choice == "r" && player2_choice == "p") {
				std::cout << player2 << " wins!\n";
				player2_score++;
			}
			else if (player1_choice == "s" && player2_choice == "r") {
				std::cout << player2 << " wins!\n";
				player2_score++;
			}
			else if (player1_choice == "s" && player2_choice == "p") {
				std::cout << player1 << " wins!\n";
				player1_score++;
			}
			else if (player1_choice == "p" && player2_choice == "r") {
				std::cout << player1 << " wins!\n";
				player1_score++;
			}
			else if (player1_choice == "p" && player2_choice == "s") {
				std::cout << player2 << " wins!\n";
				player2_score++;
			}
			else if (player1_choice == player2_choice) {
				std::cout << "It's a tie!\n";
			}
			else if (player1_choice == "q" || player2_choice == "q") {
				std::cout << "Thanks for playing!\n";
				break;
			}
			else {
				std::cout << "Invalid input.\n";
			}
		}
	
	}
	else if (game_mode == "c") {
		std::cout << "Enter your name: ";
		std::cin >> player1;
		std::cout << "Enter 'r' for rock, 'p' for paper, and 's' for scissors.\n";
		std::cout << "Enter 'q' to quit.\n";
		std::string player1_choice, player2_choice;
		while (player1_choice != "q") {
			std::cout << player1 << ", enter your choice: ";
			std::cin >> player1_choice;
			int random = rand() % 3;
			if (random == 0) {
				player2_choice = "r";
			}
			else if (random == 1) {
				player2_choice = "p";
			}
			else if (random == 2) {
				player2_choice = "s";
			}
			if (player1_choice == "r" && player2_choice == "s") {
				std::cout << player1 << " wins!\n";
				player1_score++;
			}
			else if (player1_choice == "r" && player2_choice == "p") {
				std::cout << "Computer wins!\n";
				player2_score++;
			}
			else if (player1_choice == "s" && player2_choice == "r") {
				std::cout << "Computer wins!\n";
				player2_score++;
			}
			else if (player1_choice == "s" && player2_choice == "p") {
				std::cout << player1 << " wins!\n";
				player1_score++;
			}
			else if (player1_choice == "p" && player2_choice == "r") {
				std::cout << player1 << " wins!\n";
				player1_score++;
			}
			else if (player1_choice == "p" && player2_choice == "s") {
				std::cout << "Computer wins!\n";
				player2_score++;
			}
			else if (player1_choice == player2_choice) {
				std::cout << "It's a tie!\n";
			}
			else if (player1_choice == "q") {
				std::cout << "Thanks for playing!\n";
				break;
			}
			else {
				std::cout << "Invalid input\n";
			}
		}
	}
	else {
		std::cout << "Invalid input.\n";
	}
	std::cout << "Final score:\n";
	std::cout << player1 << ": " << player1_score << "\n";
	std::cout << player2 << ": " << player2_score << "\n";
	return 0;
}


//A simple football quiz game by VISHALL 

#include <stdio.h>
#include <string.h>


int ask_question(char *question, char *correct_answer) {
    char answer[50];  // Array to store the user's answer
    
    // Ask the question and get the user's input
    printf("%s\n", question); 
    printf("Your answer: ");
    fgets(answer, sizeof(answer), stdin);  // Safe alternative to gets()
    
    // Remove newline character if present
    answer[strcspn(answer, "\n")] = 0;

    // Compare the user's answer with the correct answer
    if (strcmp(answer, correct_answer) == 0) {
        printf("Correct!\n\n");
        return 1;  // Return 1 if correct
    } else {
        printf("Wrong. The correct answer is: %s\n\n", correct_answer);
        return 0;  // Return 0 if wrong
    }
}


// Main function to run the quiz game
int main() {
    int score = 0;  // Variable to store the player's score
    char name[50];

    // Welcome message
    printf("Welcome to the Football Quiz!\n");
    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);  // Get the player's name
    name[strcspn(name, "\n")] = 0;  // Remove newline character

    // Ask the player three football-related questions
    printf("\nHello, %s! Let's start the quiz.\n\n", name);

    // Question 1
    score += ask_question("Who is the top scorer for Brazillian National Football Team ?", "Neymar Jr");

    // Question 2
    score += ask_question("Who has most UCL Goals ?", "Cristiano Ronaldo");

    // Question 3
    score += ask_question("Which club does Lionel Messi currently play for (as of 2024)?", "Inter Miami");

     // Question 4
    score += ask_question("Which club does Neymar Jr currently play for (as of 2024)?", "Al Hilal");

     // Question 5
    score += ask_question("Which club does Cristiano Ronaldo currently play for (as of 2024)?", "Al Nassr"); 

    // Question 6 
    score += ask_question("Who is the current manager of Manchester City ?", "Pep Guardiola");

    // Display the final score
    printf("Quiz Over! %s, your final score is: %d/5\n", name, score);

    // Provide feedback based on the score
    if (score == 5) {
        printf("Excellent! You know your football!\n"); 
        printf(" Thank you for playing the game\n");
    } else if (score == 4) {
        printf("Good job! Almost perfect!\n");
    } else if (score == 4) {
        printf("Good job! Almost perfect!\n");
    
    }  else if (score == 3) {

        printf("Not bad! You can do better.\n");
    } 
    
        else {
        printf("Keep practicing, you'll get better!\n"); 
        printf("Thank you for joining this game.");
    }

    return 0;
}



//C PROGRAMMING FOOTBALL QUIZ GAME BY VISHALL 
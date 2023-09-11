#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct Question {
    char question[100];
    char options[4][50];
    int correct_option;
};


void displayQuestion(struct Question q) {
    printf("%s\n", q.question);
    for (int i = 0; i < 4; i++) {
        printf("%d. %s\n", i + 1, q.options[i]);
    }
}

int main() {
    
    struct Question quiz[10];

    // Question 1
    strcpy(quiz[0].question, "What is the capital of France?");
    strcpy(quiz[0].options[0], "Berlin");
    strcpy(quiz[0].options[1], "London");
    strcpy(quiz[0].options[2], "Madrid");
    strcpy(quiz[0].options[3], "Paris");
    quiz[0].correct_option = 4;

    // Question 2
    strcpy(quiz[1].question, "Which planet is known as the Red Planet?");
    strcpy(quiz[1].options[0], "Mars");
    strcpy(quiz[1].options[1], "Venus");
    strcpy(quiz[1].options[2], "Earth");
    strcpy(quiz[1].options[3], "Jupiter");
    quiz[1].correct_option = 1;

    //Question 3
    strcpy(quiz[2].question, " Who wrote the play ""Romeo and Juliet""?");
    strcpy(quiz[2].options[0], "Charles Dickens");
    strcpy(quiz[2].options[1], "Jane Austen");
    strcpy(quiz[2].options[2], "William Shakespeare");
    strcpy(quiz[2].options[3], "Leo Tolstoy");
    quiz[1].correct_option = 2;

    //Question 4
    strcpy(quiz[3].question, "Which gas do plants absorb from the atmosphere during photosynthesis?");
    strcpy(quiz[3].options[0], "Oxygen");
    strcpy(quiz[3].options[1], "Nitrogen");
    strcpy(quiz[3].options[2], "Carbon dioxide");
    strcpy(quiz[3].options[3], "Hydrogen");
    quiz[1].correct_option = 2;

    //Question 5
    strcpy(quiz[4].question, "What is the largest planet in our solar system?");
    strcpy(quiz[4].options[0], "Mars");
    strcpy(quiz[4].options[1], "Venus");
    strcpy(quiz[4].options[2], "Earth");
    strcpy(quiz[4].options[3], "Jupiter");
    quiz[1].correct_option = 3;

    //Question 6
    strcpy(quiz[5].question, "Who is known as the ""Father of Modern Physics""?");
    strcpy(quiz[5].options[0], "Isaac Newton");
    strcpy(quiz[5].options[1], "Albert Einstein");
    strcpy(quiz[5].options[2], "Galileo Galilei");
    strcpy(quiz[5].options[3], "Nikola Tesla");
    quiz[1].correct_option = 1;
    //Question 7
    strcpy(quiz[6].question, "What is the chemical symbol for gold?");
    strcpy(quiz[6].options[0], "Go");
    strcpy(quiz[6].options[1], "Gl");
    strcpy(quiz[6].options[2], "Au");
    strcpy(quiz[6].options[3], "Ag");
    quiz[1].correct_option = 2;

    //Question 8
    strcpy(quiz[7].question, "Who painted the Mona Lisa?");
    strcpy(quiz[7].options[0], "Vincent van Gogh");
    strcpy(quiz[7].options[1], "Pablo Picasso");
    strcpy(quiz[7].options[2], "Leonardo da Vinci");
    strcpy(quiz[7].options[3], " Michelangelo");
    quiz[1].correct_option = 2;
    //Question 9
    strcpy(quiz[8].question, "What is the largest mammal on Earth?");
    strcpy(quiz[8].options[0], "African elephant");
    strcpy(quiz[8].options[1], "Blue whale");
    strcpy(quiz[8].options[2], "Giraffe");
    strcpy(quiz[8].options[3], "Polar bear");
    quiz[1].correct_option = 1;

    // Question 10

    strcpy(quiz[9].question, "Which of the following is a primary color in additive color mixing?");
    strcpy(quiz[9].options[0], "Red");
    strcpy(quiz[9].options[1], "Yellow");
    strcpy(quiz[9].options[2], "Blue");
    strcpy(quiz[9].options[3], "Green");
    quiz[1].correct_option = 2;





    int score = 0;

    
    for (int i = 0; i < 10; i++) {
        printf("\nQuestion %d:\n", i + 1);
        displayQuestion(quiz[i]);

        int user_answer;
        printf("Enter your answer (1-4): ");
        scanf("%d", &user_answer);

        if (user_answer == quiz[i].correct_option) {
            printf("Correct!\n");
            score++;
        } else {
            printf("Wrong. The correct answer is %d. %s\n", quiz[i].correct_option, quiz[i].options[quiz[i].correct_option - 1]);
        }
    }

    
    printf("\nQuiz completed! Your score is: %d/10\n", score);

    return 0;
}

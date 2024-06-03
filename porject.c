#include <stdio.h>

void displayQuestion(int questionNumber, char *question, char *option1, char *option2, char *option3, char *option4) {
    printf("Question %d: %s\n", questionNumber, question);
    printf("A. %s\n", option1);
    printf("B. %s\n", option2);
    printf("C. %s\n", option3);
    printf("D. %s\n", option4);
}


char getAnswer() {
    char answer;
    printf("Your answer (A/B/C/D): ");
    scanf(" %c", &answer);
    return answer;
}

int checkAnswer(char userAnswer, char correctAnswer) {
    return (userAnswer == correctAnswer);
}

int main() {
    int i, a, score = 0;
    char name[200];

    printf("\t\t\t\t -: WELCOME TO THE QUIZ GAME :- \n\n");
    printf("\t\t\t \n 1. EASY MODE \t\t\t \n 2.  MEDIUM MODE\t\t\n 3. HARD MODE \t\t\n\n 0. QUIT THE QUIZ :\t\t\t\n ");
    printf("\t\t\t\nEnter your choice: ");
    scanf("%d", &i);

    switch (i) {
        case 1:
            // easy mode ko qquestion 
            printf("\n \t\t\t ENTER YOUR NAME: ");
            scanf("%s", &name);
            printf("\n\t\t\t PLAYER NAME IS %s\n", name);

            // Question 1
            displayQuestion(1, "Who is the Father of the Computer??", "Charles Babbage", "Thomas Edison", "Albert Einstein", "Isaac Newton");
            if (checkAnswer(getAnswer(), 'A')) {
                printf("Correct!\n");
                score++;
            } else {
                printf("Incorrect. The correct answer is A. Charles Babbage \n");
            }

            // Question 2 
            displayQuestion(2, "What is the full form of E-Mail?","Electric Mail", "Exchange Mail", "Electronic Mail", "Engagement Mail");
            if (checkAnswer(getAnswer(), 'C')) {
                printf("Correct!\n");
                score++;
            } else {
                printf("Incorrect. The correct answer is C. Electronic Mail \n");
            }
            
           
            // Question 3
            displayQuestion(3, "In the virtual world, WWW stands for?", "World Without Windows", "World Wide Web", "World Wide Web Applications", "World Wide Warehouse");
            if (checkAnswer(getAnswer(), 'B')) {
                printf("Correct!\n");
                score++;
            } else {
                printf("Incorrect. The correct answer is B. World Wide Web\n");
            }

            // Question 4
            displayQuestion(4, "Which of the following is not a programming language?", "Python", "Java", "HTML", "CPU");
            if (checkAnswer(getAnswer(), 'D')) {
                printf("Correct!\n");
                score++;
            } else {
                printf("Incorrect. The correct answer is D. CPU\n");
            }

            // Question 5
            displayQuestion(5, "Who invented Compact Disc??", "James T. Russell", "Fujio Masuoka", "Thomas Edison", "Martin Cooper");
            if (checkAnswer(getAnswer(), 'A')) {
                printf("Correct!\n");
                score++;
            } else {
                printf("Incorrect. The correct answer is A. James T. Russelr\n");
            }
            break;

        case 2:
        	printf("\n \t\t\t ENTER YOUR NAME: ");
            scanf("%s", &name);
            printf("\n\t\t\t PLAYER NAME IS %s\n", name);

        	
        	
            // Medium level ko  Quiz
         displayQuestion(1, "Which of the following user-defined header file extension used in c++?", "hg", "cpp", "h", "hf");
            if (checkAnswer(getAnswer(), 'C')) {
                printf("Correct!\n");
                score++;
            } else {
                printf("Incorrect. The correct answer is C. h");
            }

            // Question 2 
            displayQuestion(2, "Which of the following approach is used by C++?", "Left-right", "Right-left", "Bottom-up", "Top-down");
            if (checkAnswer(getAnswer(), 'C')) {
                printf("Correct!\n");
                score++;
            } else {
                printf("Incorrect. The correct answer is C. Bottom-up\n");
            }
            
            // Additional questions
            // Question 3
            displayQuestion(3, "Storage capacity of magnetic disk depends on ", "isk pack in disk surface    ", "tracks per inch of surfac", " bits per inch of track", " All of the above");
            if (checkAnswer(getAnswer(), 'D')) {
                printf("Correct!\n");
                score++;
            } else {
                printf("Incorrect. The correct answer is D.  All of the above\n");
            }

            // Question 4
            displayQuestion(4, "The first computer was programmed using .......", "Assembly language", "Machine language", " Spaghetti code", " Source code");
            if (checkAnswer(getAnswer(), 'B')) {
                printf("Correct!\n");
                score++;
            } else {
                printf("Incorrect. The correct answer is B. Machine language\n");
            }

            // Question 5
            displayQuestion(5, "A computer consists of?", "motherboard  ", "hard disk drive", "central processing unit ", "All of the above");
            if (checkAnswer(getAnswer(), 'D')) {
                printf("Correct!\n");
                score++;
            } else {
                printf("Incorrect. The correct answer is D. All of the above\n");
            }
            break;
            
            
           
            
            case 3:
            	   printf("\n \t\t\t ENTER YOUR NAME: ");
            scanf("%s", &name);
            printf("\n\t\t\t PLAYER NAME IS %s\n", name);
            	
            	
            	  // MAth ko question

            // Question 1
            displayQuestion(1, "The smallest unit in a digital system is a........", " Bit", " Byte", "Character  ", "Kilobyte");
            if (checkAnswer(getAnswer(), 'A')) {
                printf("Correct!\n");
                score++;
            } else {
                printf("Incorrect. The correct answer is A. Bit");
            }

            // Question 2 
            displayQuestion(2, "If a triangle has angles measuring 45°, 45°, and 90°, what type of triangle is it?", "Equilateral triangle", "Isosceles triangle", "Scalene triangle", "Right triangle");
            if (checkAnswer(getAnswer(), 'D')) {
                printf("Correct!\n");
                score++;
            } else {
                printf("Incorrect. The correct answer is D \n");
            }
            
            // Additional questions
            // Question 3
            displayQuestion(3, "Solve the equation: 2x + 5 = 15", "x = 5", " x = 10", "x = 7.5", " x = 6");
            if (checkAnswer(getAnswer(), 'B')) {
                printf("Correct!\n");
                score++;
            } else {
                printf("Incorrect. The correct answer is B. x=10 \n");
            }

            // Question 4
            displayQuestion(4, "What is the area of a rectangle with length 8 cm and width 5 cm??", "13 cm²", "30 cm²", "40 cm²", "45 cm²");
            if (checkAnswer(getAnswer(), 'B')) {
                printf("Correct!\n");
                score++;
            } else {
                printf("Incorrect. The correct answer is B. 40 cm² \n");
            }

            // Question 5
            displayQuestion(5, "........ is approximately one billion bytes", " Megabyte", "Gigabyte", "  Terabyte    ", " None of these cm");
            if (checkAnswer(getAnswer(), 'A')) {
                printf("Correct!\n");
                score++;
            } else {
                printf("Incorrect. The correct answer is A. 12.56 cm\n");
            }
            break;
            	

        case 0:
            // Quit
            printf("\n\t\t\t Exiting the quiz...\n");
            break;

        default:
            printf("\n\n\t\t\t Invalid input !!!\n");
            break;
    }

    if (i == 1 || i == 2 || i==3)
        printf("\n   %s final score is: %d out of 5\n", name,score);

    return 0;
}
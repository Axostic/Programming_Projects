#include <stdio.h>

#define STUDENTS_AND_QUIZZES 5

/*
Modify Programming Project 7 so that it prompts for five quiz grades for
each of five students, then computes the total score and average score
for each student, and the average score, high score, and low score for
each quiz.
*/

int main(void)
{
	int highest_grade = 0, lowest_grade = 100, total_score = 0,
		student_num, quiz_num, square_matrix[STUDENTS_AND_QUIZZES][STUDENTS_AND_QUIZZES] = {0};

	for(student_num = 0; student_num < STUDENTS_AND_QUIZZES; student_num++)
	{
		printf("Enter Student %d Quiz Grades: ", student_num+1);
		for(quiz_num = 0; quiz_num < STUDENTS_AND_QUIZZES; quiz_num++)
			scanf("%d", &square_matrix[student_num][quiz_num]);
	}

	printf("\nStudent Data\n------------\n");
	for(student_num = 0; student_num < STUDENTS_AND_QUIZZES; student_num++)
	{
		for(quiz_num = 0; quiz_num < STUDENTS_AND_QUIZZES; quiz_num++)
			total_score += square_matrix[student_num][quiz_num];
		printf("Student #%d - Total: %d  Average: %d%%\n", student_num+1, total_score, total_score / STUDENTS_AND_QUIZZES);
		total_score = 0;
	}

	total_score = 0;

	printf("\nQuiz Data\n---------\n");
	for(quiz_num = 0; quiz_num < STUDENTS_AND_QUIZZES; quiz_num++)
	{
		for(student_num = 0; student_num < STUDENTS_AND_QUIZZES; student_num++)
		{
			total_score += square_matrix[student_num][quiz_num];
			if(square_matrix[student_num][quiz_num] > highest_grade)
				highest_grade = square_matrix[student_num][quiz_num];
			if(square_matrix[student_num][quiz_num] < lowest_grade)
				lowest_grade = square_matrix[student_num][quiz_num];
		}
		printf("Quiz #%d - Average: %d%%  Lowest: %d%%  Highest: %d%%\n",
			quiz_num+1, total_score / STUDENTS_AND_QUIZZES, lowest_grade, highest_grade);
		total_score = 0;
		highest_grade = 0;
		lowest_grade = 100;
	}

	return 0;
}
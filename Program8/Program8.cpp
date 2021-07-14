//***************************************************************
//
//  Developer:         Jessica Page
//
//  Program #:         Program 8
//
//  File Name:         Program8.cpp
//
//  Course:            COSC 1337 Programming Fundamentals II 
//
//  Due Date:          7/14/2021
//
//  Instructor:        Prof. Fred Kumi 
//
//  Chapter:           Chapter 7, 8 & 9
//
//  Description:
//     <An explanation of what the program is designed to do>
//
//***************************************************************

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>

using namespace std;

void developerInfo();
void multiplicationQuestion();
string randomResponses(bool);

//***************************************************************
//
//  Function:     main
// 
//  Description:  The main function of the program
//
//  Parameters:   None
//
//  Returns:      Zero (0) 
//
//**************************************************************
int main()
{
    developerInfo();    // Do not delete this statement

     //random generator seed
    unsigned seed = time(0);
    srand(seed);

    multiplicationQuestion();

    system("PAUSE");
    return 0;
}

//***************************************************************
//
//  Function:     multiplicationQuestion
// 
//  Description:  Generates 2 positive integers and quizes the user 5 times
//
//  Parameters:   none
//
//  Returns:      none
//
//**************************************************************

void multiplicationQuestion()
{
    int userAnswer = 0;
    for (int i = 0; i < 5; i++)
    {
        bool isCorrect = false;
        int numA = rand() % 9 + 1;
        int numB = rand() % 9 + 1;
        int product = numA * numB;
        cout << "How much is " << numA << " times " << numB << "?" << endl;
        cin >> userAnswer;

        while (userAnswer != product)
        {
            cout << randomResponses(isCorrect) << endl;
            cout << "How much is " << numA << " times " << numB << "?" << endl;
            cin >> userAnswer;
        }
        isCorrect = true;
        cout << randomResponses(isCorrect) << endl;
    }
}

//***************************************************************
//
//  Function:     randomResponses
// 
//  Description:  Selects a random response based on a correct or incorrect answer
//
//  Parameters:   Bool userAnswer set from the multiplicationQuestion() method
//
//  Returns:      String response to tell the user a correct or incorrect answer
//
//**************************************************************
string randomResponses(bool userAnswer)
{
    string rightResponses[] = {
    "Excellent!",
    "Very good!",
    "Nice work!",
    "Way to go!",
    "Keep up the good work!"
    };

    string wrongResponses[] = {
        "That is incorrect!",
        "No. Please try again!",
        "Wrong, Try once more!",
        "No. Don’t give up!",
        "Incorrect. Keep trying!"
    };
    if (userAnswer)
    {
        int index = rand() % 5;
        return rightResponses[index];
    }
    else
    {
        int index = rand() % 5;
        return wrongResponses[index];
    }

}

//***************************************************************
//
//  Function:     developerInfo
// 
//  Description:  The developer's information
//
//  Parameters:   None
//
//  Returns:      N/A 
//
//**************************************************************
void developerInfo()
{
    cout << "Name:    Jessica Page" << endl;
    cout << "Course:  Programming Fundamentals II" << endl;
    cout << "Program: 8"
        << endl
        << endl;
} // End of developer
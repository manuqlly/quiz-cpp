#include<iostream>

int main()
{
    std::string questions[] = {"1. What year was C++ Created? ",
                                "2. Who invented C++? ",
                                "3. What is the predeccesor of C++?",
                                "4. Is the Earth Flat? "};
            
    std::string options[][4] = {    {"A. 1969", "B. 1975", "C. 1985", "D. 1989"},
                                    {"A. Guido Van Russum", "B. Bjarne Strastroup", "C. John carmack", "D. mark Zuckerberg"},
                                    {"A. C", "B. C+", "C. C--", "D. B++"},
                                    {"A. Yes", "B. NO", "C. Sometimes", "D. Whats Earth?"}
                                };

    char answerKey[] = {'C', 'B', 'A', 'B'};

    int size = sizeof(questions)/sizeof(questions[0]);
    
    char guess;
    int score;

    for(int i = 0; i < size; i++)
    {
        std::cout<<"*****************************************\n";
        std::cout<< questions[i]<<'\n';
        std::cout<<"*****************************************\n";

        for(int j = 0; j < sizeof(options[i])/sizeof(options[i][0]); j++)
        {
            std::cout<< options[i][j]<<'\n';
        }

        std::cin >> guess;
        guess = toupper(guess);

        if(guess == answerKey[i])
            {
                std::cout<<"CORRECT\n";
                score++;
            }
        else
            {
                std::cout<<"Incorrect\n";
                std::cout<<"Correct answer is "<< answerKey[i]<<'\n';
            }            
    }

        std::cout<<"*****************************************\n";
        std::cout<<"*                RESULTS                *\n";
        std::cout<<"*****************************************\n";        
        std::cout<<"CORRECT ANSWERS: "<< score<<'\n';
        std::cout<<"# of questions " << size<<'\n';
        std::cout<<"Score: "<< (score/(double)size)*100<<"%";
    return 0;
}
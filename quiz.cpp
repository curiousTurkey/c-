#include <iostream>
#include <array>
using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
    int counter = 0, score = 0;
    char choice;
    std::array<string, 4> questions = {
        "1. What is the capital city of India?\n",
        "2. Who is the father of the nation?\n",
        "3. What year was the movie 2012 was released?\n",
        "4. Who is the predecessor of C++?\n"};
    std::array<std::array<string, 4>, 4> options = {{{"A. Mumbai", "B. Delhi", "C. Hyderabad", "D. Banglore"},
                                                     {"A. Mahatma Gandi", "B. Bankin chandra chaterjee", "C. Subash Chandra Bose", "D. Jawaharlal Nehru"},
                                                     {"A. 2010", "B. 2012", "C. 2011", "D. 2009"},
                                                     {"A. Java", "B. C", "C. Javascript", "D. Rust"}}};
    std::array<char, 4> answerKey = {'B', 'A', 'A', 'B'};

    cout << "\n*********************QUIZ*************************\n";
    for(int i = 0; i < 4; i++){
        cout << questions[i] << endl;
        for(int j = 0; j < 4; j++){
            cout << options[i][j] << endl;
        }
        cin >> choice;
        choice = toupper(choice);
        if(choice != 'A' && choice != 'B' && choice != 'C' && choice != 'D'){
            cout << "invalid choice" << choice << endl;
        } else {
            if(choice == answerKey[i]){
                cout << "Correct answer !!" << endl;
                ++score;
            } else {
                cout << "Wrong answer!" << endl;
            }
        }
    }
    cout << "Total score  = " << score << endl;
    cout << "Percentage : " << ((double)score/4) * 100;
    return 0;
}
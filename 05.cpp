// Math and Algorithms + More
// Algorithm: Set of ordered instructions, like a recipe

// Movie score proble

#include <iostream>
#include <string>
using namespace std;

int main() {

    // Get movie title and scores from the user
    string movie_name = "";
    int rotton_tomatoes_score = 0;
    int metacritic_score = 0;

    cout << "Enter the name of the movie: ";
    getline(cin, movie_name);                         // getline(from, to) -> for when the input is more than one word

    cout << "Enter the Rotten Tomatos score: ";
    cin >> rotton_tomatoes_score;

    cout << "Enter the Metacritic score: ";
    cin >> metacritic_score;

    // Find the result and display on a ten-point cale



    return 0;
}




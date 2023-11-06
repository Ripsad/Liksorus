#include <iostream>
#include <fstream>
using namespace std;

void moveIngredients(int n, int from, int to, int aux, ofstream& outputFile) {
    if (n == 1) {
        outputFile << "Ingredient " << n << " move from " << from << " to " << to << endl;
        return;
    }
    
    moveIngredients(n - 1, from, aux, to, outputFile);
    outputFile << "Ingredient " << n << " move from " << from << " to " << to << endl;
    moveIngredients(n - 1, aux, to, from, outputFile);
}

int main() {
    int n;

    ifstream inputFile("input.txt");
    inputFile >> n;
    inputFile.close();
    
    ofstream outputFile("output.txt");
    moveIngredients(n, 1, 3, 2, outputFile);
    outputFile.close();

    return 0;
}

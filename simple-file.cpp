#include <iostream>
#include <fstream>  // For file handling
#include <string>
using namespace std;

int main() {
    string text;
    ofstream outputFile("example.txt");  // Create and open a file for writing

    if (!outputFile) {
        cout << "Error opening file for writing!\n";
        return 1;
    }

    cout << "Enter text to write to the file (type 'exit' to stop):\n";
    
    // Write the text entered by the user to the file
    while (true) {
        getline(cin, text);
        if (text == "exit") {
            break;
        }
        outputFile << text << endl;
    }

    outputFile.close();  // Close the file after writing

    ifstream inputFile("example.txt");  // Open the file for reading

    if (!inputFile) {
        cout << "Error opening file for reading!\n";
        return 1;
    }

    cout << "\nContents of the file:\n";
    while (getline(inputFile, text)) {
        cout << text << endl;
    }

    inputFile.close();  // Close the file after reading

    return 0;
}

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    // File name
    string filename = "details.txt";

    // Open file in write mode
    ofstream outFile(filename, ios::app); // Append mode

    // Check if the file is open
    if (!outFile) {
        cerr << "Error opening file for writing!" << endl;
        return 1;
    }

    // Write details to the file
    outFile << "Name: Harshit Singh\n";
    outFile << "Course: Bachelor of Technology in Computer Science\n";
    outFile << "University: Lovely Professional University\n";
    outFile << "Career Goal: Cyber Security Engineer\n";
    outFile.close(); // Close the file after writing

    // Now read from the file and print the details
    ifstream inFile(filename);

    // Check if the file is open
    if (!inFile) {
        cerr << "Error opening file for reading!" << endl;
        return 1;
    }

    // Print the details
    string line;
    cout << "Details from the file:\n";
    while (getline(inFile, line)) {
        cout << line << endl;
    }

    inFile.close(); // Close the file after reading

    return 0;
}

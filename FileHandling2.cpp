#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    // File name
    string filename = "sample.txt";

    // Open the file in read mode
    ifstream inFile(filename);

    // Check if the file is open
    if (!inFile) {
        cerr << "Error opening file!" << endl;
        return 1;
    }

    // Read and print the contents of the file
    string line;
    cout << "Contents of " << filename << ":\n";
    while (getline(inFile, line)) {
        cout << line << endl;
    }

    inFile.close(); // Close the file after reading
    return 0;
}

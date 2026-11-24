#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {

    ifstream inFile("fruit.txt");
    string line;

    if (inFile.is_open()) {
        cout << "File contents:" << endl;
        while (getline(inFile, line)) {
            cout << line << endl;
        }
        inFile.close();
    } else {
        cout << "Error opening file for reading!" << endl;
        return 1;
    }

    ofstream outFile("fruit.txt", ios::app);
    if (outFile.is_open()) {
        outFile << "\nFresh Fruits";
        outFile.close();
        cout << "\n'Fresh Fruits' has been added to fruit.txt." << endl;
    } else {
        cout << "Error opening file for appending!" << endl;
    }

    return 0;
}

#include <iostream>
#include <fstream>
#include <vector>
#include <string>

using namespace std;

int main() {
        cout << "Hello WOrld!\n";
        ifstream file("/Users/khgrewal/PycharmProjects/Cal-Poly-CSC-490/unique-72.txt");

        vector<string> vec;
        string line;
        while (getline(file,line)) {
        stoi(line);
        vec.push_back(line);
        }
        int num = vec.size();
        for (int i = 0; i < num; i++) cout << vec.at(i) <<endl;
        file.close();

        

}
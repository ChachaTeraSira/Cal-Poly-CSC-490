#include <iostream>
#include <fstream>
#include <vector>
#include <string>

using namespace std;

int main() {
        ifstream file("/Users/khgrewal/PycharmProjects/Cal-Poly-CSC-490/unique-72.txt");

        vector<int_fast32_t> vec;
        string line;
        int num_line = 0;
        while (getline(file,line)) {
        num_line = stoi(line);
        vec.push_back(num_line);
        }
        file.close();

        int max=0,mid=0,min=0;
        max = vec.size();
        mid = (max+min)/2;

        while (true) {
            mid = (max + min) / 2;
            if (mid%2==0) {
                if (vec.at(mid-1) == vec.at(mid)) {
                    max = mid - 2;
                }
                else if (vec.at(mid+1) == vec.at(mid)) {
                    min = mid + 2;
                }
                else {
                    cout << vec.at(mid) << endl;
                    break;
                }
            }
            if (mid%2==1) {
                if (vec.at(mid+1) == vec.at(mid)) {
                    max = mid - 1;
                }
                else if (vec.at(mid-1) == vec.at(mid)) {
                    min = mid+1;
                }
            }
        }

}
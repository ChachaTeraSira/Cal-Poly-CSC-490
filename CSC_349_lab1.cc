#include <iostream>
#include <fstream>
#include <vector>
#include <string>

using namespace std;

int main() {
        cout << "Hello WOrld!\n";
        ifstream file("/Users/khgrewal/PycharmProjects/Cal-Poly-CSC-490/unique-72.txt");

        vector<int_fast32_t> vec;
        string line;
        int num_line = 0;
        while (getline(file,line)) {
        num_line = stoi(line);
        vec.push_back(num_line);
        }
        int size = vec.size();
        for (int i = 0; i < size; i++) cout << vec.at(i) << " ";
        cout << endl;
        file.close();

        int max=0,mid=0,min=0;
        max = vec.size();
        mid = (max+min)/2;
        //cout << max << "-" << mid << endl; 
        int index_1 = 0, index_2 = 0, i=0,j=0;
        index_1 = vec.at(0);
        index_2 = vec.at(1);
        cout << index_1 << index_2 << endl;



        while (true) {
            if (mid%2==0) {
                if (vec.at(mid-1) == vec.at(mid)) {
                    cout << "it's on left\n";
                }
                else if (vec.at(mid+1) == vec.at(mid)) {
                    cout << "it's on right\n";
                    max = mid+1;
                    mid = (max+min)/2;
                }
                else {
                    cout << mid << endl;
                    break;
                }
            }
            if (mid%2==1) {
                if (vec.at(mid-1) == vec.at(mid)) {
                    cout << "it's on right(odd)\n";
                    max = mid + 2;
                    mid = (max+min)/2;
                    cout << max << "-" << mid << endl;
                    break;
                }
                // else if (vec.at(mid+1) == vec.at(mid)) {
                //     cout << "it's on left\n";
                //     max = mid+1;
                //     mid = (max+min)/2;
                // }
                else {
                    cout << mid << endl;
                    break;
                }
            }
        }

}
#include <set>
#include <vector>
#include <iostream>
using namespace std;
int main()
{
    set<vector<int>> set_of_vectors;
    // Initializing some vectors
    vector<int> data_1{10, 20, 30, 40};
    vector<int> data_2{5, 10, 15};
    vector<int> data_3{1, 3, 5, 7, 9, 11, 13};
    vector<int> data_4{5, 10, 15};      // duplicate data
    vector<int> data_5{10, 20, 30, 40}; // duplicate data

    // Inserting vectors into set
    set_of_vectors.insert(data_1);
    set_of_vectors.insert(data_2);
    set_of_vectors.insert(data_3);
    set_of_vectors.insert(data_4);
    set_of_vectors.insert(data_5);

    // vector of vectors
    vector<vector<int>> ans;

    // print the element of the vector
    for (auto it = set_of_vectors.begin(); it != set_of_vectors.end(); it++)
    {
        vector<int> v = *it;
        ans.push_back(v); // pushing it into vector of vectors
        for (int i = 0; i < v.size(); i++)
        {
            cout << v[i] << " ";
        }
        cout << endl;
    }
    cout << "-----------------------------\n";
    // print the 2D vector
    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j < ans[i].size(); j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> number;
    number = {1, 2, 4, 5, 6, 7, 2, 2, 5, 67, 4, 32, 42, 34};
    size_t arrSize = number.size();
    int *p = &number[0];
    for (size_t i = 0; i < arrSize; i++)
    {
        cout << *p++ << endl;
    }
    cout << "printed array";
    return 0;
}
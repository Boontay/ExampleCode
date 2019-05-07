#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> v;
    int i;

    cout << "vector size " << v.size() << endl;

    for (int i = 0; i < 5; i++)
    {
        v.push_back(i);
    }

    cout << "extended vector size " << v.size() << endl;

    for (int i = 0; i < v.size(); i++)
    {
        cout << "value of vec [" << i << "] : " << v[i] << endl;
    }

    vector<int>::iterator it = v.begin();

    while (it != v.end())
    {
        cout << "value of v " << *it << endl;
        it++;
    }

    return 0;
}

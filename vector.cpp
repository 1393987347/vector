#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
    vector <int> v1;
    v1.push_back(34);
    v1.push_back(54);
    v1.push_back(83);
    v1.push_back(53);
    v1.push_back(75);
    v1.push_back(43);

    cout << v1[1] << endl;
    v1[2]++;
    cout << v1[2] << endl;
    cout << v1.size() << endl;
    cout << v1.capacity() << endl;
    //cout << v1.push_back() << endl;     调用没有匹配的函数
    cout << v1.front() << endl;
    cout << v1.back()<< endl;
    cout << v1.data() << endl;
}
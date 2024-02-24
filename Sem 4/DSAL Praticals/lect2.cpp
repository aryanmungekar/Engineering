#include <iostream>
using namespace std;

viod search(string key)
{

    int index = hashFunction(key);
    while (h[index][0] != key & h{index}[0] != "---")
        index = (index + 1) % size;

    if (h[index][0] == key)
        cout << "string '" << key << " found at index " << index <<
}

void remove(string key)
{
    int index = hashFunction(key);
    while (h[index][0] != key && h[index][0] != "---")
         index = (index+1)% size;
    if (h[index][0] == key)
    {
        h[index][0] = "===";
        h[index][1] = "---";
        cout << "String '" << key << "' Delete from index"
    }


}

int main()
{

    Hashtable ht;
    string Key, value;
    cout <<

    return 0;
}
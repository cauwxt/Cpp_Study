#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    if (argc != 1)
    {
        for (size_t i = 0; i < argc; i++)
        {
            cout << "parm" << i << ":" << argv[i] << endl;
        }
        
    } 
    else{
        cout << "参数缺失" << endl;
    }
    return 0;
}

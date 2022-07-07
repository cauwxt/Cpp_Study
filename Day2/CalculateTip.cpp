#include<regex>
#include<iostream>
using namespace std;
class methord {
private:
    float bill;
    float proportion;
public:
    int calcuateTip();
};
int methord::calcuateTip()
{
    int ret = 0;
    float sum = 0;
    // if (proportion > 1 || proportion )
    // {
    //     /* code */
    // }
    cout << "Please enter bill amount" << endl;
    cin >> bill;
    cout << "Please enter tip ratio" << endl;
    cin >> proportion;
    sum = bill + proportion * bill;
    cout << "Total payment " << sum << "  yuan" << endl;
    return ret;
}

int main(int argc, char const *argv[])
{
    
    int ret;
    methord computeTip;
    ret = computeTip.calcuateTip();
    return 0;
}

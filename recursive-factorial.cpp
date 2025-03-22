#include <iostream>

using namespace std;

int fact (int n)
{
    if(n==0) return 1;
    return n * fact(n - 1);
}
int main()
{
    int c;
    cout << "Please enter the number: ";
    cin >> c;
    cout<< c;
    cout<<"! = "<< fact(c);

    return 0;

}

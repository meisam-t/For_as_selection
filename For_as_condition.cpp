#include <iostream>

using namespace std;
int x;
int y;
int main()
{
    cout << "Hello World!" << endl;

    x=40;
    y=20;
    if (x>y){
        cout << "if condition . x is greater than y " <<endl;

    }else {
        cout << "if condition, Y is greater than x" <<endl;

    }


    for (;x<y;x=y){
        cout << "for condition, Y is greater than x" <<endl;
    }

    for (;y<x;x=y){
    cout << "for condition condition, X is greater than Y" <<endl;
    }



    return 0;
}

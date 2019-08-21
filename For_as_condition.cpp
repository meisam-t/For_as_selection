#include <iostream>

using namespace std;
int x;
int y;
int main()
{
    cout << "Hello World!" << endl;

    x=40;
    y=20;
    
    // if condition to find the greater number 
    if (x>y){
        cout << "if condition . x is greater than y " <<endl;

    }else {
        cout << "if condition, Y is greater than x" <<endl;

    }

    // use for loops to find the geater number 
    for (;x<y;x=y){
        cout << "for condition, Y is greater than x" <<endl;
    }

    for (;y<x;x=y){
    cout << "for condition condition, X is greater than Y" <<endl;
    }
    return 0;
}

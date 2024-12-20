// cout << "Press Enter 3 times to reveal your future.";
// cout << "You will get A in this 261102.";
#include<iostream>
#include<cstdlib>
#include<ctime>
#include<string>
using namespace std;

int grade;

int main() {
    srand(time(0));
    int i=0;
    cout << "Press Enter 3 times to reveal your future."<< endl;
    while(i<3){
        cin.get();
        i++;
    }
    grade = rand()%9;
    string s[] = {"A","B+","B","C+","C","D+","D","F","W"};
    cout << "You will get " << s[grade] << " in this 261102.";
}
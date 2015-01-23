/* 
 * File:   main.cpp
 * Author: Jorge Haro
 * Created on January 22, 2015, 6:36 PM
 * Write a program that reads two numbers from the user, 
 * adds them together, and then outputs the answer. The
 *  program should use two functions: A function named ReadNumber() should be used to get an integer 
 * from the user, and a function named “WriteAnswer” should be used to output the answer. 
 * You do not need to write a function to do the adding.
 */

#include <iostream>
int ReadNumber()
{
    using namespace std;
    cout << "Enter a number: ";
    int x;
    cin >> x;
    return x;
}
 
void WriteAnswer(int x)
{
    using namespace std;
    cout << "The answer is " << x << endl;
}
 
int main()
{
    int x = ReadNumber();
    int y = ReadNumber();
    WriteAnswer(x+y);
    return 0;
}

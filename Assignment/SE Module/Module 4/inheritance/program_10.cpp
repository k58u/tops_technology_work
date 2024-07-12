// Write a program to concatenate the two strings using Operator Overloading

#include<iostream>
#include<string.h>
using namespace std;
class Addstring {
    public:
    char s1[25],s2[25];
    Addstring(char str1[],char str2[]){
        strcpy(this->s1,str1);
        strcpy(this->s2,str2);
    }
    void operator+(){
cout<<"\nConcatention:"<<strcat(s1,s2);
    }
};
int main()
{
    char str1[]="Hello";
    char str2[]="World";
    Addstring a1(str1,str2);
    +a1;
}
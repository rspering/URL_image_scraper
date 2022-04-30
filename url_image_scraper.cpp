#include <iostream>
#include <cstdio>
#include <string>
#include <regex>
using namespace std;

int main(int argc, char** argv)
{
    if(argc == 1)
    {
        cout << "No arguments given" << endl;
    }

    for(int i = 1; i < argc; i++)
    {
        string htmlFile = argv[i];
        int size = htmlFile.length();
        if(htmlFile.substr(size-5,size) == ".html")
        {
            cout << htmlFile << endl;
            system("grep -Po '<\s*a[^>]*>(.*?)<\s*/\s*a>' " + htmlFile);
        }
        else
        {
            cout << argv[i] << ": not an HTML file" << endl;
        }
    }

    return 0;
}
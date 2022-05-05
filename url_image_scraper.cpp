#include <iostream>
#include <string>
#include <regex>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string wgetCommand = "wget -O downloadedSite.html ";
    string website = "";

    const char* grep_atag = "grep -Po '(?<=href=\").+\"' downloadedSite.html";
    const char* grep_imgtag = "grep -Po '?<=<img src=\").+\"' downloadedSite.html";
    const char* grep_imgtagAlt = "grep -Po '(?<=alt=\").+\"' downloadedSite.html";
    const char* command = nullptr;

    // gets url from user
    cout << "Enter a website URL:" << endl;
    cin >> website;
    // completes string for command and converts it to char * since system requires it
    wgetCommand = wgetCommand + website;
    command = wgetCommand.c_str();
    system(command);
    cout << "---------------------------------<a> TAGS-----------------------------------------" << endl;
    system(grep_atag);
    cout << "---------------------------------<img> TAGS-----------------------------------------" << endl;
    system(grep_imgtag);
    cout << "--------------------------------------------------------------------------" << endl;
    system(grep_imgtagAlt);


    return 0;
}
/*****Count Number Of Distinct Years in given String******/

#include <bits/stdc++.h>
using namespace std;

int distinct_yrs(char* input)
{
    string s = "";
    int n = strlen(input);
    unordered_set<string> Dates;
    for(int i=0; i<n; i++)
    {
        if(isdigit(input[i]))
        {
            s.push_back(input[i]);
        }
        else if(input[i] == '-')
        {
            s.clear();
        }
        else if(s.length() == 4)
        {
            Dates.insert(s);
            s.clear();
        }
        else
        {
            s.clear();
        }
    }
    return Dates.size();
}

int main()
{
    char input[] = "UN was eatablish on 24-10-1945, India go 15-08-1945.";
    cout<<distinct_yrs(input)<<endl;
    return 0;
}

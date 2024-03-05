#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'timeConversion' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string timeConversion(string s) {
    int n = s.length();
    if(s[n-2] == 'A'){
        string hh = s.substr(0,2);
        int h = stoi(hh);
        if(h == 12){
            string new_h = "00";
            string new_time = new_h.append(s.substr(2,6));
            return new_time;}
        else{
            return s.substr(0,n-2);}
    }
    else{
        string hh = s.substr(0,2);
        int h = stoi(hh);
        if(h == 12){
            return s.substr(0,n-2);
        }
        int inPM = h+12;
        string new_h = to_string(inPM);
        string new_time = new_h.append(s.substr(2,6));
        return new_time;
    }
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = timeConversion(s);

    fout << result << "\n";

    fout.close();

    return 0;
}

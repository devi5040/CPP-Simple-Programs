#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'timeConversion' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string timeConversion(string s)
{
    string str = s.substr(8, 2);
    string hour = s.substr(0, 2);
    string min = s.substr(3, 2);
    string sec = s.substr(6, 2);
    if (str == "AM")
    {
        if (hour == "12")
            hour = "00";
    }
    else
    {
        if (hour != "12")
            hour = to_string(stoi(hour) + 12);
    }
    string res = hour + ":" + min + ":" + sec;
    return res;
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

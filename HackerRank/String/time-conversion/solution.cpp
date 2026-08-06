#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'timeConversion' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */
string ans,aptime;
int hour;
string timeConversion(string s) {
 ans = s.substr(0,2) ;
 aptime = s.substr(8,10);
 hour=stoi(ans);
 if(hour<12&&aptime=="AM"){
    s.erase(8);
 }else if(hour==12&&aptime=="AM"){
   ans = "00";
    
    s.replace(0,2,ans);
    s.erase(8);
 }else if(hour<12&&aptime=="PM"){
    hour += 12;
    ans = to_string(hour);
    s.replace(0,2,ans);
    s.erase(8);
 }else{
    s.erase(8);
 }
 return s;
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
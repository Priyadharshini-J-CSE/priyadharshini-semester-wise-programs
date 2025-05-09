#include<iostream>
#include<utility>
#include<tuple> // for the tie()
using namespace std;
int main(){
    pair<int ,char>p1;
    p1.first=100;
    p1.second='P';
    pair<string,double>p2("Eshwar",190.9);
    pair<string,double>p3=make_pair("Eshwar is the best college",190.5);
    cout << p1.first << " " << p1.second << endl;
    cout << p2.first << " " << p2.second << endl;
    cout << p3.first << " " << p3.second<<endl;
    int a;
    char b;
    tie(a,b)=p1;
    cout << "Unpaired elements: ";
    cout << a <<" " << b<<endl;
    string c;
   tie(c,ignore)=p3;
   cout << c << "(unpaired element) " <<endl;
   pair<string,pair<int,string>>p4={"Dell",{181,"Priyadharshini_J"}};
   cout << p4.first << " " << p4.second.first << " " << p4.second.second << endl;
   string d,f;
   int e;
   tie(d,ignore)=p4;
   tie(e,f)=p4.second;
   cout << d << " " << e << " " << f << endl;
   cout << p4.first << " " << p4.second.first << " " << p4.second.second << endl;
    return 0;
}
#include<iostream>
#include<vector>
using namespace std;
int main(){
 vector<int>v1={1,2,3,4,5};
 cout << "The vectors are using [] : ";
 for(int i=0;i<v1.size();i++){
    cout << v1[i] << " ";
 }
 cout << endl << "The vectors at specific position is: " << v1.at(3)<<endl;
 cout << "The first element is: " << v1.front() << endl;
 cout << "The first element is: " << v1.back() << endl;
 v1.push_back(60);
vector<int>v2;
for(int i=1;i<7;i++){
    v2.push_back(i*1);
}
v2.insert(v2.begin(),10);
v2.insert(v2.end(),50);
cout <<"Vector after the push_back in forward : " ;
for(auto it=v2.begin();it!=v2.end();it++){
 cout << *it <<" " ;
}
cout << endl <<"Vector after the push_back in Reverse : " ;
for(auto it=v2.rbegin();it!=v2.rend();it++){
    cout << " " << *it ;
}
cout << endl << "The size and capacity of the vector 1 & vector 2 : " << v1.size() << 
" " <<v1.capacity() << " , " << v2.size() << " " << v2.capacity() << endl;

cout << "Empty : " << v1.empty() << endl;
v2.resize(50);
cout << " The size and capacity of v2 after resize of : " << v2.size() << " "<< v2.capacity() << endl;
v1.resize(2);
cout << " The size and capacity of v1 after resize of : " << v1.size() << " "<< v1.capacity() << endl;
v1.shrink_to_fit();
cout << " The capacity of the v2 after shrinking is: " << v1.capacity() <<endl;
// cout << "The reserve function used here are : " << v1.reserve() << endl;
cout << "The values before inserting is: " ;
for(auto i : v1){
    cout << i << " ";
}
cout << endl;
cout << "Insert the value using the insert function : " ;
v1.insert(v1.begin(),{100,101});
cout << endl << "The values after inserting is: ";
for(auto i : v1){
    cout << i << " ";
}
cout << endl;
v1.emplace(v1.begin(),1000);
cout << endl << "The values after inserting is: ";
for(auto i : v1){
    cout << i << " ";
}
cout << endl;





    return 0;

}
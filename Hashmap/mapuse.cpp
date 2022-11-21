#include <iostream>
#include <unordered_map>
using namespace std;

int main(){
    unordered_map<string, int>ourmap;
    // insert
    pair<string , int> p("abc", 1);
    ourmap.insert(p);
    ourmap["def"]  = 2;

    //find or access
    cout << ourmap["abc"]<< endl;
    cout << ourmap.at("def") << endl;
    cout << "size : " << ourmap.size() << endl;
    // cout << ourmap.at("ghi") << endl; throws error
    cout << ourmap["ghi"]<< endl; // will show 0
    cout << "size : " << ourmap.size() << endl;

    // check Present 
    if(ourmap.count("ghi") > 0){
        cout << "ghi is present" << endl;
    } 

    // erase
    ourmap.erase("ghi");
    if(ourmap.count("ghi") > 0){
        cout << "ghi is present" << endl;
    }
}
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int main(){
    vector<pair<int,string> >v;
    v.push_back(pair<int, string>(90,"박한울"));
    v.push_back(pair<int, string>(85,"이태일"));
    v.push_back(pair<int, string>(82,"나동빈"));
    v.push_back(pair<int, string>(98,"강종구"));
    v.push_back(pair<int, string>(79,"이상욱"));

    for(int i =0; i<v.size();i++){
        cout <<v[i].second<<' ';
    }
    cout <<'\n';


    sort(v.begin(),v.end()); // 성적을 오름차순으로 정렬 
    for(int i =0; i<v.size();i++){
        cout <<v[i].second<<' ';
    }
}
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

bool compare(pair<string, pair<int, int> > a,
            pair<string,pair<int, int> >b){
                if(a.second.first == b.second.first){
                    return a.second.second> b.second.second;
                }
                else 
                return a.second.first > b.second.first;
            }



int main(){
    vector<pair<int,string> >v;
    vector<pair<string, pair<int, int> > > v3;
    v3.push_back(pair<string, pair<int, int> > ("이명학",pair<int , int>(90,19920725)));
    v3.push_back(pair<string, pair<int, int> > ("김민구",pair<int , int>(10,19920401)));
    v3.push_back(pair<string, pair<int, int> > ("이용선",pair<int , int>(89,19921124)));
    v3.push_back(pair<string, pair<int, int> > ("김태헌",pair<int , int>(5,19930201)));
    v3.push_back(pair<string, pair<int, int> > ("이현동",pair<int , int>(50,19920205)));
    v.push_back(pair<int, string>(90,"박한울"));
    v.push_back(pair<int, string>(85,"이태일"));
    v.push_back(pair<int, string>(82,"나동빈"));
    v.push_back(pair<int, string>(98,"강종구"));
    v.push_back(pair<int, string>(79,"이상욱"));
    sort(v3.begin(),v3.end(),compare);
    
    for(int i =0; i<v.size();i++){
        cout <<v3[i].first<<' ';
    }
    cout <<'\n';
    for(int i =0; i<v.size();i++){
        cout <<v[i].second<<' ';
    }
    cout <<'\n';


    sort(v.begin(),v.end()); // 성적을 오름차순으로 정렬 
    for(int i =0; i<v.size();i++){
        cout <<v[i].second<<' ';
    }
}
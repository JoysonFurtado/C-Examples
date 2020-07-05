#include<iostream>
#include<typeinfo>
#include<vector>
#include <algorithm> 
using namespace std;

vector<int>* VectorInit(int val){
    vector<int> *V = new vector<int>;
    for(int i=0;i<val;i++){
        V->push_back(0);
    }
    return V;
}
void display(vector<int>&vec){
    for(int i=0;i<vec.size();i++){
    cout<<vec[i]<<",\t";
    }
    cout<<endl;
}

/* Manually removing duplicate values after sorting */
void filterRedundant(vector<int>&vec){
    int j=0;
    while(j<vec.size()){
             if(vec[j]==vec[j+1]){
                 vec.erase(vec.begin()+j);
        }
        else{
            j++;
        }
    }
}
int main () {
vector<int>* V= VectorInit(100);
vector<int> values={0,0,1,1,1,1,1,2,2,3,4,5,6,1,1,8,4,3,7,9,7,7,9};
vector<int>* P;
cout<<"Array before sorting:"<<endl;
display(values);
sort(values.begin(),values.end());
cout<<"Array after sorting:"<<endl;
display(values);
auto ip = unique(values.begin(),values.end());
values.resize(distance(values.begin(),ip));
//filterRedundant(values);
cout<<"Array after filtering:"<<endl;
display(values);
cout<<"Vector size:"<<sizeof(*V)<<sizeof(*P)<<endl;
return 0;
}
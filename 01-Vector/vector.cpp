#include<iostream>
#include<vector>
using namespace std;
int main(){


    vector<vector<int>> arr(5,vector<int>(4,0));

    int TotalRows = arr.size();
    int TotalColumns = arr[0].size();

    // for(auto i = arr.begin(); i != arr.end(); i++){
        //     for(auto j = i->begin();j != i->end() ;j++){
            //         cout<<*j<<" ";
            //     }
            //     cout<<endl;
            // }
            // vector<int> first;
            // vector<int> second;
            
    vector<vector<int>> brr(4);
    brr[0] = vector<int> (5);
    brr[1] = vector<int> (2);
    brr[2] = vector<int> (3);
    brr[3] = vector<int> (4);
    int totalRowCount = brr.size();
    // int totalColCount = brr[i].size();
    // first.push_back(10);
    // first.push_back(11);
    // first.push_back(12);
    // first.push_back(13);

    // vector<int>::iterator it = first.begin();

    // while(it != first.end()){
    //     cout<<*it<<" ";
    //     it++;
    // }

    // second.push_back(100);
    // second.push_back(200);
    // second.push_back(300);
    // second.push_back(400);

    // first.swap(second);
    
    // for(int i:first){
    //     cout<<i<<" ";
    // }cout<<endl;
    // for(int i:second){
    //     cout<<i<<" ";
    // }


    // vector<int> marks;
    // vector<int> miles(10);
    // vector<int> distance(10,0);
    // marks.reserve(10);

    // cout<<marks.max_size();

    // marks.push_back(10);
    // marks.push_back(20);
    // marks.push_back(30);
    // marks.push_back(40);
    // marks.clear();

    // marks.insert(marks.begin(),50);
    // cout<<marks[0]<<endl;
    // cout<<marks.capacity()<<endl;

    // cout<<marks[0]<<endl;
    // cout<<marks.at(0)<<endl;
    // cout<<"Size of: "<<marks.size()<<endl;
    // marks.erase(marks.begin(),marks.end());

    // cout<<"Size of: "<<marks.size()<<endl;
    // marks.pop_back();
    // cout<<"Size of: "<<marks.size()<<endl;

    // cout<<*(marks.begin())<<endl;
    // cout<<*(marks.end()-1)<<endl;
    
    // cout<<marks.front()<<endl;
    // cout<<marks.back()<<endl;

    // if(marks.empty() == true){
    //     cout<<"Vector is empty.";
    // }else{
    //     cout<<"vector is not empty.";
    // }

    // vector<int> age(100);
    // age[0] = 10;


}

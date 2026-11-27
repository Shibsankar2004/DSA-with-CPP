// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     vector<int>vec;
//     vec.push_back(1);
//     vec.push_back(2);
//     vec.push_back(3);
//     vec.push_back(4);
//     vec.push_back(5);
//     vec.pop_back();
//     for(int val:vec){
//         cout<<val<<endl;
//     }
//     cout<<vec.size()<<endl;
//     cout<<vec.capacity()<<endl;
//     cout<<"val at idx2: "<<vec[2]<<"or"<<vec.at(2)<<endl;
//     cout<<"front"<<vec.front()<<endl;
//     cout<<"back"<<vec.back()<<endl;
// }


// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     vector<int>vec={1,2,3,4,5};
//     vec.erase(vec.begin()+2);
//     for(int val:vec){
//         cout<<val<<endl;
//     }
//     return 0;
// }

// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     vector<int>vec={1,2,3,4,5};
//     vec.erase(vec.begin()+2,vec.begin()+4);//size change but not capacity changes
//     for(int val:vec){
//         cout<<val<<endl;
//     }
//     return 0;
// }

// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     vector<int>vec={1,2,3,4,5};
//     vec.insert(vec.begin()+2,100);
//     for(int val:vec){
//         cout<<val<<endl;
//     }
//     cout<<"Size:"<<vec.size()<<endl;
//     cout<<"Capacity:"<<vec.capacity()<<endl;
//     return 0;
// }

#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>vec={1,2,3,4,5};
    vec.clear();
    for(int val:vec){
        cout<<val<<endl;
    }
    cout<<"Size:"<<vec.size()<<endl;
    cout<<"Capacity:"<<vec.capacity()<<endl;
    return 0;
}
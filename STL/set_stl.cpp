// #include<iostream>
// #include<vector>
// #include<list>
// #include<deque>
// #include<stack>
// #include<queue>
// #include<map>
// #include<set>
// using namespace std;
// int main(){
//     set<int>s;
//     s.insert(1);
//     s.insert(2);
//      s.insert(3);
//     s.insert(4);
//      s.insert(5);
//     s.insert(6);

//     cout<<"lower bound="<<*(s.lower_bound(4))<<endl;
//     cout<<"uper bound="<<*(s.upper_bound(4))<<endl;
    
//     cout<<s.size()<<endl;

//     for(auto val:s){
//         cout<<val<<" ";
//     }
//     return 0;
// }


// #include<iostream>
// #include<vector>
// #include<list>
// #include<deque>
// #include<stack>
// #include<queue>
// #include<map>
// #include<set>
// using namespace std;
// int main(){
//    multiset<int>s;
//     s.insert(1);
//     s.insert(2);
//      s.insert(3);
//     s.insert(1);
//      s.insert(2);
//     s.insert(2);

//     cout<<"lower bound="<<*(s.lower_bound(4))<<endl;
//     cout<<"uper bound="<<*(s.upper_bound(4))<<endl;
    
//     cout<<s.size()<<endl;

//     for(auto val:s){
//         cout<<val<<" ";
//     }
//     return 0;
// }

#include<iostream>
#include<vector>
#include<list>
#include<deque>
#include<stack>
#include<queue>
#include<map>
#include<set>
#include<unordered_set>
using namespace std;
int main(){
    unordered_set<int>s;
    s.insert(1);
    s.insert(2);
     s.insert(3);
    s.insert(1);
     s.insert(2);
    s.insert(2);

    for(auto val:s){
        cout<<val<<" ";
    }
    return 0;
}

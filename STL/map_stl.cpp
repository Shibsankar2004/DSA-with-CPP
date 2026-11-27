// #include<iostream>
// #include<vector>
// #include<list>
// #include<deque>
// #include<stack>
// #include<queue>
// #include<map>
// using namespace std;
// int main(){
//     map<string,int>m;
//     m["tv"]=50;
//     m["laptop"]=100;
//     m["headphones"]=120;
//     m["watch"]=47;
//     for(auto p:m){
//         cout<<p.first<<" "<<p.second<<endl;
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
// using namespace std;
// int main(){
//     map<string,int>m;
//     m["tv"]=50;
//     m["laptop"]=100;
//     m["headphones"]=120;
//     m["watch"]=47;
//     m.insert({"camera",70});
//     m.emplace("phone",67);
//     m.erase("tv");
//     for(auto p:m){
//         cout<<p.first<<" "<<p.second<<endl;
//     }
//     cout<<"count="<<m.count("laptop")<<endl;
//     cout<<"count="<<m["watch"]<<endl;
//     if(m.find("camera")!=m.end()){
//         cout<<"found\n";
//     }else{
//         cout<<"Not found\n";
//     }
//     return 0;
// }


// multimap
// #include<iostream>
// #include<vector>
// #include<list>
// #include<deque>
// #include<stack>
// #include<queue>
// #include<map>
// using namespace std;
// int main(){
//     multimap<string,int>m;
//     m.emplace("tv",100);
//     m.emplace("tv",100);
//     m.emplace("tv",100);
//     m.emplace("tv",100);
//     // m.erase("tv");
//     m.erase(m.find("tv"));
//     for(auto p:m){
//         cout<<p.first<<" "<<p.second<<endl;
//     }
    
    
//     return 0;
// }


//unordermap

#include<iostream>
#include<vector>
#include<list>
#include<deque>
#include<stack>
#include<queue>
#include<map>
#include<unordered_map>
using namespace std;
int main(){
    unordered_map<string,int>m;
   m.emplace("tv",100);
   m.emplace("laptop",100);
   m.emplace("fridge",100);
   m.emplace("watch",100);

    for(auto p:m){
        cout<<p.first<<" "<<p.second<<endl;
    }
  
    return 0;
}


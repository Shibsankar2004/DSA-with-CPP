// #include<iostream>
// #include<vector>
// #include<list>
// #include<deque>
// #include<stack>
// #include<queue>
// #include<map>
// #include<set>
// #include<unordered_set>
// #include<algorithm>
// using namespace std;
// bool comparator(pair<int,int>p1,pair<int,int>p2){
//     if(p1.second<p2.second)return true;
//     if(p1.second>p2.second)return false;
//     if(p1.first<p2.first)return true;
//     else return false;
// }
// int main(){
//   vector<pair<int,int>>vec={{3,1},{2,1},{7,1},{5,2}};
//   sort(vec.begin(),vec.end(),comparator);
//   for(auto p:vec){
//     cout<<p.first <<" "<<p.second<<endl;
//   }
//     return 0;
// }/

//reverse sort
// #include<iostream>
// #include<vector>
// #include<list>
// #include<deque>
// #include<stack>
// #include<queue>
// #include<map>
// #include<set>
// #include<unordered_set>
// #include<algorithm>
// using namespace std;

// int main(){
//   vector<int>vec={1,2,3,4,5};
//   reverse(vec.begin(),vec.end());
//   for(auto val:vec){
//     cout<<val<<endl;
//   }
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
// #include<unordered_set>
// #include<algorithm>
// using namespace std;

// int main(){
//   string s="bca";
//   prev_permutation(s.begin(),s.end());
//   cout<<s<<endl;
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
// #include<unordered_set>
// #include<algorithm>
// using namespace std;

// int main(){
//   //cout<<max(4,5)<<" "<<min(6,1)<<endl;
//   int a=5,b=10;
//   swap(a,b);
//   cout<<"a="<<a<<endl;
//   cout<<"b="<<b<<endl;
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
// #include<unordered_set>
// #include<algorithm>
// using namespace std;

// int main(){
//   vector<int>vec={1,2,3,4,5};
//   cout<<*(max_element(vec.begin(),vec.end()))<<endl;
//   cout<<*(min_element(vec.begin(),vec.end()))<<endl;\
//   cout<<binary_search(vec.begin(),vec.end(),4)<<endl;
//     return 0;
//}



#include <iostream>
#include <vector>
#include <list>
#include <deque>
#include <stack>
#include <queue>
#include <map>
#include <set>
#include <unordered_set>
#include <algorithm>
using namespace std;

int main() {
    int n = 15;
    cout << __builtin_popcount(n) << endl;
    return 0;
}

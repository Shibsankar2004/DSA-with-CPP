// #include<iostream>
// #include<vector>
// #include<list>
// #include<deque>
// #include<stack>
// #include<queue>
// using namespace std;
// int main(){
//     queue<int>q;
//     q.push(1);
//     q.push(2);
//     q.push(3);
//     while(!q.empty()){
//         cout<<q.front()<<" ";
//         q.pop();
//     }
//    cout<<endl;
//     return 0;
// }

#include<iostream>
#include<vector>
#include<list>
#include<deque>
#include<stack>
#include<queue>
using namespace std;
int main(){
    queue<int>q;
    q.push(1);
    q.push(2);
    q.push(3);
    queue<int>q2;
    q2.swap(q);
    cout<<"q size:"<<q.size()<<endl;
   cout<<"q2 size:"<<q2.size()<<endl;
    return 0;
}
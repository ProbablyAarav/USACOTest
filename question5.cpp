#include <set> 
#include <iostream>
using namespace std;
int main(){
    int set1[] = {1,2,2,2,3,3,32,4};
    int set2[] = {3,2,32,4,4,4,2,2,2};
    int set3[] = {};
    for (auto i: set1){
        if(set1[i]== set2[i]){
            set3[i] = set1[i];
        }
    }
    cout << set3;
    return 0;
}
   
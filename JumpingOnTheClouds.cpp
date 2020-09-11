#include <iostream>
#include <vector>
using namespace std;

void solve(vector<int> c, int n)
{
     int count = 0, index = 0;
     while(index < n-1){
           if(c[index+2] != 1){
               index += 2;
               count++;
        } else if(c[index+1] != 1){
            index += 1;
            count++;
        }
    }
    cout << count; 
}

int main ()
{
    int n;
    cin >> n;
    vector<int> c(n);
    for(int i = 0; i < n; i++){
        cin >> c[i];    
    }   
    solve(c, n);
}


#include <iostream>
#include <vector>
using namespace std;

void solve(char str[], long long n,  int chars){
	long long count = 0; 
    int ch = 0, anum = 0, anumtwo = 0;
    int rem = n % chars;
    long long div = n / chars;

    for(int i = 0; i < chars; i++){
           if(str[i] == 'a'){
               anum++;
        }
    }
    for(int j = 0; j < rem; j++){
           if(str[j] == 'a'){
               anumtwo++;
        }
    }
    
    count = div * anum;
    count += anumtwo;
    cout << count;
}

int main ()
{
    char str[100];
    long long n;
    cin >> str >> n;
    int chars = string(str).length();
    solve(str, n, chars);
}


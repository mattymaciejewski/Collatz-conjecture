#include <bits/stdc++.h>
#include <vector>
#include <algorithm>
using namespace std;

void Collatz(int start, int end) {
    vector<int> tab;
        
    for(int i = start; i <= end; i++) {
        int counter = 1;
        int num = i;
            
        do {
                
            if(num % 2 == 0) {
                    
                num = num / 2;
            }
                
            else {
                    
                num = 3*num + 1;
                    
            }
                
            counter++;
                
        } while (num != 1);
            
        tab.push_back(counter);
    }
        
    sort(tab.begin(), tab.end());
        
    cout << tab.back();
        
}

int main() {
	
int i, j;
vector<int> tab;
    
cin >> i >> j;
    
cout << endl;
    
cout << i << " " << j << " " ;
Collatz(i, j);

}

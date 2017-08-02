#include <string>
#include <vector>
#include <iostream>
#include <algorithm>


static int change(const int& x){
    std::string s = std::to_string(x);
    for(size_t i=0; i<s.length()/2; i++){
        std::swap(s[i], s[s.length()-i-1]);
    }
    return std::stoi(s);
}
int main(void){
    int i,j,k;
    std::cin >> i >>j >>k;
    unsigned long long count =0;
    for(int x=i; x<= j; ++x){
        if(std::abs(x-change(x))%k ==0 ){
            count++;
        }

    }
    std::cout << count << '\n';
    return 0;
}
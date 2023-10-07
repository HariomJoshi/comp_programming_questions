#include<iostream>
#include<math.h>

using namespace std;

bool isPrime(int num){
    if((num%10)%2 == 0){
        return false;
    }
    if(num %3 == 0){
        return false;
    }
    int root = sqrt(num);
    for(int i =1; i<=root; i++){
        cout<< i<< endl;
        if(i%num == 0){
            return false;
        }
    }
    return true;
}


int main(){
    int num;
    cin>> num;
    cout<< isPrime(num)<< endl;
    return 0;
}

// string StringMerge(string str) 
// {
// 	int middle = str.find("*");

// 	string first = str.substr(0, middle);
// 	string second = str.substr(middle+1, str.size() - middle);
// 	string result;

// 	for (int x = 0; x < middle; x++)
// 	{
// 		result.push_back(first[x]);
// 		result.push_back(second[x]);
// 	}

// 	return result;
// }

// int main() 
// {
// 	cout << StringMerge("abc1*kyoo") << endl; // akbyco1o
// 	cout << StringMerge("aaa*bbb") << endl; // ababab
// 	cout << StringMerge("123hg*aaabb") << endl; // 1a2a3ahbgb
// 	return 0;

// }
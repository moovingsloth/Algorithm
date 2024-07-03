#include <bits/stdc++.h>
using namespace std;

int main()
{
    std::string s;
    std::cin >> s;
    int cnt = 0;
    int n = s.length();
    for(int i = 0; i < n; ++i){
    	++cnt;
    	if(i < n-1){
    	    switch(s[i]){
    		case 'c':
    			if(s[i+1] == '=' || s[i+1] == '-'){
    				++i;
    			}
    			break;
    		case 'd':
    			if(s[i+1] == '-'){
    				++i;
    			}
    			else if(i < n-2 && s[i+1] == 'z' && s[i+2] == '='){
    				i += 2;
    			}
    			break;
    		case 'l': case 'n':
    			if(s[i+1] == 'j'){
    				++i;
    			}
    			break;
    		case 's': case 'z':
    			if(s[i+1] == '='){
    			    ++i;
    			}
    			break;
    	    }
    	}
    }
    cout << cnt;
}


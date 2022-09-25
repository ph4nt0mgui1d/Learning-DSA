// iterative solution       time = O(n+m)   space = O(1)
#include <bits/stdc++.h>
using namespace std;

bool isSub(string s1, string s2, int n, int m){
    if(n<m)
        return false;
    
    int j = 0;
    for(int i = 0; i<n && j<m; i++){
        if(s1[i]==s2[j])
            j++;
    }

    return (j == m);
}

int main(){
	int n,m;
	string s1, s2;
	cin >> n >> m;
	cin >> s1 >> s2;

   	cout << boolalpha << isSub(s1, s2, n, m);
    return 0;

}

// // Recursive solution           iterative is better        space = O(m+n)
// #include <bits/stdc++.h>
// using namespace std;

// bool isSub(string s1, string s2, int n, int m){
//     if ( m == 0 )
//         return true;
        
//     if ( n == 0 )
//         return false;
    
//     if ( s1[n-1] == s2[m-1] )
//         return isSubSeq(s1, s2, n-1, m-1);
    
//     else
//         return isSubSeq(s1, s2, n-1, m);
// }

// int main() {
// 	int n,m;
// 	string s1, s2;
// 	cin>>n>>m;
// 	cin>>s1>>s2;
	
// 	cout<<boolalpha<<isSubSeq(s1, s2, n, m);
	
// 	return 0;
// }
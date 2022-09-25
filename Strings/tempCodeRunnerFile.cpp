
// //Rabin Karp algorithm
// #include <bits/stdc++.h> 
// using namespace std; 
// #define d 256
// const int q=101;
// void RBSearch(string pat,string txt,int M, int N){
    
//     //Compute (d^(M-1))%q
//     int h=1;
//     for(int i=1;i<=M-1;i++)
//         h=(h*d)%q;
    
//     //Compute p and to
//     int p=0,t=0;
//     for(int i=0;i<M;i++){
//         p=(p*d+pat[i])%q;
//         t=(t*d+txt[i])%q;
//     }
    
//     for(int i=0;i<=(N-M);i++){
//        //Check for hit
//        if(p==t){
//            bool flag=true;
//            for(int j=0;j<M;j++)
//                 if(txt[i+j]!=pat[j]){flag=false;break;}
//             if(flag==true)cout<<i<<" ";
//         }
//        //Compute ti+1 using ti
//        if(i<N-M){
//            t=((d*(t-txt[i]*h))+txt[i+M])%q;
//         if(t<0)t=t+q;
//        }
//     }
    
// }
 
// int main() { 
//     string txt = "GEEKS FOR GEEKS";string pat="GEEK";
//     cout<<"All index numbers where pattern found:"<<" ";
//     RBSearch(pat,txt,4,15);
    
//     return 0; 
// } 

// // KMP algorithm 
// // constructing LPS array
// //naive solution        time = O(n^3)
// #include <bits/stdc++.h> 
// using namespace std; 

// int longPropPreSuff(string str, int n){
//     for(int len=n-1;len>0;len--){
//         bool flag=true;
//         for(int i=0;i<len;i++)
//             if(str[i]!=str[n-len+i])
//                 flag=false;
                
//         if(flag==true)
//             return len;
//     }
//     return 0;
// }

// void fillLPS(string str, int *lps){
//     for(int i=0;i<str.length();i++){
//         lps[i]=longPropPreSuff(str,i+1);
//     }
// }
 
// int main() 
// { 
//     string txt = "abacabad";int lps[txt.length()];
//     fillLPS(txt,lps);
//     for(int i=0;i<txt.length();i++){
//         cout<<lps[i]<<" ";
//     }
    
//     return 0; 
// } 

// // efficient solution       time = O(n)     used in KMP
// #include <bits/stdc++.h> 
// using namespace std; 


// void fillLPS(string str, int *lps){
//     int n=str.length(),len=0;
//     lps[0]=0;
//     int i=1;
//     while(i<n){
//         if(str[i]==str[len])
//         {len++;lps[i]=len;i++;}
//         else
//         {if(len==0){lps[i]=0;i++;}
//             else{len=lps[len-1];}
//         }
//     }
// }
 
// int main() { 
//     string txt = "abacabad";int lps[txt.length()];
//     fillLPS(txt,lps);
//     for(int i=0;i<txt.length();i++){
//         cout<<lps[i]<<" ";
//     }
    
//     return 0; 
// } 

// // Full KMP algo
// #include <bits/stdc++.h> 
// using namespace std; 

// void fillLPS(string str, int *lps){
//     int n=str.length(),len=0;
//     lps[0]=0;
//     int i=1;
//     while(i<n){
//         if(str[i]==str[len])
//         {len++;lps[i]=len;i++;}
//         else
//         {if(len==0){lps[i]=0;i++;}
//         else{len=lps[len-1];}
//         }
//     }
// }
// void KMP(string pat,string txt){
//     int N=txt.length();
//     int M=pat.length();
//     int lps[M];
//     fillLPS(pat,lps);
//     int i=0,j=0;
//     while(i<N){
//         if(pat[j]==txt[i]){i++;j++;}

//         if (j == M) { 
//             printf("Found pattern at index %d ", i - j); 
//             j = lps[j - 1]; 
//         } 
//         else if (i < N && pat[j] != txt[i]) { 
//             if (j == 0) 
//                 i++;
//             else
//                 j = lps[j - 1];  
//         }
//     }
// }
 
// int main(){ 
//     string txt = "ababcababaad",pat="ababa";
//     KMP(pat,txt);
//     return 0; 
// }
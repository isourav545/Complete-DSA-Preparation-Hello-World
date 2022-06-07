
/* Naive Approach */
#include<bits/stdc++.h>
using namespace std;
void findAbsoulteNo(int N){
    if(N<0){
        N = (-1) * N;

    }
    cout<<N<<" ";

}

int main(){
    int N =12;
    findAbsoulteNo(N);
}

/* Bitmasking Approach */



/*Using Inbuilt abs() function */
#include<bits/stdc++.h>
using namespace std;
void findAbsoulteNo(int N){
 
        N = abs(N);
          cout<<N<<" ";

}

int main(){
    int N =12;
    findAbsoulteNo(N);
}

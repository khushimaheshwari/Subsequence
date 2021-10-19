#include <bits/stdc++.h>
using namespace std;
void generate_subsequence(char *inn, char *out, int i, int j){
    if(inn[i]=='\0'){
        out[j]='\0';
        cout<<out<<" ";
        return;
    }
    
    generate_subsequence(inn, out, i+1, j);
    out[j]=inn[i];
    generate_subsequence(inn, out, i+1, j+1);
    
}

int main() {
    char input[50];
    cin>>input;
   int num=strlen(input);
   int ways=pow(2,num);

    char output[50];
    
    generate_subsequence(input,output,0,0);
    cout<<endl<<ways;
    
    return 0;
}

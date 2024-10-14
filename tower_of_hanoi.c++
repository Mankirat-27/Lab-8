#include<iostream>
#include<cstring>
using namespace std;

static int count = 0;

// move function 
void Move(const char str1[], char str2[]) {
    int n = strlen(str1);

    for(int i = 0; i <= n; i++) { 
        str2[i] = str1[i];
    }
}
    
// tower of hanoic 
int Tohh(int n, char F[], char A[], char T[]) {
    if(n == 1) {
        Move(F, T);
        count++;
    }
    else {
        Tohh(n-1, F, T, A);
        Move(F, T);
        count++;
        Tohh(n-1, A, F, T);
    }
    return count;
}

int main() {

    for(int n = 1; n <= 20; n++) {
        char str1[20], str2[20], str3[20];
        for(int i = 0; i <= n; i++) {
            str1[i] = 'a';
        }
    
    count = 0;
    cout<<"For n = "<<n<<"    count = "<<Tohh(n, str1, str2, str3)<<endl;
    }


    return 0; 
}
#include <iostream>
using namespace std;

int main()
{

    int n;
    cin>>n;
    
    //full pyramid
    for(int r=0; r<n; r++){
        for(int c=0; c<(n-r-1);c++){
            cout<<" ";
        }
        for(int c=0; c<(r+1);c++){
            cout<<"* ";
        }
        cout<<endl;
    }

    //Inverted pyramid
    for(int r=0; r<n; r++){
        
        for(int c=0; c<(r);c++){
            cout<<" ";
        }
        for(int c=0; c<(n-r);c++){
            cout<<"* ";
        }
        cout<<endl;
    }


}

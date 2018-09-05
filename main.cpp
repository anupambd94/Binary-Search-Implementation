#include <iostream>

using namespace std;

const int n = 100;

int main()
{
    int m,l,h,p = 0,a[200];

    for(int i=0;i<=n;i++){

         a[i] = i;
    }

    cout << "Enter number to search:" << endl;

    cin >> m;

    l = 0;
    h = n-1;

    while(l<=h){


        int mid = (l+h)/2;

        if(m==a[mid]){

            p = mid;
            break;
        }
        else if(m<a[mid]){

            h = mid-1;

        }
        else{

            l = mid+1;
        }
    }

    if(p==0){

        cout << "Not found" << endl;
    }

    else{

        cout << "The number found at possition " << p << endl;
    }

    return 0;

}

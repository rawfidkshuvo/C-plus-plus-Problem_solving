        #include <iostream>
        using namespace std;
        int main(){
        int a[] = {1,2,3,2,4,6,8,8,8,10};
        int count = 0;
        int x;
        // cout << x;
        cout << "Duplicate values are: ";
        for (int i=0; i<sizeof(a)/sizeof(int); i++){
        for (int j=0; j<sizeof(a)/sizeof(int); j++){
        if (a[i] == a[j] && a[i] != x)
        {
        count++;

        }
        }
        if (count > 1 && a[i] != x)
        {
        cout << a[i] << ", ";
        x = a[i];
        }
        count = 0;
        }
        return 0;
        }
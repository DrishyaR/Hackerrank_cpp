#include <bits/stdc++.h>

using namespace std;

// Complete the diagonalDifference function below.
int diagonalDifference(vector<vector<int>> arr,int n) {
  int d1=0;
  int d2=0;
  int abdiff=0;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(i==j)
               d1=d1+arr[i][j];
            if((i+j)==(n-1))
               d2=d2+arr[i][j];
            }
    
        }
 abdiff=abs(d2-d1);
 return abdiff;
    
        
            

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    vector<vector<int>> arr(n);
    for (int i = 0; i < n; i++) {
        arr[i].resize(n);

        for (int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }

        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    int result = diagonalDifference(arr,n);

    fout << result << "\n";

    fout.close();

    return 0;
}


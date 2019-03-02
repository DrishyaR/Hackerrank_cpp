#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the gradingStudents function below.
 */
vector<int> gradingStudents(vector<int> grades, int n) {
    int dig = 0; 
    int mult = 0;
    int diff = 0;
    for ( int i=0; i<n; i++)
   {   dig = grades[i] % 5;
       mult = grades[i] + ( 5 - dig );
       diff = mult - grades[i];
       
       if ( diff < 0 )
           diff *= -1;
       if( grades[i] < 38 )
           continue;
       else if( diff < 3 )
           grades[i] = mult;       
    }
    return grades;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    vector<int> grades(n);

    for (int grades_itr = 0; grades_itr < n; grades_itr++) {
        int grades_item;
        cin >> grades_item;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        grades[grades_itr] = grades_item;
    }

    vector<int> result = gradingStudents(grades,n);

    for (int result_itr = 0; result_itr < result.size(); result_itr++) {
        fout << result[result_itr];

        if (result_itr != result.size() - 1) {
            fout << "\n";
        }
    }

    fout << "\n";

    fout.close();

    return 0;
}



#include <bits/stdc++.h> 
using namespace std;
// **it is a good soln, however better is possible**

// void setZeros(vector<vector<int>> &matrix)
// {
//     vector<int> row;
//     vector<int> col;
//     for(int i = 0; i<matrix.size(); i++){
//         for(int j = 0; j<matrix[0].size(); j++){
//             if(matrix[i][j]==0){
//                 row.push_back(i);
//                 col.push_back(j);
//             }
//         }
//     }
//     for(int i = 0; i<row.size(); i++){
//         for(int j = 0; j<matrix[0].size(); j++){
//             matrix[row[i]][j] = 0;
//         }
//     }
//        for(int i = 0; i<matrix.size(); i++){
//         for(int j = 0; j<col.size(); j++){
//             matrix[i][col[j]] = 0;
//         }
//     }
//     return;
// }

// ***better soln**
void setZeros(vector<vector<int>> &matrix)
{
    matrix[0][0] = 0;
    cout<<matrix[0][0];
    // vector<int> row;
    // vector<int> col;
    for(int i = 0; i<matrix.size(); i++){
        for(int j = 0; j<matrix[0].size(); j++){
            if(matrix[i][j]==0){
                matrix[0][j] = 0; //row
                matrix[i][0] = 0; //c
                // cout<<matrix[0][j]<<" "<<i<<j<<" ";
            }
            
        }
        cout<<"\n";
    }
    cout<<"\n"<<matrix[1][2];
    for(int i = 0; i<matrix.size(); i++){
        for(int j = 0; j<matrix[0].size(); j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<"a\n";
    }

    for(int i = 0; i<matrix.size(); i++){
        
            for(int j = 0; j<matrix[0].size(); j++){
               if(matrix[0][j] || matrix[i][0]) matrix[i][j] = 0;
            }
        
    }
    //    for(int i = 0; i<matrix.size(); i++){
    //     for(int j = 0; j<col.size(); j++){
    //         matrix[i][col[j]] = 0;
    //     }
    // }
    return;
}

int main(){
	vector<vector<int>> matrix;
	int n,m; 
	cin>>n>>m;
    for(int i = 0; i<n; i++){
    	vector<int> v1;
        for(int j = 0; j<m; j++){
        	int a; cin>>a;
            v1.push_back(a);
            // cout<<i<<" "<<j<<"\n";
        }
        matrix.push_back(v1);
        // cout<<matrix[i][0];

    }
    setZeros(matrix);
    for(int i = 0; i<n; i++){
        for(int j = 0; j<m; j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}
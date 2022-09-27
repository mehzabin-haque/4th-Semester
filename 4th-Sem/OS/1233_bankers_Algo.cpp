#include<bits/stdc++.h>
using namespace std;

int resource = 4, process = 5;
    int allocation[process][resource], maximum[process][resource], need[process][resource],finish[process]={0}, available[resource];
    available[0]=1, available[1]=5, available[2]=2, available[3]=0;
    allocation[0][0]=0, allocation[0][1]=0, allocation[0][2]=1, allocation[0][3]=2,
    allocation[1][0]=1, allocation[1][1]=0, allocation[1][2]=0, allocation[1][3]=0,
    allocation[2][0]=1, allocation[2][1]=3, allocation[2][2]=5, allocation[2][3]=4,
    allocation[3][0]=0, allocation[3][1]=6, allocation[3][2]=3, allocation[3][3]=2,
    allocation[4][0]=0, allocation[4][1]=0, allocation[4][2]=1, allocation[4][3]=4;

    maximum[0][0]=0, maximum[0][1]=0, maximum[0][2]=1, maximum[0][3]=2,
    maximum[1][0]=1, maximum[1][1]=7, maximum[1][2]=5, maximum[1][3]=0,
    maximum[2][0]=2, maximum[2][1]=3, maximum[2][2]=5, maximum[2][3]=6,
    maximum[3][0]=0, maximum[3][1]=6, maximum[3][2]=5, maximum[3][3]=2,  
    maximum[4][0]=0, maximum[4][1]=6, maximum[4][2]=5, maximum[4][3]=6; 

int main()
{
    int n, m, i, j, k;
    n = 5; // Number of processes

  m = 3; // Number of resources
  int alloc[5][3] = { { 0, 1, 0 }, // P0 // Allocation Matrix
                     { 2, 0, 0 }, // P1
                     { 3, 0, 2 }, // P2
                     { 2, 1, 1 }, // P3
                     { 0, 0, 2 } }; // P4
 
  int max[5][3] = { { 7, 5, 3 }, // P0 // MAX Matrix
                   { 3, 2, 2 }, // P1
                   { 9, 0, 2 }, // P2
                   { 2, 2, 2 }, // P3
                   { 4, 3, 3 } }; // P4
 
  int avail[3] = { 3, 3, 2 }; // Available Resources
 
    for (int i = 0; i < process; i++) {
        for (int j = 0; j < resource; j++){
            need[i][j] = maximum[i][j] - allocation[i][j];}
    }
    cout << "Need Matrix: \n";
    for (int i = 0; i < process; i++) {
        for (int j = 0; j < resource; j++){
            cout << need[i][j]<<" ";}
            cout<<'\n';
    }

    for(int i=0; i<process; i++)
    {
        finish[process]=0;
    }

    int answer[process]={-1}, ind=0;

    for(int k=1; k<=3;k++){
    for (int i = 0; i < process; i++) {
        if (finish[i] == 0) {
                int flag = 0;
                for (int j = 0; j < resource; j++) {
                    if (need[i][j] > available[j]){
                        flag = 1;
                         break;
                    }
                }
 
                if (flag == 0) {
                    answer[ind++] = i;
                    for (int j = 0; j < resource; j++)
                        available[j]+=allocation[i][j];
                    finish[i] = 1;
                }
            }
        }
    }
    int flag=1;
    for(int i=0;i<process;i++)
    {
      if(finish[i]==0)
      {
        flag=0;
        printf("The system is not safe");
        break;
      }
    }

    if(flag)
    {   
        cout << "\nSafe sequence: \n"; 
        for(int i=0;i<process-1;i++)
        {
            cout << answer[i] << " -> ";
        }
        cout << answer[process-1] << '\n';
    }

}

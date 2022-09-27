#include<bits/stdc++.h>
using namespace std;

int main()
{
    int pro=5, res=4, need[pro][res], finish[pro]={0};
    int available[res] = { 1, 5, 2, 0 };
    int allocation[pro][res] = { { 0, 0, 1, 2 }, 
                     	    { 1, 0, 0, 0 }, 
                     	    { 1, 3, 5, 4 }, 
                     	    { 0, 6, 3, 2 }, 
                     	    { 0, 0, 1, 4} }; 
 
    int max[pro][res] = { { 0, 0, 1, 2 }, 
                   	  { 1, 7, 5, 0 }, 
                   	  { 2, 3, 5, 6 }, 
                  	  { 0, 6, 5, 2 }, 
                   	  { 0, 6, 5, 6 } }; 
 
    for(int i=0;i<pro;i++){
        for(int j=0;j<res;j++){
            need[i][j] = maxi[i][j]-allocation[i][j];
	}
    }

    cout << "Need Matrix: \n";
    for(int i=0;i<pro;i++){
        for(int j=0;j<res;j++){
            cout << need[i][j]<<" ";
	}
            cout<<endl;
    }

    for(int i=0;i<pro;i++){
        finish[pro]=0;
    }

    int ans[pro]={-1},m=0;

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
                    		ans[m++] = i;
                    		for (int j = 0; j < resource; j++)
                        		available[j]+=allocation[i][j];
                    			finish[i] = 1;
                		}
            		}
        	}
	}
    }

    int flag=1;

    for(int i=0;i<pro;i++){
    	if(finish[i]==0){
        	flag=0;
		cout << "The system is not safe" << endl ;
        	break;
      	}
    }

    if(flag){   
        cout << endl << "Safe sequence: " << endl; 

        for(int i=0;i<pro-1;i++){
            cout << ans[i] << " -> ";
        }
        cout << ans[pro-1] << '\n';
    }

}

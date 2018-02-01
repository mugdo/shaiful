#include<iostream>
#include <iomanip>
using namespace std;
int main(){
    int first,in=1 ;
    while(cin >> first){

        int ss=9999;
        int ar[30][30];

        for(int i=1;i<=20;i++){
            for(int j=1;j<=20;j++){

                ar[i][j]=ss;
            }
        }

        int sec;

        for(int j = 1 ; j <= first ; j ++) {
            cin >> sec ;
            ar[ 1 ][ sec ] = 1 ;
            ar[ sec ][ 1 ] = 1 ;
        }
        //int first;
        for(int i=2;i<=19;i++){

            cin>>first;
            for(int j=1;j<=first;j++){
                cin>>sec;

                ar[i][sec]=1;
                ar[sec][i]=1;
            }
           // cout<<"*";
        }
        //cout<<"$";
        for(int k=1;k<=20;k++){
            for(int i=1;i<=20;i++){
                for(int j=1;j<=20;j++){
                    ar[i][j]=min(ar[i][j],(ar[i][k]+ar[k][j]));
                }
            }
        }
        //cout<<"#";
        int test;
        cin>>test;

        cout<<"Test Set"<<' '<<"#"<<in<<endl;

        for(int t=0;t<test;t++){

            int a,b;
            cin>>a>>b;

            cout<<std::right<<std::setw(2)<<a<<' '<<"to"<<' '<<std::right<<std::setw(2)<<b<<":"<<' ';
            cout<<ar[a][b]<<endl;

        }
        cout << endl ;
        in++;

    }

return 0;
}

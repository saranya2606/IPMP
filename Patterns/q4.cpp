void nStarDiamond(int n) {
    // Write your code here.
    for(int i=1;i<=n;i++){
        for(int j=n-i;j>0;j--){
            cout<<" ";
        }
        for(int k=1;k<=(2*i-1);k++){
            cout<<"*";
        }
        cout<<endl;
    }

    int ct=0;
    for(int i=n;i>0;i--){
        
    
        for(int l=0;l<ct;l++){
                cout<<" ";
            }
        for(int j=1; j<=(2*i-1);j++){
            cout<<"*";
        }
        for(int l=0;l<ct;l++){
                cout<<" ";
            }
        ct++;

        cout<<endl;
    }
}
void nStarTriangle(int n) {
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
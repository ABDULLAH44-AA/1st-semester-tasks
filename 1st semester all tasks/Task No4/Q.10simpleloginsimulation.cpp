int main(){
    int password1 ,password2;
    string name1 ,name2;
    cout<<"Set your password here"<<endl;
        cout<<"Enter your name:"<<endl;
    cin>>name1;
    
         cout<<"Enter your password:"<<endl;
    cin>>password1;
    
    cout<<"Now put your password you set before for login"<<endl;
    
    cout<<"Enter your name:"<<endl;
    cin>>name2;
         cout<<"Enter your password:"<<endl;
    cin>>password2;
    if(password1==password2 && name1==name2){
    	cout<<"congradulations you are at your profile: ";
    	
	}
    else {
    	cout<<"please put valid password";
	}
    return 0;
}
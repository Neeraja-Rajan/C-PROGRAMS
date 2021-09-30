 #include<iostream>
    using namespace std;
    //main Program
    int main()
    {
        int ip,sum=0;
        cout<<“Enter number to check: “;
            //user input
        cin>>ip;
        int save=ip;
        //logic to check for Strong Number starts
       
        //checking for Strong Nunber
        if(sum==save)
        {
            cout<<save<<” is a Strong Number”;
        }
        else
        {
            cout<<save<<” is not a Strong Number”;
        }
        //logic ends
        return 0;
    }

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
        while(ip)
        {
            int num=ip%10;
            int fact = 1;
            //finding factorial of each digit of input
            for(int i=num;i>0;i–)
            {
                fact=fact*i;
            }
            sum+=fact;
            ip/=10;
        }
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

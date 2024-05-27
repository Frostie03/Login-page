#include <iostream>//header file for input and output
#include <string>//header file for string variable 
#include <conio.h>//Reads a single character from the keyboard 'getch'

using namespace std;

//C++ database that is able to take new data and store it as well as displace saved data
//class for the login page that the user first interacts with 
class loginpage 
{
    private:
    char newpassword[50], password[50], ch, newusername[50], username[50];
    int i=0;

    public:

    //function that just dispalys welcome to quickpay's database
    void welcome()
    {
        cout << "\t\t\t________________________________________\n\n"<<endl;
        cout << "\t\t\t_________       Welcome      ____________\n\n"<<endl;
    }

    //fucntion to unable new users to create a new username and password
    void newuser()
    {
        cout << "\n\n\n"<<endl;   
        cout << "\t\t\t_________________________________________________________________\n\n"<<endl;
        cout << "\t\t\t_________       Set New Username And PAssword      ____________\n\n"<<endl;
        cout << "Set new username: "<<endl;
        cin>>newusername; 
        cout << "Set new password: "<<endl;
        //do while loop to hide the password input and display it as *
        do
        {
            ch=getch();
            newpassword[i]=ch;
            cout << "*";
            i++;
        } 
        while (ch!=13);
        
    }

    //login fucntion for old users to enter their usernamer and password and login 
    void login()
    {
        cout << "\n\n\n     \n\n\n"<<endl;        
        cout << "\t\t\t_________________________________________________________________\n\n"<<endl;
        cout << "\t\t\t_________       Enter Your Username And Password      ____________\n\n"<<endl;
        cout << "Enter Your Username: "<<endl;
        cin>>username; 
        cout << "Enter Your Password: "<<endl;
        //do while loop to hide the password input and display it as *
        do 
        {
            ch = getch();
            password[1]=ch;
            cout << "*";
            i++;
        }
        while (ch!=13);
    }   

    //fucntion to display newuser's username and password 
    void newuser_dispaly()
    {
        cout << "\n\nUsername: "<<newusername<<endl;
        cout << "Password: "<<newpassword<<endl;
    }

};

int main()
{
    loginpage obj1;
    obj1.welcome();
    int ch, check;
    cout<<"Are you a new user?"<<endl;
    cout<<"Enter 1 for yes and 0 for no"<<endl;
    cin>>ch;
    //while loop to check the input if not 1 or 2 loop will iterate 
    while (ch != 1 && ch != 0)
    {
        cout<<"Invalid Input"<<endl;
        cout<<"Enter 1 for yes and 0 for no"<<endl;
        cin>>ch;
    }
    //if loop to differentiate between the new user and the old user 
    if (ch == 1)
    {
        obj1.newuser();
        cout<<"\n\nDo you want to view your saved details?"<<endl;
        cout<<"Enter 1 for yes and 0 for no"<<endl;
        cin>>check;
        //while loop to check the input if not 1 or 2 loop will iterate
        while (check != 1 && check != 0)
        {
            cout<<"Invalid Input"<<endl;
            cout<<"Enter 1 for yes and 0 for no"<<endl;
            cin>>check;
        }
        //if loop to displayed new users saved details 
        if (check == 1)
        {
            obj1.newuser_dispaly();
            cout<<"\n\nPlease login to continue"<<endl;
            obj1.login();
        }
        else
        {
            cout<<"\n\nYou have successfully created a new account"<<endl;
            cout<<"\nPlease login to continue"<<endl;
            obj1.login();
        }
        
    }
    else
    {
        obj1.login();
    }
    return 0;
}
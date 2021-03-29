#include <iostream>
#include <fstream>
#include <string>
#include <windows.h>
using namespace std;

void first_list();
void add();
void delet();
void edit();
void atm();
void second_list();
void check();
void draw();
void deposit();
void exchange();


void welcome();
void end();
void gotoxy(int x,int y);
void line();


struct customer{
int ID, age, account, PIN, balance;
string Name ,address, phone;
char gender;
};

customer array[100];
int PIN=0;

int main()
{
        welcome();
        first_list();
        return 0;
}

void welcome()
{
    system("color 5e");
    line();
    cout<<endl<<endl<<endl<<"*   *   *  ******   *        *****    *****    *       *                      \n";Sleep(3);
    cout<<"*  * *  *  *        *       *        *     *   **     **        *             \n";Sleep(3);
    cout<<"* *   * *  ******   *      *        *       *  * *   * *       ***    ****    \n";Sleep(3);
    cout<<"**     **  *        *       *        *     *   *  * *  *        *    *    *   \n";Sleep(3);
    cout<<"*       *  ******   ******   *****    *****    *   *   *        ***   ****    \n\n\n";Sleep(3);

    cout<<"\t\t\t     \1     \1\1\1\1\1   \1       \1  \n";Sleep(3);
    cout<<"\t\t\t    \1 \1      \1     \1\1     \1\1  \n";Sleep(3);
    cout<<"\t\t\t   \1\1\1\1\1     \1     \1  \1  \1 \1  \n";Sleep(3);
    cout<<"\t\t\t  \1     \1    \1     \1  \1 \1  \1  \n";Sleep(3);
    cout<<"\t\t\t \1       \1   \1     \1   \1   \1  \n\n"<<endl;Sleep(3);
    line();
}
void line()
{
        char a[80];
        a[0]='\5';
        for(int i=0; i<80;i++)
                if(a[i]=='\5')
                        a[i+1]='\5';
        for(int i=0; i<80;i++)
                {
                Sleep(2);
                cout<<a[i];
                }
}
void gotoxy(int x,int y)
{
       HANDLE s=GetStdHandle(STD_OUTPUT_HANDLE);
        COORD pos = {x, y};
       SetConsoleCursorPosition(s, pos);
}
void end()
{
            system("cls");
            system("color 4f");
            line();
            cout<<"\n\nThe ATM system written by:\n\n\t\t\t Manal Al_subaei\n\n\n\t\t\t Information System (IS)\n\n\n\t\t\t AM_2\n\n\n\n";
            line();
}
void first_list()
{
        system("cls");
        system("color 08");
        line();
        int number;
        gotoxy(30,2);
        cout<<"Choose the number: "<<endl<<endl;
        l1:
        gotoxy(20,4);
        HANDLE color = GetStdHandle(STD_OUTPUT_HANDLE);
        SetConsoleTextAttribute(color ,FOREGROUND_BLUE | FOREGROUND_INTENSITY);
        cout<<"1- Add customer."<<endl;
        gotoxy(20,5);
        HANDLE c = GetStdHandle(STD_OUTPUT_HANDLE);
        SetConsoleTextAttribute(c ,FOREGROUND_GREEN | FOREGROUND_INTENSITY);
        cout<<"2- Delete customer."<<endl;
        gotoxy(20,6);
        HANDLE co = GetStdHandle(STD_OUTPUT_HANDLE);
        SetConsoleTextAttribute(co ,FOREGROUND_RED | FOREGROUND_INTENSITY);
        cout<<"3- Edit customer."<<endl;
        gotoxy(20,7);
        HANDLE col= GetStdHandle(STD_OUTPUT_HANDLE);
        SetConsoleTextAttribute(col , FOREGROUND_INTENSITY);
        cout<<"4- ATM system."<<endl;
        gotoxy(20,8);
        HANDLE colo = GetStdHandle(STD_OUTPUT_HANDLE);
        SetConsoleTextAttribute(colo ,FOREGROUND_RED | FOREGROUND_BLUE | FOREGROUND_INTENSITY);
        cout<<"5- Exit."<<endl<<endl<<"\t\t\t ";
        cin>>number;
        cout<<endl<<endl;
        switch(number)
        {
                case 1 : add();  HANDLE col2= GetStdHandle(STD_OUTPUT_HANDLE);SetConsoleTextAttribute(col2 , FOREGROUND_INTENSITY);line();    break;
                case 2 : delet();HANDLE col6= GetStdHandle(STD_OUTPUT_HANDLE);SetConsoleTextAttribute(col6 , FOREGROUND_INTENSITY);line();    break;
                case 3 : edit(); HANDLE col7= GetStdHandle(STD_OUTPUT_HANDLE);SetConsoleTextAttribute(col7 , FOREGROUND_INTENSITY);line();    break;
                case 4 : atm();  HANDLE col9= GetStdHandle(STD_OUTPUT_HANDLE);SetConsoleTextAttribute(col9 , FOREGROUND_INTENSITY);line();    break;
                case 5 : end();  HANDLE col8= GetStdHandle(STD_OUTPUT_HANDLE);SetConsoleTextAttribute(col8 , FOREGROUND_INTENSITY);line();    break;
                default: cout<<"Your choice out the range.\n Please enter any number from 1 to 5."<<endl;      goto l1;       break;
        }
}
void second_list()
{
        system("cls");
        system("color 08");
        line();
        int number;
        gotoxy(30,2);
        cout<<"Choose the number: "<<endl<<endl;
        l2:
        gotoxy(20,4);
        HANDLE color = GetStdHandle(STD_OUTPUT_HANDLE);
        SetConsoleTextAttribute(color ,FOREGROUND_BLUE | FOREGROUND_INTENSITY);
        cout<<"1- Check Account."<<endl;
        gotoxy(20,5);
        HANDLE col= GetStdHandle(STD_OUTPUT_HANDLE);
        SetConsoleTextAttribute(col , FOREGROUND_INTENSITY);
        cout<<"2- Draw Cash."<<endl;
        gotoxy(20,6);
        HANDLE colo = GetStdHandle(STD_OUTPUT_HANDLE);
        SetConsoleTextAttribute(colo ,FOREGROUND_RED | FOREGROUND_BLUE | FOREGROUND_INTENSITY);
        cout<<"3- Deposit Cash."<<endl;
        gotoxy(20,7);
        HANDLE c = GetStdHandle(STD_OUTPUT_HANDLE);
        SetConsoleTextAttribute(c ,FOREGROUND_GREEN | FOREGROUND_INTENSITY);
        cout<<"4- Exchange Account."<<endl;
        gotoxy(20,8);
        HANDLE co = GetStdHandle(STD_OUTPUT_HANDLE);
        SetConsoleTextAttribute(co ,FOREGROUND_RED | FOREGROUND_INTENSITY);
        cout<<"5- Back."<<endl<<endl<<"\t\t\t ";
        cin>>number;
        cout<<endl<<endl;
        switch(number)
        {
                case 1 : check();     HANDLE col2= GetStdHandle(STD_OUTPUT_HANDLE);SetConsoleTextAttribute(col2 , FOREGROUND_INTENSITY);line();   break;
                case 2 : draw();      HANDLE col3= GetStdHandle(STD_OUTPUT_HANDLE);SetConsoleTextAttribute(col3 , FOREGROUND_INTENSITY);line();   break;
                case 3 : deposit();   HANDLE col4= GetStdHandle(STD_OUTPUT_HANDLE);SetConsoleTextAttribute(col4 , FOREGROUND_INTENSITY);line();   break;
                case 4 : exchange();  HANDLE col5= GetStdHandle(STD_OUTPUT_HANDLE);SetConsoleTextAttribute(col5 , FOREGROUND_INTENSITY);line();   break;
                case 5 : first_list();break;
                default: cout<<"Your choice out the range.\n Please enter any number from 1 to 5."<<endl;      goto l2;       break;
        }
}
void add()
{
        system("cls");
        line();
        int n;
        ofstream output;
        output.open("ATM.txt" , ios::app);
        if(output.is_open())
        {   
                gotoxy(20,3);
                HANDLE color = GetStdHandle(STD_OUTPUT_HANDLE);
                SetConsoleTextAttribute(color ,FOREGROUND_BLUE | FOREGROUND_INTENSITY);
     
                cout<<"How many numbers of customer do you what to add: ";
                cin>>n;
                for(int i=0 ; i<n ; i++)
                {
                         Sleep(200);
                         system("cls");
//__________________ from black screen to variables_____________________________
                        gotoxy(30,2);
                        cout<<"Customer "<<i+1<<" :";
                        cout<<"\nEnter the ID: ";
                        cin>>array[i].ID;
                        cin.ignore(1000 ,'\n');
                        cout<<"Enter the Name( FistName , SecondName, LastName): ";
                        getline(cin, array[i].Name);
                        l3:
                        cout<<"Enter the Gender (F) or (M): ";
                        cin>>array[i].gender;                      
                        array[i].gender=toupper(array[i].gender);
                        if( array[i].gender != 'F' && array[i].gender != 'M')                      
                        {
                                goto l3;
                        }
                        cout<<"Enter the Age: ";
                        cin>>array[i].age;
                        cin.ignore(10 ,'\n');
                        if( array[i].age < 18 )
                        {
                                cout<<"Sorry you can't cont'd to add this account."<<endl;
                                break;
                        }
                        cout<<"Enter the Address: ";
                        getline(cin, array[i].address);
                        cout<<"Enter the Phone Number: ";
                        l4:
                        getline(cin, array[i].phone);
                        if( array[i].phone.length() != 9 )
                        {
                                cout<<"Please Enter 9 Numbers.";
                                goto l4;
                        }
                        else
                        {
                                if( array[i].phone.substr(0,1)=="7" )
                                     {
                                        int j=1;
                                        string currentChar = "";
                                        while (j<9)
                                        {
                                                currentChar= array[i].phone.substr(j,1);
                                                if (currentChar >= "0" && currentChar <= "9")
                                                {
                                                        j+= 1;
                                                }
                                                else
                                                      {
                                                        cout<<"Please Enter Just Numbers!";
                                                        goto l4;
                                                      }
                                        }
                                    }
                                else
                                     {
                                             cout<<"This is not phone number, Please start with these prefix (70  or  71  or  73  or  77)\ntry again\n";
                                             goto l4;
                                     }


                        }

                        cout<<"Enter the Account Number: ";
                        cin>>array[i].account;
                        cout<<"Enter the PIN: ";
                        cin>>array[i].PIN;
                        cout<<"Enter the Balance: ";
                        cin>>array[i].balance;
                
                        output  <<array[i].ID      <<"\t"<< array[i].Name     <<"\t"<< array[i].gender
                        <<"\t"  <<array[i].age     <<"\t"<< array[i].address  <<"\t"<< array[i].phone
                        <<"\t"  <<array[i].account <<"\t"<< array[i].PIN      <<"\t"<< array[i].balance
                        <<"\t"  << endl;
             }
             output.close();               
        }
        else
                cout<<"The File Couldn't Be Opened."<<endl<<endl<<endl;
        line();
        first_list();
}

void delet()
{
        system("cls");
        line();
        int m=0, g=0, id=0;
        ifstream input;
        input.open("ATM.txt");
        if(input.is_open())
        {
               
 //__________________ from file to variables_____________________________
                for(int i=0 ; i<100 ; i++)
                {
                        if(!input.eof())
                        {
                                m++;
                                input>>array[i].ID;
                                input.ignore(1000, '\t');
                                getline(input, array[i].Name, '\t');
                                input>>array[i].gender;
                                input.ignore(1, '\t');
                                input>>array[i].age;
                                input.ignore(10, '\t');
                                input>>array[i].address;
                                input.ignore(1000, '\t');
                                input>> array[i].phone;
                                input.ignore(1000, '\t');
                                input>>array[i].account;
                                input.ignore(1000,'\t');
                                input>>array[i].PIN;
                                input.ignore(1000,'\t');
                                input>>array[i].balance;
                                input.ignore(10000,'\t');
                        }             
                }
               input.close(); 
//______________________input value____________________________________
        gotoxy(20,3);
        HANDLE c = GetStdHandle(STD_OUTPUT_HANDLE);
        SetConsoleTextAttribute(c ,FOREGROUND_GREEN | FOREGROUND_INTENSITY);
        
        cout<<"Enter the ID for delete it's account: ";
        cin>>id;
        ofstream output;
        output.open("ATM.txt");
        if(output.is_open())
                {
//__________________ from variables to file_____________________________
                        for(int i=0 ; i<m ; i++)
                        {
                                if(id != array[i].ID)
                                {
                                        g++;
                                        output  <<array[i].ID      <<"\t"<< array[i].Name     <<"\t"<< array[i].gender
                                        <<"\t"  <<array[i].age     <<"\t"<< array[i].address  <<"\t"<< array[i].phone
                                        <<"\t"  <<array[i].account <<"\t"<< array[i].PIN      <<"\t"<< array[i].balance
                                        <<"\t"  << endl;
                                }
                                else
                                    cout<<"The account of ( "<<id<<" ) was deleted"<<endl<<endl<<endl;
                        }
                        if(g==m)
                                cout<<"The ID not found."<<endl<<endl<<endl;
                }
                else
                cout<<"The File Couldn't Be Opened."<<endl<<endl<<endl;
   
        }
        else
                cout<<"The File Couldn't Be Opened."<<endl<<endl<<endl;
      line();
        first_list();

}
void edit()
{
        system("cls");
        line();
        int test=0, g=0;
        string firstName[100], lastName[100];
        string first;
        int account,number, space;
        ifstream input;
        input.open("ATM.txt");
        if(input.is_open())
        {
                for(int i=0 ; i<100 ; i++)
                {
                        if(!input.eof())
                        {
                                g++;
                                input>>array[i].ID;
                                input.ignore(1000, '\t');
                                getline(input, array[i].Name, '\t');
                                space=array[i].Name.find(" ",0);
                                firstName[i]=array[i].Name.substr(0,space);
                                lastName[i]=array[i].Name.substr(space+1);
                                input>>array[i].gender;
                                input.ignore(1, '\t');
                                input>>array[i].age;
                                input.ignore(10, '\t');
                                input>>array[i].address;
                                input.ignore(1000, '\t');
                                input>> array[i].phone;
                                input.ignore(1000, '\t');
                                input>>array[i].account;
                                input.ignore(1000,'\t');
                                input>>array[i].PIN;
                                input.ignore(1000,'\t');
                                input>>array[i].balance;
                                input.ignore(10000,'\t');
                        }
                }
                input.close();
        gotoxy(20,3);
        HANDLE co = GetStdHandle(STD_OUTPUT_HANDLE);
        SetConsoleTextAttribute(co ,FOREGROUND_RED | FOREGROUND_INTENSITY);
       
        cout<<"Enter the First Name and the Account Number: ";
        cin>>first;
        cin>>account;
        //cin.ignore();
        for(int i=0 ; i<g ; i++)
        {
                if(account== array[i].account && first == firstName[i])
                {
                         Sleep(200);
                         system("cls");
                         gotoxy(30,2);
                         cout<<"Edit now."<<endl;
                                l9:
//____________________________________list ________________________________________________
                                cout<<"Enter 1) to edit ID.\n";
                                cout<<"Enter 2) to edit Name( FistName).\n";
                                cout<<"Enter 3) to edit Name( SecondName, LastName).\n";
                                cout<<"Enter 4) to edit Gender.\n";
                                cout<<"Enter 5) to edit Age.\n";
                                cout<<"Enter 6) to edit Address.\n";
                                cout<<"Enter 7) to edit Phone Number.\n";
                                cout<<"Enter 8) to edit Account Number.\n";
                                cout<<"Enter 9) to edit PIN.\n";
                                cout<<"Enter 10)to edit Balance.\n";
                                cin>>number;
                                switch(number)
                                {
                                        case 1:
                                                cout<<"Enter the ID: ";
                                                cin>>array[i].ID;
                                                cin.ignore(1000 ,'\n');
                                        break;
                                        case 2:
                                                cout<<"Enter the Name( FistName): ";
                                                getline(cin, firstName[i]);
                                        break;
                                        case 3:
                                                 cout<<"Enter the Name( SecondName, LastName): ";
                                                getline(cin, lastName[i]);
                                        break;
                                        case 4:
                                                l3:
                                                cout<<"Enter the Gender (F) or (M): ";
                                                cin>>array[i].gender;
                                                array[i].gender=toupper(array[i].gender);
                                                if( array[i].gender != 'F' && array[i].gender != 'M')
                                                {
                                                        goto l3;
                                                }
                                        break;
                                        case 5:
                                                cout<<"Enter the Age: ";
                                                cin>>array[i].age;
                                                cin.ignore(10 ,'\n');
                                                if( array[i].age < 18 )
                                                {
                                                        cout<<"Sorry you can't cont'd to add this account."<<endl;
                                                        break;
                                                }
                                        break;
                                        case 6:
                                                cout<<"Enter the Address: ";
                                                getline(cin, array[i].address);
                                        break;
                                        case 7:
                                                cout<<"Enter the Phone Number: ";
                                                l4:
                                                getline(cin, array[i].phone);
                                                if( array[i].phone.length() != 9 )
                                                {
                                                        cout<<"Please Enter 9 Numbers.";
                                                        goto l4;
                                                }
                                                else
                                                {
                                                        if( array[i].phone.substr(0,1)=="7" )
                                                             {
                                                                int j=1;
                                                                string currentChar = "";
                                                                while (j<9)
                                                                {
                                                                        currentChar= array[i].phone.substr(j,1);
                                                                        if (currentChar >= "0" && currentChar <= "9")
                                                                        {
                                                                                j+= 1;
                                                                        }
                                                                        else
                                                                              {
                                                                                cout<<"Please Enter Just Numbers!";
                                                                                goto l4;
                                                                              }
                                                                }
                                                            }
                                                        else
                                                             {
                                                                     cout<<"This is not phone number, Please start with these prefix (70  or  71  or  73  or  77)\ntry again\n";
                                                                     goto l4;
                                                             }


                                                }
                                        break;
                                        case 8:
                                                cout<<"Enter the Account Number: ";
                                                cin>>array[i].account;
                                        break;
                                        case 9:
                                                cout<<"Enter the PIN: ";
                                                cin>>array[i].PIN;
                                        break;
                                        case 10:
                                                 cout<<"Enter the Balance: ";
                                                 cin>>array[i].balance;
                                        break;
                                        default: cout<<"Your choice out the range.\n Please enter any number from 1 to 10."<<endl;      goto l9;       break;
                                }
                        }
                test++;
        }
        if(g==test)
        {
                cout<<"This Customer not found."<<endl;
        }
        ofstream output;
        output.open("ATM.txt");
        if(output.is_open())
             {
                for(int i=0 ; i<g; i++)
                        {                      
                           output  <<array[i].ID      <<"\t"<< array[i].Name     <<"\t"<< array[i].gender
                           <<"\t"  <<array[i].age     <<"\t"<< array[i].address  <<"\t"<< array[i].phone
                           <<"\t"  <<array[i].account <<"\t"<< array[i].PIN      <<"\t"<< array[i].balance
                           <<"\t"  << endl;
                        }
             }
              else
                cout<<"The File Couldn't Be Opened."<<endl<<endl<<endl;
        
      }
        else
                cout<<"The File Couldn't Be Opened."<<endl<<endl<<endl;
        
line();    
first_list();

}
void atm()
{
         system("cls");
        line();
        int g=0, test=0;
        ifstream input;
        input.open("ATM.txt");
        if(input.is_open())
        {
               
 //__________________ from file to variables_____________________________
                for(int i=0 ; i<100 ; i++)
                {
                        if(!input.eof())
                        {
                                g++;
                                input>>array[i].ID;
                                input.ignore(1000, '\t');
                                getline(input, array[i].Name, '\t');
                                input>>array[i].gender;
                                input.ignore(1, '\t');
                                input>>array[i].age;
                                input.ignore(10, '\t');
                                input>>array[i].address;
                                input.ignore(1000, '\t');
                                input>> array[i].phone;
                                input.ignore(1000, '\t');
                                input>>array[i].account;
                                input.ignore(1000,'\t');
                                input>>array[i].PIN;
                                input.ignore(1000,'\t');
                                input>>array[i].balance;
                                input.ignore(10000,'\t');
                        }             
                }
               input.close(); 
//______________________input value____________________________________
        gotoxy(20,3);
        HANDLE col= GetStdHandle(STD_OUTPUT_HANDLE);
        SetConsoleTextAttribute(col , FOREGROUND_INTENSITY);
        cout<<"Enter your PIN: ";
        cin>>PIN;
        for(int i=0 ; i<g ; i++)
                {
                        if(PIN == array[i].PIN)
                        {
                                second_list();
                                test++;
                        }
                }
       if(test==0)
       cout<<"sorry your PIN not found";
        ofstream output;
        output.open("ATM.txt");
        if(output.is_open())
             {
                for(int i=0 ; i<g; i++)
                        {                      
                           output  <<array[i].ID      <<"\t"<< array[i].Name     <<"\t"<< array[i].gender
                           <<"\t"  <<array[i].age     <<"\t"<< array[i].address  <<"\t"<< array[i].phone
                           <<"\t"  <<array[i].account <<"\t"<< array[i].PIN      <<"\t"<< array[i].balance
                           <<"\t"  << endl;
                        }
             }
              else
                cout<<"The File Couldn't Be Opened."<<endl<<endl<<endl;
        
        }
        else
            cout<<"The File Couldn't Be Opened."<<endl<<endl<<endl;
           
        line();
        first_list();
}
void check()
{
        system("cls");
        line();
        int g=0;
        ifstream input;
        input.open("ATM.txt");
        if(input.is_open())
        {
               
 //__________________ from file to variables_____________________________
                for(int i=0 ; i<100 ; i++)
                {
                        if(!input.eof())
                        {
                                g++;
                                input>>array[i].ID;
                                input.ignore(1000, '\t');
                                getline(input, array[i].Name, '\t');
                                input>>array[i].gender;
                                input.ignore(1, '\t');
                                input>>array[i].age;
                                input.ignore(10, '\t');
                                input>>array[i].address;
                                input.ignore(1000, '\t');
                                input>> array[i].phone;
                                input.ignore(1000, '\t');
                                input>>array[i].account;
                                input.ignore(1000,'\t');
                                input>>array[i].PIN;
                                input.ignore(1000,'\t');
                                input>>array[i].balance;
                                input.ignore(10000,'\t');
                        }             
                }
               input.close(); 
               for(int i=0 ; i<g ; i++)
                {
                        if(PIN == array[i].PIN)
                        {
                                 HANDLE color = GetStdHandle(STD_OUTPUT_HANDLE);
                                 SetConsoleTextAttribute(color ,FOREGROUND_BLUE | FOREGROUND_INTENSITY);
 
                                cout<<"/nYour ID is: "            <<array[i].ID<<endl;
                                cout<<"Your Name is: "          <<array[i].Name<<endl;
                                cout<<"Your Gender is: "        <<array[i].gender<<endl;
                                cout<<"Your Age is: "           <<array[i].age<<endl;
                                cout<<"Your Address is: "       <<array[i].address<<endl;
                                cout<<"Your Phone Number is: "  <<array[i].phone<<endl;
                                cout<<"Your Account Number is: "<<array[i].account<<endl;
                                cout<<"Your PIN is: "           <<array[i].PIN<<endl;
                                cout<<"Your Balance is: "       <<array[i].balance<<endl;
                      
                        }
                }
           ofstream output;
           output.open("ATM.txt");
           if(output.is_open())
             {
                for(int i=0 ; i<g; i++)
                        {                      
                           output  <<array[i].ID      <<"\t"<< array[i].Name     <<"\t"<< array[i].gender
                           <<"\t"  <<array[i].age     <<"\t"<< array[i].address  <<"\t"<< array[i].phone
                           <<"\t"  <<array[i].account <<"\t"<< array[i].PIN      <<"\t"<< array[i].balance
                           <<"\t"  << endl;
                        }
             }
              else
                cout<<"The File Couldn't Be Opened."<<endl<<endl<<endl;
        
        }
        else
            cout<<"The File Couldn't Be Opened."<<endl<<endl<<endl;
           
        line();
        second_list();
}
void draw()
{
        system("cls");
        line();
        int g=0, money=0;
        ifstream input;
        input.open("ATM.txt");
        if(input.is_open())
        {
               
 //__________________ from file to variables_____________________________
                for(int i=0 ; i<100 ; i++)
                {
                        if(!input.eof())
                        {
                                g++;
                                input>>array[i].ID;
                                input.ignore(1000, '\t');
                                getline(input, array[i].Name, '\t');
                                input>>array[i].gender;
                                input.ignore(1, '\t');
                                input>>array[i].age;
                                input.ignore(10, '\t');
                                input>>array[i].address;
                                input.ignore(1000, '\t');
                                input>> array[i].phone;
                                input.ignore(1000, '\t');
                                input>>array[i].account;
                                input.ignore(1000,'\t');
                                input>>array[i].PIN;
                                input.ignore(1000,'\t');
                                input>>array[i].balance;
                                input.ignore(10000,'\t');
                        }             
                }
               input.close(); 
     gotoxy(20,3);
     HANDLE col= GetStdHandle(STD_OUTPUT_HANDLE);
     SetConsoleTextAttribute(col , FOREGROUND_INTENSITY);
      
     cout<<"Enter the amount of money that will pull: ";
     cin>>money;
     for(int i=0 ; i<g ; i++)
                {
                        if(PIN == array[i].PIN)
                        {
                                if(array[i].balance >= money)
                                {
                                        array[i].balance-=money;
                                }
                                else
                                        cout<<"You can't draw cash.\nYour Balance isn't Enough."<<endl;
                        }
                }
           ofstream output;
           output.open("ATM.txt");
           if(output.is_open())
             {
                for(int i=0 ; i<g; i++)
                        {                      
                           output  <<array[i].ID      <<"\t"<< array[i].Name     <<"\t"<< array[i].gender
                           <<"\t"  <<array[i].age     <<"\t"<< array[i].address  <<"\t"<< array[i].phone
                           <<"\t"  <<array[i].account <<"\t"<< array[i].PIN      <<"\t"<< array[i].balance
                           <<"\t"  << endl;
                        }
             }
              else
                cout<<"The File Couldn't Be Opened."<<endl<<endl<<endl;
        
        }
        else
            cout<<"The File Couldn't Be Opened."<<endl<<endl<<endl;
           
        line();
        second_list();
}

void deposit()
{
        system("cls");
        line();
        int g=0, money=0;
        ifstream input;
        input.open("ATM.txt");
        if(input.is_open())
        {
               
 //__________________ from file to variables_____________________________
                for(int i=0 ; i<100 ; i++)
                {
                        if(!input.eof())
                        {
                                g++;
                                input>>array[i].ID;
                                input.ignore(1000, '\t');
                                getline(input, array[i].Name, '\t');
                                input>>array[i].gender;
                                input.ignore(1, '\t');
                                input>>array[i].age;
                                input.ignore(10, '\t');
                                input>>array[i].address;
                                input.ignore(1000, '\t');
                                input>> array[i].phone;
                                input.ignore(1000, '\t');
                                input>>array[i].account;
                                input.ignore(1000,'\t');
                                input>>array[i].PIN;
                                input.ignore(1000,'\t');
                                input>>array[i].balance;
                                input.ignore(10000,'\t');
                        }             
                }
               input.close(); 
     gotoxy(20,3);
     HANDLE colo = GetStdHandle(STD_OUTPUT_HANDLE);
     SetConsoleTextAttribute(colo ,FOREGROUND_RED | FOREGROUND_BLUE | FOREGROUND_INTENSITY);
      
    
        cout<<"Enter the amount of money that will be added: ";
        cin>>money;
        for(int i=0 ; i<g ; i++)
                {
                        if(PIN == array[i].PIN)
                        {
                                array[i].balance+=money;
                        }
                }
           ofstream output;
           output.open("ATM.txt");
           if(output.is_open())
             {
                for(int i=0 ; i<g; i++)
                        {                      
                           output  <<array[i].ID      <<"\t"<< array[i].Name     <<"\t"<< array[i].gender
                           <<"\t"  <<array[i].age     <<"\t"<< array[i].address  <<"\t"<< array[i].phone
                           <<"\t"  <<array[i].account <<"\t"<< array[i].PIN      <<"\t"<< array[i].balance
                           <<"\t"  << endl;
                        }
             }
              else
                cout<<"The File Couldn't Be Opened."<<endl<<endl<<endl;
        
        }
        else
            cout<<"The File Couldn't Be Opened."<<endl<<endl<<endl;
           
        line();
        second_list();
}
void exchange()
{
        system("cls");
        line();
        int g=0, money=0, test=0, account;
        char confirm;
       
        ifstream input;
        input.open("ATM.txt");
        if(input.is_open())
        {
               
 //__________________ from file to variables_____________________________
                for(int i=0 ; i<100 ; i++)
                {
                        if(!input.eof())
                        {
                                g++;
                                input>>array[i].ID;
                                input.ignore(1000, '\t');
                                getline(input, array[i].Name, '\t');
                                input>>array[i].gender;
                                input.ignore(1, '\t');
                                input>>array[i].age;
                                input.ignore(10, '\t');
                                input>>array[i].address;
                                input.ignore(1000, '\t');
                                input>> array[i].phone;
                                input.ignore(1000, '\t');
                                input>>array[i].account;
                                input.ignore(1000,'\t');
                                input>>array[i].PIN;
                                input.ignore(1000,'\t');
                                input>>array[i].balance;
                                input.ignore(10000,'\t');
                        }             
                }
               input.close(); 
     gotoxy(20,3);
     HANDLE c = GetStdHandle(STD_OUTPUT_HANDLE);
     SetConsoleTextAttribute(c ,FOREGROUND_GREEN | FOREGROUND_INTENSITY);
           
        cout<<"Enter the Account Number to exchange to him: ";
        l5:
        cin>>account;

        for(int i=0 ; i<g ; i++)
                {
                        if(account == array[i].account)
                        {
                                test++;
                                cout<<"His ID is: "            <<array[i].ID<<endl;
                                cout<<"His Name is: "          <<array[i].Name<<endl;
                                cout<<"His Gender is: "        <<array[i].gender<<endl;
                                cout<<"His Age is: "           <<array[i].age<<endl;
                                cout<<"His Address is: "       <<array[i].address<<endl;
                                cout<<"His Phone Number is: "  <<array[i].phone<<endl;
                                cout<<"His Account Number is: "<<array[i].account<<endl;
                                cout<<"His PIN is: "           <<array[i].PIN<<endl;
                                cout<<"His Balance is: "       <<array[i].balance<<endl;
                                l6:
                                cout<<"\nEnter (Y) to confirm or (N) to cancel.";
                                cin>>confirm;
                                confirm=toupper(confirm);
                                if( confirm!= 'Y' && confirm!= 'N')
                                {
                                        goto l6;
                                }
                                else if( confirm =='Y')
                                {
                                        cout<<"Enter the amount of money that will be exchanged to "<<array[i].Name<<": ";
                                        cin>>money;
                                        for(int j=0 ; j<g; j++)
                                        {
                                                if(PIN == array[j].PIN)
                                                {
                                                        if(array[j].balance >= money)
                                                        {
                                                                array[j].balance-=money;
                                                                array[i].balance+=money;
                                                        }
                                                        else
                                                        {
                                                                cout<<"You can't Exchange Account.\nYour Balance isn't Enough."<<endl;
                                                                break;
                                                        }
                                                }
                                        }
                                        break;
                                }
                                else
                                        break;
                        }
                }
           if(test==0)
            {
              cout<<"The Account is wrong./n Please Enter The Correct Account.";
              goto l5;
            }
           ofstream output;
           output.open("ATM.txt");
           if(output.is_open())
             {
                for(int i=0 ; i<g; i++)
                        {                      
                           output  <<array[i].ID      <<"\t"<< array[i].Name     <<"\t"<< array[i].gender
                           <<"\t"  <<array[i].age     <<"\t"<< array[i].address  <<"\t"<< array[i].phone
                           <<"\t"  <<array[i].account <<"\t"<< array[i].PIN      <<"\t"<< array[i].balance
                           <<"\t"  << endl;
                        }
             }
              else
                cout<<"The File Couldn't Be Opened."<<endl<<endl<<endl;
        
        }
        else
            cout<<"The File Couldn't Be Opened."<<endl<<endl<<endl;
           
        line();
        second_list();
}  
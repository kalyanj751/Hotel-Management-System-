#include<iostream>
using namespace std;

int main(){

int quant ; //Quantity
int choice;

//declaring variable that will store quantity of foof items or rooms

int Qrooms=0;    // variable Qrooms stores quantity of rooms
int Qpasta=0;   //variable Qpasta stores quantity of food
int Qburger=0;   //variable Qburger stores quantity of food
int Qnoodles=0;   //variable Qnoodles stores quantity of food
int Qshake=0;   //variable Qshake stores quantity of food
int Qchicken=0;   //variable Qchicken stores quantity of food

//declaring variables for the food items that have been sold in hotel

int Srooms=0;    // variable Srooms stores quantity of rooms sold
int Spasta=0;   //variable Spasta stores quantity of pasta
int Sburger=0;   //variable Sburger stores quantity of burger sold
int Snoodles=0;   //variable Snoodles stores quantity of noodles sold
int Sshake=0;   //variable Sshake stores quantity of shake sold
int Schicken=0;   //variable Schicken stores quantity of chicken sold




//declaring variable that will store price of each items or food products of these rooms


int totalRooms=0;
int totalPasta=0;
int totalBurger=0;
int totalNoodles=0;
int totalShake=0;
int totalChicken=0;


//now making list where we will ask user to enter the number of food items or room in the hotel;

cout<<"\n\t Quantities of items available";

cout<<"\n Rooms Available : ";
cin>>Qrooms;
cout<<"\n Quantity of Pasta :";
cin>>Qpasta;
cout<<"\n Quantity of Burger :";
cin>>Qburger;
cout<<"\n Quantity of noodles : ";
cin>>Qnoodles;
cout<<"\n Quantity of shake : ";
cin>>Qshake;
cout<<"\n Quantity of chicken Roll : ";
cin>>Qchicken;


//creating menu

m:

cout<<"\n\t\t Please select from the given menu options";
cout<<"\n\n1)Rooms";
cout<<"\n2)Pasta";
cout<<"\n3)Burger";
cout<<"\n4)noodles";
cout<<"\n5)Shake";
cout<<"\n6)chicken Roll";
cout<<"\n7)Information regarding sales and collection";
cout<<"\n8)Exit";

cout<<"\n\nEnter your choice : ";
cin>>choice;


switch (choice)
{
case 1:
    cout<<"\n\nEnter the rooms you want :  ";
    cin>>quant;
    if(Qrooms-Srooms>=quant){  // inside if we will check do we have these many rooms required by the user
        Srooms=Srooms+quant;
        totalRooms=totalRooms+quant*1200;
        cout<<"\n"<<quant<<"Rooms have been alloted to you!! "<<endl;

    }
    else{
        cout<<"\n Only"<<Qrooms-Srooms<<" Remaining in Hotel";
    }
    break;

case 2:
    cout<<"/\n\nEnter the Quantity of pasta you want :  ";
    cin>>quant;
    if(Qpasta-Spasta>=quant){  // inside if we will check do we have these many rooms required by the user
        Spasta=Spasta+quant;
        totalPasta=totalPasta+quant*250;
        cout<<"\n"<<quant<<"Pasta is the order!! "<<endl;

    }
    else{
        cout<<"\n Only"<<Qpasta-Spasta<<" Pasta Remaining in Hotel";
    }
    break;

    case 3:
    cout<<"\n\nEnter the Quantity of Bburger you want :  ";
    cin>>quant;
    if(Qburger-Sburger>=quant){  // inside if we will check do we have these many rooms required by the user
        Sburger=Sburger+quant;
        totalBurger=totalBurger+quant*250;
        cout<<"\n"<<quant<<"burger is the order!! "<<endl;

    }
    else{
        cout<<"\n Only"<<Qburger-Sburger<<" burger Remaining in Hotel";
    }
    break;


    case 4:
    cout<<"/\n\nEnter the Quantity of noodles you want :  ";
    cin>>quant;
    if(Qnoodles-Snoodles>=quant){  // inside if we will check do we have these many rooms required by the user
        Snoodles=Snoodles+quant;
        totalNoodles=(totalNoodles+quant)*120;
        cout<<"\n"<<quant<<"noodles is the order!! "<<endl;

    }
    else{
        cout<<"\n Only"<<Qnoodles-Snoodles<<" burger Remaining in Hotel";
    }
    break;
    case 5:
    cout<<"/\n\nEnter the Quantity of shake you want :  ";
    cin>>quant;
    if(Qshake-Sshake>=quant){  // inside if we will check do we have these many rooms required by the user
        Sshake=Sshake+quant;
        totalShake=(totalBurger+quant)*120;
        cout<<"\n"<<quant<<"Shake is the order!! "<<endl;

    }
    else{
        cout<<"\n Only"<<Qshake-Sshake<<"  Remaining in Hotel";
    }
    break;

        case 6:
    cout<<"/\n\nEnter the Quantity of chicken roll you want :  ";
    cin>>quant;
    if(Qchicken-Schicken>=quant){  // inside if we will check do we have these many rooms required by the user
        Schicken=Schicken+quant;
        totalChicken=(totalChicken+quant)*120;
        cout<<"\n"<<quant<<"chicken roll is the order!! "<<endl;

    }
    else{
        cout<<"\n Only"<<Qchicken-Schicken<<"  Remaining in Hotel"; 
    }
    break;

        case 7:
    cout<<"\n\nDetails of sales and collection\n :  ";
    cout<<"\n\n Number of rooms we had : "<<Qrooms;
    cout<<"\n\n Number of rooms we gave for rent : "<<Srooms;
    cout<<"\n\n Remaining Rooms : "<<Qrooms-Srooms;
    cout<<"\n\n Total room collection for the day : "<<totalRooms;


    cout<<"\n\n Number of pasta we had : "<<Qpasta;
    cout<<"\n\n Number of pasta sold : "<<Spasta;
    cout<<"\n\n Remaining pasta : "<<Qpasta-Spasta;
    cout<<"\n\n Total pasta collection for the day : "<<totalPasta;


    cout<<"\n\n Number of burger we had : "<<Qburger;
    cout<<"\n\n Number of burger sold : "<<Sburger;
    cout<<"\n\n Remaining burger : "<<Qburger-Sburger;
    cout<<"\n\n Total burger collection for the day : "<<totalBurger;



    cout<<"\n\n Number of noodles we had : "<<Qnoodles;
    cout<<"\n\n Number of noodles sold : "<<Snoodles;
    cout<<"\n\n Remaining noodles : "<<Qnoodles-Snoodles;
    cout<<"\n\n Total noodles collection for the day : "<<totalNoodles;
    


    cout<<"\n\n Number of shakes we had : "<<Qshake;
    cout<<"\n\n Number of shakes sold : "<<Sshake;
    cout<<"\n\n Remaining shakes : "<<Qshake-Sshake;
    cout<<"\n\n Total shakes collection for the day : "<<totalShake;


    
    cout<<"\n\n Number of chicken roll we had : "<<Qchicken;
    cout<<"\n\n Number of chicken roll sold : "<<Schicken;
    cout<<"\n\n Remaining chicken roll : "<<Qchicken-Schicken;
    cout<<"\n\n Total chicken roll collection for the day : "<<totalChicken;
    
    cout<<"\n\n TOTAL COLLECTION OF THE DAY: "<<totalRooms+totalPasta+totalBurger+totalNoodles+totalShake+totalChicken;

    case 8:
        exit(0);

default:

cout<<"Select the numbers mentioned above ! ! ! !";
    break;
}
goto m;


}
#include <iostream>
using namespace std;

double withdraw = 0, deposit = 0, starting_balance = 500;
int option;


depositt(){


cout <<"How Much Do You Want to Deposit?: ";
cin >> deposit;
if(deposit <= 0 ){
cout <<"Invalid Amount, Please Try Again" <<endl;
}

else{
    starting_balance = starting_balance + deposit;
    cout <<"You Have Successfully Deposited: " <<deposit <<endl;
    cout <<"Your Updated Balance is: " <<starting_balance <<" Pesos" <<endl;

}
return 0;
}



int counter = 0;
int reversed = 3;


withdraww(){
do{

cout <<"How Much Do You Want to Withdraw?: ";
cin >>withdraw;

if (withdraw > starting_balance){
cout <<"Insufficient Balance, Please Try Again" <<endl;
counter++;
reversed--;
cout <<"YOU ONLY HAVE " << reversed << " Tries" << endl;

}
else if(withdraw <= 0){
cout <<"INVALID AMOUNT, Please Try Again" <<endl;
counter++;
reversed--;
cout <<"YOU ONLY HAVE " << reversed << " Tries" << endl;

}
else{
    starting_balance = starting_balance - withdraw;
    cout <<"You Have Successfully Withdrawen: " <<withdraw <<" Pesos" <<endl;
    cout <<"Your Updated Balance is: " <<starting_balance <<" Pesos" <<endl;
break;
}

}while(counter!= 3);
if (counter == 3){
cout <<"Session Terminated" <<endl;}
return 0;


}

check_balance(){

cout <<"YOUR CURRENT BALANCE IS: " <<starting_balance <<endl;
return 0;

}







int main(){
cout <<"WELCOME TO ATM BANK SYSTEM" <<endl;
cout <<"--------------------------" <<endl;
cout <<"You have a Starting Balance of: " <<starting_balance <<endl;
cout <<endl;

for(;;){
cout <<"1. Deposit" <<endl;
cout <<"2. Withdraw" <<endl;
cout <<"3. Check Balance" <<endl;
cout <<"4. Exit" <<endl;



cout <<"ENTER YOUR CHOICE: ";
cin >> option;

switch(option){
case 1:
depositt();
break;

case 2:
withdraww();
break;
case 3:
check_balance();
break;
case 4:
cout <<"Thank You For Choosing My ATM BANK SYSTEM" <<endl;
return 0;

default:
cout <<"Invalid Input, Please Try Again (1-4)" <<endl;

}
}


cout <<endl;


}


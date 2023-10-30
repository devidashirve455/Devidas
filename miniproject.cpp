#include<iostream>
using namespace std;
int main(){ 
    
    char startvalue;
    char choiceAgain;
    float onlineShopping(void);
    startlevel:
    cout<< " please press s to start shopping"<<endl;
    start:
    cin>>startvalue;
    if(startvalue=='s'|| startvalue=='S'){
    float totalAmount=onlineShopping();
    cout<<"Total billAmount is"<<totalAmount;
    shopAgain:
    cout<<"Do you want shopping again, yes our no"<<endl;
    cin>>choiceAgain;
    if(choiceAgain=='yes'){
        goto startlevel;

    } 
    else if( choiceAgain=='no'){
        cout<<"Thanks for shopping"<< endl;
            }
            else {
                cout<<"you have entered wrong option, please type again"<<endl;
                goto shopAgain;
            }

    }
    else{
        cout<<"you have entered wwrong option,pleas s"<<endl;
        goto start;
    } 
}
float onlineShopping(){
    char choice;
    char item;
    int quantity;
    float billAmount=0;
 cout<<" *****Welcom to Online Shopping*****"<<endl;
 cout<<"---------Please follow the instructions----"<<endl;
 cout<<"(1) please enter m to order mobile phones"<<endl;
 cout<<"(2) please enter l to order Laptop"<<endl;
 cout<<"(3) please enter d to order d.v.d "<<endl;
 cout<<"(4) please enter s to order Speaker"<<endl;
 cout<<"(5) please enter h to order headphon"<<endl;
 cin>>choice;
 //-----------------Mobile ----------
 if(choice=='m'|| choice=='M'){
    MobileLevel:
    cout<<"Mobile details"<<endl;
    cout<<"(1)Apple=Price : 40000"<<endl;
    cout<<"(2)vivo=Price : 25000"<<endl;
    cout<<"(3)oppo=Price : 20000"<<endl;
    cout<<"(4)Redmi=Price : 30000"<<endl;
    cout<<"(5)samsun=Price : 45000"<<endl;
    cout<<" Pleas enter your choice"<<endl;
    cin>>item;
    if(item=='1'){
        cout<<"enter quantity"<<endl;
        cin>>quantity;
        billAmount=billAmount+quantity*40000;

    }
    else if (item=='2'){
        cout<<"enter quantity"<<endl;
        cin>>quantity;
        billAmount=billAmount+quantity*25000;
    }
    else if (item=='3'){
        cout<<"enter quantity"<<endl;
        cin>>quantity;
        billAmount=billAmount+quantity*20000;
    }
    else if (item=='2'){
        cout<<"enter quantity"<<endl;
        cin>>quantity;
        billAmount=billAmount+quantity*30000;
    }
    else if (item=='2'){
        cout<<"enter quantity"<<endl;
        cin>>quantity;
        billAmount=billAmount+quantity*45000;
    }
    else{
        cout<<" you have entered wrong option type again"<<endl;
        goto MobileLevel;
    }
 }
 //-----------------Laptop ----------
 if(choice=='l'|| choice=='L'){
    LaptopLevel:
    cout<<"Laptop details"<<endl;
    cout<<"(1)Apple=Price : 200000"<<endl;
    cout<<"(2)lenovo=Price : 50000"<<endl;
    cout<<"(3)dell=Price : 60000"<<endl;
    cout<<"(4)Hp=Price : 70000"<<endl;
    cout<<"(5)samsung=Price : 80000"<<endl;
    cout<<" Pleas enter your choice"<<endl;
    cin>>item;
    if(item=='1'){
        cout<<"enter quantity"<<endl;
        cin>>quantity;
        billAmount=billAmount+quantity*40000;

    }
    else if (item=='2'){
        cout<<"enter quantity"<<endl;
        cin>>quantity;
        billAmount=billAmount+quantity*25000;
    }
    else if (item=='3'){
        cout<<"enter quantity"<<endl;
        cin>>quantity;
        billAmount=billAmount+quantity*20000;
    }
    else if (item=='4'){
        cout<<"enter quantity"<<endl;
        cin>>quantity;
        billAmount=billAmount+quantity*30000;
    }
    else if (item=='5'){
        cout<<"enter quantity"<<endl;
        cin>>quantity;
        billAmount=billAmount+quantity*45000;
    }
    else{
        cout<<" you have entered wrong option type again"<<endl;
        goto LaptopLevel;
    }
 }
 //-----------------D.V.D ----------
 if(choice=='d'|| choice=='D'){
    DvdLevel:
    cout<<"D.V.D details"<<endl;
    cout<<"(1)Amazon=Price : 10000"<<endl;
    cout<<"(2)Ibell=Price : 5000"<<endl;
    cout<<"(3)Sumvisiom phopinx=Price : 6000"<<endl;
    cout<<"(4)Sylvania=Price : 7000"<<endl;
    cout<<"(5)Sony=Price : 8000"<<endl;
    cout<<" Pleas enter your choice"<<endl;
    cin>>item;
    if(item=='1'){
        cout<<"enter quantity"<<endl;
        cin>>quantity;
        billAmount=billAmount+quantity*40000;

    }
    else if (item=='2'){
        cout<<"enter quantity"<<endl;
        cin>>quantity;
        billAmount=billAmount+quantity*25000;
    }
    else if (item=='3'){
        cout<<"enter quantity"<<endl;
        cin>>quantity;
        billAmount=billAmount+quantity*20000;
    }
    else if (item=='4'){
        cout<<"enter quantity"<<endl;
        cin>>quantity;
        billAmount=billAmount+quantity*30000;
    }
    else if (item=='5'){
        cout<<"enter quantity"<<endl;
        cin>>quantity;
        billAmount=billAmount+quantity*45000;
    }
    else{
        cout<<" you have entered wrong option type again"<<endl;
        goto DvdLevel;
    }
 }
 //-----------------Speaker----------
 if(choice=='s'|| choice=='S'){
    SpeakerLevel:
    cout<<"Speaker details"<<endl;
    cout<<"(1)Apple=Price : 10000"<<endl;
    cout<<"(2)Infinty=Price : 5000"<<endl;
    cout<<"(3)Dolby=Price : 6000"<<endl;
    cout<<"(4)Sonos=Price : 7000"<<endl;
    cout<<"(5)Jvl=Price : 8000"<<endl;
    cout<<" Pleas enter your choice"<<endl;
    cin>>item;
    if(item=='1'){
        cout<<"enter quantity"<<endl;
        cin>>quantity;
        billAmount=billAmount+quantity*40000;

    }
    else if (item=='2'){
        cout<<"enter quantity"<<endl;
        cin>>quantity;
        billAmount=billAmount+quantity*25000;
    }
    else if (item=='3'){
        cout<<"enter quantity"<<endl;
        cin>>quantity;
        billAmount=billAmount+quantity*20000;
    }
    else if (item=='4'){
        cout<<"enter quantity"<<endl;
        cin>>quantity;
        billAmount=billAmount+quantity*30000;
    }
    else if (item=='5'){
        cout<<"enter quantity"<<endl;
        cin>>quantity;
        billAmount=billAmount+quantity*45000;
    }
    else{
        cout<<" you have entered wrong option type again"<<endl;
        goto SpeakerLevel;
    }
 }
 //-----------------Headphone----------
 if(choice=='h'|| choice=='H'){
    HeadphoneLevel:
    cout<<" Headphone details"<<endl;
    cout<<"(1)Sony=Price : 1000"<<endl;
    cout<<"(2)Boat=Price : 1500"<<endl;
    cout<<"(3)Noise=Price : 1700"<<endl;
    cout<<"(4)Bose corporation=Price : 700"<<endl;
    cout<<"(5)Jvl=Price : 800"<<endl;
    cout<<" Pleas enter your choice"<<endl;
    cin>>item;
    if(item=='1'){
        cout<<"enter quantity"<<endl;
        cin>>quantity;
        billAmount=billAmount+quantity*40000;

    }
    else if (item=='2'){
        cout<<"enter quantity"<<endl;
        cin>>quantity;
        billAmount=billAmount+quantity*25000;
    }
    else if (item=='3'){
        cout<<"enter quantity"<<endl;
        cin>>quantity;
        billAmount=billAmount+quantity*20000;
    }
    else if (item=='4'){
        cout<<"enter quantity"<<endl;
        cin>>quantity;
        billAmount=billAmount+quantity*30000;
    }
    else if (item=='5'){
        cout<<"enter quantity"<<endl;
        cin>>quantity;
        billAmount=billAmount+quantity*45000;
    }
    else{
        cout<<" you have entered wrong option type again"<<endl;
        goto HeadphoneLevel;
    }
 }
 return billAmount;
 
}
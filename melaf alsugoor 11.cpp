
//
//  main.cpp
//  try - final - intro to programing - project
//
//  Created by Shahd Al qisoom on 10/11/1444 AH.
//
// Groub members:
// Hur  aL  safwan  2210003511
// Norah al ghamdi  2210003500
// Melaf  alsugoor  2210003548
// Shahd al  qisoom 2210003544

#include <iostream>
#include <cmath>
using namespace std;

//A : Newton's Second Law.

int num_Newton;
void Newtons_Second_Law(double Force, double Acciliration, double Mass){
    cout<<"welcome to Newton's Second Law calculater!"<<endl;
   
    
    while ( num_Newton != 4){
        cout<<"\nEnter \n1 : to calculate the force. \n2 : to calculate the Acciliration. \n3 : to calculate the Mass. \n4 : back to menu. "<<endl;
        cout<<"--------------    --------------\n";
        cout<<"Your choice:";
        cin>>num_Newton;
        
    if( num_Newton == 1){
        cout<<"Enter the value of the Acciliration (m/s²): ";
        cin>>Acciliration;
        cout<<"Enter the value of the Mass (kg): ";
        cin>>Mass;
        Force = Mass * Acciliration;
        cout<<"Force = "<<Force<<" N"<<endl;
        
    }
    
    else if( num_Newton == 2){
        cout<<"Enter the value of the Force (N): ";
        cin>>Force;
        cout<<"Enter the value of the Mass (Kg): ";
        cin>>Mass;
        Acciliration = Force / Mass;
        cout<<"Acciliration = "<<Acciliration<<" m/s²"<<endl;
        
    }
        
    else if( num_Newton == 3){
        cout<<"Enter the value of the Force (N): ";
        cin>>Force;
        cout<<"Enter the value of the Acciliration (m/s²): ";
        cin>>Acciliration;
        Mass = Force / Acciliration;
        cout<<"Mass = "<<Mass<<" kg"<<endl;
        
    }
        
    else if( num_Newton == 4 ){
        cout<<"back to menu!"<<endl;
        break;
    }
    
    else{
        cout<<" ERROR!";
    }
}
}
//B : Ohm's Law.

char ohm_letter;
void Ohms_Law(double volt, double current, double resistance){
    cout<<"welcome to Ohm's Law calculater!"<<endl;
    
    
    while ( ohm_letter != 'E'){
        cout<<endl<<"Enter \nV : to calculate the voltage. \nI : to calculate the current. \nR : to calculate the resistance. \nE : back to menu. "<<endl;
        cout<<"--------------    --------------\n";
        cout<<"Your choice:";
    
    cin>>ohm_letter;
    
    if( ohm_letter == 'V' ){
        cout<<"Enter the value of the current (A): ";
        cin>>current;
        cout<<"Enter the value of the resistance (Ω): ";
        cin>>resistance;
        volt = current * resistance;
        cout<<"voltage = "<<volt<<" v"<<endl;
        
    }
    
    else if( ohm_letter == 'I'){
        cout<<"Enter the value of the volt (v): ";
        cin>>volt;
        cout<<"Enter the value of the resistance (Ω): ";
        cin>>resistance;
        current = volt / resistance;
        cout<<"current = "<<current<<" A"<<endl;
        
    }
    else if( ohm_letter == 'R'){
        cout<<"Enter the value of the volt (v): ";
        cin>>volt;
        cout<<"Enter the value of the current (A): ";
        cin>>current;
        resistance = volt / current;
        cout<<"resistance = "<<resistance<<" Ω"<<endl;
        
    }
    else if( ohm_letter == 'E' ){
        cout<<"back to menu!"<<endl;
        break;
    }
    else{
        cout<<" ERROR!";
    }
    
}
}

//C : Ideal Gas.
    
int ideal_play;
    void Ideal_Gas(double pressure, double volume,double temperature_value,double temperature,double n, double n_value,double  N,double Na,double R_value , double K_value,double temp, char temperature_SCALE,char Given_n,char do_u_have_R_or_K){
        
        cout<<"welcome to Ideal gas calculater!";
        cout<<"Enter : \n7 : contenue. \n3 : back to menu. "<<endl;
        cout<<"--------------    --------------\n";
        cout<<"Your choice:";
    
        cin>>ideal_play;
        while ( ideal_play != 3){
            if ( ideal_play == 7){
    cout<<"please enter the value of the volume (m³): ";
    cin>>volume;
    cout<<"now we want to know the scale of the tempreture. \nplease enter K for Kilven and C for Celsius:";
        cin>>temperature_SCALE;
    
        
    if (temperature_SCALE == 'K' ){
        cout<<"enter the temperature value: ";
        cin>>temperature_value;
        temperature = temperature_value;
    }
    else if (temperature_SCALE == 'C'){
        cout<<"enter the temperature value: ";
        cin>>temperature_value;
        temperature = temperature_value + 273 ;
        cout<<endl<<"the new value of temperature in kilven will be: "<<temperature<< " K"<<endl;
    }
                cout<<endl;
                cout<<"now, is n given or not ? (if yes enter n, if not enter any litter): ";
    cin>>Given_n;
    
    if (Given_n == 'n' ){
        cout<<"please enter the value of n: ";
        cin>>n_value;
        
        n = n_value;
    }
    else {
        cout<<"please enter the value of N : ";
        cin>>N;
        cout<<"please enter the value of Na : ";
        cin>>Na;
        n = N/Na; }
    temp = temperature;
        
        cout<<"Do you have the value of constant R or K ?  ";
        cin>>do_u_have_R_or_K;
        
        
        if (do_u_have_R_or_K == 'R'){
            cout<<"enter the value of R: ";
            cin>>R_value;
            cout<<endl;
            pressure = n * R_value *  temp / volume ;
            cout<< "by usint the formula pv = nRT the value of pressure is: "<<pressure<< " Pa"<<endl;
           
        }
        else if (do_u_have_R_or_K == 'K'){
            cout<<"enter the value of K: ";
            cin>>K_value;
            cout<<endl;
            pressure = N * K_value *  temp / volume ;
            cout<< "by usint the formula pv = NKT the value of pressure is: "<<pressure<< " Pa"<<endl;
        }
                cout<<endl<<"--------------    --------------\n";
                cout<<"Enter : \n7 : contenue. \n3 : back to menu."<<endl;
                cout<<"--------------    --------------\n";
                cout<<"Your choice:";

                cin>>ideal_play;
        }
            
    
        
            else if ( ideal_play == 3){
        cout<<"back to menu!"<<endl;
    
        }
    
            else {
                cout<<"ERROR!";
            }
    
    }
    }
    
    
//D : The Number of Particles.
int play_num;
double epsilon, N, T;
void compute_Z(int num_values, double lambda, double e, double k, double Z, double dZ_dlambda, double T) {
    Z = 0.0;
    cout<<"welcome to Number of Particles calculater!"<<endl;
    cout<<endl<<"Enter \n1 : to calculate Number of Particles. \n0 : back to menu. "<<endl;
    cout<<"--------------    --------------\n";
    cout<<"Your choice:";
    cin>>play_num;
    
    while ( play_num != 0){
       
      
        if (play_num == 1){
            cout << "Enter the number of values to compute: ";
            cin >> num_values;
            
    for (int i = 1; i <= num_values; i++) {
        cout << "Enter the value of epsilon #" << i << ": ";
        cin >> epsilon;
        cout << "Enter the value of N #" << i << ": ";
        cin >> N;
        cout << "Enter the value of T #" << i << ": ";
        cin >> T;
        }
           
    Z += pow(lambda, N) * (e * (-epsilon / (k * T)));
    dZ_dlambda += N * pow(lambda, N-1) ;
    dZ_dlambda *= (e / (k * T));
    cout << "Z = " << Z << endl;
    cout << "dZ/dlambda * lambda/Z = " << (lambda/Z)*(dZ_dlambda) << endl;
           
   
            cout<<endl<<"Enter \n1 : to calculate Number of Particles. \n0 : back to menu. "<<endl;
            cout<<"--------------    --------------\n";
            cout<<"Your choice:";
            cin>>play_num;
        }
      
        
     else if ( play_num == 0 ){
            cout<<"back to menu!";
        break;
    }
        else {
            cout<<"ERROR! try again.";
        }
}

}


int main() {
   
    char A,B,C,D;
    char choice;
    
    cout<<"WELCOME TO OUR PHYSICS CALCULATER PROGRAM!\nthere are 4 laws that can helps you.. \n";
    
    while ( choice != 'E'){
        cout<<"\n--------------MENU--------------\n";
        cout<<"A : Newton's Second Law. \nB : Ohm's Law. \nC : Ideal Gas. \nD : The Number of Particles.\nE : to exit program."<<endl;
    cout<<"--------------    --------------\n";
        cout<<"Your choice: ";
        cin>>choice;
        if (choice == 'A'){
            double Force, Acciliration, Mass;
            
            Newtons_Second_Law( Force, Acciliration, Mass);
        }
        
        else if( choice == 'B' ){
            double volt, current, resistance;
            
            Ohms_Law(volt, current, resistance);
            
        }
        
        else if ( choice == 'C'){
            
            double pressure,volume, temperature_value, temperature, n,  n_value,  N, Na, R_value ,  K_value, temp;
            char temperature_SCALE, Given_n, do_u_have_R_or_K;
            
            Ideal_Gas (pressure, volume, temperature_value, temperature, n,  n_value,N, Na, R_value ,  K_value, temp,  temperature_SCALE, Given_n, do_u_have_R_or_K);
        
        }
        
        else if ( choice == 'D'){
            double lambda = 30.0;
            double e = 2.71828;
            double k = 1.380649e-23;

            int num_values;
           

            double Z = 0.0, dZ_dlambda = 0.0, T;
               
            compute_Z(num_values, lambda,e, k, Z, dZ_dlambda,T);
        
        }
        else if(choice == 'E' ){
            cout << "Exiting the program."<<endl;
            choice = true;
            break;

        }
    
    else{
        cout<<"ERROR!";
    
    }
    }
    
    return 0;
}


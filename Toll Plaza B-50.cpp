#include<iostream>
#include<fstream>
#include <windows.h>
#include<ctime>
using namespace std;
unsigned int t_vehicle=0,t_cash=0,recipt=0;
class toll
{
	private:
		unsigned int cash,vec,vrec,weight,pcash,prec,setp;
		string vno,vtype;
	public:
		toll()
		{
			cash=0;
			vec=0;
			vrec=0;
		}
		void endtoll()
		{
			{
			Beep(1000,1000);
			system("CLS");
			system("color f9");
			cout<<"Total Recipt Printed:-"<<recipt<<endl;
			cout<<"Total Vehicle Passed:-"<<t_vehicle<<endl;
			cout<<"Total Cash Recieved:-"<<t_cash<<endl;
			cout<<"\t________________________________________________________________________________________________________"<<endl;
			cout<<"\t--------------------------------------------------------------------------------------------------------"<<endl;
			cout<<"\t                                                                                                        "<<endl;
			cout<<"\t**********  *         *        *       *        *    *     *      *        *   *********   *         *  "<<endl;
			cout<<"\t    *       *         *       * *      * *      *    *    *        *      *   *         *  *         *  "<<endl;
			cout<<"\t    *       *         *      *   *     *  *     *    *   *          *    *    *         *  *         *  "<<endl;
			cout<<"\t    *       ***********     *     *    *   *    *    *  *            *  *     *         *  *         *  "<<endl;
			cout<<"\t    *       *         *    *********   *    *   *    * * *            **      *         *  *         *  "<<endl;
			cout<<"\t    *       *         *   *         *  *     *  *    **   *           *       *         *   *       *   "<<endl;
			cout<<"\t    *       *         *  *           * *      * *    *     *         *         *********     *******    "<<endl;
			cout<<"\t                                                                                                        "<<endl;
			cout<<"\t--------------------------------------------------------------------------------------------------------"<<endl;
			cout<<"\t________________________________________________________________________________________________________"<<endl;
			cout<<"Take Care, Your Program has been ended."<<endl;
			cout<<"Desined by:-AMAR KUMAR GUPTA"<<endl;
			cout<<"Contact No.:-8171718395"<<endl;
			}
		}
		inline void settype(int vt)
		{
			switch (vt)
			{
				case 1:
					vtype="Car";
					break;
				case 2:
					vtype="Bike";
					break;
				case 3:
					vtype="Bus";
					break;
				case 4:
					vtype="Truck";
					break;
				case 5:
					vtype="Van";
					break;
				case 6:
					vtype="Government";
					break;
				default: 
				break;
			}	
		}
		inline void money(int a,int b)
		{
			pcash=b;
			cout<<"Please Enter the Vehicle no."<<endl;
			cin.get();
			getline(cin,vno);
			cout<<endl;
			cout<<"You have to pay:- Rs"<<b<<endl;
			cash+=b;
			t_cash+=b;
			cout<<"Have a good trip."<<endl<<endl;
			cout<<"Press Enter to Continue to Program!"<<endl;
			cin.get(); 
		}
		void gadipass(int a,string s)
		{
			if(s=="1")
			{
			vec++;
			t_vehicle++;
			recipt++;
			vrec++;
			cout<<"Enter the Weight of vechile \nif Weight of vechile is greater than 99 then it will consider as overloaded."<<endl;
			Beep(587.3295,500);
			cin>>weight;
			if(weight<100)
			{
			switch (a)
			{
				case 1:
					money(a,50);
					break;
				case 2:
					money(a,40);
					break;
				case 3:
					money(a,100);
					break;
				case 4:
					money(a,200);
					break;
				case 5:
					money(a,150);
					break;
				case 6:
					money(a,0);
					break;
				default: 
				break;
			}			
		}
		else
		{
			cout<<"You have to pay double for this overloaded vechile."<<endl;
			switch (a)
			{
				case 1:
					money(a,50*2);
					break;
				case 2:
					money(a,40*2);
					break;
				case 3:
					money(a,100*2);
					break;
				case 4:
					money(a,200*2);
					break;
				case 5:
					money(a,150*2);
					break;
				case 6:
					money(a,0*2);
					break;
				default:
					break;
		}
		}
		}
		else if(s=="2")
		{
			vec++;
			t_vehicle++;
			recipt++;//increase recipt no
			vrec++;//vechile recipt increase
			cout<<"Enter the Weight of vechile if Weight of vechile is greater than 99 then it will consider as overloaded"<<endl;
			Beep(587.3295,500);//Beep sound of frequency 587.3295 for time 500ms
			cin>>weight;//entering the weight of vechile
			if(weight<100)//this is for vechile which are not overloaded
			{
			switch (a)//this switch according to the type of vechile
			{
				case 1://car
					money(a,50*2-20);
					break;
				case 2://motor bike
					money(a,40*2-10);
					break;
				case 3://bus
					money(a,100*2-30);
					break;
				case 4://truck
					money(a,200*2-40);
					break;
				case 5://van
					money(a,150*2-35);
					break;
				case 6://government vechile
					money(a,0);
					break;
				default:
					break;
			}			
		}
		else
		{
			cout<<"You have to pay double for this overloaded vechile"<<endl;
			switch (a)
			{
				case 1://car
					money(a,(50*2-20)*2);
					break;
				case 2://motor bike
					money(a,(40*2-10)*2);
					break;
				case 3://bus
					money(a,(100*2-30)*2);
					break;
				case 4://truck
					money(a,(200*2-40)*2);
					break;
				case 5://van
					money(a,(150*2-35)*2);
					break;
				case 6://government vechile
					money(a,0*2);
					break;
				default:
					break;
		}
		}
		}
		else if(s=="3")//vechile is returning
		{
			vec++;
			t_vehicle++;
			cout<<"Please enter the previous recipt no."<<endl;
			cin>>prec;
			cout<<"Thank You Sir"<<endl;
			cout<<"Press Enter to continue";
			cin.get();
			cin.get();
		}
		}
		void showgadipassed()
		{
			cout<<"Recipt Printed:-"<<vrec<<endl;
			cout<<"Vechile Passed:-"<<vec<<endl;
			cout<<"Cash Recieved:-"<<cash<<endl;
		}
		friend void generate(toll);//allow generate to use toll member
};
int pos;
void read()
{
	system("CLS");
	cout<<"Reading from the file:-";
	cout<<endl;
	ifstream fin;
	string line;
	fin.open("data.txt",ios::app);
  	fin.seekg(pos, ios::beg);
    int end= fin.tellg();
    if (fin.is_open()&&end==pos)
  {
    while ( getline (fin,line) )
    {
      cout << line << endl;
    }
  }
  else
  {
  	cout<<"Error While reading from file";
	cout<<endl;  
  }
  cin.get();
    cin.get();
    cout<<"Press Enter to Continue..."<<endl;
  fin.close();
}
string s;//for one way two way returning
void generate(toll t)
{
	if(s=="3")
	{
	ofstream fout;
	time_t current = time(0);
	char* dt=ctime(&current);
	fout.open("data.txt",ios::app);
	fout<<endl<<"Previous Recipt No."<<t.prec<<endl;
	fout<<"Type of the vehicle:"<<t.vtype<<endl;
	fout<<"Time at which the Vehicle crossed::-"<<dt<<endl;
	fout.close();
	}else
	{
	ofstream fout;
	time_t current = time(0);
	char* dt=ctime(&current);
	fout.open("data.txt",ios::app);
	fout<<endl<<"Recipt No."<<recipt<<endl;
	fout<<"Type of the vehicle:"<<t.vtype<<endl;
	fout<<"Vechile No:-"<<t.vno<<endl;
	fout<<"Cash Recived:-"<<t.pcash<<endl;
	fout<<"Time at which the Vehicle crossed:-"<<dt<<endl;
	fout.close();
	}
}
int main()
{
	ofstream fout;
	time_t current = time(0);
	char* dt=ctime(&current);
	fout.open("data.txt",ios::app);
	pos=fout.tellp();//check from where the put pointer was
	fout<<"Program Starting Time:-"<<dt<<endl;
	fout.close();
	toll car,bus,truck,bike,van,gov_vec,l;//l for calling endtoll type member function
	system("color f10");
	loop:
	system("CLS");
	system("color f9");  
	Beep(587.3295,500);
    Beep(659.2551,500);
  
	{
	cout<<"\t_____________________________________________________________________________________________________________"<<endl;
	cout<<"\t-------------------------------------------------------------------------------------------------------------"<<endl;
	cout<<"\t***********    *******    *           *             ********     ******     ******   ***********  *        * "<<endl;
	cout<<"\t     *        *       *   *           *             *       *   *      *   *      *       *       *        * "<<endl;
	cout<<"\t     *       *         *  *           *             *       *  *        * *        *      *       *        * "<<endl;
	cout<<"\t     *       *         *  *           *             ********   *        * *        *      *       ********** "<<endl;
	cout<<"\t     *       *         *  *           *             *       *  *        * *        *      *       *        * "<<endl;
	cout<<"\t     *        *       *   *           *             *       *   *      *   *      *       *       *        * "<<endl;
	cout<<"\t     *         *******    **********  **********    ********     ******     ******        *       *        * "<<endl;
	cout<<"\t-------------------------------------------------------------------------------------------------------------"<<endl;
	cout<<"\t_____________________________________________________________________________________________________________"<<endl;
   }	
string r;//to run or end the program
cout<<"Press Y to run program."<<endl<<"N to end program and enter compactibility mode.";
cin>>r;

while(r!="N"||r!="n")
{
if(r=="y"||r=="Y")
{
	loop1://when continuing the program
 	system("CLS");
 	loop3://When enter the invalid command it will go here
 	system("color f9");
	Beep(587.3295,500);
	 cout<<"Please choose the type of trip:-"<<endl;    
	 cout<<"Press 1 for one-way trip."<<endl;
	 cout<<"Press 2 for two-way trip."<<endl;
	 cout<<"Press 3 for returning from two way trip or already have recipt."<<endl;
	 cout<<"Press 4 for end the program."<<endl;
	 cin>>s;//s will used to select type of the trip
	 if(s=="1")
	 system("color e0");
	 else if(s=="2")
	 system("color 96");
	 else if(s=="3")
	 system("color B0");
	 else if(s=="4")
	 goto endloop;
	 else
	 {
	 	cout<<"Please enter the valid command!"<<endl;
		goto loop3;
	 }
	 loop2:
cout<<"Please enter as given:-"<<endl
    <<"Motorbike:-'M'"<<endl
    <<"Car:-'C'"<<endl
    <<"Bus:-'B'"<<endl
    <<"Truck:-'T'"<<endl
    <<"Van:-'V'"<<endl
    <<"Government Vechile:-'G'"<<endl
    <<"To end the program:-'E'"<<endl;
 
 string type;
 cin>>type;
 char atp;//to assign the type
if(type=="c"||type=="C")
atp='c';
 else if(type=="m"||type=="M")
 atp='m';
 else if(type=="b"||type=="B")
 atp='b';
 else if(type=="t"||type=="T")
 atp='t';
 else if(type=="v"||type=="V")
 atp='v';
 else if(type=="g"||type=="G")
 atp='g';
 else if(type=="e"||type=="E")
 atp='e';
 else
 atp='j';
 Beep(587.3295,500);
    switch (atp)
			{
				case 'c'://car
					car.gadipass(1,s);
					car.settype(1);
					generate(car);
					break;
				case 'm'://motor bike
					bike.gadipass(2,s);
					bike.settype(2);
					generate(bike);
					break;
				case 'b'://bus
					bus.gadipass(3,s);
					bus.settype(3);
					generate(bus);
					break;
				case 't'://truck
					truck.gadipass(4,s);
					truck.settype(4);
					generate(truck);
					break;
				case 'v'://van
					van.gadipass(5,s);
					van.settype(5);
					generate(van);
					break;
				case 'g'://government vechile
					gov_vec.gadipass(6,s);
					gov_vec.settype(6);
					generate(gov_vec);
					break;
				case 'e':
					goto endloop;
					break;
				default:
					{
					cout<<"You have not entered valid command!"<<endl;
					goto loop2;
					}
			}
			goto loop1;
		}
else if(r=="n"||r=="N")
{
	goto endloop;
}
else
{
cout<<"Please enter valid command."<<endl;
cout<<"Enter to continue........."<<endl;
cin.get();//for the delay
cin.get();
goto loop;
}
}
endloop:
Beep(500,500);
system("color fc");
cout<<"Are you sure to end the program?"<<endl;
	cout<<"Y-Yes,exit the program.        N-No,Start the program."<<endl;
	string t;
	cin>>t;
	Beep(500,500);
	if(t=="y"||t=="Y")
	{
		loop5:
		l.endtoll();
		loop4:
		cout<<endl<<endl<<"Press 'S' to enter Full stats mode.\nPress 'E' to exit.\nPress 'I' for full info of program."<<endl;
			cout<<"Press 'R' to read the data from the file."<<endl;
			string j;
			cin>>j;
			if(j=="s"||j=="S")
			{
				system("CLS");//clear the screen
				system("color f9");//background color white
				cout<<"Total Recipt Printed:-"<<recipt<<endl;
				cout<<"Total Vehicle Passed:-"<<t_vehicle<<endl;//total vechile passed
				cout<<"Total Cash Recieved:-"<<t_cash<<endl;//total cash recieved
				cout<<"CAR:-"<<endl;
				car.showgadipassed();
				cout<<"MOTORBIKE:-"<<endl;
				bike.showgadipassed();
				cout<<"TRUCK:-"<<endl;
				truck.showgadipassed();
				cout<<"BUS:-"<<endl;
				bus.showgadipassed();
				cout<<"VAN:-"<<endl;
				van.showgadipassed();
				cout<<"GOVERNMENT VECHILE:-"<<endl;
				gov_vec.showgadipassed();
				cout<<"Press Enter to Continue...."<<endl;
				cin.get();
				cin.get();
				goto loop5;
			}
			else if(j=="E"||j=="e")
			{
				exit(0);//exit the program from here
			}
			else if(j=="i"||j=="I")
			{
				system("CLS");//clear the screen
				system("color f9");//background color white
				cout<<"This program is about Toll Booth."<<endl;
				cout<<"It is made by Amar Kumar Gupta."<<endl;
				cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
				cout<<"Features of this program:-"<<endl;
				cout<<"1-  Total cash earned."<<endl;
    		    cout<<"2-  Total No. of vehicles passed."<<endl;
    		    cout<<"3-  Count of each type of vehicle."<<endl;
    			cout<<"4-  Respective fee of each type of vehicle."<<endl;
    			cout<<"5-  It has one-way trip option."<<endl;
    			cout<<"6-  It has round trip option."<<endl;
    			cout<<"7-  It has allowance for vechile which is returning from round-trip.\nIt count the vechile but not print the recipt."<<endl;
  		   		cout<<"8-  Total Reciept Printed."<<endl;
  		   		cout<<"9-  Recipt Printed for Particular Vechile type."<<endl;
       			cout<<"10- Government vehicles,Ambulance passed free."<<endl;
       			cout<<"11- It has used beep sound at particular places."<<endl;
 		    	cout<<"12- Background and Text color."<<endl;
 		    	cout<<"13- Can be used by any person."<<endl;
 		    	cout<<"14- Save all the data in the file."<<endl;
 		    	cout<<"15- It has real time when any vechile passed."<<endl;
 		    	cout<<"16- In file every data is distingused by time,recipt no."<<endl;
 		    	cout<<"17- Fully Real World Program."<<endl;
 		    	cout<<"18- You can read the data from the file."<<endl;
				cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
 		    	cout<<"Contact Us:-"<<endl;
				cout<<"Email:-amarg6413@gmail.com"<<endl;
 		    	cout<<"Phone:-8171718395"<<endl;
 		    	cout<<"Adress:-LPU"<<endl;
 		    	cout<<"Press Enter To Continue"<<endl;
				cin.get();
 		    	cin.get();
 		    	goto loop5;//get to the exit window
			}else if(j=="r"||j=="R")
			{
				read();
				goto loop5;
			}
			else
			{
				cout<<"Please enter valid command......"<<endl;
				goto loop4;
			}	
	}else if(t=="n"||t=="N")
	goto loop1;
	else
	{
		cout<<"Please enter valid Command........"<<endl;
		goto endloop;
	}
	fout.open("data.txt",ios::app);
	fout<<"~~~~~~~~~~~~~~~~~~The Program Has Ended~~~~~~~~~~~~~~~~"<<endl;
	fout.close();
}



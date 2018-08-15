#include<iostream>
using namespace std;
char square[10] = {'o','1','2','3','4','5','6','7','8','9'};
int i;
char sym1,sym2;
void draw()
{
	cout << "     |     |     " << endl;
	cout << "  " << square[1] << "  |  " << square[2] << "  |  " << square[3] << endl;

	cout << "_____|_____|_____" << endl;
	cout << "     |     |     " << endl;

	cout << "  " << square[4] << "  |  " << square[5] << "  |  " << square[6] << endl;

	cout << "_____|_____|_____" << endl;
	cout << "     |     |     " << endl;

	cout << "  " << square[7] << "  |  " << square[8] << "  |  " << square[9] << endl;

	cout << "     |     |     " << endl << endl;
}
void player_1()
{
	int loc=0;
	cout<<"------------Game Layout-----------------";
	cout<<endl;
	draw();
	cout<<"Enter Location To Mark  :   ";
	cin>>loc;
	if(square[loc]!=sym1 and square[loc]!=sym2 and loc>=1 and loc<=9)
	{
		square[loc]=sym1;
		system("cls");	
		draw();
	}
	else
	{
		cout<<"----------------------Invalid Location to Mark Please choose Another One------------------------------";
		cout<<endl;
	}		
}
void player_2()
{
	int loc=0;
	cout<<"------------Game Layout-----------------";
	cout<<endl;
	draw();
	cout<<"Enter Location To Mark  :   ";
	cin>>loc;
	if(square[loc]!=sym1 and square[loc]!=sym2 and loc>=1 and loc<=9)
	{
		square[loc]=sym2;	
		system("cls");	
		draw();
	}
	else
	{
		cout<<"----------------------Invalid Location to Mark Please choose Another One------------------------------";
	}		
}
int checkwin()
{
	if (square[1] == square[2] && square[2] == square[3])
	{
		if(square[3]==sym1 )
		{
			cout<<"Winner : Player 1";
			return 1;
		}
		else 
		{
			cout<<"Winner : Player 2";
			return 1;
		}
	}	
	else if (square[4] == square[5] && square[5] == square[6])
	{
		
		if(square[6]==sym1 )
		{
			cout<<"Winner : Player 1";
			return 1;
		}
		else 
		{
			cout<<"Winner : Player 2";
			return 1;
		}
	}		
	else if (square[7] == square[8] && square[8] == square[9])
	{
	if(square[9]==sym1 )
		{
			cout<<"Winner : Player 1";
			return 1;
		}
		else 
		{
			cout<<"Winner : Player 2";
			return 1;
		}
	}
	else if (square[1] == square[4] && square[4] == square[7])
	{
		if(square[7]==sym1 )
		{
			cout<<"Winner : Player 1";
			return 1;
		}
		else 
		{
			cout<<"Winner : Player 2";
			return 1;
		}
	}	
	else if (square[2] == square[5] && square[5] == square[8])
	{
		if(square[8]==sym1 )
		{
			cout<<"Winner : Player 1";
			return 1;
		}
		else 
		{
			cout<<"Winner : Player 2";
			return 1;
		}
	}	
	else if (square[3] == square[6] && square[6] == square[9])
	{
		if(square[9]==sym1 )
		{
			cout<<"Winner : Player 1";
			return 1;
		}
		else 
		{
			cout<<"Winner : Player 2";
			return 1;
		}
	}	
	else if (square[1] == square[5] && square[5] == square[9])
	{
		if(square[9]==sym1 )
		{
			cout<<"Winner : Player 1";
			return 1;
		}
		else 
		{
			cout<<"Winner : Player 2";
			return 1;
		}
	}
		
	else if (square[3] == square[5] && square[5] == square[7])
		{
			if(square[7]==sym1 )
		{
			cout<<"Winner : Player 1";
			return 1;
		}
		else 
		{
			cout<<"Winner : Player 2";
			return 1;
		}
		}
	else if (square[1] != '1' && square[2] != '2' && square[3] != '3' 
                    && square[4] != '4' && square[5] != '5' && square[6] != '6' 
                  && square[7] != '7' && square[8] != '8' && square[9] != '9')
                  {
                  	cout<<"--------------------Tie-------------------------";
                  	return 0;
				  }
		
	else
		return -1;
}

int main()
{
	int num=0;	
	cout<<"Enter Symbol for Player 1:  ";
	cin>>sym1;
	cout<<"Enter Symbol for Player 2:  ";
	cin>>sym2;
	int j=0;
	do
	{
	if(j%2!=0)
	{
	cout<<"Player 2:";
	player_2();
	}
	else
	{
	cout<<"Player 1:";
	player_1();
	}	
	
	j++;

	i=checkwin();
	}while(i==-1);	

}

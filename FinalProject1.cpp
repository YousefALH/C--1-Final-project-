#include <iostream>
#include <vector>
#include <array>

using namespace std;



int main()
{
	vector<char>row1;
	vector<char>row2;
	vector<char>row3;
	vector<char>row4;
	vector<char>row5;
	vector<char>row6;
	vector<char>row7;
 
	int move1;
	int win=0;
	int j;
	int onescore=0;
	int twoscore=0;
	char again='y';
 
	for(int i=0;i<7;++i)
	{
		row1.push_back(' ');
		row1[i]='1';
		row2.push_back(' ');
		row2[i]='2';
		row3.push_back(' ');
		row3[i]='3';
		row4.push_back(' ');
		row4[i]='4';
		row5.push_back(' ');
		row5[i]='5';
		row6.push_back(' ');
		row6[i]='6';
		row7.push_back(' ');
		row7[i]='7';
	}
 
	while(again == 'Y' || again =='y')
	{
		cout<<"Player 1: "<< onescore <<"    Player 2: "<<twoscore << endl;
 
		for(int i=0;i<7;++i)
		{
			if(i==0)
				cout<<"   "<<row1[i]<<" "<<row2[i]<<" "<<row3[i]<<" "<<row4[i]<<" "<<row5[i]<<" "<<row6[i]<<" "<<row7[i]<<"  \n  ---------------\n";
			if(i>0&&i<7)
				cout<<" | "<<row1[i]<<" "<<row2[i]<<" "<<row3[i]<<" "<<row4[i]<<" "<<row5[i]<<" "<<row6[i]<<" "<<row7[i]<<" |\n";
			if(i==6)
				cout<<"  ---------------\n |               |\n\n\n";
		}
 
		while(win==0)
		{
			////////////////////////////////////////////////////////
			if(win==0)
			{
				cout<<"Player 1:  ";
				cin>>move1;
				cout<<"\n\n";
				while(move1<1||move1>7||(move1==1&&(row1[1]=='X'||row1[1]=='O'))||(move1==2&&(row2[1]=='X'||row2[1]=='O'))||(move1==3&&(row3[1]=='X'||row3[1]=='O'))||(move1==4&&(row4[1]=='X'||row4[1]=='O'))||(move1==5&&(row5[1]=='X'||row5[1]=='O'))||(move1==6&&(row6[1]=='X'||row6[1]=='O'))||(move1==7&&(row7[1]=='X'||row7[1]=='O')))
				{
					cout<<"Can't let you move there!\n\n\nPlayer 1:  ";
					cin>>move1;
				}
				if(move1==1)
				{
					j=6;
					while(row1[j]=='X'||row1[j]=='O')
					{
						j--;
					}
					row1[j]='X';
				}
				else if(move1==2)
				{
					j=6;
					while(row2[j]=='X'||row2[j]=='O')
					{
						j--;
					}
					row2[j]='X';
				}
				else if(move1==3)
				{
					j=6;
					while(row3[j]=='X'||row3[j]=='O')
					{
						j--;
					}
					row3[j]='X';
				}
				else if(move1==4)
				{
					j=6;
					while(row4[j]=='X'||row4[j]=='O')
					{
						j--;
					}
					row4[j]='X';
				}
				else if(move1==5)
				{
					j=6;
					while(row5[j]=='X'||row5[j]=='O')
					{
						j--;
					}
					row5[j]='X';
				}
				else if(move1==6)
				{
					j=6;
					while(row6[j]=='X'||row6[j]=='O')
					{
						j--;
					}
					row6[j]='X';
				}
				else if(move1==7)
				{
					j=6;
					while(row7[j]=='X'||row7[j]=='O')
					{
						j--;
					}
					row7[j]='X';
 
				}
			}
			////////////////////////////////////////////////////////text base for board	
			for(int i=0;i<7;++i)
			{
				if(i==0)
					cout<<"   "<<row1[i]<<" "<<row2[i]<<" "<<row3[i]<<" "<<row4[i]<<" "<<row5[i]<<" "<<row6[i]<<" "<<row7[i]<<"  \n  ---------------\n";
				if(i>0&&i<7)
					cout<<" | "<<row1[i]<<" "<<row2[i]<<" "<<row3[i]<<" "<<row4[i]<<" "<<row5[i]<<" "<<row6[i]<<" "<<row7[i]<<" |\n";
				if(i==6)
					cout<<"  ---------------\n |               |\n\n\n";
			}
 
			for(int i=6;i>0;--i)
			{
				if((row1[i]=='X'&&row2[i]=='X'&&row3[i]=='X'&&row4[i]=='X')||(row5[i]=='X'&&row2[i]=='X'&&row3[i]=='X'&&row4[i]=='X')||(row5[i]=='X'&&row6[i]=='X'&&row3[i]=='X'&&row4[i]=='X')||(row5[i]=='X'&&row6[i]=='X'&&row7[i]=='X'&&row4[i]=='X'))
					win=1; //for horizontal
			}
			for(int i=6;i>2;--i)
			{
				if((row1[i]=='X'&&row1[i-1]=='X'&&row1[i-2]=='X'&&row1[i-3]=='X')||(row2[i]=='X'&&row2[i-1]=='X'&&row2[i-2]=='X'&&row2[i-3]=='X')||(row3[i]=='X'&&row3[i-1]=='X'&&row3[i-2]=='X'&&row3[i-3]=='X')||(row4[i]=='X'&&row4[i-1]=='X'&&row4[i-2]=='X'&&row4[i-3]=='X')||(row5[i]=='X'&&row5[i-1]=='X'&&row5[i-2]=='X'&&row5[i-3]=='X')||(row6[i]=='X'&&row6[i-1]=='X'&&row6[i-2]=='X'&&row6[i-3]=='X')||(row7[i]=='X'&&row7[i-1]=='X'&&row7[i-2]=='X'&&row7[i-3]=='X'))
					win=1; //for vertical
				if((row1[i]=='X'&&row2[i-1]=='X'&&row3[i-2]=='X'&&row4[i-3]=='X')||(row2[i]=='X'&&row3[i-1]=='X'&&row4[i-2]=='X'&&row5[i-3]=='X')||(row3[i]=='X'&&row4[i-1]=='X'&&row5[i-2]=='X'&&row6[i-3]=='X')||(row4[i]=='X'&&row5[i-1]=='X'&&row6[i-2]=='X'&&row7[i-3]=='X'))
					win=1; //for diagonally up right
				if((row7[i]=='X'&&row6[i-1]=='X'&&row5[i-2]=='X'&&row4[i-3]=='X')||(row6[i]=='X'&&row5[i-1]=='X'&&row4[i-2]=='X'&&row3[i-3]=='X')||(row5[i]=='X'&&row4[i-1]=='X'&&row3[i-2]=='X'&&row2[i-3]=='X')||(row4[i]=='X'&&row3[i-1]=='X'&&row2[i-2]=='X'&&row1[i-3]=='X'))
					win=1; //for diagonally up left
			}
 
			////////////////////////////////////////////////////////win condition
			if(win==0)
			{
				cout<<"Player 2:  ";
				cin>>move1;
				cout<<"\n\n";
				while(move1<1||move1>7||(move1==1&&(row1[1]=='X'||row1[1]=='O'))||(move1==2&&(row2[1]=='X'||row2[1]=='O'))||(move1==3&&(row3[1]=='X'||row3[1]=='O'))||(move1==4&&(row4[1]=='X'||row4[1]=='O'))||(move1==5&&(row5[1]=='X'||row5[1]=='O'))||(move1==6&&(row6[1]=='X'||row6[1]=='O'))||(move1==7&&(row7[1]=='X'||row7[1]=='O')))
				{
					cout<<"Can't let you move there!\n\n\nPlayer 2:  ";
					cin>>move1;
				}
 
				if(move1==1)
				{
					j=6;
					while(row1[j]=='X'||row1[j]=='O')
					{
						j--;
					}
					row1[j]='O';
				}
				else if(move1==2)
				{
					j=6;
					while(row2[j]=='X'||row2[j]=='O')
					{
						j--;
					}
					row2[j]='O';
				}
				else if(move1==3)
				{
					j=6;
					while(row3[j]=='X'||row3[j]=='O')
					{
						j--;
					}
					row3[j]='O';
				}
				else if(move1==4)
				{
					j=6;
					while(row4[j]=='X'||row4[j]=='O')
					{
						j--;
					}
					row4[j]='O';
				}
				else if(move1==5)
				{
					j=6;
					while(row5[j]=='X'||row5[j]=='O')
					{
						j--;
					}
					row5[j]='O';
				}
				else if(move1==6)
				{
					j=6;
					while(row6[j]=='X'||row6[j]=='O')
					{
						j--;
					}
					row6[j]='O';
				}
				else if(move1==7)
				{
					if(row7[1]=='X'||row7[1]=='O')
						cout<<"nope";
					else
					{
						j=6;
						while(row7[j]=='X'||row7[j]=='O')
						{
							j--;
						}
						row7[j]='O';
					}
				}
 
			}
			////////////////////////////////////////////////////////	
			for(int i=0;i<7;++i)
			{
				if(i==0)
					cout<<"   "<<row1[i]<<" "<<row2[i]<<" "<<row3[i]<<" "<<row4[i]<<" "<<row5[i]<<" "<<row6[i]<<" "<<row7[i]<<"  \n  ---------------\n";
				if(i>0&&i<7)
					cout<<" | "<<row1[i]<<" "<<row2[i]<<" "<<row3[i]<<" "<<row4[i]<<" "<<row5[i]<<" "<<row6[i]<<" "<<row7[i]<<" |\n";
				if(i==6)
					cout<<"  ---------------\n |               |\n\n\n";
			}
 
			for(int i=6;i>0;--i)
			{
				if((row1[i]=='O'&&row2[i]=='O'&&row3[i]=='O'&&row4[i]=='O')||(row5[i]=='O'&&row2[i]=='O'&&row3[i]=='O'&&row4[i]=='O')||(row5[i]=='O'&&row6[i]=='O'&&row3[i]=='O'&&row4[i]=='O')||(row5[i]=='O'&&row6[i]=='O'&&row7[i]=='O'&&row4[i]=='O'))
					win=2; //for horizontal
			}
			for(int i=6;i>2;--i)
			{
				if((row1[i]=='O'&&row1[i-1]=='O'&&row1[i-2]=='O'&&row1[i-3]=='O')||(row2[i]=='O'&&row2[i-1]=='O'&&row2[i-2]=='O'&&row2[i-3]=='O')||(row3[i]=='O'&&row3[i-1]=='O'&&row3[i-2]=='O'&&row3[i-3]=='O')||(row4[i]=='O'&&row4[i-1]=='O'&&row4[i-2]=='O'&&row4[i-3]=='O')||(row5[i]=='O'&&row5[i-1]=='O'&&row5[i-2]=='O'&&row5[i-3]=='O')||(row6[i]=='O'&&row6[i-1]=='O'&&row6[i-2]=='O'&&row6[i-3]=='O')||(row7[i]=='O'&&row7[i-1]=='O'&&row7[i-2]=='O'&&row7[i-3]=='O'))
					win=2; //for vertical
				if((row1[i]=='O'&&row2[i-1]=='O'&&row3[i-2]=='O'&&row4[i-3]=='O')||(row2[i]=='O'&&row3[i-1]=='O'&&row4[i-2]=='O'&&row5[i-3]=='O')||(row3[i]=='O'&&row4[i-1]=='O'&&row5[i-2]=='O'&&row6[i-3]=='O')||(row4[i]=='O'&&row5[i-1]=='O'&&row6[i-2]=='O'&&row7[i-3]=='O'))
					win=2; //for diagonally up right
				if((row7[i]=='O'&&row6[i-1]=='O'&&row5[i-2]=='O'&&row4[i-3]=='O')||(row6[i]=='O'&&row5[i-1]=='O'&&row4[i-2]=='O'&&row3[i-3]=='O')||(row5[i]=='O'&&row4[i-1]=='O'&&row3[i-2]=='O'&&row2[i-3]=='O')||(row4[i]=='O'&&row3[i-1]=='O'&&row2[i-2]=='O'&&row1[i-3]=='O'))
					win=2; //for diagonally up left
			}
			////////////////////////////////////////////////////////
			
		}
 
		if(win==2)
		{
			++twoscore;
			cout<<"Player 2 Wins!\n\nWould you like to play again? (Y/N): ";
		}
		else if(win==1)
		{
			++onescore;
			cout<<"Player 1 Wins!\n\nWould you like to play again? (Y/N): ";
		}
 
		cin>>again;
 
		while(again!='Y'&&again!='y'&&again!='N'&&again!='n')
		{
			cout<<"Would you like to play again? (Y/N): ";
			cin>>again;
		}
 
		cout<<"\n\n\n\n\n\n";
 
		win=0;
 
	
	for(int i=1;i<7;++i)
		{
			row1[i]=' ';
			row2[i]=' ';
			row3[i]=' ';
			row4[i]=' ';
			row5[i]=' ';
			row6[i]=' ';
			row7[i]=' ';
		} 
	}
 
	cout<<"Thanks for Playing!\n\n";
	return 0;
}
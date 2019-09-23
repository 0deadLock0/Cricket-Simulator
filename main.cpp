//                            CRICKET SIMULATOR
//                          ---------------------
//                        -------------------------
/*Brief ::
  -----
  # Developed by Abhimayu Gupta
  # Submitted as Computer Science Project in C++
  # Class XII-A, Session 2018-2019
  # School- Arvind Gupta D.A.V. Centenary Public School, Northex Model Town III, Delhi-110009
  # Board Roll Number-
  --> This is a basic Cricket Simulator which generates a truly random Cricket Match.
  --> All values shown are random and generated at the time of execution only.
  --> Generated random values can not be changed at the time of execution.
  --> The overs for the match can be chosen ranging from 1 to 20.
  --> Teams' name and Players' name can be changed by the user.
      (Both will have to be changed in order to change one.)
  --> The following functions are performed in this Simulator :
      <> Toss
      <> Per Ball Commentary
      <> Batting and Bowling Scorecard
      <> General Stats and Over stats of each Innings
      <> Player Performance (Bat/Bowl/Field)
      <> Search Menu for accessing different Stats
  --> A Match data can be saved in file for future purpose
  --> Past Records can be viewed by selecting desired option in Main Menu
*/
/* Header Files Functions & Objects ::
   --------------------------------
   --> fstream.h :
       cin  cout  endl  fstream  ifstream  open();  close();  read();  write();
   --> conio.h :
       clrscr();  getch();
   --> string.h :
       strcpy();  strlen();  strcat();  strcmp();
   --> stdio.h :
       gets();
   --> stdlib.h :
       randomize();  random();  abs();
   --> iomanip.h :
       setw();  setprecision();
   --> math.h
       ceil();  abs();
*/
/*Structures ::
  ----------
  --> EXTRA
  --> TOSS
*/
/*Classes ::
  ------
  --> Batsman
  --> Bowler
  --> Fielder
  --> Player
  --> Team
  --> Inning
  --> Cricket
*/
/*User Defined Functions ::
  ----------------------
  --> void AssignString();
  --> void Delay(double);
  --> void PrintCharacter(char,int);
  --> void Print(char []);
  --> void About();
  --> void Credits();
  --> void Countdown();
  --> void Name_Short(char [],char []);
  --> void PrintGraph(int,int [],int []);
  --> void Check(char [],int,int);
  --> void Swap(int &,int &);
  --> Batsman::Batsman();
  --> void Batsman::ScoreRuns(char []);
  --> void Batsman::DisplayBatStats();
  --> Bowler::Bowler();
  --> void Bowler::TakeWickets(char []);
  --> void Bowler::DisplayBowlStats();
  --> Fielder::Fielder();
  --> void Fielder::PushLimits(char);
  --> void Fielder::DisplayFieldStats();
  --> Player::Player();
  --> void Player::AsignName(char []);
  --> void Player::AsignType(char []);
  --> void Player::DisplayStats();
  --> Team::Team();
  --> void Team::AsignTeamName(char []);
  --> void Team::InputPlayerNames();
  --> Inning::Inning();
  --> void Inning::MaintainStats(char [],int &,int &,int,int &);
  --> void Inning::DisplayStats();
  --> void Cricket::DefaultNames();
  --> void Cricket::UserInputs();
  --> void Cricket::UserPlayerNames();
  --> void Cricket::CheckInputs();
  --> void Cricket::Toss();
  --> void Cricket::StartMatch();
  --> void Cricket::StartInnings();
  --> void Cricket::StartOver(int &,int &,int);
  --> void Cricket::PlayBowl(char [],int);
  --> void Cricket::Commentary(char [],int,int,int,int);
  --> void Cricket::PrintOnPitchPlayers(int,int,int);
  --> void Cricket::SearchStats();
  --> Cricket::Cricket();
  --> void Cricket::LetsPlay();
  --> void Cricket::DisplayToss();
  --> void Cricket::Display_Teams_Players();
  --> void Cricket::ScoreCard();
  --> void Cricket::DisplayStats();
  --> void Cricket::Won();
  --> void Cricket::Search();
  --> void GameOn();
  --> void ViewRecords();
*/
/*Files Used ::
  ----------
  --> CRICKET.DAT
*/

#include<fstream.h>
#include<conio.h>
#include<string.h>
#include<stdio.h>
#include<stdlib.h>
#include<iomanip.h>
#include<math.h>
char String[26][5][6];
void AssignString()
{strcpy(String[0][0],"AAAAA");
 strcpy(String[0][1],"A   A");
 strcpy(String[0][2],"AAAAA");
 strcpy(String[0][3],"A   A");
 strcpy(String[0][4],"A   A");
 strcpy(String[1][0],"BBBBB");
 strcpy(String[1][1],"B   B");
 strcpy(String[1][2],"BBBB ");
 strcpy(String[1][3],"B   B");
 strcpy(String[1][4],"BBBBB");
 strcpy(String[2][0],"CCCCC");
 strcpy(String[2][1],"C    ");
 strcpy(String[2][2],"C    ");
 strcpy(String[2][3],"C    ");
 strcpy(String[2][4],"CCCCC");
 strcpy(String[3][0],"DDDD ");
 strcpy(String[3][1],"D   D");
 strcpy(String[3][2],"D   D");
 strcpy(String[3][3],"D   D");
 strcpy(String[3][4],"DDDD ");
 strcpy(String[4][0],"EEEEE");
 strcpy(String[4][1],"E    ");
 strcpy(String[4][2],"EEEEE");
 strcpy(String[4][3],"E    ");
 strcpy(String[4][4],"EEEEE");
 strcpy(String[5][0],"FFFFF");
 strcpy(String[5][1],"F    ");
 strcpy(String[5][2],"FFFFF");
 strcpy(String[5][3],"F    ");
 strcpy(String[5][4],"F    ");
 strcpy(String[6][0],"GGGGG");
 strcpy(String[6][1],"G    ");
 strcpy(String[6][2],"G GGG");
 strcpy(String[6][3],"G   G");
 strcpy(String[6][4],"GGGGG");
 strcpy(String[7][0],"H   H");
 strcpy(String[7][1],"H   H");
 strcpy(String[7][2],"HHHHH");
 strcpy(String[7][3],"H   H");
 strcpy(String[7][4],"H   H");
 strcpy(String[8][0],"IIIII");
 strcpy(String[8][1],"  I  ");
 strcpy(String[8][2],"  I  ");
 strcpy(String[8][3],"  I  ");
 strcpy(String[8][4],"IIIII");
 strcpy(String[9][0],"JJJJJ");
 strcpy(String[9][1],"  J  ");
 strcpy(String[9][2],"  J  ");
 strcpy(String[9][3],"  J  ");
 strcpy(String[9][4],"JJJ  ");
 strcpy(String[10][0],"K   K");
 strcpy(String[10][1],"K  K ");
 strcpy(String[10][2],"KK   ");
 strcpy(String[10][3],"K  K ");
 strcpy(String[10][4],"K   K");
 strcpy(String[11][0],"L    ");
 strcpy(String[11][1],"L    ");
 strcpy(String[11][2],"L    ");
 strcpy(String[11][3],"L    ");
 strcpy(String[11][4],"LLLLL");
 strcpy(String[12][0],"M   M");
 strcpy(String[12][1],"MM MM");
 strcpy(String[12][2],"M M M");
 strcpy(String[12][3],"M   M");
 strcpy(String[12][4],"M   M");
 strcpy(String[13][0],"N   N");
 strcpy(String[13][1],"NN  N");
 strcpy(String[13][2],"N N N");
 strcpy(String[13][3],"N  NN");
 strcpy(String[13][4],"N   N");
 strcpy(String[14][0],"OOOOO");
 strcpy(String[14][1],"O   O");
 strcpy(String[14][2],"O   O");
 strcpy(String[14][3],"O   O");
 strcpy(String[14][4],"OOOOO");
 strcpy(String[15][0],"PPPPP");
 strcpy(String[15][1],"P   P");
 strcpy(String[15][2],"PPPPP");
 strcpy(String[15][3],"P    ");
 strcpy(String[15][4],"P    ");
 strcpy(String[16][0],"QQQQQ");
 strcpy(String[16][1],"Q   Q");
 strcpy(String[16][2],"Q Q Q");
 strcpy(String[16][3],"QQ QQ");
 strcpy(String[16][4],"QQQQQ");
 strcpy(String[17][0],"RRRRR");
 strcpy(String[17][1],"R   R");
 strcpy(String[17][2],"RRRRR");
 strcpy(String[17][3],"R R  ");
 strcpy(String[17][4],"R  R ");
 strcpy(String[18][0],"SSSSS");
 strcpy(String[18][1],"S    ");
 strcpy(String[18][2],"SSSSS");
 strcpy(String[18][3],"    S");
 strcpy(String[18][4],"SSSSS");
 strcpy(String[19][0],"TTTTT");
 strcpy(String[19][1],"  T  ");
 strcpy(String[19][2],"  T  ");
 strcpy(String[19][3],"  T  ");
 strcpy(String[19][4],"  T  ");
 strcpy(String[20][0],"U   U");
 strcpy(String[20][1],"U   U");
 strcpy(String[20][2],"U   U");
 strcpy(String[20][3],"U   U");
 strcpy(String[20][4],"UUUUU");
 strcpy(String[21][0],"V   V");
 strcpy(String[21][1],"V   V");
 strcpy(String[21][2],"V   V");
 strcpy(String[21][3]," V V ");
 strcpy(String[21][4],"  V  ");
 strcpy(String[22][0],"W   W");
 strcpy(String[22][1],"W   W");
 strcpy(String[22][2],"W W W");
 strcpy(String[22][3],"WW WW");
 strcpy(String[22][4],"W   W");
 strcpy(String[23][0],"X   X");
 strcpy(String[23][1]," X X ");
 strcpy(String[23][2],"  X  ");
 strcpy(String[23][3]," X X ");
 strcpy(String[23][4],"X   X");
 strcpy(String[24][0],"Y   Y");
 strcpy(String[24][1]," Y Y ");
 strcpy(String[24][2],"  Y  ");
 strcpy(String[24][3],"  Y  ");
 strcpy(String[24][4],"  Y  ");
 strcpy(String[25][0],"ZZZZZ");
 strcpy(String[25][1],"   Z ");
 strcpy(String[25][2],"  Z  ");
 strcpy(String[25][3]," Z   ");
 strcpy(String[25][4],"ZZZZZ");
}
void Delay(double limit=5000000)
{double delay;
 for(delay=0;delay<limit;delay++)
  if(delay==-1)
   cout<<"BUG?";
}
void PrintCharacter(char Alphabet, int j)
{int i;
 if(int(Alphabet)>96 && int(Alphabet)<123)
  Alphabet=int(Alphabet)-32;
 i=int(Alphabet)-65;
 cout<<String[i][j];
}
void Print(char Sentence[500])
{int i=0,j,k;
 while(Sentence[i]==' ')
  i++;
 k=i;
 cout<<endl;
 for(j=0;j<5;j++)
  {for(;Sentence[i]!='\0';i++)
    {if(Sentence[i]==' ')
      break;
     Delay(100000);
     cout<<" ";
     PrintCharacter(Sentence[i],j);
     cout<<" ";
    }
    cout<<endl;
   if(Sentence[i]==' ' && j==4)
    {j=-1;
     while(Sentence[i]==' ')
      i++;
     k=i;
     if(Sentence[i]=='\0')
      break;
     cout<<endl;
    }
   else
    i=k;
  }
}
void About()
{cout<<"\nWelcome to CRICKET SIMULATOR!! Follow the instructions to proceed the Simulator.";
 cout<<"The process of Simulation is machine controlled. Just need to give some basic   inputs when asked.";
 cout<<"\nThe Simulator has a fixed speed which can not be changed at all.";
 cout<<"\nAll the values shown by the Simulator are random and generated on the time of   execution only.";
 cout<<"\nThese values can not be manipulated.";
}
void Credits()
{cout<<"\nFully Developed and Maintained by\n";
 Print("ABHIMANYU GUPTA");
}
void Countdown()
{int count=9;
 cout<<"\nMatch begins in ";
 for(;count>0;count--)
  {cout<<count<<"......\b\b\b\b\b\b\b";
   Delay(1000000);
  }
 cout<<".\nLet's Go\n";
}
void Name_Short(char f_name[26], char s_name[26])
{int i,j=-1,k=0;
 for(i=0;i<strlen(f_name);i++)
  if(f_name[i]==' ' && f_name[i+1]!=' ' && f_name[i+1]!='\0')
   j=i;
 for(i=0;i<=j;i++)
  if((i==0 && f_name[i]!=' ') || (f_name[i-1]=='.' && f_name[i]!=' ' && f_name[i]!='\0') || (f_name[i]!=' ' && f_name[i-1]==' '))
   {s_name[k++]=f_name[i];
    s_name[k++]='.';
   }
 if(j!=-1)
  s_name[k++]=' ';
 for(;i<strlen(f_name);i++,k++)
  s_name[k]=f_name[i];
 s_name[k]='\0';
}
void PrintGraph(int overs, int runs[20], int wickets[20])
{int i,r,maxR=0,w,maxW=0;
 cout<<"\n\n   RUNS| ";
 for(i=0;i<overs;i++)
  {cout<<setw(3)<<runs[i];
   maxR=(runs[i]>maxR)?runs[i]:maxR;
   maxW=(wickets[i]>maxW)?wickets[i]:maxW;
  }
 cout<<endl;
 for(r=maxR;r>0;r-=(maxR*0.1))
  {cout<<setw(6)<<r<<" |  ";
   for(i=0;i<overs;i++)
    if(runs[i]>=r)
     cout<<"-- ";
    else
     cout<<"   ";
   cout<<endl;
  }
 for(i=0;i<(11+3*overs);i++)
  cout<<"-";
 cout<<endl;
 cout<<"  OVERS| ";
 for(i=0;i<overs;i++)
  cout<<setw(3)<<i+1;
 cout<<"\n";
 for(i=0;i<(11+3*overs);i++)
  cout<<"-";
 cout<<endl;
 for(w=1;w<=maxW;w+=ceil(maxW*0.2))
  {cout<<setw(6)<<w<<" |  ";
   for(i=0;i<overs;i++)
    if(wickets[i]>=w)
     cout<<"** ";
    else
     cout<<"   ";
   cout<<endl;
  }
 cout<<"WICKETS| ";
 for(i=0;i<overs;i++)
  cout<<setw(3)<<wickets[i];
 cout<<endl;
}
void Check(char runs[20], int s, int t)
{int r;
 r=t-s;
 if(runs[3]!='6' && (runs[3]!='4' || (runs[3]=='4' && runs[4]=='o')))
  {if(runs[0]!='l')
    runs[3]=char(r-1+48);
   else
    runs[3]=char(r+48);
  }
 runs[2]='n';
 runs[4]='\0';
 runs[5]='\0';
}
void Swap(int &a, int &b)
{a=a+b;
 b=a-b;
 a=a-b;
}
struct Extra
{int wides;
 int byes;
 int leg_byes;
 int no_balls;
};
struct Toss
{int team;
 int choice1;
 int face;
 int won;
 int choice2;
};
class Batsman
{public:
  int runs_scored;
  int balls_faced;
  int dots;
  int singles;
  int doubles;
  int triples;
  int fours;
  int fives;
  int sixes;
  float strike_rate;
  char batted;
  Batsman();
  void ScoreRuns(char runs[20]);
  void DisplayBatStats();
};
Batsman::Batsman()
{runs_scored=0;
 balls_faced=0;
 dots=0;
 singles=0;
 doubles=0;
 triples=0;
 fours=0;
 fives=0;
 sixes=0;
 strike_rate=0;
 batted='n';
}
void Batsman::ScoreRuns(char runs[20])
{int score=-1;
 if(runs[0]!='w')
  {balls_faced++;
   score=0;
  }
 if(runs[2]=='w' && (runs[4]!='r' || (runs[4]=='r' && runs[5]=='0')))
  batted='o';
 if(runs[1]=='b')
  {score=int(runs[3])-48;
   runs_scored+=score;
  }
 if(score==0)
  dots++;
 else if(score==1)
  singles++;
 else if(score==2)
  doubles++;
 else if(score==3)
  triples++;
 else if(score==4 && runs[4]!='o')
  fours++;
 else if(score==5)
  fives++;
 else if(score==6)
  sixes++;
 strike_rate=(runs_scored+0.0)/balls_faced*100;
}
void Batsman::DisplayBatStats()
{cout<<endl<<setw(46)<<"Batting Stats\n";
 cout<<"\nBalls Faced"<<setw(19)<<balls_faced<<setw(10)<<" ";
 cout<<"Runs Scored"<<setw(19)<<runs_scored;
 cout<<"\nDot Balls"<<setw(21)<<dots<<setw(10)<<" ";
 cout<<"Strike Rate"<<setw(19)<<strike_rate;
 cout<<"\nSingles"<<setw(23)<<singles<<setw(10)<<" ";
 cout<<"Doubles"<<setw(23)<<doubles;
 cout<<"\nTriples"<<setw(23)<<triples<<setw(10)<<" ";
 cout<<"Fours"<<setw(25)<<fours;
 cout<<"\nFives"<<setw(25)<<fives<<setw(10)<<" ";
 cout<<"Sixes"<<setw(25)<<sixes;
}
class Bowler
{public:
  char bowled;
  int overs;
  int balls;
  int maiden_overs;
  int runs_conceeded;
  int wickets;
  float economy;
  int dot_balls;
  Extra extras;
  int extra;
  int runs_overs[4];
  int wickets_overs[4];
  Bowler();
  void TakeWickets(char runs[20]);
  void DisplayBowlStats();
};
Bowler::Bowler()
{overs=0;
 balls=0;
 runs_conceeded=0;
 wickets=0;
 maiden_overs=0;
 dot_balls=0;
 economy=0;
 bowled='n';
 extra=0;
 extras.wides=0;
 extras.no_balls=0;
 for(int i=0;i<4;i++)
  {runs_overs[i]=0;
   wickets_overs[i]=0;
  }
}
void Bowler::TakeWickets(char runs[20])
{int r=0;
 float o;
 bowled='y';
 if(runs[1]=='b' || runs[0]!='l')
  {r=int(runs[3])-48;
   if(runs[0]!='l')
    r++;
   runs_conceeded+=r;
   runs_overs[overs]+=r;
  }
 if(runs[2]=='w' && runs[4]!='r')
  {wickets++;
   wickets_overs[overs]++;
  }
 if(runs[0]=='l' && (runs[3]=='0' || runs[1]!='b' || runs[2]=='w'))
  dot_balls++;
 if(runs[0]=='w')
  {extras.wides++;
   extra+=r;
  }
 else if(runs[0]=='n')
  {extras.no_balls++;
   extra+=r;
  }
 if(runs[0]=='l' && balls<6)
  balls++;
 o=overs*6+balls;
 if(o==0)
  o=1;
 economy=runs_conceeded/o*6;
 if(balls==6)
  {if(runs_overs[overs]==0)
    maiden_overs++;
   balls=0;
   overs++;
  }
}
void Bowler::DisplayBowlStats()
{int o;
 cout<<endl<<setw(46)<<"Bowling Stats\n";
 cout<<"\nOvers Bowled"<<setw(16)<<overs<<"."<<balls<<setw(10)<<" ";
 cout<<"Runs Conceeded"<<setw(16)<<runs_conceeded;
 cout<<"\nEconomy"<<setw(23)<<setprecision(2)<<economy<<setw(10)<<" ";
 cout<<"Dot Balls"<<setw(21)<<dot_balls;
 cout<<"\nWickets"<<setw(23)<<wickets<<setw(10)<<" ";
 cout<<"Maiden Overs"<<setw(18)<<maiden_overs;
 cout<<"\nExtras"<<setw(24)<<extra<<" (W-"<<extras.wides<<",N-"<<extras.no_balls<<")";
 o=overs;
 if(balls!=0)
  o++;
 Delay(3000000);
 PrintGraph(o,runs_overs,wickets_overs);
}
class Fielder
{public:
  int catches;
  int stumps;
  int run_outs;
  char field_effort;
  Fielder();
  void PushLimits(char);
  void DisplayFieldStats();
};
Fielder::Fielder()
{catches=0;
 stumps=0;
 run_outs=0;
 field_effort='n';
}
void Fielder::PushLimits(char w)
{if(w=='c')
  catches++;
 else if(w=='s')
  stumps++;
 else
  run_outs++;
 field_effort='y';
}
void Fielder::DisplayFieldStats()
{cout<<endl<<setw(47)<<"Fielding Stats"<<endl;
 if(stumps!=0)
  cout<<"\nStumps"<<setw(24)<<stumps<<endl;
 if(catches!=0)
  cout<<"Catches"<<setw(23)<<catches<<endl;
 if(run_outs!=0)
  cout<<"Run Outs"<<setw(22)<<run_outs<<endl;
}
class Player: public Batsman, public Bowler, public Fielder
{public:
  char type[10];
  char name[26];
  Player();
  void AsignName(char Name[26]);
  void AsignType(char Type[10]);
  void DisplayStats();
};
Player::Player()
{strcpy(name,NULL);
 strcpy(type,NULL);
}
void Player::AsignName(char Name[26])
{strcpy(name,Name);
}
void Player::AsignType(char Type[10])
{strcpy(type,Type);
}
void Player::DisplayStats()
{clrscr();
 cout<<endl<<setw(40+strlen(name)/2)<<name<<endl<<endl;
 if(batted=='n')
  cout<<name<<" didn't batted in the macth\n";
 else
  DisplayBatStats();
 cout<<endl<<endl;
 Delay(3000000);
 if(bowled=='n' && strcmp(type,"Bowl")==0 && strcmp(type,"Bat/Bowl")==0)
  cout<<name<<" didn't bowled in the match\n";
 else if(bowled=='y')
  DisplayBowlStats();
 if(field_effort=='y')
  DisplayFieldStats();
 Delay(3000000);
}
class Team
{public:
  char team_name[30];
  Player players[11];
  Team();
  void AsignTeamName(char name[30]);
  void InputPlayerNames();
};
Team::Team()
{strcpy(team_name,NULL);
}
void Team::AsignTeamName(char name[30])
{strcpy(team_name,name);
}
void Team::InputPlayerNames()
{int i,j;
 char name[26];
 for(i=0;i<11;i++)
  {gets(name);
   players[i].AsignType(NULL);
   players[i].AsignName(name);
   for(j=0;j<strlen(players[i].name);j++)
    if(players[i].name[j]=='(' && players[i].name[j+2]==')')
     {if(players[i].name[j+1]=='0')
       players[i].AsignType("Bowl");
      else if(players[i].name[j+1]=='1')
       players[i].AsignType("Bat");
      else if(players[i].name[j+1]=='2')
       players[i].AsignType("Bat/Bowl");
      else if(players[i].name[j+1]=='3')
       players[i].AsignType("Bat/Wk");
      if(players[i].type!=NULL)
       {players[i].name[j]='\0';
	break;
       }
     }
  }
}
class Inning
{private:
  int dots;
  int singles;
  int doubles;
  int triples;
  int fours;
  int fives;
  int sixes;
  int maiden_overs;
 public:
  int score;
  int wickets;
  int overs;
  int balls;
  int runs_overs[20];
  int wickets_overs[20];
  long int wickets_pair[11];
  Extra extras;
  int extra;
  float run_rate;
  Inning();
  void MaintainStats(char runs[20],int &s,int &n_s,int b,int &out);
  void DisplayStats();
};
Inning::Inning()
{int i;
 score=0;
 wickets=0;
 dots=0;
 singles=0;
 doubles=0;
 triples=0;
 fours=0;
 fives=0;
 sixes=0;
 run_rate=0;
 maiden_overs=0;
 overs=0;
 balls=0;
 extras.wides=0;
 extras.byes=0;
 extras.no_balls=0;
 extras.leg_byes=0;
 extra=0;
 for(i=0;i<20;i++)
  {runs_overs[i]=0;
   wickets_overs[i]=0;
   if(i<11)
    wickets_pair[i]=-1;
  }
}
void Inning::MaintainStats(char runs[20], int &s, int &n_s, int b, int &out)
{int SCORE,n;
 float o;
 if(runs[0]=='l' && balls<6)
  balls++;
 SCORE=int(runs[3])-48;
 if(runs[3]=='1')
  singles++;
 else if(runs[3]=='2')
  doubles++;
 else if(runs[3]=='3')
  triples++;
 else if(runs[3]=='4' && runs[4]!='o')
  fours++;
 else if(runs[3]=='5')
  fives++;
 else if(runs[3]=='6')
  sixes++;
 if(runs[0]=='n')
  extras.no_balls++;
 else if(runs[0]=='w')
  extras.wides++;
 if(runs[1]=='n')
  extras.byes+=SCORE;
 else if(runs[1]=='l')
  extras.leg_byes+=SCORE;
 if(runs[0]!='l')
  SCORE++;
 if(runs[0]!='l' || runs[1]!='b')
  extra+=SCORE;
 if(SCORE==0)
  dots++;
 score+=SCORE;
 runs_overs[overs]+=SCORE;
 SCORE=int(runs[3])-48;
 if(runs[2]=='n' && SCORE%2==1)
  Swap(s,n_s);
 if(runs[2]=='w')
  {wickets++;
   wickets_overs[overs]++;
   if(runs[4]=='b')
    wickets_pair[s]=10000+b;
   else if(runs[4]=='l')
    wickets_pair[s]=20000+b;
   else if(runs[4]=='s')
    wickets_pair[s]=30000+b;
   else if(runs[4]=='c')
    wickets_pair[s]=40000+100*random(11)+b;  //40000+100*Fielder_who_took_catch+Bowler
   else if(runs[4]=='h')
    wickets_pair[s]=50000+b;
   else if(runs[4]=='r')
    {if(runs[5]=='0')
      wickets_pair[s]=60000+random(11);
     else if(runs[5]=='1')
      wickets_pair[n_s]=60000+random(11);
    }
   n=(s>n_s)?s:n_s;
   n++;
   if(runs[4]=='r' && runs[5]=='1')
    {out=n_s;
     n_s=n;
    }
   else
    {out=s;
     s=n;
    }
   if(runs[4]=='c' && runs[5]=='1')
    Swap(s,n_s);
  }
 o=overs*6+balls;
 if(o==0)
  o=1;
 run_rate=score/o*6;
 if(balls==6)
  {balls=0;
   if(runs_overs[overs]==0)
    maiden_overs++;
   overs++;
  }
}
void Inning::DisplayStats()
{int o;
 cout<<"\nScore"<<setw(25)<<score<<setw(10)<<" ";
 cout<<"Wickets"<<setw(23)<<wickets;
 cout<<"\nOvers"<<setw(23)<<overs<<"."<<balls<<setw(10)<<" ";
 cout<<"Run Rate"<<setw(22)<<run_rate;
 cout<<"\nDot Balls"<<setw(21)<<dots<<setw(10)<<" ";
 cout<<"Maiden Overs"<<setw(18)<<maiden_overs;
 cout<<"\nSingles"<<setw(23)<<singles<<setw(10)<<" ";
 cout<<"Doubles"<<setw(23)<<doubles;
 cout<<"\nTriples"<<setw(23)<<triples<<setw(10)<<" ";
 cout<<"Fours"<<setw(25)<<fours;
 cout<<"\nFives"<<setw(25)<<fives<<setw(10)<<" ";
 cout<<"Sixes"<<setw(25)<<sixes;
 cout<<"\nExtras  "<<extra<<" (Wides- "<<extras.wides<<", No Balls- "<<extras.no_balls<<", Byes- "<<extras.byes<<", Leg Byes- "<<extras.leg_byes<<")\n";
 Delay();
 o=overs;
 if(balls!=0)
  o++;
 PrintGraph(o,runs_overs,wickets_overs);
}
class Cricket
{private:
  Team teams[2];
  Inning innings[2];
  int target;
  float req_run_rate;
  int bowler_overs_limit;
  int won;
  Toss toss;
  void DefaultNames();
  void UserInputs();
  void UserPlayerNames();
  void CheckInputs();
  void Toss();
  void StartMatch();
  void StartInnings();
  void StartOver(int &s,int &n_s,int b);
  void PlayBowl(char runs[20], int p);
  void Commentary(char runs[20],int s,int n_s,int b,int out);
  void PrintOnPitchPlayers(int s, int n_s, int b);
  void SearchStats();
 public:
  int Match_Code;
  int current_inning;
  int batting;
  int bowling;
  int overs_limit;
  Cricket();
  void LetsPlay();
  void DisplayToss();
  void Display_Teams_Players();
  void ScoreCard();
  void DisplayStats();
  void Won();
  void Search();
};
Cricket::Cricket()
{Match_Code=-1;
 current_inning=-1;
 toss.team=-1;
 toss.choice1=-1;
 toss.face=-1;
 toss.won=-1;
 toss.choice2=-1;
 batting=-1;
 bowling=-1;
 target=30000;
 req_run_rate=0;
 overs_limit=20;
 bowler_overs_limit=ceil(overs_limit*0.2);
 won=-1;
}
void Cricket::DefaultNames()
{int j;
 teams[0].AsignTeamName("India");
 teams[0].players[0].AsignName("Rohit Sharma");
 teams[0].players[1].AsignName("Shikar Dhawan");
 teams[0].players[2].AsignName("Virat Kohli");
 teams[0].players[3].AsignName("Suresh Raina");
 teams[0].players[3].AsignType("Bat/Bowl");
 teams[0].players[4].AsignName("Manish Pandey");
 teams[0].players[5].AsignName("M.S. Dhoni");
 teams[0].players[5].AsignType("Bat/Wk");
 teams[0].players[6].AsignName("Hardik Pandya");
 teams[0].players[7].AsignName("Ravindra Jadeja");
 teams[0].players[8].AsignName("Ravichandra Ashwin");
 teams[0].players[9].AsignName("Bhuvneshwar Kumar");
 teams[0].players[10].AsignName("Jasprit Bumraha");
 teams[0].players[10].AsignType("Bowl");
 for(j=0;j<5;j++)
  {if(j==3)
    continue;
   teams[0].players[j].AsignType("Bat");
  }
 for(j=6;j<10;j++)
  teams[0].players[j].AsignType("Bat/Bowl");
 teams[1].AsignTeamName("South Africa");
 teams[1].players[0].AsignName("Hashim Amla");
 teams[1].players[1].AsignName("Quinton De Kock");
 teams[1].players[1].AsignType("Bat/Wk");
 teams[1].players[2].AsignName("Faf Du Plessis");
 teams[1].players[3].AsignName("A.B. De Villiers");
 teams[1].players[4].AsignName("David Miller");
 teams[1].players[5].AsignName("J.P. Duminy");
 teams[1].players[6].AsignName("Christropher Morris");
 teams[1].players[7].AsignName("Imran Tahir");
 teams[1].players[8].AsignName("Kagiso Rabada");
 teams[1].players[9].AsignName("Morne Morkel");
 teams[1].players[10].AsignName("Dale Styen");
 for(j=0;j<5;j++)
  {if(j==1)
    continue;
   teams[1].players[j].AsignType("Bat");
  }
 for(j=5;j<7;j++)
  teams[1].players[j].AsignType("Bat/Bowl");
 for(j=7;j<11;j++)
  teams[1].players[j].AsignType("Bowl");
}
void Cricket::UserInputs()
{char choice='n',t_name[30];
 int o;
 cout<<"\nEnter the match overs (max-20)\n";
 cin>>o;
 if(o<1 || o>20)
  {cout<<"Invalid value for overs, Default Value Set (20)\n";
   o=20;
  }
 overs_limit=o;
 bowler_overs_limit=ceil(o*0.2);
 cout<<"\nDo you want to change teams names (y/n)\n";
 cin>>choice;
 if(choice=='y' || choice=='Y')
  {cout<<"\nEnter first team's name\n";
   gets(t_name);
   teams[0].AsignTeamName(t_name);
   cout<<"Enter second team's name\n";
   gets(t_name);
   teams[1].AsignTeamName(t_name);
  }
 cout<<"\nDo you want to use your own player names (y/n)\n";
 cin>>choice;
 if(choice=='y' || choice=='Y')
  UserPlayerNames();
}
void Cricket::UserPlayerNames()
{cout<<"\nINSTRUCTIONS::\n";
 cout<<"1.Team Size : 11 players each team\n";
 cout<<"2.Player name : Max. 25 characters long\n";
 cout<<"3.Bowler : Min. 6\n";
 cout<<"4.Wicket Keeper : 1\n";
 cout<<"5.Batsman & All-rounders : any number\n";
 cout<<"6.Enter player name as : Player_name(player_type)\n  Player_type --> Bowler=0, Batsman=1, All Rounder=2, Wicket Keeper=3\n";
 cout<<"\nEnter first team's players name\n";
 teams[0].InputPlayerNames();
 cout<<"\nEnter second team's players name\n";
 teams[1].InputPlayerNames();
 CheckInputs();
}
void Cricket::CheckInputs()
{int i,j;
 char o;
 int bowl[2]={0,0},wk[2]={0,0};
 for(i=0;i<2;i++)
  for(j=0;j<11;j++)
   {if(strcmp(teams[i].players[j].type,"Bowl")==0)
     bowl[i]++;
    else if(strcmp(teams[i].players[j].type,"Bat/Bowl")==0)
     bowl[i]++;
    else if(strcmp(teams[i].players[j].type,"Bat/Wk")==0)
     wk[i]++;
   }
 i=-1;
 if(bowl[0]<6 || bowl[1]<6)
  {cout<<"\nEnter atleast 6 Bowlers in each team\n";
   i=0;
  }
 else if(wk[0]!=1 || wk[1]!=1)
  {cout<<"\nThere should be excatly 1 Wkicket Keeper in each team\n";
   i=0;
  }
 if(i==0)
  {cout<<"Enter all values again or Enter 0 to use default values\n";
   cin>>o;
   if(o=='0')
    DefaultNames();
   else
    UserPlayerNames();
  }
}
void Cricket::Toss()
{toss.team=random(2);
 toss.choice1=random(2);
 toss.face=random(2);
 if(toss.choice1==toss.face)
  toss.won=toss.team;
 else
  toss.won=(toss.team==0)?1:0;
 toss.choice2=random(2);
 if(toss.choice2==0)
  {batting=toss.won;
   bowling=(toss.won==0)?1:0;
  }
 else
  {bowling=toss.won;
   batting=(toss.won==0)?1:0;
  }
}
void Cricket::DisplayToss()
{char Face[2][10]={"Heads","Tails"},Choice[2][10]={"Bat","Field"};
 cout<<"\nTOSS TIME\n";
 cout<<teams[toss.team].team_name<<" calls "<<Face[toss.choice1]<<"\n";
 Delay();
 if(toss.choice1!=toss.face)
  cout<<"UN";
 cout<<"LUCKY "<<Face[toss.choice1]<<"\n";
 cout<<teams[toss.won].team_name;
 cout<<" won the toss and decided to "<<Choice[toss.choice2]<<" first\n";
}
void Cricket::Display_Teams_Players()
{int i,j,s;
 cout<<endl<<teams[0].team_name;
 for(s=0;s<(40-strlen(teams[0].team_name));s++)
  cout<<" ";
 cout<<teams[1].team_name<<endl<<endl;
 for(i=0;i<11;i++)
  {cout<<teams[0].players[i].name<<" ("<<teams[0].players[i].type<<")";
   s=strlen(teams[0].players[i].name)+strlen(teams[0].players[i].type)+3;
   for(j=0;j<(40-s);j++)
    cout<<" ";
   cout<<teams[1].players[i].name<<" ("<<teams[1].players[i].type<<")\n";
  }
}
void Cricket::StartMatch()
{current_inning=0;
 StartInnings();
 Delay(3000000);
 ScoreCard();
 Delay(3000000);
 DisplayStats();
 Delay(3000000);
 current_inning=1;
 Swap(batting,bowling);
 StartInnings();
 Delay(3000000);
 ScoreCard();
 Delay(3000000);
 DisplayStats();
 Delay(3000000);
}
void Cricket::StartInnings()
{int striker=0,non_striker=1,bowler,last_bowler=-1;
 clrscr();
 cout<<endl<<setw(40)<<"Start of ";
 if(current_inning==0)
  cout<<"First";
 else
  cout<<"Second";
 cout<<" Inning\n";
 while(innings[batting].wickets!=10 && innings[batting].overs!=overs_limit && innings[batting].score<target)
  {do
    {bowler=random(11);
    }while(strcmp(teams[bowling].players[bowler].type,"Bat")==0 || strcmp(teams[bowling].players[bowler].type,"Bat/Wk")==0 || teams[bowling].players[bowler].overs==bowler_overs_limit || bowler==last_bowler);
   StartOver(striker,non_striker,bowler);
   last_bowler=bowler;
  }
 cout<<endl<<setw(40)<<"End of ";
 if(current_inning==0)
  cout<<"First";
 else
  cout<<"Second";
 cout<<" Inning\n";
 if(current_inning==0)
  {target=innings[batting].score+1;
   req_run_rate=(target+0.0)/overs_limit;
  }
}
void Cricket::StartOver(int &s, int &n_s, int b)
{char runs[20],ch[3]="th";
 int o,p,out,fair_balls=0;
 //runs [type_of_ball,contact?,wicket?,runs,mode_of_wicket,strike_change?]
 cout<<endl;
 while(fair_balls!=6 && innings[batting].wickets!=10 && innings[batting].overs!=overs_limit && innings[batting].score<target)
  {strcpy(runs,NULL);
   do
    {p=(strcmp(teams[bowling].players[s].type,"Bowl")==0)?2:0;
     out=-1;
     Delay(2000000);
     cout<<innings[batting].overs<<"."<<innings[batting].balls+1<<" ";
     if(innings[batting].overs<10)
      cout<<" ";
     PrintOnPitchPlayers(s,n_s,b);
     teams[batting].players[s].batted='y';
     teams[batting].players[n_s].batted='y';
     PlayBowl(runs,p);
     if(current_inning==1)
      {if(runs[0]!='l')
	p=1;
       else
	p=0;
       if(innings[batting].score+p+int(runs[3])-48>target)
	Check(runs,innings[batting].score,target);
      }
     teams[bowling].players[b].TakeWickets(runs);
     teams[batting].players[s].ScoreRuns(runs);
     innings[batting].MaintainStats(runs,s,n_s,b,out);
     if(runs[2]=='w' && (runs[4]=='s' || runs[4]=='c' || runs[4]=='r'))
      {if(runs[4]=='c')
	p=(innings[batting].wickets_pair[out]%10000)/100;
       else if(runs[4]=='r')
	p=innings[batting].wickets_pair[out]%100;
       else
	for(p=0;p<11;p++)
	 if(strcmp(teams[bowling].players[p].type,"Bat/Wk")==0)
	  break;
       teams[bowling].players[p].PushLimits(runs[4]);
      }
     Commentary(runs,s,n_s,b,out);
     if(innings[batting].wickets==10 || innings[batting].score>=target)
      break;
    }while(runs[0]!='l');
   fair_balls++;
  }
  if(fair_balls==6 && innings[batting].wickets!=10 && innings[batting].overs!=overs_limit && innings[batting].score!=target)
   Swap(s,n_s);
  o=(fair_balls==6)?1:0;
  if(innings[batting].overs==1)
   strcpy(ch,"st");
  else if(innings[batting].overs==2)
   strcpy(ch,"nd");
  else if(innings[batting].overs==3)
   strcpy(ch,"rd");
  Delay(2000000);
  if(fair_balls==6)
   cout<<"End of "<<innings[batting].overs<<ch<<" over, ";
  cout<<innings[batting].runs_overs[innings[batting].overs-o]<<" run";
  if(innings[batting].runs_overs[innings[batting].overs-o]>1)
   cout<<"s";
  if(innings[batting].wickets_overs[innings[batting].overs-o]>0)
   cout<<" and "<<innings[batting].wickets_overs[innings[batting].overs-o]<<" wicket";
  if(innings[batting].wickets_overs[innings[batting].overs-o]>1)
   cout<<"s";
  cout<<" of "<<innings[batting].overs+abs(o-1)<<ch<<" over\n";
  PrintOnPitchPlayers(s,n_s,b);
  cout<<"Score- "<<innings[batting].score<<"\\"<<innings[batting].wickets<<"  Current Run Rate- "<<setprecision(2)<<innings[batting].run_rate;
  if(current_inning==1 && innings[batting].wickets!=10 && innings[batting].score<target && innings[batting].overs!=overs_limit)
   {int rem_runs,rem_balls;
    rem_runs=target-innings[batting].score;
    rem_balls=(6*overs_limit)-(6*innings[batting].overs);
    req_run_rate=(rem_runs+0.0)/rem_balls*6;
    cout<<"  Target- "<<target<<"  Require Run Rate- "<<setprecision(2)<<req_run_rate;
   }
  if(current_inning==1)
   {if(innings[batting].score>=target)
     won=batting;
    else if(innings[batting].score<target-1 && (innings[batting].overs==overs_limit || innings[batting].wickets==10))
     won=bowling;
    else if(innings[batting].score==target-1 && (innings[batting].overs==overs_limit || innings[batting].wickets==10))
     cout<<"\n\nMatch ended in a Draw!!";
    if(won!=-1)
     cout<<endl<<endl<<teams[won].team_name<<"!!! have won the match";
   }
  cout<<endl;
}
void Cricket::PlayBowl(char runs[20],int p)
{int score,r=0;
 runs[4]=' ';
 runs[5]=' ';
 runs[6]='\0';
 if(runs[0]=='n') //Previous Ball NO-BALL
  r=5;
 score=random(15);
 if(score==0) //Type of Ball
  {score=random(7);
   if(score==0)
    runs[0]='n';  //No Ball
   else
    runs[0]='w'; //Wide
  }
 else
  runs[0]='l';  //Legal Ball
 if(r==5 && runs[0]=='w')
   runs[0]='n';
 if(runs[0]=='w')
  runs[1]='n';
 else
  {score=random(9+r-p);  //Contact with Bat?
   if(score==0 || score==1)
    runs[1]='n'; //No contact
   else if(score==2)
    runs[1]='l'; //Contact with leg
   else
    runs[1]='b'; //Contact with bat
  }
 if(r==5)
  {runs[2]='n';
   goto SCORE; //Below Wickets block (59 lines below)
  }
 score=random(15-2*p);   //Wicket?
 if(score!=0 || runs[0]=='n')
  runs[2]='n';   //Not Out
 else                 //Out?
  {if(runs[0]=='w')
    {score=random(6-p);
     if(score==0)
      {runs[2]='w';
       score=random(41);
       if(score!=0)
	runs[4]='s';  //Stumped
       else
	runs[4]='h';  //Hit Wicket
      }
     else
      runs[2]='n';
    }
   else if(runs[1]=='n')
    {score=random(6-p);
     if(score==0)
      {runs[2]='w';
       score=random(76);
       if(score>0 && score<41)
	runs[4]='b';  //Bowled
       else if(score>40 && score<76)
	runs[4]='s';  //Stumped
       else
	runs[4]='h';  //Hit Wicket
      }
     else
      runs[2]='n';
    }
   else if(runs[1]=='l')
    {score=random(6-p);
     if(score==0)
      {runs[2]='w';
       score=random(10);
       if(score==0)
	runs[4]='b';  //Bowled
       else
	runs[4]='l';  //LBW
      }
     else
      runs[2]='n';
    }
   else
    {runs[2]='w';
     score=random(3);
     if(score==0)
      runs[4]='b';   //Bowled
     else
      {runs[4]='c';   //Caught
       score=random(2);
       runs[5]=char(score+48);  // Strike Change
      }
    }
  }
 SCORE:
 if(runs[2]=='w')
  runs[3]='0';
 else if(runs[1]!='b' && runs[2]!='w')
  {score=random(35);
   if(score!=0)
    runs[3]='0';
   else
    {score=random(2)+1; //Byes or LegByes
     runs[3]=char(score+48);
    }
  }
 else if(runs[2]!='w')
  {score=random(6+r-p/2);  //Batsman Scored
   if(score==0)
    {score=random(2);
     score=(score==0?0:1);
    }
   else if(score==3)
    {score=random(4);
     if(score==0)
      score=3;
     else
      score=2;
    }
   else if(score>3)
    {score=random(4+r);
     if(score==0)
      score=1;
     else if(score==1 || score==2)
      score=4;
     else
      score=6;
    }
   runs[3]=char(score+48);
  }
 score=random(60);  //RunOUT
 if(score==0 && runs[2]!='w' && runs[3]!='4' && runs[3]!='6')
  {runs[2]='w';
   runs[4]='r';
   score=random(2);
   runs[5]=char(score+48);
  }
 score=random(50);    //OverThrow
 if(score==0 && runs[2]!='w' && runs[3]!='4' && runs[3]!='6')
  {score=random(2)+1;
   score+=int(runs[3])-48;
   runs[3]=char(score+48);
   runs[4]='o';
  }
}
void Cricket::Commentary(char runs[20], int s, int n_s, int b, int out)
{int o,n,i,j,k,l,x;
 char comment[600]="\0";
 if(runs[0]=='n')
  strcat(comment,"Its a NO BALL!!");
 else if(runs[0]=='w')
  strcat(comment,"Its a WIDE!");
 else
  strcat(comment,"Fair delivery");
 strcat(comment," ");
 if(runs[1]=='n')
  strcat(comment,"no contact with batsman at all");
 else if(runs[1]=='l')
  strcat(comment,"hit the leg");
 else if(runs[1]=='b')
  strcat(comment,"stucked the bat");
 strcat(comment," ");
 if(runs[2]=='w' && runs[4]!='r')
  {n=(s>n_s)?s:n_s;
   if(runs[4]=='b')
    strcat(comment,"Found the way into the stumps BOWLED!!!");
   else if(runs[4]=='l')
    strcat(comment,"Batsman leg straight in front of wickets LBW!!");
   else if(runs[4]=='s')
    strcat(comment,"Wicket Keeper done his job well STUMPED!!!");
   else if(runs[4]=='c')
    {o=(innings[batting].wickets_pair[out]%10000-b)/100;
     strcat(comment,teams[bowling].players[o].name);
     strcat(comment," shows his presence in the field CAUGHT OUT!!!");
     if(runs[5]=='1')
      strcat(comment," in between batsmen has changed the crease,");
    }
   else if(runs[4]=='h')
    strcat(comment,"Indeed a shamefull act done by batsman HIT WICKET!!!");
   strcat(comment," ");
   strcat(comment,teams[batting].players[out].name);
   strcat(comment," moves back to the pavilion");
   if(n<11 && innings[batting].overs!=overs_limit)
    {strcat(comment,", while ");
     strcat(comment,teams[batting].players[n].name);
     strcat(comment," comes in ");
    }
  }
 if(runs[2]!='w' || runs[4]=='r')
  {if(runs[3]=='0')
    strcat(comment,"another Dot Ball");
   else if(runs[3]=='1' || runs[3]=='2' || runs[3]=='3')
    {strcat(comment,"good way to proceed inning smoothly ");
     if(runs[3]=='1')
      strcat(comment,"1 Run");
     else if(runs[3]=='2')
      strcat(comment,"2 Runs");
     else
      strcat(comment,"3 Runs");
    }
   else if(runs[3]=='5')
    strcat(comment,"5 Runs will be more to see if these kind of Overthrow happens again");
   else if(runs[3]=='4' || runs[3]=='6')
    {strcat(comment,"perfectionally well, great sound to hear ");
     if(runs[3]=='4')
      strcat(comment,"4 Runs");
     else
      strcat(comment,"6 Runs");
    }
   if(runs[4]=='o' && runs[3]!='5')
    strcat(comment,", fielder had missed the stumps, these kinds of Overthrow!! hurt you in the end");
   if(runs[4]=='r')
    {n=(s>n_s)?s:n_s;
     strcat(comment,", No communication at all between the batsmen RUN OUT!!! ");
     strcat(comment,teams[batting].players[out].name);
     o=innings[batting].wickets_pair[out]%10000;
     strcat(comment," pays the price for miscommunication and moves back to pavilion, ");
     if(n<11 && innings[batting].overs!=overs_limit)
      {strcat(comment,"while ");
       strcat(comment,teams[batting].players[n].name);
       strcat(comment," comes in, ");
      }
     strcat(comment,teams[bowling].players[o].name);
     strcat(comment," had thrown it right there where needed i.e. the ");
     if(runs[5]=='1')
      strcat(comment,"Non ");
     strcat(comment,"Striker's end");
    }
  }
 l=strlen(comment);
 for(i=79;i<l;i+=80)
  {if(comment[i]!=' ' && comment[i+1]!=' ' && comment[i+1]!='\0')
    {j=i;
     while(comment[j]!=' ')
      j--;
     x=i-j;
     if(x!=0)
      for(k=l-1;k>j;k--)
       comment[k+x]=comment[k];
     for(k=j+1;k<i+1;k++)
      comment[k]=' ';
    }
   else if(comment[i+1]==' ')
    {for(k=i+1;k<l-1;k++)
      comment[k]=comment[k+1];
     comment[k]='\0';
    }
   l=strlen(comment);
  }
 cout<<comment;
 if(l%80!=0)
  cout<<endl;
 cout<<"     ";
 PrintOnPitchPlayers(s,n_s,b);
 cout<<endl;
}
void Cricket::PrintOnPitchPlayers(int s, int n_s, int b)
{if((innings[batting].wickets!=10 && innings[batting].overs!=overs_limit && innings[batting].score!=target) || teams[batting].players[s].batted=='y')
  cout<<"*"<<teams[batting].players[s].name<<"-"<<teams[batting].players[s].runs_scored<<"  ";
 if((innings[batting].wickets!=10 && innings[batting].overs!=overs_limit && innings[batting].score!=target) || teams[batting].players[n_s].batted=='y')
  cout<<teams[batting].players[n_s].name<<"-"<<teams[batting].players[n_s].runs_scored<<"  ";
 cout<<teams[bowling].players[b].name<<"-"<<teams[bowling].players[b].runs_conceeded<<"\\"<<teams[bowling].players[b].wickets<<endl;
}
void Cricket::ScoreCard()
{int i,j;
 char w[40],n[26];
 clrscr();
 cout<<endl<<setw(34);
 if(current_inning==0)
  cout<<"First";
 else
  cout<<"Second";
 cout<<" Inning ScoreCard\n\n";
 cout<<teams[batting].team_name<<endl;
 for(i=0;i<80;i++)
  cout<<":";
 cout<<"::"<<setw(17)<<"Players"<<setw(11)<<":"<<setw(21)<<"Status"<<setw(16)<<":"<<setw(7)<<"Runs"<<setw(6)<<"::";
 for(i=0;i<80;i++)
  cout<<":";
 for(i=0;i<11;i++)
  {strcpy(w,NULL);
   cout<<":: "<<teams[batting].players[i].name<<setw(27-strlen(teams[batting].players[i].name))<<" ";
   if(teams[batting].players[i].batted=='n')
    cout<<setw(37)<<" ";
   else
    {if((innings[batting].wickets_pair[i]/10000)==1)
      strcat(w,"Bowled");
     else if((innings[batting].wickets_pair[i]/10000)==2)
      strcat(w,"LBW");
     else if((innings[batting].wickets_pair[i]/10000)==3)
      strcat(w,"Stumped");
     else if((innings[batting].wickets_pair[i]/10000)==4)
      strcat(w,"Caught");
     else if((innings[batting].wickets_pair[i]/10000)==5)
      strcat(w,"Hit Wicket");
     else if((innings[batting].wickets_pair[i]/10000)==6)
      strcat(w,"Run Out");
     else
      strcat(w,"Not Out");
     strcat(w," ");
     if((innings[batting].wickets_pair[i]/10000)==3)
      {for(j=0;j<11;j++)
	if(strcmp(teams[bowling].players[j].type,"Bat/Wk")==0)
	 break;
       strcpy(n,NULL);
       Name_Short(teams[bowling].players[j].name,n);
       strcat(w,n);
       strcat(w," ");
      }
     else if((innings[batting].wickets_pair[i]/10000)==4)
      {j=(innings[batting].wickets_pair[i]%10000)/100;
       strcpy(n,NULL);
       if(j!=innings[batting].wickets_pair[i]%100)
	{Name_Short(teams[bowling].players[j].name,n);
	 strcat(w,n);
	 strcat(w," ");
	}
       else
	strcat(w,"And");
      }
     if((innings[batting].wickets_pair[i]/10000)>2 && (innings[batting].wickets_pair[i]/10000)<6)
      strcat(w," Bowl ");
     if(innings[batting].wickets_pair[i]!=-1)
      {j=innings[batting].wickets_pair[i]%100;
       strcpy(n,NULL);
       Name_Short(teams[bowling].players[j].name,n);
       strcat(w,n);
      }
     if(strlen(w)>36)
      {if(w[33]!=' ')
	w[34]='.';
       else
	w[34]=' ';
       w[35]='\0';
      }
     cout<<" "<<w<<setw(36-strlen(w))<<" ";
    }
   if(teams[batting].players[i].batted=='n')
    cout<<setw(13)<<"::";
   else
    {j=8;
     if(teams[batting].players[i].balls_faced>9 && teams[batting].players[i].balls_faced<100)
      j++;
     if(teams[batting].players[i].balls_faced>99)
      j++;
     cout<<setw(4)<<teams[batting].players[i].runs_scored<<" | "<<teams[batting].players[i].balls_faced<<setw(13-j)<<"::";
    }
  }
 for(i=0;i<80;i++)
  cout<<":";
 cout<<"\nTotal-  "<<innings[batting].score<<"\\"<<innings[batting].wickets<<" in "<<innings[batting].overs<<"."<<innings[batting].balls<<" overs";
 if(current_inning==0)
  cout<<setw(13)<<" "<<"Target-  "<<target;
 cout<<"\nRun Rate-  "<<setprecision(2)<<innings[batting].run_rate;
 cout<<setw(20)<<" "<<"Extras-  "<<innings[batting].extra<<" (W-"<<innings[batting].extras.wides<<",N-"<<innings[batting].extras.no_balls<<",B-"<<innings[batting].extras.byes<<",LB-"<<innings[batting].extras.leg_byes<<")\n\n";
 Delay(3000000);
 cout<<setw(18)<<"Bowler"<<setw(13)<<"O"<<setw(4)<<"M"<<setw(4)<<"R"<<setw(3)<<"W"<<endl;
 for(i=0;i<11;i++)
  {if((strcmp(teams[bowling].players[i].type,"Bowl")==0 || strcmp(teams[bowling].players[i].type,"Bat/Bowl")==0) && teams[bowling].players[i].bowled=='y')
    {cout<<" "<<teams[bowling].players[i].name;
     cout<<setw(25-strlen(teams[bowling].players[i].name))<<" "<<"| ";
     cout<<setw(2)<<teams[bowling].players[i].overs<<"."<<teams[bowling].players[i].balls<<" ";
     cout<<setw(2)<<teams[bowling].players[i].maiden_overs<<" ";
     cout<<setw(3)<<teams[bowling].players[i].runs_conceeded<<" ";
     cout<<setw(2)<<teams[bowling].players[i].wickets<<endl;
    }
  }
 Delay();
}
void Cricket::DisplayStats()
{char order[2][8]={"First","Second"};
 clrscr();
 cout<<endl<<setw(36);
 cout<<order[current_inning]<<" Inning ";
 cout<<"Stats\n";
 innings[batting].DisplayStats();
 Delay(3000000);
}
void Cricket::Won()
{cout<<endl;
 if(won==batting)
  {int balls_left;
   balls_left=6*overs_limit-(6*innings[batting].overs+innings[batting].balls);
   cout<<teams[batting].team_name<<"!!! won the match by "<<10-innings[batting].wickets<<" wicket";
   if(innings[batting].wickets<9)
    cout<<"s";
   if(balls_left!=0)
    {cout<<" with "<<balls_left<<" ball";
     if(balls_left>1)
      cout<<"s";
     cout<<" left";
    }
  }
 else if(won==bowling)
  {int runs_left;
   runs_left=innings[bowling].score-innings[batting].score;
   cout<<teams[bowling].team_name<<"!!! won the match by "<<runs_left<<" run";
   if(runs_left>1)
    cout<<"s";
  }
 else
  cout<<"Match ended in a DRAW!!!";
 cout<<endl;
 cout<<"\n"<<teams[0].team_name<<"-  "<<innings[0].score<<"\\"<<innings[0].wickets<<" in "<<innings[0].overs<<"."<<innings[0].balls<<" overs";
 cout<<"\n"<<teams[1].team_name<<"-  "<<innings[1].score<<"\\"<<innings[1].wickets<<" in "<<innings[1].overs<<"."<<innings[1].balls<<" overs";
 cout<<endl<<endl;
 if(won==-1)
  Print("A DRAW");
 else
  {Print(teams[won].team_name);
   Print("WON");
  }
 Delay(3000000);
 Swap(batting,bowling);
 current_inning=0;
 ScoreCard();
 Delay(3000000);
 current_inning=1;
 Swap(batting,bowling);
 ScoreCard();
 Delay(3000000);
}
void Cricket::Search()
{char search='n';
 cout<<"\nDo you want to view any particular team's player or inning stats?(y/n)\n";
 cin>>search;
 while(search=='y' || search=='Y')
  {cout<<"\nINSTRUCTIONS::\nEach Inning and Player has its/his/her unique code, Enter the code to view the  stats.\n";
   cout<<"For Inning, code is I followed by Inning number. Example- if you want view 1st  Inning stats enter 'I1' (without quotes).\n";
   cout<<"For Players, code is TeamCode_PlayerCode, where TeamCode is T followed by Team  number and PlayerCode is P followed by a two digit Player number. Example- to   view Team 1's 1st Player Stats Enter 'T1_P01' (without quotes), to view Team 2's11th Player Stats Enter 'T2_P11' (without quotes).\n";
   cout<<"To view Teams enter 'Team' (without quotes).\n";
   cout<<endl;
   SearchStats();
   clrscr();
   cout<<"\nDo you want to view any other particular team's player or inning stats?(y/n)\n";
   cin>>search;
  }
}
void Cricket::SearchStats()
{char code[8];
 do
  {strcpy(code,NULL);
   cout<<"\nEnter your choice\n";
   cin>>code;
   if(strcmp(code,"Team")==0)
    Display_Teams_Players();
   else if(code[0]=='I' && (code[1]=='1' || code[1]=='2') && code[2]=='\0')
    {if(code[1]=='1')
      {ScoreCard();
       DisplayStats();
      }
     else
      {Swap(batting,bowling);
       current_inning=1;
       ScoreCard();
       DisplayStats();
       current_inning=0;
       Swap(batting,bowling);
      }
    }
   else if(code[0]=='T' && int(code[1])-48>0 && int(code[1])-48<3 && code[2]=='_' && code[3]=='P' && ((code[4]=='0' && int(code[5])-48>0 && int(code[5])-48<10) || (code[4]=='1' && (code[5]=='0' || code[5]=='1'))) && code[6]=='\0')
    {int p=0;
     p=int(code[4])-48;
     p*=10;
     p+=int(code[5])-48;
     p--;
     teams[int(code[1])-48-1].players[p].DisplayStats();
    }
   else
    cout<<"\nInvalid Code entered\n";
   cout<<"\nPress any key to continue\n";
   getch();
  }while(strcmp(code,"Team")==0);
}
void Cricket::LetsPlay()
{randomize();
 clrscr();
 DefaultNames();
 UserInputs();
 clrscr();
 Toss();
 DisplayToss();
 Delay();
 clrscr();
 Display_Teams_Players();
 cout<<"\n\nThis is going to be a "<<overs_limit<<" OVER";
 if(overs_limit!=1)
  cout<<"S";
 cout<<" MATCH\n";
 Countdown();
 Delay();
 clrscr();
 StartMatch();
 clrscr();
 Won();
 Swap(batting,bowling);
 current_inning=0;
 Delay();
 clrscr();
 Search();
 getch();
}
void GameOn()
{char new_match='n',choice='n';
 do
  {Cricket *match=new Cricket;
   match->LetsPlay();
   clrscr();
   cout<<"\nDo you want to store curent match stats in Records (Y/N)\n";
   cin>>choice;
   if(choice=='y' || choice=='Y')
    {fstream f;
     int c=0;
     Cricket *temp=new Cricket;
     f.open("CRICKET.DAT",ios::binary | ios::in);
     while(f)
      {f.read((char*)&(*temp),sizeof((*temp)));
       c=temp->Match_Code;
      }
     temp=NULL;
     delete temp;
     f.close();
     c++;
     match->Match_Code=c;
     f.open("CRICKET.DAT",ios::binary | ios::out | ios::app);
     if(f)
      f.write((char*)&(*match),sizeof((*match)));
     cout<<"\nRecord added sucessfully\nMatch Code is "<<c<<endl;
     f.close();
    }
   match=NULL;
   delete match;
   getch();
   clrscr();
   cout<<"\n\nDo you want to play another match (y/n)"<<endl;
   cin>>new_match;
  }while(new_match=='y' || new_match=='Y');
}
void ViewRecords()
{clrscr();
 Cricket *match=new Cricket;
 int Mcode,code=0;
 char choice='n';
 do
  {cout<<"\nEnter Match Code to view the match records\n";
   cin>>Mcode;
   if(Mcode<1)
    cout<<"\nInvalid Match Code\n";
   else
    {ifstream f;
     f.open("CRICKET.DAT",ios::binary);
     while(f)
      {f.read((char*)&(*match),sizeof((*match)));
       code=match->Match_Code;
       if(match->Match_Code==Mcode)
	{clrscr();
	 cout<<"\nViewing Match '"<<Mcode<<"'\n";
	 match->Display_Teams_Players();
	 cout<<"\nThis is a "<<match->overs_limit<<" OVER";
	 if(match->overs_limit!=1)
	  cout<<"S";
	 cout<<" MATCH\n";
	 Delay(3000000);
	 clrscr();
	 match->DisplayToss();
	 Delay(3000000);
	 match->ScoreCard();
	 Delay(3000000);
	 match->DisplayStats();
	 Delay(3000000);
	 Swap(match->batting,match->bowling);
	 match->current_inning=1;
	 match->ScoreCard();
	 Delay(3000000);
	 match->DisplayStats();
	 Delay(3000000);
	 clrscr();
	 match->Won();
	 Delay(3000000);
	 Swap(match->batting,match->bowling);
	 match->current_inning=0;
	 clrscr();
	 match->Search();
	 clrscr();
	 break;
	}
      }
     f.close();
     if(code==0)
      cout<<"\nCurently no records present in the file\n";
     else if(Mcode>code)
      cout<<"\nMatch with code '"<<Mcode<<"' does not exists\n";
    }
   cout<<"\nDo you want to view any other Match record (Y/N)\n";
   cin>>choice;
  }while(choice=='y' || choice=='Y');
 match=NULL;
 delete match;
}





void main()
{clrscr();
 char choice='n';
 AssignString();
 Print("Cricket Simulator");
 Delay();
 clrscr();
 About();
 Delay(8000000);
 do
  {clrscr();
   cout<<"\nCRICKET SIMULATOR ::\n-----------------\nEnter your choice\n1)Simulate New Game"<<setw(22)<<" "<<"2)View Past Games Record\n";
   cin>>choice;
   if(choice=='1')
    GameOn();
   else if(choice=='2')
    ViewRecords();
   else
    cout<<"\nInvalid Option, Press any key to Exit\n";
   if(choice=='1' || choice=='2')
    {clrscr();
     cout<<"\nEnter 'M' to return to Main Menu or any key to Exit\n";
     cin>>choice;
    }
   else
    choice='0';
  }while(choice=='M');
 getch();
 clrscr();
 Credits();
 Delay(3000000);
 clrscr();
 Print("Hope you liked it");
 getch();
}
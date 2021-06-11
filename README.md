## About ::
---

### Developed by *Abhimayu Gupta*

### Submitted as Computer Science Project in C++

### Class XII-A, Session 2018-2019

### School*Arvind Gupta D.A.V. Centenary Public School, Northex Model Town III, Delhi-110009*

### Board Roll Number9135584

### Note: The project has been created in and compatible with Borland Turbo C++ only!!!

<p>

## Brief::
---

#### This is a basic Cricket Simulator which generates a truly random Cricket Match.

#### All values shown are random and generated at the time of execution only.

#### Generated random values can not be changed at the time of execution.

#### The overs for the match can be chosen ranging from 1 to 20.

#### Teams' name and Players' name can be changed by the user. (Both will have to be changed in order to change one.)

#### The following functions are performed in this Simulator :

	Toss
	
	Per Ball Commentary

	Batting and Bowling Scorecard
	
	General Stats and Over stats of each Innings
	
	Player Performance (Bat/Bowl/Field)

	Search Menu for accessing different Stats

#### A Match data can be saved in file for future purpose

#### Past Records can be viewed by selecting desired option in Main Menu

<p>

## Header Files Functions & Objects ::
---

- fstream.h :

	cin	cout	endl	fstream	ifstream	open();	close();	read();	write();

- conio.h :

	clrscr();	getch();

- string.h :

	strcpy();	strlen();	strcat();	strcmp();

- stdio.h :

	gets();

- stdlib.h :

	randomize();	random();	abs();

- iomanip.h :

	setw(); setprecision();

- math.h

	ceil();	abs();

<p>

## Structures ::
---

	EXTRA
	
	TOSS

<p>

## Classes ::
---

	Batsman
	
	Bowler
	
	Fielder
	
	Player
	
	Team
	
	Inning
	
	Cricket

<p>

## User Defined Functions ::
---
	
	void AssignString();

	void Delay(double);

	void PrintCharacter(char,int);

	void Print(char []);

	void About();

	void Credits();

	void Countdown();

	void Name_Short(char [],char []);

	void PrintGraph(int,int [],int []);

	void Check(char [],int,int);

	void Swap(int &,int &);

	Batsman::Batsman();

	void Batsman::ScoreRuns(char []);

	void Batsman::DisplayBatStats();

	Bowler::Bowler();

	void Bowler::TakeWickets(char []);

	void Bowler::DisplayBowlStats();

	Fielder::Fielder();

	void Fielder::PushLimits(char);

	void Fielder::DisplayFieldStats();

	Player::Player();

	void Player::AsignName(char []);

	void Player::AsignType(char []);

	void Player::DisplayStats();

	Team::Team();

	void Team::AsignTeamName(char []);

	void Team::InputPlayerNames();

	Inning::Inning();

	void Inning::MaintainStats(char [],int &,int &,int,int &);

	void Inning::DisplayStats();

	void Cricket::DefaultNames();

	void Cricket::UserInputs();

	void Cricket::UserPlayerNames();

	void Cricket::CheckInputs();

	void Cricket::Toss();

	void Cricket::StartMatch();

	void Cricket::StartInnings();

	void Cricket::StartOver(int &,int &,int);

	void Cricket::PlayBowl(char [],int);

	void Cricket::Commentary(char [],int,int,int,int);

	void Cricket::PrintOnPitchPlayers(int,int,int);

	void Cricket::SearchStats();

	Cricket::Cricket();

	void Cricket::LetsPlay();

	void Cricket::DisplayToss();

	void Cricket::Display_Teams_Players();

	void Cricket::ScoreCard();

	void Cricket::DisplayStats();

	void Cricket::Won();

	void Cricket::Search();

	void GameOn();

	void ViewRecords();

<p>

## Files Used ::
---

	CRICKET.DAT

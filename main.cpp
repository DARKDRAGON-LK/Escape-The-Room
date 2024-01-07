#include <iostream>
#include <stdlib.h>
#include <iomanip>
#include <ctime>
#include <time.h>
#include <conio.h>
#include <string>

void welcome();
void mainmenu();
void howtoplay();
void playgame();
void gameover();
void gamewon();
void credits();
void quit();
void room1();
void room2();
void room3();
void room4();
void quittext();
void answeriscorrect();
void answeriswrong();
void roomselect();
void questionselct();
void timeconverter();
void variablereset();
void rankselect();
char timedanswer(char);
void timeout();
void timeleft();
void savetohistory();
void history();
void namechange();

using namespace std;
int health=3;
int level =1;
int duration;
int c_start;
int c_end;
int hours = 0;
int minutes = 0;
int seconds = 0;
int timed;
int i=0;
int historyh=0;
int historyv=1;
char a;
string playername;
string roomname;
string rankname;
string gamehistory[25][3]={{"Name","Score","Status"}};
bool gamerunned=false;
bool gamewin=false;
int main()
{
    welcome();
    cout<<"Enter Your Username (Do not use Space): ";
    cin>>playername;
    system("cls");
    welcome();
    mainmenu();
    return 0;
}

void welcome()
{
    system("color B");
    cout << "+-----------------------------------------------------------------------------------------------------+" << endl;
    cout << "|                                            Welcome To                                               |" << endl;
    cout << "+-----------------------------------------------------------------------------------------------------+" << endl;
    cout << "| #######                                       #######                  ######                       |" << endl;
    cout << "| #        ####   ####    ##   #####  ######       #    #    # ######    #     #  ####   ####  #    # |" << endl;
    cout << "| #       #      #    #  #  #  #    # #            #    #    # #         #     # #    # #    # ##  ## |" << endl;
    cout << "| #####    ####  #      #    # #    # #####        #    ###### #####     ######  #    # #    # # ## # |" << endl;
    cout << "| #            # #      ###### #####  #            #    #    # #         #   #   #    # #    # #    # |" << endl;
    cout << "| #       #    # #    # #    # #      #            #    #    # #         #    #  #    # #    # #    # |" << endl;
    cout << "| #######  ####   ####  #    # #      ######       #    #    # ######    #     #  ####   ####  #    # |" << endl;
    cout << "+-----------------------------------------------------------------------------------------------------+" << endl;
}
void mainmenu()
{
    variablereset();
    string playername;
    int a;
    cout << "|                                              Main Menu                                              |" << endl;
    cout << "+-----------------------------------------------------------------------------------------------------+" << endl;
    cout<<endl;
    cout<<"[1] Start the Game"<<endl;
    cout<<"[2] How To Play"<<endl;
    cout<<"[3] Credits"<<endl;
    cout<<"[4] History"<<endl;
    cout<<"[5] Change Your Name"<<endl;
    cout<<"[6] Quit the Game"<<endl;
    cout<<"What is in Your Mind :";
    cin>>a;

    switch(a){
        case 1:
            c_start=clock();
            playgame();
            break;
        case 2:
            howtoplay();
            break;
        case 3:
            credits();
            break;
        case 4:
            history();
            break;
        case 5:
            namechange();
            break;
        case 6:
            quit();
            break;
        default:
            cout<<"Invalid Input"<<endl;
            system("pause");
            system("cls");
            welcome();
            mainmenu();
            break;
        }
}
void playgame()
{
    system("cls");
        while (health>0)
        {
            while (level<=21){
            roomselect();
            questionselct();
        }
    }
    if (health==0){
       gameover();
    }
}
void namechange()
{
    system("cls");
    welcome();
    cout<<"Enter Your Username (Do not use Space): ";
    cin>>playername;
    system("cls");
    welcome();
    mainmenu();
}
void quit()
{
    char q;
    quittext();
    cout << "Are You Sure To Quit The Game? (y|n) :";
    cin >>q;
    if(q=='Y'||q=='y'){
        quittext();
        cout << "|                                 Thank You For The Playing With Us                                   |" << endl;
        cout << "+-----------------------------------------------------------------------------------------------------+" << endl;
        system("pause");
        exit(0);
    }
    else if(q=='n'||q=='N'){
        system("cls");
        welcome();
        mainmenu();
    }
    else{
        cout << "Invalid Input"<<endl;
        system("pause");
        quit();
    }
}
void questionselct()
{
    if (level==1){
        cout << "|                                           Question 01                                               |"<< endl;
        cout << "+-----------------------------------------------------------------------------------------------------+" << endl;
        timeleft();
        cout << endl;
        cout << "According publishes UNESCO , which country have highest Literacy rate in the world?"<<endl;
        cout << "01.	Andorra\n02.	USA \n03.	Luxembourg\n04.	Norway"<<endl;
        timedanswer(a);
        switch(a){
            case '1':
                answeriscorrect();
                break;
            case '2':
                answeriswrong();
                break;
            case '3':
                answeriswrong();
                break;
            case '4':
                answeriswrong();
				break;
            default:
                cout<<"Invalid Input"<<endl;
                system("pause");
                break;
            }
    }
    else if (level==2){
        cout << "|                                           Question 02                                               |"<< endl;
        cout << "+-----------------------------------------------------------------------------------------------------+" << endl;
        timeleft();
        cout << endl;
        cout<<"Which film won the mist Oscar awards in 2021? ( include best picture award)"<<endl;
        cout << "01.	Nomadland\n02.	Soul\n03.	Emma\n04.	Mulan"<<endl;
        timedanswer(a);
        switch(a){
            case '1':
                answeriscorrect();
                break;
            case '2':
                answeriswrong();
                break;
            case '3':
                answeriswrong();
                break;
            case '4':
                answeriswrong();
				break;
            default:
                cout<<"Invalid Input"<<endl;
                system("pause");
                break;
            }
    }
    else if (level==3){
        cout << "|                                           Question 03                                               |"<< endl;
        cout << "+-----------------------------------------------------------------------------------------------------+" << endl;
        timeleft();
        cout << endl;
        cout<<"Who will next chancellor of Germany after Angela Merkel?"<<endl;
        cout << "01.	Olaf Scholz \n02.	Christian Lindner \n03.	Armin Laschet \n04.	Janine Wissler"<<endl;
        timedanswer(a);
        switch(a){
            case '1':
                answeriswrong();
                break;
            case '2':
                answeriswrong();
                break;
            case '3':
                answeriscorrect();
                break;
            case '4':
                answeriswrong();
				break;
            default:
                cout<<"Invalid Input"<<endl;
                system("pause");
                break;
        }
    }
    else if (level==4){
        cout << "|                                           Question 04                                               |"<< endl;
        cout << "+-----------------------------------------------------------------------------------------------------+" << endl;
        timeleft();
        cout << endl;
        cout<<"How many times has brazil won the FIFA men's world cup?"<<endl;
        cout << "01.	2\n02.	4 \n03.	5\n04.	6"<<endl;
        timedanswer(a);
        switch(a){
            case '1':
                answeriswrong();
                break;
            case '2':
                answeriswrong();
                break;
            case '3':
                answeriscorrect();
                break;
            case '4':
                answeriswrong();
				break;
            default:
                cout<<"Invalid Input"<<endl;
                system("pause");
                break;
        }
    }
    else if (level==5){
        cout << "|                                           Question 05                                               |"<< endl;
        cout << "+-----------------------------------------------------------------------------------------------------+" << endl;
        timeleft();
        cout << endl;
        cout<<"Who is the current secretary General in United Nation Security Council?"<<endl;
        cout << "01.     Attonio Guterres\n02.	Abdulha Shahif \n03.	Bankee Moon\n04.	Cofiee Unnan"<<endl;
        timedanswer(a);
        switch(a){
            case '1':
                answeriscorrect();
                break;
            case '2':
                answeriswrong();
                break;
            case '3':
                answeriswrong();
                break;
            case '4':
                answeriswrong();
				break;
            default:
                cout<<"Invalid Input"<<endl;
                system("pause");
                break;
            }
    }
    else if (level==6){
        cout << "|                                           Question 06                                               |"<< endl;
        cout << "+-----------------------------------------------------------------------------------------------------+" << endl;
        timeleft();
        cout << endl;
        cout<<"Who is the youngest Nobel Peace prize winner in the world?"<<endl;
        cout << "01.	Malaala Yusufsai\n02.	Roger Penrose \n03.	Rinhard Genzel\n04.	Andrea Ghez"<<endl;
        timedanswer(a);
        switch(a){
            case '1':
                answeriscorrect();
                break;
            case '2':
                answeriswrong();
                break;
            case '3':
                answeriswrong();
                break;
            case '4':
                answeriswrong();
				break;
            default:
                cout<<"Invalid Input"<<endl;
                system("pause");
                break;
            }
    }
    else if (level==7){
        cout << "|                                           Question 07                                               |"<< endl;
        cout << "+-----------------------------------------------------------------------------------------------------+" << endl;
        timeleft();
        cout << endl;
        cout<<"Which of the following is not a member of the vitamin B complex?"<<endl;
        cout << "01.	Thiamine\n02.	Riboflavin \n03.	Folic acid\n04.	Ascorbic acid"<<endl;
        timedanswer(a);
        switch(a){
            case '1':
                answeriswrong();
                break;
            case '2':
                answeriswrong();
                break;
            case '3':
                answeriswrong();
                break;
            case '4':
                answeriscorrect();
				break;
            default:
                cout<<"Invalid Input"<<endl;
                system("pause");
                break;
            }
    }
    else if (level==8){
        cout << "|                                           Question 08                                               |"<< endl;
        cout << "+-----------------------------------------------------------------------------------------------------+" << endl;
        timeleft();
        cout << endl;
        cout<<"Name NASA\'s Mars Exploration Rover mission?"<<endl;
        cout << "01.	Opportunity Rover\n02.	Spirit Rover \n03.	Sojourner Rover\n04.	Curiosity Rover"<<endl;
        timedanswer(a);
       switch(a){
            case '1':
                answeriswrong();
                break;
            case '2':
                answeriscorrect();
                break;
            case '3':
                answeriswrong();
                break;
            case '4':
                answeriswrong();
				break;
            default:
                cout<<"Invalid Input"<<endl;
                system("pause");
                break;
            }
    }
    else if(level==9){
        cout << "|                                           Question 09                                               |"<< endl;
        cout << "+-----------------------------------------------------------------------------------------------------+" << endl;
        timeleft();
        cout << endl;
        cout<<"Find the Different Letter"<<endl;
        for( int Va1=2;Va1>=0;Va1--)
		{
			cout<<"W W W W W W W W W W W W W W W W W"<<endl;
		}
			cout<<"W W W W W W W W W W W W M W W W W"<<endl;
		for(int Va2=2;Va2>=0; Va2--)
		{
			cout<<"W W W W W W W W W W W W W W W W W"<<endl;
		}
        timedanswer(a);
        if(a=='m' || a=='M'){
            answeriscorrect();
        }
        else
        {
            answeriswrong();
        }
    }
    else if (level==10){
        cout << "|                                           Question 10                                               |"<< endl;
        cout << "+-----------------------------------------------------------------------------------------------------+" << endl;
        timeleft();
        cout << endl;
        cout<<"Which of following disease are related to Coronavirus?"<<endl;
        cout << "01.	MERS\n02.	SARS \n03.	MERS and SARS\n04.	Neither MERS and SARS"<<endl;
        timedanswer(a);
        switch(a){
            case '1':
                answeriswrong();
                break;
            case '2':
                answeriswrong();
                break;
            case '3':
                answeriscorrect();
                break;
            case '4':
                answeriswrong();
				break;
            default:
                cout<<"Invalid Input"<<endl;
                system("pause");
                break;
            }
    }
    else if (level==11){
        cout << "|                                           Question 11                                               |"<< endl;
        cout << "+-----------------------------------------------------------------------------------------------------+" << endl;
        timeleft();
        cout << endl;
        cout<<"Who Won the Nobel peace Prize in 2020"<<endl;
        cout << "01.	WFP\n02.	UNISEF\n03.	WHO\n04.	IFAD"<<endl;
        timedanswer(a);
        switch(a){
            case '1':
                answeriscorrect();
                break;
            case '2':
                answeriswrong();
                break;
            case '3':
                answeriswrong();
                break;
            case '4':
                answeriswrong();
				break;
            default:
                cout<<"Invalid Input"<<endl;
                system("pause");
                break;
            }
    }
    else if (level==12){
        cout << "|                                           Question 12                                               |" << endl;
        cout << "+-----------------------------------------------------------------------------------------------------+" << endl;
        timeleft();
        cout << endl;
        cout<<"If RGCEG means PEACE then YCT means :"<<endl;
        cout<<"Select appropriate answer from following"<<endl;
        cout << "01.	WET\n02.	WED \n03.	WAX\n04.	WAR"<<endl;
        timedanswer(a);
        switch(a){
            case '1':
                answeriswrong();
                break;
            case '2':
                answeriswrong();
                break;
            case '3':
                answeriswrong();
                break;
            case '4':
                answeriscorrect();
				break;
            default:
                cout<<"Invalid Input"<<endl;
                system("pause");
                break;
            }
    }
    else if (level==13){
        cout << "|                                           Question 13                                               |"<< endl;
        cout << "+-----------------------------------------------------------------------------------------------------+" << endl;
        timeleft();
        cout << endl;
        cout<<"Which of the following programming language is used to create programs like applets?"<<endl;
        cout << "01.  COBOL\n02.  C Language\n03.  Java\n04.  BASIC"<<endl;
        timedanswer(a);
        switch(a){
            case '1':
                answeriswrong();
                break;
            case '2':
                answeriswrong();
                break;
            case '3':
                answeriscorrect();
                break;
            case '4':
                answeriswrong();
				break;
            default:
                cout<<"Invalid Input"<<endl;
                system("pause");
                break;
            }
    }
    else if (level==14){
        cout << "|                                           Question 14                                               |"<< endl;
        cout << "+-----------------------------------------------------------------------------------------------------+" << endl;
        timeleft();
        cout << endl;
        cout<<"Look carefully for the pattern and then ...... comes next?"<<endl;
        cout<<"DO, MI, SO, _ _ _ What is the next sequence?"<<endl;
        cout << "01.	RE\n02.	FA \n03.	LA\n04.	TI"<<endl;
        timedanswer(a);
        switch(a){
            case '1':
                answeriswrong();
                break;
            case '2':
                answeriscorrect();
                break;
            case '3':
                answeriswrong();
                break;
            case '4':
                answeriswrong();
				break;
            default:
                cout<<"Invalid Input"<<endl;
                system("pause");
                break;
            }
    }
    else if (level==15){
        cout << "|                                           Question 15                                               |"<< endl;
        cout << "+-----------------------------------------------------------------------------------------------------+" << endl;
        timeleft();
        cout << endl;
        cout<<"Look carefully for the pattern and then choose which number comes next?"<<endl;
        cout<<"IV, XV, XXII, XXX  , _ _ _ _ "<<endl;
        cout << "01.	XXXX\n02.	XXVI \n03.	XXIXX\n04.	XXVX"<<endl;
        timedanswer(a);
        switch(a){
            case '1':
                answeriscorrect();
                break;
            case '2':
                answeriswrong();
                break;
            case '3':
                answeriswrong();
                break;
            case '4':
                answeriswrong();
				break;
            default:
                cout<<"Invalid Input"<<endl;
                system("pause");
                break;
            }
    }
    else if (level==16){
        cout << "|                                           Question 16                                               |"<< endl;
        cout << "+-----------------------------------------------------------------------------------------------------+" << endl;
        timeleft();
        cout << endl;
        cout<<"The day before yesterday , suzie was 17, Next year , she will be 20. What day is her birthday?"<<endl;
        cout << "01.	January 01\n02. 	December 30 \n03.	January 02\n04.	December 31"<<endl;
        timedanswer(a);
        switch(a){
            case '1':
                answeriswrong();
                break;
            case '2':
                answeriswrong();
                break;
            case '3':
                answeriswrong();
                break;
            case '4':
                answeriscorrect();
				break;
            default:
                cout<<"Invalid Input"<<endl;
                system("pause");
                break;
            }
    }
    else if (level==17){
        cout << "|                                           Question 17                                               |"<< endl;
        cout << "+-----------------------------------------------------------------------------------------------------+" << endl;
        timeleft();
        cout << endl;
        cout<<"Look carefully for the pattern and then choose which number comes next?"<<endl;
        cout<<"[06 ,13 ,28,____, 122]"<<endl;
        cout << "01.	60\n02.	59 \n03.	58\n04.	57"<<endl;
        timedanswer(a);
        switch(a){
            case '1':
                answeriswrong();
                break;
            case '2':
                answeriscorrect();
                break;
            case '3':
                answeriswrong();
                break;
            case '4':
                answeriswrong();
				break;
            default:
                cout<<"Invalid Input"<<endl;
                system("pause");
                break;
            }
    }
    else if (level==18){
        cout << "|                                           Question 18                                               |"<< endl;
        cout << "+-----------------------------------------------------------------------------------------------------+" << endl;
        timeleft();
        cout << endl;
        cout<<"Europe is to Spain as  North America to?"<<endl;
        cout << "01.    Alaska\n02.    Canada\n03.    Venezuela\n04.    New York"<<endl;
        timedanswer(a);
        switch(a){
            case '1':
                answeriswrong();
                break;
            case '2':
                answeriscorrect();
                break;
            case '3':
                answeriswrong();
                break;
            case '4':
                answeriswrong();
				break;
            default:
                cout<<"Invalid Input"<<endl;
                system("pause");
                break;
            }
    }
    else if (level==19){
        cout << "|                                           Question 19                                               |"<< endl;
        cout << "+-----------------------------------------------------------------------------------------------------+" << endl;
        timeleft();
        cout << endl;
        cout<<"55, 30 ,14, 5, _______ which number comes next?"<<endl;
        cout << "01.	1\n02.	3 \n03.	0\n04.	4"<<endl;
        timedanswer(a);
        switch(a){
            case '1':
                answeriscorrect();
                break;
            case '2':
                answeriswrong();
                break;
            case '3':
                answeriswrong();
                break;
            case '4':
                answeriswrong();
				break;
            default:
                cout<<"Invalid Input"<<endl;
                system("pause");
                break;
            }
    }
    else if(level==20){
        cout << "|                                           Question 20                                               |"<< endl;
        cout << "+-----------------------------------------------------------------------------------------------------+" << endl;
        timeleft();
        cout << endl;
        cout<<"Find the Different Letter"<<endl;
        for( int Va1=2;Va1>=0;Va1--)
		{
			cout<<"R R R R R R R R R R R R R R R R R"<<endl;
		}
			cout<<"R R R R R R R R R R R R R R P R R"<<endl;
		for(int Va2=2;Va2>=0; Va2--)
		{
			cout<<"R R R R R R R R R R R R R R R R R"<<endl;
		}
        timedanswer(a);
            if(a=='p' || a=='P'){
            answeriscorrect();
            }
            else
            {
            answeriswrong();
            }
    }
    else if (level==21){
            gamewon();
    }
}
void answeriscorrect()
{
    system("cls");
    system("color 2");
    cout << "+-----------------------------------------------------------------------------------------------------+" << endl;
    cout << "|                                        Your Answer is                                               |" << endl;
    cout << "+-----------------------------------------------------------------------------------------------------+" << endl;
    cout << "|                 ######   #######  ########  ########  ########  ######  ########                    |" << endl;
    cout << "|                ##    ## ##     ## ##     ## ##     ## ##       ##    ##    ##                       |" << endl;
    cout << "|                ##       ##     ## ##     ## ##     ## ##       ##          ##                       |" << endl;
    cout << "|                ##       ##     ## ########  ########  ######   ##          ##                       |" << endl;
    cout << "|                ##       ##     ## ##   ##   ##   ##   ##       ##          ##                       |" << endl;
    cout << "|                ##    ## ##     ## ##    ##  ##    ##  ##       ##    ##    ##                       |" << endl;
    cout << "|                 ######   #######  ##     ## ##     ## ########  ######     ##                       |" << endl;
    cout << "+-----------------------------------------------------------------------------------------------------+" << endl;
    cout << "|                                      On to the Next Question                                        |" << endl;
    cout << "+-----------------------------------------------------------------------------------------------------+" << endl;
    level++;
    if(level==10){
        health=3;
    }
    system("pause");
    system("cls");

}
void answeriswrong()
{
    system("cls");
    system("color 4");
    cout << "+-----------------------------------------------------------------------------------------------------+" << endl;
    cout << "|                                        Your Answer is                                               |" << endl;
    cout << "+-----------------------------------------------------------------------------------------------------+" << endl;
    cout << "|                         ##      ## ########   #######  ##    ##  ######                             |" << endl;
    cout << "|                         ##  ##  ## ##     ## ##     ## ###   ## ##    ##                            |" << endl;
    cout << "|                         ##  ##  ## ##     ## ##     ## ####  ## ##                                  |" << endl;
    cout << "|                         ##  ##  ## ########  ##     ## ## ## ## ##   ####                           |" << endl;
    cout << "|                         ##  ##  ## ##   ##   ##     ## ##  #### ##    ##                            |" << endl;
    cout << "|                         ##  ##  ## ##    ##  ##     ## ##   ### ##    ##                            |" << endl;
    cout << "|                          ###  ###  ##     ##  #######  ##    ##  ######                             |" << endl;
   cout << "+-----------------------------------------------------------------------------------------------------+" << endl;
    health--;
    cout << "|                                  You Have "<<health<<" lives Left.                                             |"<<endl;
    cout << "+-----------------------------------------------------------------------------------------------------+" << endl;
    system("pause");
    system("cls");
    playgame();
}
void roomselect()
{
    if (level==1||level==2||level==3||level==4||level==5){
        room1();
    }
    else if (level==6||level==7||level==8||level==9||level==10){
        room2();
    }
    else if (level==11||level==12||level==13||level==14||level==15){
        room3();
    }
    else if (level==16||level==17||level==18||level==19||level==20){
        room4();
    }
    if(roomname=="Room 01")
        i=40;
    else if(roomname=="Room 02")
        i=30;
    else if(roomname=="Room 03")
        i=20;
    else if(roomname=="Room 04")
        i=10;
}
void howtoplay()
{
    system("cls");
    system("color 2");
    cout << "+-----------------------------------------------------------------------------------------------------+" << endl;
    cout << "|                                           How to play                                               |" << endl;
    cout << "+-----------------------------------------------------------------------------------------------------+" << endl;
    cout << "|                     There are 4 Room to Defeat and You need to Find 5 Answers to                    |" << endl;
    cout << "|                  5 Difference Questions and you Need to get all of the them Correct                 |" << endl;
    cout << "|                                      to defeat the room..                                           |" << endl;
    cout << "|                 The more you defeat the questions, they even get harder and harder..                |" << endl;
    cout << "|                                        But Do Not Fear..                                            |" << endl;
    cout << "|                                   You Have 3 Lives to Spare...                                      |" << endl;
    cout << "|                          If you're lucky enough to get to the 10th question,                        |" << endl;
    cout << "|                                   your Lives will be refilled.                                      |" << endl;
    cout << "|                                  We Hope You will win the game..                                    |" << endl;
    cout << "|                                          Good Luck                                                  |" << endl;
    cout << "|                                         - Dev Team -                                                |" << endl;
    cout << "+-----------------------------------------------------------------------------------------------------+" << endl;
    system("pause");
    system("cls");
    welcome();
    mainmenu();
}
void credits()
{
    system("cls");
    system("color 6");
    cout << "+-----------------------------------------------------------------------------------------------------+" << endl;
    cout << "|                                             Credits                                                 |" << endl;
    cout << "+-----------------------------------------------------------------------------------------------------+" << endl;
    cout << "|                                      Special Thanks goes to                                         |" << endl;
    cout << "|                       Mr. Thamra Widhyarathna and Mr. Chamith Samarawickrama                        |" << endl;
    cout << "|                             for inspiring us to make this kind of game.                             |" << endl;
    cout << "+-----------------------------------------------------------------------------------------------------+" << endl;
    cout << "|                         GAL/HNDIT/2020/F/0001 - W.A.A. Prageeth                                     |" << endl;
    cout << "|                         GAL/HNDIT/2020/F/0003 - J.K. Deshitha                                       |" << endl;
    cout << "|                         GAL/HNDIT/2020/F/0005 - L.C.J. Samarasekara                                 |" << endl;
    cout << "|                         GAL/HNDIT/2020/F/0007 - E.W.S.P. Gevin                                      |" << endl;
    cout << "|                         GAL/HNDIT/2020/F/0019 - K.P.V. Saranga                                      |" << endl;
    cout << "|                         GAL/HNDIT/2020/F/0033 - L.G.P.G. Sandapiyum                                 |" << endl;
    cout << "|                         GAL/HNDIT/2020/F/0085 - J.L.A.Hashini Nirmani                               |" << endl;
    cout << "|                         GAL/HNDIT/2020/F/0099 - I.P.K.Sandaruwan                                    |" << endl;
    cout << "|                         GAL/HNDIT/2020/F/0106 - P.T. Liyanaarachchi                                 |" << endl;
    cout << "|                         GAL/HNDIT/2020/F/0113 - D.G.M.Charuka                                       |" << endl;
    cout << "+-----------------------------------------------------------------------------------------------------+" << endl;
    system("pause");
    system("cls");
    welcome();
    mainmenu();
}
void gameover()
{
    c_end=clock();
    duration=c_end -c_start;
    timed=duration/1000;
    timeconverter();
    system("color 4");
    cout << "+-----------------------------------------------------------------------------------------------------+" << endl;
    cout << "|                               Oh! No!....Better Luck Next Time..                                    |" << endl;
    cout << "+-----------------------------------------------------------------------------------------------------+" << endl;
    cout << "|         ######      ###    ##     ## ########     #######  ##     ## ######## ########              |" << endl;
    cout << "|        ##    ##    ## ##   ###   ### ##          ##     ## ##     ## ##       ##     ##             |" << endl;
    cout << "|        ##         ##   ##  #### #### ##          ##     ## ##     ## ##       ##     ##             |" << endl;
    cout << "|        ##   #### ##     ## ## ### ## ######      ##     ## ##     ## ######   ########              |" << endl;
    cout << "|        ##    ##  ######### ##     ## ##          ##     ##  ##   ##  ##       ##   ##               |" << endl;
    cout << "|        ##    ##  ##     ## ##     ## ##          ##     ##   ## ##   ##       ##    ##              |" << endl;
    cout << "|         ######   ##     ## ##     ## ########     #######     ###    ######## ##     ##             |" << endl;
    cout << "+-----------------------------------------------------------------------------------------------------+" << endl;
    cout << "     Your UserName       |     "<<playername<< endl;
    cout << "+-----------------------------------------------------------------------------------------------------+" << endl;
    cout << "     Your Time is        |     " << setfill('0') << setw(2) << hours << " hrs : ";
	cout << setfill('0') << setw(2) << minutes << " min : ";
	cout << setfill('0') << setw(2) << seconds << " sec " << endl;
	cout << "+-----------------------------------------------------------------------------------------------------+" << endl;
	cout << "      You Lasted         |     "<<roomname<< endl;
    cout << "+-----------------------------------------------------------------------------------------------------+" << endl;
    cout << endl;
    system("pause");
    system("cls");
    savetohistory();
    welcome();
    mainmenu();
}
void gamewon()
{
    c_end=clock();
    duration=c_end -c_start;
    timed=duration/1000;
    timeconverter();
    gamewin=true;
    savetohistory();
    system("color 2");
    cout << "+-----------------------------------------------------------------------------------------------------+" << endl;
    cout << "|                                       Congratulations,                                              |"<< endl;
    cout << "+-----------------------------------------------------------------------------------------------------+" << endl;
    cout << "|                    ##    ##  #######  ##     ##    ##      ## #### ##    ##                         |" << endl;
    cout << "|                     ##  ##  ##     ## ##     ##    ##  ##  ##  ##  ###   ##                         |" << endl;
    cout << "|                      ####   ##     ## ##     ##    ##  ##  ##  ##  ####  ##                         |" << endl;
    cout << "|                       ##    ##     ## ##     ##    ##  ##  ##  ##  ## ## ##                         |" << endl;
    cout << "|                       ##    ##     ## ##     ##    ##  ##  ##  ##  ##  ####                         |" << endl;
    cout << "|                       ##    ##     ## ##     ##    ##  ##  ##  ##  ##   ###                         |" << endl;
    cout << "|                       ##     #######   #######      ###  ###  #### ##    ##                         |" << endl;
    cout << "+-----------------------------------------------------------------------------------------------------+" << endl;
    cout << "     Your UserName       |     "<<playername<< endl;
    cout << "+-----------------------------------------------------------------------------------------------------+" << endl;
    cout << "     Your Time is        |     " << setfill('0') << setw(2) << hours << " hrs : ";
	cout << setfill('0') << setw(2) << minutes << " min : ";
	cout << setfill('0') << setw(2) << seconds << " sec " << endl;
    rankselect();
	cout << "+-----------------------------------------------------------------------------------------------------+" << endl;
	cout << "      Your Rank          |     "<<rankname<< endl;
    cout << "+-----------------------------------------------------------------------------------------------------+" << endl;
    cout << endl;
    system("pause");
    system("cls");
    credits();
    system("cls");
    welcome();
    mainmenu();
}
void room1()
{
    system("cls");
    system("color C");
    roomname="Room 01";
    cout << "+-----------------------------------------------------------------------------------------------------+" << endl;
    cout << "|                                         You are Now in                                              |"<<  endl;
    cout << "+-----------------------------------------------------------------------------------------------------+" << endl;
    cout << "|                       ########   #######   #######  ##     ##       ##                              |" << endl;
    cout << "|                       ##     ## ##     ## ##     ## ###   ###     ####                              |" << endl;
    cout << "|                       ##     ## ##     ## ##     ## #### ####       ##                              |" << endl;
    cout << "|                       ########  ##     ## ##     ## ## ### ##       ##                              |" << endl;
    cout << "|                       ##   ##   ##     ## ##     ## ##     ##       ##                              |" << endl;
    cout << "|                       ##    ##  ##     ## ##     ## ##     ##       ##                              |" << endl;
    cout << "|                       ##     ##  #######   #######  ##     ##     ######                            |" << endl;
   cout << "+-----------------------------------------------------------------------------------------------------+" << endl;
}
void room2()
{
    system("cls");
    system("color 9");
    roomname="Room 02";
    cout << "+-----------------------------------------------------------------------------------------------------+" << endl;
    cout << "|                                         You are Now in                                              |"<<  endl;
    cout << "+-----------------------------------------------------------------------------------------------------+" << endl;
    cout << "|                       ########   #######   #######  ##     ##     #######                           |" << endl;
    cout << "|                       ##     ## ##     ## ##     ## ###   ###    ##     ##                          |" << endl;
    cout << "|                       ##     ## ##     ## ##     ## #### ####           ##                          |" << endl;
    cout << "|                       ########  ##     ## ##     ## ## ### ##     #######                           |" << endl;
    cout << "|                       ##   ##   ##     ## ##     ## ##     ##    ##                                 |" << endl;
    cout << "|                       ##    ##  ##     ## ##     ## ##     ##    ##                                 |" << endl;
    cout << "|                       ##     ##  #######   #######  ##     ##    #########                          |" << endl;
    cout << "+-----------------------------------------------------------------------------------------------------+" << endl;
}
void room3()
{
    system("cls");
    system("color 1");
    roomname="Room 03";
    cout << "+-----------------------------------------------------------------------------------------------------+" << endl;
    cout << "|                                         You are Now in                                              |"<<  endl;
    cout << "+-----------------------------------------------------------------------------------------------------+" << endl;
    cout << "|                       ########   #######   #######  ##     ##     #######                           |" << endl;
    cout << "|                       ##     ## ##     ## ##     ## ###   ###    ##     ##                          |" << endl;
    cout << "|                       ##     ## ##     ## ##     ## #### ####           ##                          |" << endl;
    cout << "|                       ########  ##     ## ##     ## ## ### ##     #######                           |" << endl;
    cout << "|                       ##   ##   ##     ## ##     ## ##     ##           ##                          |" << endl;
    cout << "|                       ##    ##  ##     ## ##     ## ##     ##    ##     ##                          |" << endl;
    cout << "|                       ##     ##  #######   #######  ##     ##     #######                           |" << endl;
    cout << "+-----------------------------------------------------------------------------------------------------+" << endl;
}
void room4()
{
    system("cls");
    system("color D");
    roomname="Room 04";
    cout << "+-----------------------------------------------------------------------------------------------------+" << endl;
    cout << "|                                         You are Now in                                              |"<<  endl;
    cout << "+-----------------------------------------------------------------------------------------------------+" << endl;
    cout << "|                       ########   #######   #######  ##     ##    ##                                 |" << endl;
    cout << "|                       ##     ## ##     ## ##     ## ###   ###    ##    ##                           |" << endl;
    cout << "|                       ##     ## ##     ## ##     ## #### ####    ##    ##                           |" << endl;
    cout << "|                       ########  ##     ## ##     ## ## ### ##    ##    ##                           |" << endl;
    cout << "|                       ##   ##   ##     ## ##     ## ##     ##    #########                          |" << endl;
    cout << "|                       ##    ##  ##     ## ##     ## ##     ##          ##                           |" << endl;
    cout << "|                       ##     ##  #######   #######  ##     ##          ##                           |" << endl;
    cout << "+-----------------------------------------------------------------------------------------------------+" << endl;
}
void quittext()
{
    system("cls");
    system("color 4");
    cout << "+-----------------------------------------------------------------------------------------------------+" << endl;
    cout << "|              #######  ##     ## #### ########     ######      ###    ##     ## ########             |" << endl;
    cout << "|             ##     ## ##     ##  ##     ##       ##    ##    ## ##   ###   ### ##                   |" << endl;
    cout << "|             ##     ## ##     ##  ##     ##       ##         ##   ##  #### #### ##                   |" << endl;
    cout << "|             ##     ## ##     ##  ##     ##       ##   #### ##     ## ## ### ## ######               |" << endl;
    cout << "|             ##  ## ## ##     ##  ##     ##       ##    ##  ######### ##     ## ##                   |" << endl;
    cout << "|             ##    ##  ##     ##  ##     ##       ##    ##  ##     ## ##     ## ##                   |" << endl;
    cout << "|              ##### ##  #######  ####    ##        ######   ##     ## ##     ## ########             |" << endl;
    cout << "+-----------------------------------------------------------------------------------------------------+" << endl;
}
void timeconverter(){
    hours = timed / 3600;
    minutes = (timed % 3600) / 60;
    seconds = timed % 60;
}
void rankselect()
{
    if(timed<=200){
        rankname="Legend";
    }
    else if(timed<=300){
        rankname="Epic";
    }
    else if(timed<=400){
        rankname="Grandmaster";
    }
    else if(timed<=460){
        rankname="Master";
    }
    else{
        rankname="Elite";
    }
}
void variablereset(){
    health=3;
    level =1;
    duration=0;
    c_start=0;
    c_end=0;
    hours = 0;
    minutes = 0;
    seconds = 0;
    timed=0;
    roomname="Room 00";
}
char timedanswer(char)
{
    clock_t start = clock();
    cout <<"What is Your Answer : ";
    while ( ! _kbhit() )
    {
        if (((clock () - start)/ CLOCKS_PER_SEC ) >= i)
        {
           timeout();
        }
    }
    cin >> a;
    return a;
    _getch();
}
void timeout()
{
    system("cls");
    system("color 4");
    cout << "+-----------------------------------------------------------------------------------------------------+" << endl;
    cout << "|                                Oh No! Your are Ran Out "<<i<< " Seconds                                   |" << endl;
    cout << "+-----------------------------------------------------------------------------------------------------+" << endl;
    cout << "|                ######## #### ##     ## ########     #######  ##     ## ######## ########            |" << endl;
    cout << "|                   ##     ##  ###   ### ##          ##     ## ##     ## ##       ##     ##           |" << endl;
    cout << "|                   ##     ##  #### #### ##          ##     ## ##     ## ##       ##     ##           |" << endl;
    cout << "|                   ##     ##  ## ### ## ######      ##     ## ##     ## ######   ########            |" << endl;
    cout << "|                   ##     ##  ##     ## ##          ##     ##  ##   ##  ##       ##   ##             |" << endl;
    cout << "|                   ##     ##  ##     ## ##          ##     ##   ## ##   ##       ##    ##            |" << endl;
    cout << "|                   ##    #### ##     ## ########     #######     ###    ######## ##     ##           |" << endl;
    cout << "+-----------------------------------------------------------------------------------------------------+" << endl;
    health--;
    cout << "|                                  You Have "<<health<<" lives Left.                                             |"<<endl;
    cout << "+-----------------------------------------------------------------------------------------------------+" << endl;
    system("pause");
    system("cls");
    playgame();
}
void timeleft()
{
    cout << "|                                    You have "<<i<<" Seconds to Answer                                    |"<< endl;
    cout << "+-----------------------------------------------------------------------------------------------------+" << endl;
}
void savetohistory()
{
    gamerunned=true;
    int score;
    if(gamewin){
       score = 10000-timed;
        gamehistory[historyv][historyh+2]="Pass";
       }
    else{
        score = timed;
        gamehistory[historyv][historyh+2]="Fail";
    }
    gamehistory[historyv][historyh]=playername;
    gamehistory[historyv][historyh+1]+=to_string(score);

    historyv++;
}
void history()
{
    system("cls");

    if (gamerunned){
        for(int x=0;x<25;x++){
        for(int i=0;i<3;i++){
            cout << gamehistory[x][i]<< "\t\t";
            }
            cout << endl;
        }
        system("pause");
        system("cls");
        welcome();
        mainmenu();
    }
    else{
        for(int x=0;x<1;x++){
        for(int i=0;i<3;i++){
            cout << gamehistory[x][i]<< "\t\t";
            }
        cout << endl;
        }

        cout << endl;
        cout << "  No History Recorded.";
        cout << endl;
        system("pause");
        system("cls");
        welcome();
        mainmenu();
        }
}

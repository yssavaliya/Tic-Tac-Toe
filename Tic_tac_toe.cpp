#include <iostream>
using namespace std;

  char board[10]={'O','1','2','3','4','5','6','7','8','9'};

    int checkWin(){
        //check row
        if (board[1]==board[2] && board[2]==board[3])
        {
            return 1;
        }
        else if (board[4]==board[5] && board[5]==board[6])
        {
            return 1;
        }
         else if (board[7]==board[8] && board[8]==board[9])
        {
            return 1;
        }
        //check Diagonal
         else if (board[1]==board[5] && board[5]==board[9])
        {
            return 1;
        }
         else if (board[3]==board[5] && board[5]==board[7])
        {
            return 1;
        }
        //to check column
        if (board[1]==board[4] && board[4]==board[7])
        {
            return 1;
        }
        else if (board[2]==board[5] && board[5]==board[8])
        {
            return 1;
        }
         else if (board[3]==board[6] && board[6]==board[9])
        {
            return 1;
        }
        else if(board[1]!='1' && board[2]!='2' && board[3]!='3' && board[4]!='4' && board[5]!='5' && board[6]!='6' && board[7]!='7' && board[8]!='8' && board[9]!='9')
        {
            return 0;
        }
        else{
            return -1;
        }
        
    }

    void printBoard(){
        system("cls");
        cout<<"\t\t Tic Tac Toe\n\n";
        cout<<"_____|_______|_______|\n";
        cout<<board[1]<<"\t"<<board[2]<<"\t"<<board[3]<<endl;
        cout<<"_____|_______|_______|\n";
        cout<<board[4]<<"\t"<<board[5]<<"\t"<<board[6]<<endl;
        cout<<"_____|_______|_______|\n";
        cout<<board[7]<<"\t"<<board[8]<<"\t"<<board[9]<<endl;
        cout<<"_____|_______|_______|\n";

    }


int main(){
    int player = 1, i, choice;
    char mark;
   do{
   printBoard();
   player = (player%2)? 1:2;

   cout<< "Player " << player<<",   Enter the number: ";
   cin>>choice;
   mark=(player == 1)? 'X' : 'O';
   if (choice == 1 && board[1]=='1')
   {
        board[1] = mark;
    /* code */
   }
   else if (choice == 2 && board[2]=='2')
   {
    board[2] = mark;
   }
   else if (choice == 3 && board[3]=='3')
   {
    board[3] = mark;
   }
   else if (choice == 4 && board[4]=='4')
   {
    board[4] = mark;
   }
   else if (choice == 5 && board[5]=='5')
   {
    board[5] = mark;
   }
   else if (choice == 6 && board[6]=='6')
   {
    board[6] = mark;
   }
   else if (choice == 7 && board[7]=='7')
   {
    board[7] = mark;
   }
   else if (choice == 8 && board[8]=='8')
   {
    board[8] = mark;
   }
    else if (choice == 9 && board[9]=='9')
   {
    board[9] = mark;
   }
   else
   {
    /* code */
    cout<< "Inavalid Move";
    player--;
    cin.ignore();
    cin.get();
   }
    i = checkWin();
    player++;
   }
   while (i== -1);
  printBoard();
  if (i==1)
  {
    /* code */
    cout<<"Congratulation Player "<< --player<<"\tWins\t";
  }
  else
  {
    /* code */
        cout<<"Draw";

  }
     cin.ignore();
     cin.get();

  return 0;
}





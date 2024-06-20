//Tic tak toe
#include<iostream>
#include<conio.h>
using namespace std;

char arr[3][3];
int cont=1;

void start(){
    for(int x=0;x<3;x++){
        for(int y=0;y<3;y++){
            arr[x][y]='_';
        }
    }
}

void welcome(){
    cout<<"******Welcome to tic tac toe******\n";
    start();
}

void print(){
    for(int x=0;x<3;x++){
        for(int y=0;y<3;y++){
            cout<<arr[x][y]<<"\t";
        }
        cout<<endl;
        cout<<endl;
    }
}

void play(){
    cout<<endl;
    for(int x=0;x<3;x++){
        for(int y=0;y<3;y++){
            cout<<"("<<x<<","<<y<<")"<<"\t";
        }
        cout<<endl;
        cout<<endl;
    }
    return;
}
void select(char box,int x,int y){
    arr[x][y]=box;
    print();
}

void check(){
    int i,j,temp=0;
    for(i=0;i<3;i++){
    if(arr[i][0]=='X'&&arr[i][1]=='X'&&arr[i][2]=='X'){
        cout<<"X won1!!!";
        cont=0;
    }else if(arr[0][i]=='X'&&arr[1][i]=='X'&&arr[2][i]=='X'){
        cout<<"X won2!!!";
        cont=0;
    }else if(arr[0][0]=='X'&&arr[1][1]=='X'&&arr[2][2]=='X'){
        cout<<"X won3!!!";
        cont=0;
    }else if(arr[0][2]=='X'&&arr[1][1]=='X'&&arr[2][2]=='X'){
        cout<<"X won4!!!";
        cont=0;
    }else if(arr[i][0]=='O'&&arr[i][1]=='O'&&arr[i][2]=='O'){
        cout<<"O won1!!!";
        cont=0;
    }else if(arr[0][i]=='O'&&arr[1][i]=='O'&&arr[2][i]=='O'){
        cout<<"O won2!!!";
        cont=0;
    }else if(arr[0][0]=='O'&&arr[1][1]=='O'&&arr[2][2]=='O'){
        cout<<"O won3!!!";
        cont=0;
    }else if(arr[0][2]=='O'&&arr[1][1]=='O'&&arr[2][2]=='O'){
        cout<<"O won4!!!";
        cont=0;
    }
    }
    for(int x=0;x<3;x++){
        for(int y=0;y<3;y++){
            if(arr[x][y]=='_')
            temp++;
        }
    }
    if(temp==0){
        cout<<"Draw!";
        cont=0;
    }
}

main(){
    char X='X';
    char O='O';
    int tile=1;
    int i=0;
    int x,y;
    welcome();
    print();
    cout<<"press any key to start: ";
    getch();
    
    play();
    
    do{
        if(tile==1){
        cout<<"Enter the choice----> X: ";
        cin>>x>>y;
        // cout<<"Enter the column----> X: ";
        // cin>>y;
        if(arr[x][y]=='_'){ 
        select(X,x,y);
        check();
        tile=0;
        }else{
            cout<<"Invalid choice!\n";
        }
        }else{
            cout<<"Enter the choice----> O: ";
            cin>>x>>y;
            // cout<<"Enter the column----> O: ";
            // cin>>y;
            if(arr[x][y]=='_'){
            select(O,x,y);
            tile=1;
            check();
            }else{
            cout<<"Invalid choice!\n";
        }
        }
    }while(i!=9&&cont!=0);
}

//coded by 16bpp-Santa. All Rights reserverd
//All rights reserved © 2020
//Read the license.txt from github
#include <iostream>
#include <conio.h>
#include <cstdlib>
#include <time.h>
#include <stdio.h>
#include <windows.h>
using namespace std;
int x;
void gotoxy(int x, int y)
{
	HANDLE hCon;
	COORD dwPos;
	
	dwPos.X = x;
	dwPos.Y = y;
	hCon = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleCursorPosition(hCon,dwPos);
}

void pintar(){
	//lineas horizontales
	for(int i=2; i<78; i++){
		gotoxy(i,3); printf("%c",205);	
		gotoxy(i,23); printf("%c",205);
	}
	//lineas verticales
	for(int i=4; i<23; i++){
		gotoxy(2,i); printf("%c",186);	
		gotoxy(77,i); printf("%c",186);
	}
	//esquinas
	gotoxy(2,3); printf("%c",201);
	gotoxy(2,23); printf("%c",200);
	gotoxy(77,3); printf("%c",187);
	gotoxy(77,23); printf("%c",188);
	//texto
	
gotoxy(15,10);
printf("   __  __  __  __ _  ____  __    __  ____      ");
gotoxy(15,11);
printf(" / __)/  \\(  )(  ( \\(  __)(  )  (  )(  _ \\");
gotoxy(15,12);
printf("( (__(  O ))( /    / ) _) / (_/\\ )(  ) __/  ");
gotoxy(15,13);
printf(" \\___)\\__/(__)\\_)__)(__)  \\____/(__)(__) ");
	
	
gotoxy(56,22);
printf("Coded by Santa");

gotoxy(43,26);
printf("Pulsa ENTER para comenzar");
getch();
}

void esp(){
    srand (time(NULL));
    cout<<"Listo para saber tu fortuna?"<<endl;
    x=rand() % 2+1;
    cout<<""<<x<<endl;
    if (x==1)
    {
        cout<<"Cara"<<endl;    
    }
    else
    {
        cout<<"Cruz"<<endl;
    }
    do
    {
        cout<<"Apreta Enter para tirar otra moneda";
        getch();
        system("cls");
        system("color 0c");
        x=rand() % 2+1;
        cout<<"tu fortuna es  ";
        if (x==1)
        {
            cout<<"Cara"<<endl;    
        }
        else
        {
            cout<<"Cruz"<<endl;
        }
    
        cout<<"Apreta Enter para tirar otra moneda";
        getch();
        system("cls");
        system("color 0d");
        x=rand() % 2+1;
        cout<<"tu fortuna es  ";
        if (x==1)
        {
            cout<<"Cara"<<endl;    
        }
        else
        {
            cout<<"Cruz"<<endl;
        }
        cout<<"Apreta Enter para tirar otra moneda";
        getch();
        system("cls");
        system("color 0e");
        x=rand() % 2+1;
        cout<<"tu fortuna es  ";
        if (x==1)
        {
            cout<<"Cara"<<endl;    
        }
        else
        {
            cout<<"Cruz"<<endl;
        }
        cout<<"Apreta Enter para tirar otra moneda";
        getch();
        system("cls");
        system("color 0b");
        x=rand() % 2+1;
        cout<<"tu fortuna es  ";
        if (x==1)
        {
            cout<<"Cara"<<endl;    
        }
        else
        {
            cout<<"Cruz"<<endl;
        }
        cout<<"Apreta Enter para tirar otra moneda";
        getch();
        system("cls");
        system("color 0f");
        x=rand() % 2+1;
        cout<<"tu fortuna es  ";
        if (x==1)
        {
            cout<<"Cara"<<endl;    
        }
        else
        {
            cout<<"Cruz"<<endl;
        }
        cout<<"Apreta Enter para tirar otra moneda";
        getch();
        system("cls");
        system("color 0a");
        x=rand() % 2+1;
        cout<<"tu fortuna es  ";
        if (x==1)
        {
            cout<<"Cara"<<endl;    
        }
        else
        {
            cout<<"Cruz"<<endl;
        }
    } while (true);
	
}

void eng(){
	srand (time(NULL));
    cout<<"Are you ready to know your FORTUNE?"<<endl;
    x=rand() % 2+1;
    cout<<""<<x<<endl;
    if (x==1)
    {
        cout<<"Heads"<<endl;    
    }
    else
    {
        cout<<"Tails"<<endl;
    }
    do
    {
        cout<<"Press Start flip a coin";
        getch();
        system("cls");
        system("color 0c");
        x=rand() % 2+1;
        cout<<"your luck is...  ";
        if (x==1)
        {
            cout<<"Heads"<<endl;    
        }
        else
        {
            cout<<"Tails"<<endl;
        }
    
        cout<<"Press Start for flip another coin";
        getch();
        system("cls");
        system("color 0d");
        x=rand() % 2+1;
        cout<<"your luck is... ";
        if (x==1)
        {
            cout<<"Heads"<<endl;    
        }
        else
        {
            cout<<"Tails"<<endl;
        }
        cout<<"Press Start for flip another coin";
        getch();
        system("cls");
        system("color 0e");
        x=rand() % 2+1;
        cout<<"your luck is...  ";
        if (x==1)
        {
            cout<<"Heads"<<endl;    
        }
        else
        {
            cout<<"Tails"<<endl;
        }
        cout<<"Press Start for flip another coin";
        getch();
        system("cls");
        system("color 0b");
        x=rand() % 2+1;
        cout<<"your luck is... ";
        if (x==1)
        {
            cout<<"Heads"<<endl;    
        }
        else
        {
            cout<<"Tails"<<endl;
        }
        cout<<"Press Start for flip another coin";
        getch();
        system("cls");
        system("color 0f");
        x=rand() % 2+1;
        cout<<"your luck is... ";
        if (x==1)
        {
            cout<<"Heads"<<endl;    
        }
        else
        {
            cout<<"Tails"<<endl;
        }
        cout<<"Press Start for flip another coin";
        getch();
        system("cls");
        system("color 0a");
        x=rand() % 2+1;
        cout<<"your luck is...  ";
        if (x==1)
        {
            cout<<"Heads"<<endl;    
        }
        else
        {
            cout<<"Tails"<<endl;
        }
    } while (true);
	
	
	
}

int main()
{   
	system("color 0a");
    pintar();
    getch();
    system("cls");
	int x, idioma; 
	cout<<"Selecciona tu lenguaje//Select your lenguaje"<<endl;
	cout<<"1 English"<<endl;
	cout<<"2 Spanish"<<endl;
    cin>>idioma;
    system("cls");
    if (idioma==1){
		eng();
	}
	else{
		if (idioma==2){
			esp();
		}
		else{
			cout<<"Select a correct configuration"<<endl;
			do{
				cout<<"Selecciona tu lenguaje//Select your lenguaje"<<endl;
				cout<<"1 English"<<endl;
				cout<<"2 Spanish"<<endl;
			    cin>>idioma;
			    system("cls");
			}while(idioma!=1 & idioma !=2);
			 if (idioma==1){
				eng();
			}
			else{
					esp();
				}
		}
	}
    getch();
    return 0;
}

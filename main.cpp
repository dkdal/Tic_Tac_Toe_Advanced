//TIC TAC TOE ADVANCED

#include <iostream>
#include<string.h>
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define MAX_NUM 10

using namespace std;

char choice,choice1,choice2;
int i,j,d,t,k=1,z=0,flag=1,pole=1,counter=0,pos[9],arr[3][3],ARR[3][3],a;

/*
int randnum()          //function for random nos.
{
    int random;
    srand(time(NULL));
    for(i=0;i<1;i++)    //no. of random nos.
    {
        random=rand()%MAX_NUM;  //remainder as random no.
        cout<<"\n\n"<<random<<endl;
    }
    return random;
}
*/

void display()
{
    cout<<"\t\t\t\t";
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(arr[i][j]==120)
            {
                cout<<"x";
                cout<<"\t";
            }
            else if(arr[i][j]==111)
            {
                cout<<"o";
                cout<<"\t";
            }
            else
            {
                cout<<arr[i][j];
                cout<<"\t";
            }

        }
        cout<<"\n";
        cout<<"\t\t\t\t";
    }
}


void replace()
{
    switch(pos[z])
    {
        case 1:     arr[0][0]=choice;
                    display();
                    break;

        case 2:     arr[0][1]=choice;
                    display();
                    break;

        case 3:     arr[0][2]=choice;
                    display();
                    break;

        case 4:     arr[1][0]=choice;
                    display();
                    break;

        case 5:     arr[1][1]=choice;
                    display();
                    break;

        case 6:     arr[1][2]=choice;
                    display();
                    break;

        case 7:     arr[2][0]=choice;
                    display();
                    break;

        case 8:     arr[2][1]=choice;
                    display();
                    break;

        case 9:     arr[2][2]=choice;
                    display();
                    break;

        default : cout<<"Wrong Input";
    }

}


int main()
{
    cout<<"\n\n\t\t\t\t";

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            arr[i][j]=k;
            ARR[i][j]=k;
            k+=1;
            cout<<ARR[i][j]<<"\t";
        }
        cout<<"\n\t\t\t\t";
    }


    cout<<"\nEnter your cursor type 'o' or 'x'\n";
    cin>>choice1;

    if(choice1=='x')
        choice2='o';

    else if(choice1=='o')
        choice2='x';

    choice=choice1;

    cout<<"\nYour choice is '"<<choice<<"'";

    for(int l=0;l<5;l++)
    {
        if((arr[0][0]==arr[0][1])&&(arr[0][1]==arr[0][2])||(arr[1][0]==arr[1][1])&&(arr[1][1]==arr[1][2])||(arr[2][0]==arr[2][1])&&(arr[2][1]==arr[2][2])||(arr[0][0]==arr[1][0])&&(arr[1][0]==arr[2][0])||(arr[0][1]==arr[1][1])&&(arr[1][1]==arr[2][1])||(arr[0][2]==arr[1][2])&&(arr[1][2]==arr[2][2])||(arr[2][0]==arr[1][1])&&(arr[1][1]==arr[0][2])||(arr[0][0]==arr[1][1])&&(arr[1][1]==arr[2][2]))
        {
            cout<<"\n\n\t\t\t\tGame Over";
            cout<<"\n\n\t\t\t\tI Won\n\n\n";
            break;
        }
        cout<<"\nEnter your first/next position\n";
        cin>>pos[z];
        choice=choice1;
        replace();
        z=z+1;

        A:
        {
            flag=1;
            pole=1;
            d = randnum();
            if(d==0)
            {
                goto A;
            }

            for(i=0;i<3;i++)
            {
                for(j=0;j<3;j++)
                {
                    if(ARR[i][j]==d)
                    {
						if((arr[i][j]==120)||(arr[i][j]==111))
						{
							flag=0;
							break;
						}

						else
						{
							pos[z]=d;
							choice=choice2;
							replace();
							z=z+1;
							pole=0;
							break;
						}
                    }
                }

				if (flag==0)
				{
					flag=10;
                    break;
                }

                if(pole==0)
                {
                    break;
                }
            }

            if((arr[0][0]==arr[0][1])&&(arr[0][1]==arr[0][2])||(arr[1][0]==arr[1][1])&&(arr[1][1]==arr[1][2])||(arr[2][0]==arr[2][1])&&(arr[2][1]==arr[2][2])||(arr[0][0]==arr[1][0])&&(arr[1][0]==arr[2][0])||(arr[0][1]==arr[1][1])&&(arr[1][1]==arr[2][1])||(arr[0][2]==arr[1][2])&&(arr[1][2]==arr[2][2])||(arr[2][0]==arr[1][1])&&(arr[1][1]==arr[0][2])||(arr[0][0]==arr[1][1])&&(arr[1][1]==arr[2][2]))
            {
                cout<<"\n\n\t\t\t\tGame Over";
                cout<<"\n\n\t\t\t\tYou Won\n\n\n";
                break;
            }

            if (flag==10)
            {
                goto A;
            }

        }

    }

    return 0;
}


for(i=0;i<3;i++)
{
    for(j=0;j<3;j++)
    {
        if(i==0)
        {
            if(arr[0][0]==arr[0][1])
            {
                if(arr[0][0]=='x')
                    arr[0][2]=122;

                else if(arr[0][0]=='o')
                    arr[0][2]=111;
            }

            if(arr[0][0]==arr[0][2])
            {
                if(arr[0][0]=='x')
                    arr[0][1]=122;

                else if(arr[0][0]=='o')
                    arr[0][1]=111;
            }

            if(arr[0][2]==arr[0][1])
            {
                if(arr[0][2]=='x')
                    arr[0][0]=122;

                else if(arr[0][2]=='o')
                    arr[0][0]=111;
            }
        }

        if(i==1)
        {
            if(arr[1][0]==arr[1][1])
            {
                if(arr[1][0]=='x')
                    arr[1][2]=122;

                else if(arr[1][0]=='o')
                    arr[1][2]=111;
            }

            if(arr[1][0]==arr[1][2])
            {
                if(arr[1][0]=='x')
                    arr[1][1]=122;

                else if(arr[1][0]=='o')
                    arr[1][1]=111;
            }

            if(arr[1][2]==arr[1][1])
            {
                if(arr[1][2]=='x')
                    arr[1][0]=122;

                else if(arr[1][2]=='o')
                    arr[1][0]=111;
            }
        }

        if(i==2)
        {
            if(arr[2][0]==arr[2][1])
            {
                if(arr[2][0]=='x')
                    arr[2][2]=122;

                else if(arr[2][0]=='o')
                    arr[2][2]=111;
            }

            if(arr[2][0]==arr[2][2])
            {
                if(arr[2][0]=='x')
                    arr[2][1]=122;

                else if(arr[2][0]=='o')
                    arr[2][1]=111;
            }

            if(arr[2][2]==arr[2][1])
            {
                if(arr[2][2]=='x')
                    arr[2][0]=122;

                else if(arr[2][2]=='o')
                    arr[2][0]=111;
            }
        }
    }
}




for(i=0;i<3;i++)
{
    f1(i);
    f1(j);
}

void f1(a)
{
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            f2();
        }
    }
}

void f2()
{
    if(arr[i][j]==arr[i][j+1])//error
    {
        if(arr[2][2]=='x')
            arr[2][0]=122;

        else if(arr[2][2]=='o')
            arr[2][0]=111;
    }
}







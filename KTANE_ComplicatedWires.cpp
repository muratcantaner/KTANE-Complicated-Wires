#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;
int main(){	

srand (time(NULL));
int serino;				serino=rand() %10;
int pilsay;				pilsay=rand()%5;
int portvar;			portvar=rand() %2;
int sunukes;

cout << "You Examine the Bomb. These are the informations:\n";
cout << "Serial Number: "<<serino<<"      ";



if (pilsay>0)
{cout<< "The Bomb Has "<<pilsay<<" Batteries on its sides."<<endl;}
cout<<endl;


if (portvar==1)
{cout<< "You see a Wide, Pink Socket with tens of dots under the Bomb.\n";}


int kbl[6]=       {1,1,1,1,1,1};

int isik[6]=      {0,0,0,0,0,0};
int kirmizi[6]=   {0,0,0,0,0,0};
int mavi[6]=      {0,0,0,0,0,0};
int beyaz[6]=     {0,0,0,0,0,0};
int yildiz[6]=    {0,0,0,0,0,0};


int kesil[6]=         {1,1,1,1,1,1};         
int kesilmeli[6]=     {0,0,0,0,0,0};
int kesildi[6]=       {0,0,0,0,0,0};

int ekbl=0;


		for (int i=0;i<6;i++)
		{
			if (ekbl<2)
			{	
				kbl[i]=rand() % 4;
				
				if (kbl[i]==0)
				{
					ekbl++;
					kesil[i]=0;
				}
			}
		}




	



		for (int j=0;j<6;j++)
		{
			if (kbl[j]>0)
			{isik[j]=rand() % 2;}
		}	


		for (int k=0;k<6;k++)
		{
			if (kbl[k]>0)
			{kirmizi[k]=rand() % 2;}
		}
	
	
		for (int l=0;l<6;l++)
		{
			if (kbl[l]>0)
			{mavi[l]=rand() % 2;}
		}	
		

		for (int m=0;m<6;m++)
		{
			if (((kirmizi[m]==0)||(mavi[m]==0))&&(kbl[m]>0))
			{beyaz[m]=rand() % 2;}
				
				
			if ((kirmizi[m]==0)&&(mavi[m]==0)&&(kbl[m]>0))
			{beyaz[m]=1;} 
		}


		for (int n=0;n<6;n++)
		{
			if (kbl[n]>0)
			{yildiz[n]=rand() % 2;}
		}



int dongu=0;
int kestisayi=0;
int hata=0;


for(int w=0;w<6;w++)
{
	if(kbl[w]>0)
	{
		if 		((isik[w]==1)&&(kirmizi[w]==1)&&(mavi[w]==1)&&(yildiz[w]==1))												{kesilmeli[w]=0;}
		else if ((isik[w]==1)&&(kirmizi[w]==1)&&(mavi[w]==1)&&(yildiz[w]==0)&&(serino%2==0))				 				{kesilmeli[w]=1;}
		else if ((isik[w]==1)&&(kirmizi[w]==1)&&(mavi[w]==0)&&(yildiz[w]==1)&&(pilsay>1))									{kesilmeli[w]=1;}
		else if ((isik[w]==1)&&(kirmizi[w]==1)&&(mavi[w]==0)&&(yildiz[w]==0)&&(pilsay>1))									{kesilmeli[w]=1;}
		else if ((isik[w]==1)&&(kirmizi[w]==0)&&(mavi[w]==1)&&(yildiz[w]==1)&&(portvar==1))									{kesilmeli[w]=1;}
		else if ((isik[w]==1)&&(kirmizi[w]==0)&&(mavi[w]==1)&&(yildiz[w]==0)&&(portvar==1))									{kesilmeli[w]=1;}
		else if ((isik[w]==1)&&(kirmizi[w]==0)&&(mavi[w]==0)&&(yildiz[w]==1)&&(pilsay>1))									{kesilmeli[w]=1;}
		else if ((isik[w]==1)&&(kirmizi[w]==0)&&(mavi[w]==0)&&(yildiz[w]==0)) 												{kesilmeli[w]=0;}
		else if ((isik[w]==0)&&(kirmizi[w]==1)&&(mavi[w]==1)&&(yildiz[w]==1)&&(portvar==1))									{kesilmeli[w]=1;}
		else if ((isik[w]==0)&&(kirmizi[w]==1)&&(mavi[w]==1)&&(yildiz[w]==0)&&(serino%2==0))								{kesilmeli[w]=1;}
		else if ((isik[w]==0)&&(kirmizi[w]==1)&&(mavi[w]==0)&&(yildiz[w]==1)) 												{kesilmeli[w]=1;}
		else if ((isik[w]==0)&&(kirmizi[w]==1)&&(mavi[w]==0)&&(yildiz[w]==0)&&(serino%2==0))								{kesilmeli[w]=1;}
		else if ((isik[w]==0)&&(kirmizi[w]==0)&&(mavi[w]==1)&&(yildiz[w]==1)) 												{kesilmeli[w]=0;}
		else if ((isik[w]==0)&&(kirmizi[w]==0)&&(mavi[w]==1)&&(yildiz[w]==0)&&(serino%2==0))								{kesilmeli[w]=1;}
		else if ((isik[w]==0)&&(kirmizi[w]==0)&&(mavi[w]==0)&&(yildiz[w]==1))												{kesilmeli[w]=1;}
		else if ((isik[w]==0)&&(kirmizi[w]==0)&&(mavi[w]==0)&&(yildiz[w]==0)) 												{kesilmeli[w]=1;}
		//That's just lazy coding...
	}
}

int keseceksayi;
keseceksayi=kesilmeli[0]+kesilmeli[1]+kesilmeli[2]+kesilmeli[3]+kesilmeli[4]+kesilmeli[5];

while (true)
{


	for (int a=0;a<6;a++)
	{
		if (isik[a]==0)
		{cout << "    \t|";}
	
		else
		{cout << "   o\t|";}
	}
	cout<<"\n";


	for (int b=0;b<6;b++)
	{
		if (kirmizi[b]==0)
		{cout << "   \t|";}
	
		else
		{cout << "   R\t|";}
	}
	cout<<"\n";


	for (int c=0;c<6;c++)
	{
		if (mavi[c]==0)
		{cout << "   \t|";}
	
		else
		{cout << "   B\t|";}
	}
	cout<<"\n";


	for (int d=0;d<6;d++)
	{
		if (beyaz[d]==0)
		{cout << "   \t|";}
	
		else
		{cout << "   W\t|";}
	}
	cout<<"\n";


	for (int e=0;e<6;e++)
	{
		if (yildiz[e]==0)
		{cout << "   \t|";}
	
		else
		{cout << "   *\t|";}
	}
	cout<<"\n";


	for (int f=0;f<6;f++)
	{
		if (kesildi[f]==0)
		{cout << "   \t ";}
	
		if (kesildi[f]==1)
		{cout << "   X\t ";}
	}	
	


	cout <<"\n\n\n";
	if (dongu<1) 
	{cout <<"You examined the Bomb long enough, ";}
	
	cout<< "Which Wire will You Cut?\n";;
	cin >> sunukes;
	cout<<"\n";
	sunukes-=1;


	if ((sunukes<0)||(sunukes>5))
	{
		cout<<"You entered a Wrong number, Try Again.";
		cout <<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
	}	


	else
	{

	if (kesil[sunukes]==1)
	{
		if (kesildi[sunukes]==1)
		{cout<<"You have already Cut this Wire,Try another one.\n";}

		else if (kesilmeli[sunukes]==1)
		{	
			kestisayi++;
			
			if (kestisayi<keseceksayi)
			{cout<<"You Cut The " <<sunukes+1 <<". Wire...   Nothing happens. You are on the Right path, Keep on.\n";}	
		}
		kesildi[sunukes]=1;

	}

	else if (kesil[sunukes]==0)
	{cout<<"There is no wire on this part. Try another one.\n";}


	if ((kesildi[sunukes]==1)&&(kesilmeli[sunukes]==0))
		{
			cout<<"You Cut the Wire with Shaking Hands...                  BOOOOOOOOOOOOOOOOOOOOOOM!!!          Mission Failed...";
			return 0;
		}
		
	if (keseceksayi==kestisayi)
		{	
			cout<<"You Cut the Wire with Shaking Hands...        The Countdown Stopped!!  Congratulations!!! You Have Defused The Bomb!!!";
			return 1;
		}
		

	cout <<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
	}
	
	dongu++;

}

}





	
	
	
	


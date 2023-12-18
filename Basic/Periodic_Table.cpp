#include <iostream>
#include <string>
using namespace std;

int main()
{
	cout << "Muhammad Usman\n@Usman4Byte\n";
	cout << "\t\t\t   PERIODIC TABLE\n\n";
	int row = 10;
	int col = 18;
	
	string table[10][18]={{"H ","* ","* ","* ","* ","* ","* ","* ","* ","* ","* ","* ","* ","* ","* ","* ","* ","He "},
						  {"Li","Be","* ","* ","* ","* ","* ","* ","* ","* ","* ","* ","B ","C ","N ","O ","F ","Ne"},
						  {"Na","Mg","* ","* ","* ","* ","* ","* ","* ","* ","* ","* ","Al","Si","P ","S ","Cl","Ar"},
						  {"K ","Ca","Sc","Ti","V ","Cr","Mn","Fe","Co","Ni","Cu","Zn","Ga","Ge","As","Se","Br","Kr"},
						  {"Rb","Sr","Y ","Zr","Nb","Mo","Tc","Ru","Rh","Pd","Ag","Cd","In","Sn","Sb","Te","I ","Xe"},
						  {"Cs","Ba","La","Hf","Ta","W ","Re","Os","Ir","Pt","Au","Hg","Ti","Pb","Bi","Po","At","Rn"},
						  {"Fr","Ra","Ac","Rf","Db","Sg","Bh","Hs","Mt","Ds","Rg","Cn","Nh","Fl","Mc","Lv","Ts","Og"},
						  {"- ","- ","- ","- ","- ","- ","- ","- ","- ","- ","- ","- ","- ","- ","- ","- ","- ","- "},
						  {"* ","* ","* ","Ce","Pr","Nd","Pm","Sm","Eu","Gd","Tb","Dy","Ho","Er","Tm","Yb","Lu","* "},
						  {"* ","* ","* ","Th","Pa","U ","Np","Pu","Am","Cm","Bk","Cf","Es","Fm","Md","No","Lr","*"}
						  };
	
	for(int i=0 ; i<row ; i++)
	{
		if(i==7)
		{
			cout<<"\n";
			continue;
		}
		for(int j=0 ; j<col ; j++)
		{
			if((i==0 && (j>=1 && j<=16)) ||
			   (i==1 && (j>=2 && j<=11)) ||
			   (i==2 && (j>=2 && j<=11)) ||
			   (i==8 && ((j>=0 && j<=2) || j==17)) ||
			   (i==9 && ((j>=0 && j<=2) || j==17))
			   )
			{
				cout<<"    ";
			   	continue;
			}
			else
			{
				cout << " " << table[i][j] << " ";
			}
			
		}
		cout << endl;
		
	}
	
	
	return 0;
}

#include <iostream>
#include <fstream>
#include <locale>

using namespace std;

Declan(){
	
	
	ifstream arquivo;
	ofstream arquivox2;
	ofstream arquivox3;
	ofstream arquivox4;
	ofstream arquivox5;
	ofstream arquivox6;
	
	arquivo.open("Declan.txt"); // abre arquivo p leitura
	arquivox2.open("arquivox2.txt"); // abre arquivo p escrita
	arquivox3.open("arquivox3.txt"); // abre arquivo p escrita
	arquivox4.open("arquivox4.txt");// abre arquivo p escrita
	arquivox5.open("arquivox5.txt");// abre arquivo p escrita
	arquivox6.open("arquivox6.txt");// abre arquivo p escrita
	
	string linha;
	string ins;
		
	if (arquivo.is_open() && arquivox2.is_open() && arquivox3.is_open() && arquivox4.is_open() && arquivox5.is_open() && arquivox6.is_open())
	{
		while (getline(arquivo,linha)) 
		{
			cout<< linha;
			
		if (linha.at(0) == '2')
		{	
		
				
				ins = linha.at(2);
				ins = ins + linha.at(3);
				ins = ins + linha.at(4);
				ins = ins + linha.at(5);
				ins = ins + linha.at(6);
				ins = ins + linha.at(7);
				ins = ins + linha.at(8);
				ins = ins + linha.at(9);
				ins = ins + linha.at(10);

					
		arquivox2 << linha <<endl; 
			
		}
		
		if (linha.at(0) == '3')
		{
			
			arquivox3 << linha <<ins  <<endl;
			
		}
		
		if (linha.at(0) == '4')
		{
			
			arquivox4 << linha <<ins  <<endl;
			
		}
		
		if (linha.at(0) == '5')
		{
			
			arquivox5 << linha <<ins  <<endl;
			
		}
	
		if (linha.at(0) == '6')
		{
			
			arquivox6 << linha <<ins  <<endl;
			
		}
		
		
		}
		
	}

}

Defis(){
	
	ifstream arquivo1;
	ofstream arquivox2;
	ofstream arquivox3;
	ofstream arquivox4;
	ofstream arquivox5;
	ofstream arquivox6;
	ofstream arquivox7;
	ofstream arquivox8;
	ofstream arquivox9;
	ofstream arquivoxx;
	ofstream arquivoxx1;
	
	string linha;
	string ins;	
	
		
	arquivo1.open("Defis.txt"); // abre arquivo p leitura
	arquivox2.open("arquivo2000.txt"); // abre arquivo p escrita
	arquivox3.open("arquivo2100.txt"); // abre arquivo p escrita
	arquivox4.open("arquivox2110.txt"); // abre arquivo p escrita
	arquivox5.open("arquivox2120.txt"); // abre arquivo p escrita
	arquivox6.open("arquivox2121.txt"); // abre arquivo p escrita
	arquivox7.open("arquivox2122.txt"); // abre arquivo p escrita
	arquivox8.open("arquivox2130.txt"); // abre arquivo p escrita
	arquivox9.open("arquivox2200.txt"); // abre arquivo p escrita
	arquivoxx.open("arquivox2999.txt"); // abre arquivo p escrita
	
	
	if (arquivo1.is_open() && arquivox2.is_open() && arquivox3.is_open()  && arquivox4.is_open() && arquivox5.is_open() && arquivox6.is_open() && arquivox7.is_open()  && arquivox8.is_open() && arquivox9.is_open() && arquivoxx.is_open())  
	{
		while (getline(arquivo1,linha)) 
		{
			cout<< linha <<endl;
		
			if(linha.at(0) == '2' && linha.at(1) == '0' && linha.at(2) == '0' && linha.at(3) == '0')
			
			{
				ins = linha.at(9);
				ins = ins + linha.at(10);
				ins = ins + linha.at(11);
				ins = ins + linha.at(12);
				ins = ins + linha.at(13);
				ins = ins + linha.at(14);
				ins = ins + linha.at(15);
				ins = ins + linha.at(16);
				ins = ins + linha.at(17);
				ins = ins + linha.at(18);
				ins = ins + linha.at(19);
				ins = ins + linha.at(20);
				ins = ins + linha.at(21);
				ins = ins + linha.at(22);
				ins = ins + linha.at(23);
				ins = ins + linha.at(24);
				
				arquivox2 << linha << ins <<endl;		
		
			}
			
			if(linha.at(0) == '2' && linha.at(1) == '1' && linha.at(2) == '0' && linha.at(3) == '0')
			{
				
				arquivox3 << linha <<ins  <<endl;
			}
			if(linha.at(0) == '2' && linha.at(1) == '1' && linha.at(2) == '1' && linha.at(3) == '0')
			{
				
				arquivox4 << linha <<ins <<endl;
			}
			if(linha.at(0) == '2' && linha.at(1) == '1' && linha.at(2) == '2' && linha.at(3) == '0')
			
			{
				
				arquivox5 << linha <<ins <<endl;
			}
			if(linha.at(0) == '2' && linha.at(1) == '1' && linha.at(2) == '2' && linha.at(3) == '1')
			
			{
				
				arquivox6 << linha <<ins <<endl;
			}	
			if(linha.at(0) == '2' && linha.at(1) == '1' && linha.at(2) == '2' && linha.at(3) == '2')
			
			{
				
				arquivox7 << linha <<ins  <<endl;
			}
			if(linha.at(0) == '2' && linha.at(1) == '1' && linha.at(2) == '3' && linha.at(3) == '0')
			
			{
				
				arquivox8 << linha <<ins <<endl;
			}
		
			if(linha.at(0) == '2' && linha.at(1) == '2' && linha.at(2) == '0' && linha.at(3) == '0')
			
			{
				
				arquivox9 << linha <<ins <<endl;
			}
			if(linha.at(0) == '2' && linha.at(1) == '9' && linha.at(2) == '9' && linha.at(3) == '9')
			
			{
				
				arquivoxx << linha <<ins <<endl;
			}
		}
		
		}
	
	
	
}

	
int main() {

	setlocale(LC_ALL, "Portuguese");
	
	int dados;
	
	while(dados != 3)
	{
	
		cout<<"\t\t\t >>>>>>>>BEM VINDO<<<<<<<<";
		cout<<"\n\n\n\n(1) Declan";
		cout<<"\n(2) Defis";
		cout<<"\n(3) Sair";
		cout<<"\n\n\nEscolha uma opção: ";
		cin>>dados;
	

		switch(dados)
		{
			case 1: 
				cout<<"\n\n\n\t\t>>>>>>DECLAN<<<<<<<"<<endl<<endl<<endl;
				system("pause");
				Declan();
				system("pause");
				system ("cls");
				return main();
			break;
		
			case 2:
				cout<<"\n\n\n\t\t>>>>>>DEFIS<<<<<<<"<<endl<<endl<<endl;
				system("pause");
				Defis();
				system("pause");
				system("cls");
				return main();
			break;
		}
	}
return 0;	
}

# include <iostream>
# include <string>
# include "MyLib.h" // Project-specific Library
using namespace std;

string Read_Text()
{
	string Text = "";

	cout << "Please enter a Text:\n";
	getline(cin, Text);

	return Text;
}

string Text_Encryption(string Text, short Encryption_Key)
{
	int length = Text.length();
	string Encryption = "";

	for (int i = 0; i <= length - 1; i++)
	{
		Encryption += char(Text[i] + Encryption_Key);
	}
	return Encryption;
}

string Text_Decryption(string Encryption, short Encryption_Key)
{
	int length = Encryption.length();
	string Decryption = "";

	for (int i = 0; i <= length - 1; i++)
	{
		Decryption += char(Encryption[i] - Encryption_Key);
	}
	return Decryption;
}

void Print_Text(string Text, short Encryption_Key)
{
	MyLib::Clear_Screen();
	string Encryption = Text_Encryption(Text, Encryption_Key);

	cout << "Text Before Encryption : " << Text << endl;
	cout << "Text After Encryption : " << Encryption << endl;
	cout << "Text After Decryption : " << Text_Decryption(Encryption, Encryption_Key) << endl;

}

int main()
{
	const short Encryption_Key = 5;
	Print_Text(Read_Text(),Encryption_Key);
	return 0;
}
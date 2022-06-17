//---------------------------------------------------------------------------

#include <fmx.h>
#include <fstream>
#include <string>
#include <vector>
#include <sstream>
#include <iostream>
#pragma hdrstop

#include "Login.h"
#include "MenuForm.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.fmx"
TLoginForm *LoginForm;
//---------------------------------------------------------------------------
__fastcall TLoginForm::TLoginForm(TComponent* Owner)
	: TForm(Owner)
{
}
std::vector<std::string> parseCommaDelimitedString(std::string line){
	 std::vector<std::string> result;
	 std::stringstream s_stream(line);

	 while(s_stream.good()){
		   std::string substr;
		   getline(s_stream,substr,',');
		   result.push_back(substr);
	 }
	 return result;
}
 const char* converToCharPtr(AnsiString ansiStr) {
	 return ansiStr.c_str();
}
//---------------------------------------------------------------------------
void __fastcall TLoginForm::loginButtonClick(TObject *Sender)
{
  fstream myFile;
  myFile.open("registeredAdmins.txt",ios::in);

  if(myFile.is_open()){
	 std::string line;

	 while(getline(myFile,line)){
		std::vector<std::string> parsedLine= parseCommaDelimitedString(line);
		const char* username=parsedLine.at(2).c_str();

		if(std::strcmp(username,converToCharPtr(usernameEdit->Text))==0) {
			const char* password= parsedLine.at(3).c_str();

		if(std::strcmp(password,converToCharPtr(passwordEdit->Text))==0)
			messageLabel->Text="Successfull!!";
		else
			messageLabel->Text="Error!!";
		if ((messageLabel->Text)=="Successfull!!")
			myMenuForm->Show();
			myFile.close();

		}
	 }
  }
}
//---------------------------------------------------------------------------

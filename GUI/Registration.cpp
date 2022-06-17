//---------------------------------------------------------------------------

#include <fmx.h>
#include <fstream>
#pragma hdrstop

#include "Registration.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.fmx"
TRegistrationForm *RegistrationForm;
//---------------------------------------------------------------------------
__fastcall TRegistrationForm::TRegistrationForm(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TRegistrationForm::registerButtonClick(TObject *Sender)
{
  fstream myFile;
  myFile.open("registeredAdmins.txt",ios::app);
  if(myFile.is_open()){

	 AnsiString name= nameEdit->Text;
	 AnsiString idnumber= idEdit->Text;
	 AnsiString username= usernameEdit->Text;
	 AnsiString password= passwordEdit->Text;

	 myFile<<name<<","<<idnumber<<","<<username<<","<<password<<"\n";
	 myFile.close();
     this->Close();
  }
}
//---------------------------------------------------------------------------

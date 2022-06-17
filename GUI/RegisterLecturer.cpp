//---------------------------------------------------------------------------

#include <fmx.h>
#include <fstream>
#pragma hdrstop

#include "RegisterLecturer.h"
#include "LecturerForm.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.fmx"
TRegisterLecForm *RegisterLecForm;
//---------------------------------------------------------------------------
__fastcall TRegisterLecForm::TRegisterLecForm(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TRegisterLecForm::SubmitButtonClick(TObject *Sender)
{
       fstream myFile;
  myFile.open("StudentsRecords.txt",ios::app);
  if(myFile.is_open()){

	 AnsiString firstname= firstLecEdit->Text;
	 AnsiString lastname= lastLecEdit->Text;
	 AnsiString qualification= quaEdit->Text;
	 AnsiString yearsincollege= yearsEdit->Text;
	 AnsiString course= couEdit->Text;
	 AnsiString experience= expEdit->Text;
	 AnsiString lecturesperweek= lecEdit->Text;
	 AnsiString salary= salEdit->Text;
	 AnsiString emailaddress= emailEdit->Text;
	 AnsiString phonenumber1= celno1Edit->Text;
	 AnsiString phonenumber2= celno2Edit->Text;
	 AnsiString bloodgroup= bloodEdit->Text;
	 AnsiString gender= genderEdit->Text;
	 AnsiString date= dobEdit->Text;

	 myFile<<firstname<<","<<lastname<<","<<qualification<<","<<yearsincollege<<","
	 <<course<<","<<experience<<","<<lecturesperweek<<","<<salary<<","<<emailaddress<<
	 ","<<phonenumber1<<","<<phonenumber2<<","<<bloodgroup<<","<<gender<<","<<date<<"\n";
	 myFile.close();
	  MessageLabel->Text="Do you want to enter another Lecturer's Data, Yes or No.";
  }
}
//---------------------------------------------------------------------------
void __fastcall TRegisterLecForm::Button1Click(TObject *Sender)
{
 RegisterLecForm->Show();
}
//---------------------------------------------------------------------------
void __fastcall TRegisterLecForm::Button2Click(TObject *Sender)
{
		myLecturerForm->Show();
        this->Close();
}
//---------------------------------------------------------------------------

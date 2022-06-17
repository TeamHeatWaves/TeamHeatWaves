//---------------------------------------------------------------------------

#include <fmx.h>
#include <fstream>
#pragma hdrstop

#include "RegisterStudent.h"
#include "StudentForm.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.fmx"
TRegisterStudentForm *RegisterStudentForm;
//---------------------------------------------------------------------------
__fastcall TRegisterStudentForm::TRegisterStudentForm(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TRegisterStudentForm::SubmitButtonClick(TObject *Sender)
{
   fstream myFile;
  myFile.open("StudentsRecords.txt",ios::app);
  if(myFile.is_open()){

	 AnsiString firstname= firstEdit->Text;
	 AnsiString lastname= lastEdit->Text;
	 AnsiString middlename= midEdit->Text;
	 AnsiString tribe= tribeEdit->Text;
	 AnsiString sex= sexEdit->Text;
	 AnsiString admissiondate= admissionEdit->Text;
	 AnsiString religion= relEdit->Text;
	 AnsiString nationality= nationEdit->Text;
	 AnsiString matricnumber= matricEdit->Text;
	 AnsiString department= deptEdit->Text;
	 AnsiString dateofbirth= dateEdit->Text;

	 myFile<<firstname<<","<<lastname<<","<<middlename<<","<<tribe<<","<<sex<<
	 ","<<admissiondate<<","<<religion<<","<<nationality<<","<<matricnumber<<
	 ","<<department<<","<<dateofbirth<<"\n";
	 myFile.close();
      MessageLabel->Text="Do you want to enter another Student's Data, Yes or No.";
  }
}
//---------------------------------------------------------------------------

void __fastcall TRegisterStudentForm::Button1Click(TObject *Sender)
{
 RegisterStudentForm->Show();
}
//---------------------------------------------------------------------------

void __fastcall TRegisterStudentForm::Button2Click(TObject *Sender)
{
myStudentForm->Show();
   this->Close();
}
//---------------------------------------------------------------------------


//---------------------------------------------------------------------------

#include <fmx.h>
#pragma hdrstop

#include "StudentForm.h"
#include "RegisterStudent.h"
#include "MenuForm.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.fmx"
TmyStudentForm *myStudentForm;
//---------------------------------------------------------------------------
__fastcall TmyStudentForm::TmyStudentForm(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TmyStudentForm::registerStuButtonClick(TObject *Sender)
{
 RegisterStudentForm->Show();
 this->Close();
}
//---------------------------------------------------------------------------

void __fastcall TmyStudentForm::previousButtonClick(TObject *Sender)
{
	myMenuForm->Show();
    this->Close();
}
//---------------------------------------------------------------------------


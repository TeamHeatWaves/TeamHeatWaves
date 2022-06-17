//---------------------------------------------------------------------------

#include <fmx.h>
#pragma hdrstop

#include "MenuForm.h"
#include "StudentForm.h"
#include "LecturerForm.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.fmx"
TmyMenuForm *myMenuForm;
//---------------------------------------------------------------------------
__fastcall TmyMenuForm::TmyMenuForm(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TmyMenuForm::Button1Click(TObject *Sender)
{
   myStudentForm->Show();
   this->Close();
}
//---------------------------------------------------------------------------

void __fastcall TmyMenuForm::Button2Click(TObject *Sender)
{
		myLecturerForm->Show();
		this->Close();
}
//---------------------------------------------------------------------------


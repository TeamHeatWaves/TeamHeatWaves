//---------------------------------------------------------------------------

#include <fmx.h>
#pragma hdrstop

#include "LecturerForm.h"
#include "RegisterLecturer.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.fmx"
TmyLecturerForm *myLecturerForm;
//---------------------------------------------------------------------------
__fastcall TmyLecturerForm::TmyLecturerForm(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TmyLecturerForm::registerLecButtonClick(TObject *Sender)
{
		RegisterLecForm->Show();
        this->Close();
}
//---------------------------------------------------------------------------

//---------------------------------------------------------------------------

#include <fmx.h>
#pragma hdrstop

#include "MainForm.h"
#include "Login.h"
#include "Registration.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.fmx"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm1::loginNavButtonClick(TObject *Sender)
{
 LoginForm->Show();

}
//---------------------------------------------------------------------------
void __fastcall TForm1::registerNavButtonClick(TObject *Sender)
{
 RegistrationForm->Show();
}
//---------------------------------------------------------------------------

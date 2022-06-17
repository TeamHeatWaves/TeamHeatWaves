//---------------------------------------------------------------------------

#ifndef RegisterStudentH
#define RegisterStudentH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <FMX.Controls.hpp>
#include <FMX.Forms.hpp>
#include <FMX.Controls.Presentation.hpp>
#include <FMX.Edit.hpp>
#include <FMX.StdCtrls.hpp>
#include <FMX.Types.hpp>
//---------------------------------------------------------------------------
class TRegisterStudentForm : public TForm
{
__published:	// IDE-managed Components
	TLabel *Label1;
	TLabel *Label2;
	TLabel *Label3;
	TLabel *Label4;
	TLabel *Label5;
	TLabel *Label6;
	TLabel *Label7;
	TLabel *Label8;
	TLabel *Label9;
	TLabel *Label10;
	TLabel *Label11;
	TLabel *Label12;
	TEdit *firstEdit;
	TEdit *lastEdit;
	TEdit *midEdit;
	TEdit *tribeEdit;
	TEdit *sexEdit;
	TEdit *admissionEdit;
	TEdit *relEdit;
	TEdit *nationEdit;
	TEdit *matricEdit;
	TEdit *deptEdit;
	TEdit *dateEdit;
	TButton *SubmitButton;
	TLabel *MessageLabel;
	TButton *Button1;
	TButton *Button2;
	void __fastcall SubmitButtonClick(TObject *Sender);
	void __fastcall Button1Click(TObject *Sender);
	void __fastcall Button2Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TRegisterStudentForm(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TRegisterStudentForm *RegisterStudentForm;
//---------------------------------------------------------------------------
#endif

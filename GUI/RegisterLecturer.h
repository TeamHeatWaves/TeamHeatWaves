//---------------------------------------------------------------------------

#ifndef RegisterLecturerH
#define RegisterLecturerH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <FMX.Controls.hpp>
#include <FMX.Forms.hpp>
#include <FMX.Controls.Presentation.hpp>
#include <FMX.Edit.hpp>
#include <FMX.StdCtrls.hpp>
#include <FMX.Types.hpp>
//---------------------------------------------------------------------------
class TRegisterLecForm : public TForm
{
__published:	// IDE-managed Components
	TLabel *firstLec;
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
	TEdit *firstLecEdit;
	TEdit *lastLecEdit;
	TEdit *quaEdit;
	TEdit *yearsEdit;
	TEdit *couEdit;
	TEdit *expEdit;
	TEdit *lecEdit;
	TEdit *salEdit;
	TEdit *emailEdit;
	TEdit *celno1Edit;
	TEdit *celno2Edit;
	TButton *SubmitButton;
	TLabel *MessageLabel;
	TButton *Button1;
	TButton *Button2;
	TLabel *Label1;
	TLabel *Label13;
	TLabel *Label14;
	TEdit *bloodEdit;
	TEdit *genderEdit;
	TEdit *dobEdit;
	void __fastcall SubmitButtonClick(TObject *Sender);
	void __fastcall Button1Click(TObject *Sender);
	void __fastcall Button2Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TRegisterLecForm(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TRegisterLecForm *RegisterLecForm;
//---------------------------------------------------------------------------
#endif

//---------------------------------------------------------------------------

#ifndef RegistrationH
#define RegistrationH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <FMX.Controls.hpp>
#include <FMX.Forms.hpp>
#include <FMX.Controls.Presentation.hpp>
#include <FMX.Edit.hpp>
#include <FMX.StdCtrls.hpp>
#include <FMX.Types.hpp>
//---------------------------------------------------------------------------
class TRegistrationForm : public TForm
{
__published:	// IDE-managed Components
	TLabel *nameLabel;
	TLabel *idLabel;
	TLabel *usernameLabel;
	TLabel *passwordLabel;
	TButton *registerButton;
	TEdit *nameEdit;
	TEdit *idEdit;
	TEdit *usernameEdit;
	TEdit *passwordEdit;
	void __fastcall registerButtonClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TRegistrationForm(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TRegistrationForm *RegistrationForm;
//---------------------------------------------------------------------------
#endif

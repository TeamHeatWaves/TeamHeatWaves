//---------------------------------------------------------------------------

#ifndef LecturerFormH
#define LecturerFormH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <FMX.Controls.hpp>
#include <FMX.Forms.hpp>
#include <FMX.Controls.Presentation.hpp>
#include <FMX.StdCtrls.hpp>
#include <FMX.Types.hpp>
//---------------------------------------------------------------------------
class TmyLecturerForm : public TForm
{
__published:	// IDE-managed Components
	TLabel *Label1;
	TButton *registerLecButton;
	TButton *searchButton;
	TButton *previousButton;
	void __fastcall registerLecButtonClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TmyLecturerForm(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TmyLecturerForm *myLecturerForm;
//---------------------------------------------------------------------------
#endif

//---------------------------------------------------------------------------

#ifndef StudentFormH
#define StudentFormH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <FMX.Controls.hpp>
#include <FMX.Forms.hpp>
#include <FMX.Controls.Presentation.hpp>
#include <FMX.StdCtrls.hpp>
#include <FMX.Types.hpp>
//---------------------------------------------------------------------------
class TmyStudentForm : public TForm
{
__published:	// IDE-managed Components
	TLabel *Label1;
	TButton *registerStuButton;
	TButton *searchButton;
	TButton *previousButton;
	void __fastcall registerStuButtonClick(TObject *Sender);
	void __fastcall previousButtonClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TmyStudentForm(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TmyStudentForm *myStudentForm;
//---------------------------------------------------------------------------
#endif

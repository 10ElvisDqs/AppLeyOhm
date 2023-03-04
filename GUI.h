//---------------------------------------------------------------------------

#ifndef GUIH
#define GUIH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.Imaging.pngimage.hpp>
#include <Data.DB.hpp>
#include <Data.FMTBcd.hpp>
#include <Data.SqlExpr.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
	TPanel *Panel1_main;
	TRadioGroup *RadioGroup1;
	TRadioButton *RB_corriente;
	TRadioButton *RB_voltaje;
	TRadioButton *RB_resistencia;
	TRadioGroup *RadioGroup2;
	TEdit *Ed_corriente;
	TEdit *Ed_voltaje;
	TEdit *Ed_resistencia;
	TImage *Image1;
	TImage *Image2;
	TImage *Image3;
	TImage *Image4;
	TShape *Shape1;
	TShape *Shape2;
	TLabel *Label2;
	TButton *Button1;
	TButton *Button2;
	TLabel *Label1;
	TLabel *Label3;
	TLabel *Label4;
	void __fastcall Panel1_mainMouseMove(TObject *Sender, TShiftState Shift, int X,
          int Y);
	void __fastcall Panel1_mainMouseUp(TObject *Sender, TMouseButton Button, TShiftState Shift,
          int X, int Y);
	void __fastcall Panel1_mainMouseLeave(TObject *Sender);
	void __fastcall Button1Click(TObject *Sender);
	void __fastcall RB_corrienteClick(TObject *Sender);
	void __fastcall RB_voltajeClick(TObject *Sender);
	void __fastcall RB_resistenciaClick(TObject *Sender);
	void __fastcall Button2Click(TObject *Sender);

private:	// User declarations
public:		// User declarations
	__fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif

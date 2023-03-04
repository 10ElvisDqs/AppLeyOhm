//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "GUI.h"
#include "Conversor.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
#include <Shellapi.h>
TForm1 *Form1;
Conversor *n;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
    n=new Conversor;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Panel1_mainMouseMove(TObject *Sender, TShiftState Shift, int X,
          int Y)
{
 Panel1_main->Color=clGradientActiveCaption;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Panel1_mainMouseUp(TObject *Sender, TMouseButton Button, TShiftState Shift,
          int X, int Y)
{
  Panel1_main->Color=clBtnFace;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Panel1_mainMouseLeave(TObject *Sender)
{
  Panel1_main->Color=clBtnFace;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button1Click(TObject *Sender)
{
	//corriente
	if(RB_corriente->Checked==true){
	   n->SetVoltaje( StrToFloat(Ed_voltaje->Text));
	   n->SetResistencia( StrToFloat(Ed_resistencia->Text));
	   Ed_corriente->Text= FloatToStr(n->calcular_corriente());
	}

	//voltaje
	if(RB_voltaje->Checked==true){
	   n->SetCorriente( StrToFloat(Ed_corriente->Text));
	   n->SetResistencia( StrToFloat(Ed_resistencia->Text));
	   Ed_voltaje->Text= FloatToStr(n->calcular_voltaje());
	}
    //corriente
	if(RB_resistencia->Checked==true){
	   n->SetVoltaje( StrToFloat(Ed_voltaje->Text));
	   n->SetCorriente( StrToFloat(Ed_corriente->Text));
	   Ed_resistencia->Text= FloatToStr(n->calcular_resistencia());
	}

}
//---------------------------------------------------------------------------
void __fastcall TForm1::RB_corrienteClick(TObject *Sender)
{

	Ed_voltaje->Enabled=true;
	Ed_corriente->Enabled=false;
	Ed_resistencia->Enabled=true;
	Ed_corriente->Color=clMenuHighlight;
	Ed_voltaje->Color=clWindow;
	Ed_resistencia->Color=clWindow;
	Ed_voltaje->SetFocus();
	//clWindow
}
//---------------------------------------------------------------------------
void __fastcall TForm1::RB_voltajeClick(TObject *Sender)
{
	Ed_voltaje->Enabled=false;
	Ed_corriente->Enabled=true;
	Ed_resistencia->Enabled=true;
	Ed_corriente->Color=clWindow;
	Ed_voltaje->Color=clMenuHighlight;
	Ed_resistencia->Color=clWindow;
	Ed_corriente->SetFocus();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::RB_resistenciaClick(TObject *Sender)
{
	Ed_voltaje->Enabled=true;
	Ed_corriente->Enabled=true;
	Ed_resistencia->Enabled=false;
	Ed_corriente->Color=clWindow;
	Ed_voltaje->Color=clWindow;
	Ed_resistencia->Color=clMenuHighlight;
	Ed_corriente->SetFocus();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button2Click(TObject *Sender)
{
 Close();
}
//---------------------------------------------------------------------------

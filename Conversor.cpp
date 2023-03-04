//---------------------------------------------------------------------------

#pragma hdrstop

#include "Conversor.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)

Conversor::Conversor(){
	corriente = 0;
	resistencia = 0;
	voltaje = 0;
}

void Conversor::SetCorriente(double c){
	corriente = c;
}
void Conversor::SetVoltaje(double v){
	voltaje = v;
}
void Conversor::SetResistencia(double r){
	resistencia = r ;
}

double Conversor::GetCorriente(){
	return corriente;
}
double Conversor::GetVoltaje(){
	return voltaje;
}
double Conversor::GetResistencia(){
	return resistencia;
}


double Conversor::calcular_corriente(){
	return corriente = voltaje / resistencia;
}

double Conversor::calcular_voltaje(){
	return voltaje = corriente * resistencia;
}

double Conversor::calcular_resistencia(){
	return resistencia = voltaje / corriente;
}



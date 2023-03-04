//---------------------------------------------------------------------------

#ifndef ConversorH
#define ConversorH
//---------------------------------------------------------------------------

class Conversor {
 private:
	double corriente;
	double resistencia;
	double voltaje;
 public:
	Conversor();
	void SetCorriente(double c);
	void SetVoltaje(double v);
	void SetResistencia(double r);

	double GetCorriente();
	double GetVoltaje();
	double GetResistencia();

	double calcular_corriente();
	double calcular_voltaje();
    double calcular_resistencia();
};




#endif

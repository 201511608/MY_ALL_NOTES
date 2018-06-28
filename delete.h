// pinaking_excel.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <math.h>
using namespace std;


int _tmain(int argc, _TCHAR* argv[])
{
	//Constants
	double PIE=atan(1)*4;
// Partial Safety Factors
	double dGamma_cbs=1.50,
		   dGamma_cacce=1.20,
		   dGamma_smo=1.10,
		   dGamma_sm1=1.25;
	double dGamma_s=1.150,
		   dGamma_v=1.25,
		   dGamma_fft=1.0,
		   dGamma_mft=1.35;

// Section Properties
	double dBc=1600.0,
		   dtc=200.0,
		   dHh=0.00,
		   ddc=569.820,
		   dfck=35.00,
		   dEc= 32308.250,
		   dFyk = 500.00 ;

	double dBeff = dBc;


	// Reinforcement Details
	double dTopDia=20.0, 
		   dTopSpac=100.0, 
		   dTopNo=1.0,
		   dTopCover=55.0,
		   dTop_Area=dTopDia*dTopNo*PIE/4;
	double dBotDia=20.0, 
		   dBotSpac=100.0, 
		   dBotNo=1.0,
		   dBotCover=100.0,
		   dBot_Area=dBotDia*dBotNo*PIE/4;

	//Design Strength
	double dEta=1,
		   dAlpha=0.8;
	double dfcd_bs=dEta*dAlpha*dfck/dGamma_cbs,
		   dfcd_Acc=dEta*dAlpha*dfck/dGamma_cacce ;
	double dfyds =dFyk/dGamma_s;
	

	//Girder Properties
	double dbbf=375.00,dbtf = 400.00;
	double dtbf= 25.00, dttf=20.00;
	double dhw= 2000.00, dtw=17.00;

	double dtopflange_fy = 390.0,dtopflange_fu= 540.0;
	double dweb_fy = 410.0,		 dweb_fu= 540.0;
	double dbotflange_fy = 4.0,	 dbotflange_fu= 540.0;





	//////////////////////////////////////////////////////
	//Section Properties
	double tf_top=20.0,
		   tf_bottom=25.00,
		   tw=17.00,
		   dw=2000.00,
		   bf_top=400.00,
		   bf_bottom = 375.00,
		   D=2023.00,
		   fyd_tf=390.00,
		   fyd_w = 410.00,
		   fyd_bf = 4,
		   fu = 540.00,
		   mu = 0.3,
		   dg=tf_top+tf_bottom+dw; // depth of girder



	// Modular Ratio
	double dConcreteGrade=35.00, 
		   dEConcrete = 22000.0*pow(((dConcreteGrade+10)/12.5),0.3),
		   dESteel =199948.023746047,dGSteel=77000.00,
		   dModular_ratio_per = max((dESteel/(0.5*dEConcrete)),15.0) ,
		   dModular_ratio_Trans = max((dESteel/dEConcrete),7.5);
	


	cout << dModular_ratio_Trans;
	

	getchar();
	return 0;
}


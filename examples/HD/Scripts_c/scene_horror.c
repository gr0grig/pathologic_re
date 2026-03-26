// @IMPORTS: Hold/0,GetLocator/4,AddActor/6,Sleep/2,GetRandomPFPoint/3,StopGroup0/0,Trace/1,AddActorByType/6,self/1,rand/1
// @STRINGS: W:woman|W:worker|W:pt_agony_|W:pers_|W:agony1_|W:.xml|W:New fog at |W:fog|W:horror_fog.xml|W:pt_fog|W:fog_stat.xml
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars= params=0
// @EVENT_5: op=0xe vars=
// @TASK_1: vars= params=0
// @EVENT_6: op=0x55 vars=

task_0_event_5()
{
	TaskCall(1);
	func_60();
	TaskReturn();
	return 0;
}


task_1_event_6()
{
	StopGroup0();
	return 0;
}


main()
{
	var_0_string = ""; var_1_string = "";
	func_20("woman", "woman");
	var_34_string = ""; var_35_string = "";
	func_20("worker", "man");
	
Label_10:
	Hold();
	goto Label_10;
}
EMIT "Return(); Pop(0)";


func_103()
{
	var_4_int = 0; var_5_bool = 0; var_6_cvector = CVector(0,0,0); var_7_cvector = CVector(0,0,0); var_8_int = 0; var_9_bool = 0; var_10_cvector = CVector(0,0,0); var_11_cvector = CVector(0,0,0);
	var_8_int = 1;
	
Label_105:
	var_13_int = "pt_fog" + var_8_int;
	GetLocator(var_13_int, var_9_bool, var_10_cvector, var_11_cvector);
	var_14_bool = var_9_bool == 0; //@nz
	if(var_14_bool != 0) {
	} else {
		var_15_cvector = CVector(0,0,0); var_16_cvector = CVector(0,0,0);
		var_10_cvector = var_15_cvector;
		var_11_cvector = var_16_cvector;
		func_121(var_15_cvector, var_16_cvector);
		var_8_int = var_8_int + (int)1;
		goto Label_105;
	}
	return 8;
	
}


func_136(var_26_object)
{
	var_27_object = Obj(); var_28_object = Obj();
	self(var_28_object);
	var_28_object = var_26_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_41(var_14_string, var_15_string, var_16_cvector, var_17_cvector)
{
	var_18_object = Obj(); var_19_object = Obj();
	var_20_bool = 0; var_21_float = 0;
	func_142(var_20_bool, (float)0.5);
	if(var_20_bool != 0) {
		var_25_int = "pers_" + var_14_string;
		var_26_object = Obj();
		func_136(var_26_object);
		var_30_int = "agony1_" + var_15_string;
		var_32_int = var_30_int + ".xml";
		AddActor(var_19_object, var_25_int, var_26_object, var_16_cvector, var_17_cvector, var_32_int);
		var_19_object = 0;
	}
	return 2;
}


func_142(var_20_bool, var_21_float)
{
	var_22_float = 0; var_23_float = 0;
	rand(var_23_float);
	var_20_bool = var_23_float < var_21_float;
	return 2;
}


func_20(var_0_string, var_1_string)
{
	var_2_int = 0; var_3_bool = 0; var_4_cvector = CVector(0,0,0); var_5_cvector = CVector(0,0,0); var_6_int = 0; var_7_bool = 0; var_8_cvector = CVector(0,0,0); var_9_cvector = CVector(0,0,0);
	var_6_int = 1;
	
Label_22:
	var_11_int = "pt_agony_" + var_0_string;
	var_12_int = var_11_int + var_6_int;
	GetLocator(var_12_int, var_7_bool, var_8_cvector, var_9_cvector);
	var_13_bool = var_7_bool == 0; //@nz
	if(var_13_bool != 0) {
	} else {
		var_14_string = ""; var_15_string = ""; var_16_cvector = CVector(0,0,0); var_17_cvector = CVector(0,0,0);
		var_0_string = var_14_string;
		var_1_string = var_15_string;
		var_8_cvector = var_16_cvector;
		var_9_cvector = var_17_cvector;
		func_41(var_14_string, var_15_string, var_16_cvector, var_17_cvector);
		var_6_int = var_6_int + (int)1;
		goto Label_22;
	}
	return 8;
	
}


func_88(var_33_cvector)
{
	var_34_object = Obj(); var_35_object = Obj();
	var_37_int = "New fog at " + var_33_cvector;
	Trace(var_37_int);
	var_39_object = Obj();
	func_136(var_39_object);
	AddActorByType(var_35_object, "fog", var_39_object, var_33_cvector, CVector(0.0, 0.0, 1.0), "horror_fog.xml");
	return 2;
}
EMIT "Stack[-1] = 0";


func_121(var_15_cvector, var_16_cvector)
{
	var_17_object = Obj(); var_18_object = Obj();
	var_19_bool = 0; var_20_float = 0;
	func_142(var_19_bool, (float)0.5);
	if(var_19_bool != 0) {
		var_24_object = Obj();
		func_136(var_24_object);
		AddActorByType(var_18_object, "fog", var_24_object, var_15_cvector, var_16_cvector, "fog_stat.xml");
		var_18_object = 0;
	}
	return 2;
}


func_60()
{
	var_0_bool = 0; var_1_cvector = CVector(0,0,0); var_2_bool = 0; var_3_cvector = CVector(0,0,0);
	func_103();
	Sleep((int)3, var_2_bool);
	var_30_bool = var_2_bool;
	if(var_30_bool != 0) {

	Label_69:
		GetRandomPFPoint(var_3_cvector, (int)0, (int)0);
		var_33_cvector = CVector(0,0,0);
		var_3_cvector = var_33_cvector;
		func_88(var_33_cvector);
		Sleep((int)30, var_2_bool);
		var_43_bool = var_2_bool == 0; //@nz
		if(var_43_bool != 0) {
		} else {
			goto Label_69;
		}
	}
	return 4;
	
}



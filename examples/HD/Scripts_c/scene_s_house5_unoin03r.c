// @IMPORTS: Hold/0,GetLocator/4,AddActor/6,Sleep/2,GetRandomPFPoint/3,StopGroup0/0,Trace/1,AddActorByType/6,self/1,rand/1,FindActor/2,Trigger/2
// @STRINGS: W:quest_b4_02|W:house_load|W:woman|W:worker|W:pt_agony_|W:pers_|W:agony1_|W:.xml|W:New fog at |W:fog|W:horror_fog.xml|W:pt_fog|W:fog_stat.xml
// @RUN_OP: 0x9
// @RUN_TASK: 0
// @TASK_0: vars= params=0
// @EVENT_5: op=0x0 vars=
// @TASK_1: vars= params=0
// @EVENT_6: op=0x5e vars=

task_0_event_5()
{
	var_0_bool = 0; var_1_string = ""; var_2_string = "";
	func_156(var_0_bool, "quest_b4_02", "house_load");
	func_23();
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
	func_29("woman", "woman");
	var_34_string = ""; var_35_string = "";
	func_29("worker", "man");
	
Label_19:
	Hold();
	goto Label_19;
}
EMIT "Return(); Pop(0)";


func_97(var_39_cvector)
{
	var_40_object = Obj(); var_41_object = Obj();
	var_43_int = "New fog at " + var_39_cvector;
	Trace(var_43_int);
	var_45_object = Obj();
	func_145(var_45_object);
	AddActorByType(var_41_object, "fog", var_45_object, var_39_cvector, CVector(0.0, 0.0, 1.0), "horror_fog.xml");
	return 2;
}
EMIT "Stack[-1] = 0";


func_130(var_21_cvector, var_22_cvector)
{
	var_23_object = Obj(); var_24_object = Obj();
	var_25_bool = 0; var_26_float = 0;
	func_151(var_25_bool, (float)0.5);
	if(var_25_bool != 0) {
		var_30_object = Obj();
		func_145(var_30_object);
		AddActorByType(var_24_object, "fog", var_30_object, var_21_cvector, var_22_cvector, "fog_stat.xml");
		var_24_object = 0;
	}
	return 2;
}


func_69()
{
	var_6_bool = 0; var_7_cvector = CVector(0,0,0); var_8_bool = 0; var_9_cvector = CVector(0,0,0);
	func_112();
	Sleep((int)3, var_8_bool);
	var_36_bool = var_8_bool;
	if(var_36_bool != 0) {

	Label_78:
		GetRandomPFPoint(var_9_cvector, (int)0, (int)0);
		var_39_cvector = CVector(0,0,0);
		var_9_cvector = var_39_cvector;
		func_97(var_39_cvector);
		Sleep((int)30, var_8_bool);
		var_49_bool = var_8_bool == 0; //@nz
		if(var_49_bool != 0) {
		} else {
			goto Label_78;
		}
	}
	return 4;
	
}


func_112()
{
	var_10_int = 0; var_11_bool = 0; var_12_cvector = CVector(0,0,0); var_13_cvector = CVector(0,0,0); var_14_int = 0; var_15_bool = 0; var_16_cvector = CVector(0,0,0); var_17_cvector = CVector(0,0,0);
	var_14_int = 1;
	
Label_114:
	var_19_int = "pt_fog" + var_14_int;
	GetLocator(var_19_int, var_15_bool, var_16_cvector, var_17_cvector);
	var_20_bool = var_15_bool == 0; //@nz
	if(var_20_bool != 0) {
	} else {
		var_21_cvector = CVector(0,0,0); var_22_cvector = CVector(0,0,0);
		var_16_cvector = var_21_cvector;
		var_17_cvector = var_22_cvector;
		func_130(var_21_cvector, var_22_cvector);
		var_14_int = var_14_int + (int)1;
		goto Label_114;
	}
	return 8;
	
}


func_145(var_26_object)
{
	var_27_object = Obj(); var_28_object = Obj();
	self(var_28_object);
	var_28_object = var_26_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_50(var_14_string, var_15_string, var_16_cvector, var_17_cvector)
{
	var_18_object = Obj(); var_19_object = Obj();
	var_20_bool = 0; var_21_float = 0;
	func_151(var_20_bool, (float)0.5);
	if(var_20_bool != 0) {
		var_25_int = "pers_" + var_14_string;
		var_26_object = Obj();
		func_145(var_26_object);
		var_30_int = "agony1_" + var_15_string;
		var_32_int = var_30_int + ".xml";
		AddActor(var_19_object, var_25_int, var_26_object, var_16_cvector, var_17_cvector, var_32_int);
		var_19_object = 0;
	}
	return 2;
}


func_23()
{
	TaskCall(1);
	func_69();
	TaskReturn();
	return 0;
}


func_151(var_20_bool, var_21_float)
{
	var_22_float = 0; var_23_float = 0;
	rand(var_23_float);
	var_20_bool = var_23_float < var_21_float;
	return 2;
}


func_156(var_0_bool, var_1_string, var_2_string)
{
	var_3_object = Obj(); var_4_object = Obj();
	FindActor(var_4_object, var_1_string);
	var_5_bool = var_4_object == 0; //@ne
	if(var_5_bool != 0) {
		var_0_bool = 0;
		return 2;
	}
	Trigger(var_4_object, var_2_string);
	var_0_bool = 1;
	return 2;
}
EMIT "Stack[-1] = 0";


func_29(var_0_string, var_1_string)
{
	var_2_int = 0; var_3_bool = 0; var_4_cvector = CVector(0,0,0); var_5_cvector = CVector(0,0,0); var_6_int = 0; var_7_bool = 0; var_8_cvector = CVector(0,0,0); var_9_cvector = CVector(0,0,0);
	var_6_int = 1;
	
Label_31:
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
		func_50(var_14_string, var_15_string, var_16_cvector, var_17_cvector);
		var_6_int = var_6_int + (int)1;
		goto Label_31;
	}
	return 8;
	
}



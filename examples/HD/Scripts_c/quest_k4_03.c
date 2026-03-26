// @IMPORTS: SetVariable/2,Trace/1,GetSceneByName/2,GetVariable/2,Trigger/2,RemoveActor/1,GetGameTime/1,SetTimeEvent/2,Hold/0,self/1,AddActor/6,FindActor/2
// @STRINGS: W:burah_home@door1|W:k4q03|W:place_burah|W:house5_08|W:pt_k4q03_burah|W:NPC_Burah|W:k4q03_burah.xml|W:completed|W:cleanup|A:GetLocator|W:Locator |W: doesn't exist|W:Door |W: not found|W:locked|A:SetProperty
// @GLOBALS: 0:object:
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars=object params=0
// @EVENT_26: op=0xe vars=string
// @EVENT_9: op=0x66 vars=int,float
// @PE: 0x66

task_0_event_26(var_0_object, var_1_string)
{
	var_2_object = Obj(); var_3_object = Obj();
	Trace(var_1_string);
	var_5_bool = var_1_string == "place_burah";
	if(var_5_bool != 0) {
		GetSceneByName(var_3_object, "house5_08");
		var_7_object = Obj(); var_8_object = Obj(); var_9_string = ""; var_10_string = ""; var_11_string = "";
		var_3_object = var_8_object;
		func_113(var_7_object, var_8_object, "pt_k4q03_burah", "NPC_Burah", "k4q03_burah.xml");
		var_0_object = var_7_object;
		var_3_object = 0;
	}
	var_26_bool = var_1_string == "completed";
	if(var_26_bool != 0) {
		func_58();
	}
	return 2;
}


task_0_event_9(var_0_object, var_1_int, var_2_float)
{
	func_39();
	return 0;
}


main(var_0_object)
{
	var_1_string = ""; var_2_bool = 0;
	func_131("burah_home@door1", (bool)1);
	SetVariable("k4q03", (int)1);
	var_13_int = 0;
	func_83((int)4);
	return 0;
}


func_66(var_0_object)
{
	EventDisable(26);
	var_19_string = ""; var_20_bool = 0;
	func_131("burah_home@door1", (bool)0);
	var_21_object = var_0_object;
	if(var_21_object != 0) {
		Trigger(var_0_object, "cleanup");
	}
	var_23_object = Obj();
	func_107(var_23_object);
	RemoveActor(var_23_object);
	return 0;
}


func_131(var_1_string, var_2_bool)
{
	var_3_object = Obj(); var_4_object = Obj();
	FindActor(var_4_object, var_1_string);
	var_5_bool = var_4_object == 0; //@nz
	if(var_5_bool != 0) {
		var_7_int = "Door " + var_1_string;
		var_9_int = var_7_int + " not found";
		Trace(var_9_int);
	} else {
		@@var_4_object:SetProperty("locked", var_2_bool);
	}
	return 2;
	
}
EMIT "Stack[-1] = 0";


func_39()
{
	var_3_int = 0; var_4_int = 0;
	GetVariable("k4q03", var_4_int);
	var_7_bool = var_4_int != (int)1000;
	if(var_7_bool != 0) {
		func_50();
	}
	return 2;
}


func_107(var_23_object)
{
	var_24_object = Obj(); var_25_object = Obj();
	self(var_25_object);
	var_25_object = var_23_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_113(var_7_object, var_8_object, var_9_string, var_10_string, var_11_string)
{
	var_12_bool = 0; var_13_cvector = CVector(0,0,0); var_14_cvector = CVector(0,0,0); var_15_object = Obj(); var_16_bool = 0; var_17_cvector = CVector(0,0,0); var_18_cvector = CVector(0,0,0); var_19_object = Obj();
	@@var_8_object:GetLocator(var_9_string, var_16_bool, var_17_cvector, var_18_cvector);
	var_20_bool = var_16_bool == 0; //@nz
	if(var_20_bool != 0) {
		var_22_int = "Locator " + var_9_string;
		var_24_int = var_22_int + " doesn't exist";
		Trace(var_24_int);
	} else {
		AddActor(Obj(), var_10_string, var_8_object, var_17_cvector, var_18_cvector, var_11_string);
	}
	var_19_object = var_7_object;
	return 8;
	
}
EMIT "Stack[-1] = 0";


func_50()
{
	SetVariable("k4q03", (int)-1);
	func_66(var_4_int);
	return 0;
}


func_83(var_13_int)
{
	var_14_float = 0; var_15_float = 0;
	GetGameTime(var_15_float);
	var_17_float = var_13_int * (int)24;
	var_18_bool = var_15_float >= var_17_float;
	if(var_18_bool != 0) {
		func_66(var_15_float);
	} else {
		var_28_float = var_13_int * (int)24;
		SetTimeEvent((int)0, var_28_float);
		Hold();
	}
	return 2;
	
}


func_58()
{
	SetVariable("k4q03", (int)1000);
	func_66(var_3_object);
	return 0;
}



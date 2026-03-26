// @IMPORTS: GetSceneByName/2,Trigger/2,Trace/1,GetGameTime/1,SetTimeEvent/2,GetVariable/2,SetVariable/2,RemoveActor/1,Hold/0,self/1,AddActor/6,GetActiveScene/1
// @STRINGS: W:house_petr|W:nopetr|W:cot_maria|W:nomaria|W:bad petr init|W:shouse1_kabak|W:pt_b2q03_petr|W:NPC_Petr|W:b2q03_petr.xml|W:bad maria init|W:pt_b2q03_maria|W:NPC_Maria|W:b2q03_maria.xml|W:place_maria|W:kabak_unload|W:fail|W:completed|W:b2q03|W:cleanup|A:GetLocator|W:Locator |W: doesn't exist
// @GLOBALS: 0:object:
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars=object,object,bool,bool params=0
// @EVENT_9: op=0x28 vars=int,float
// @EVENT_26: op=0x48 vars=string
// @PE: 0xda

task_0_event_9(var_0_object, var_1_object, var_2_bool, var_3_bool, var_4_int, var_5_float)
{
	var_6_object = Obj(); var_7_object = Obj();
	var_9_bool = var_4_int == (int)1;
	if(var_9_bool != 0) {
		var_10_bool = 0;
		func_255(var_10_bool);
		if(var_10_bool != 0) {
			Trace("bad maria init");
			var_3_bool = true;
		} else {
			GetSceneByName(var_7_object, "shouse1_kabak");
			var_18_object = Obj(); var_19_object = Obj(); var_20_string = ""; var_21_string = ""; var_22_string = "";
			var_7_object = var_19_object;
			func_229(var_18_object, var_19_object, "pt_b2q03_maria", "NPC_Maria", "b2q03_maria.xml");
			var_1_object = var_18_object;
			var_7_object = 0;
	}
		var_36_int = 0; var_37_float = 0;
		var_4_int = var_36_int;
		var_5_float = var_37_float;
		func_218();
	}
	goto Label_71;
	
Label_71:
	return 2;
	
}


task_0_event_26(var_0_object, var_1_object, var_2_bool, var_3_bool, var_4_string)
{
	var_5_float = 0; var_6_object = Obj(); var_7_object = Obj(); var_8_float = 0; var_9_object = Obj(); var_10_object = Obj();
	Trace(var_4_string);
	var_12_bool = var_4_string == "place_maria";
	if(var_12_bool != 0) {
		var_13_int = 0;
		func_247(var_13_int);
		var_19_bool = var_13_int < (int)22;
		if(var_19_bool != 0) {
			GetGameTime(var_8_float);
			var_8_float = var_8_float + (float)0.5;
			SetTimeEvent((int)1, var_8_float);
		}
	} else {
		var_23_bool = var_4_string == "kabak_unload";
		if(var_23_bool != 0) {
			var_24_bool = var_2_bool;
			if(var_24_bool != 0) {
				var_2_bool = false;
				GetSceneByName(var_9_object, "shouse1_kabak");
				var_26_object = Obj(); var_27_object = Obj(); var_28_string = ""; var_29_string = ""; var_30_string = "";
				var_9_object = var_27_object;
				func_229(var_26_object, var_27_object, "pt_b2q03_petr", "NPC_Petr", "b2q03_petr.xml");
				var_0_object = var_26_object;
				var_9_object = 0;
			}
			var_44_bool = var_3_bool;
			if(var_44_bool != 0) {
				var_3_bool = false;
				GetSceneByName(var_10_object, "shouse1_kabak");
				var_46_object = Obj(); var_47_object = Obj(); var_48_string = ""; var_49_string = ""; var_50_string = "";
				var_10_object = var_47_object;
				func_229(var_46_object, var_47_object, "pt_b2q03_maria", "NPC_Maria", "b2q03_maria.xml");
				var_1_object = var_46_object;
				var_10_object = 0;
			}
			goto Label_139;
		}
		var_52_bool = var_4_string == "fail";
		if(var_52_bool != 0) {
			func_151();
			goto Label_139;
		}
		var_69_bool = var_4_string == "completed";
		if(var_69_bool == 0) goto Label_139;
		func_159();
	}
Label_139:
	return 6;
	
}


main(var_0_object, var_1_object, var_2_bool, var_3_bool)
{
	var_4_object = Obj(); var_5_object = Obj(); var_6_object = Obj(); var_7_object = Obj();
	GetSceneByName(var_6_object, "house_petr");
	Trigger(var_6_object, "nopetr");
	GetSceneByName(var_6_object, "cot_maria");
	Trigger(var_6_object, "nomaria");
	var_12_bool = 0;
	func_255(var_12_bool);
	if(var_12_bool != 0) {
		Trace("bad petr init");
		var_2_bool = true;
	} else {
		GetSceneByName(var_7_object, "shouse1_kabak");
		var_42_object = Obj(); var_43_object = Obj(); var_44_string = ""; var_45_string = ""; var_46_string = "";
		var_7_object = var_43_object;
		func_229(var_42_object, var_43_object, "pt_b2q03_petr", "NPC_Petr", "b2q03_petr.xml");
		var_0_object = var_42_object;
		var_7_object = 0;
	}
	var_19_int = 0;
	func_199((int)2);
	return 4;
	
}
EMIT "Stack[-2] = 0";


func_159()
{
	SetVariable("b2q03", (int)1000);
	func_167(var_9_object, var_10_object);
	return 0;
}


func_223(var_35_object)
{
	var_36_object = Obj(); var_37_object = Obj();
	self(var_37_object);
	var_37_object = var_35_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_229(var_42_object, var_43_object, var_44_string, var_45_string, var_46_string)
{
	var_47_bool = 0; var_48_cvector = CVector(0,0,0); var_49_cvector = CVector(0,0,0); var_50_object = Obj(); var_51_bool = 0; var_52_cvector = CVector(0,0,0); var_53_cvector = CVector(0,0,0); var_54_object = Obj();
	@@var_43_object:GetLocator(var_44_string, var_51_bool, var_52_cvector, var_53_cvector);
	var_55_bool = var_51_bool == 0; //@nz
	if(var_55_bool != 0) {
		var_57_int = "Locator " + var_44_string;
		var_59_int = var_57_int + " doesn't exist";
		Trace(var_59_int);
	} else {
		AddActor(Obj(), var_45_string, var_43_object, var_52_cvector, var_53_cvector, var_46_string);
	}
	var_54_object = var_42_object;
	return 8;
	
}
EMIT "Stack[-1] = 0";


func_167(var_0_object, var_1_object)
{
	var_25_object = Obj(); var_26_object = Obj();
	EventDisable(26);
	EventDisable(9);
	var_27_object = var_0_object;
	if(var_27_object != 0) {
		Trigger(var_0_object, "cleanup");
	}
	var_29_object = var_1_object;
	if(var_29_object != 0) {
		Trigger(var_1_object, "cleanup");
	}
	GetSceneByName(var_26_object, "house_petr");
	Trigger(var_26_object, "petr");
	GetSceneByName(var_26_object, "cot_maria");
	Trigger(var_26_object, "maria");
	var_35_object = Obj();
	func_223(var_35_object);
	RemoveActor(var_35_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_199(var_19_int)
{
	var_20_float = 0; var_21_float = 0;
	GetGameTime(var_21_float);
	var_23_float = var_19_int * (int)24;
	var_24_bool = var_21_float >= var_23_float;
	if(var_24_bool != 0) {
		func_167(var_20_float, var_21_float);
	} else {
		var_40_float = var_19_int * (int)24;
		SetTimeEvent((int)0, var_40_float);
		Hold();
	}
	return 2;
	
}


func_140()
{
	var_38_int = 0; var_39_int = 0;
	GetVariable("b2q03", var_39_int);
	var_42_bool = var_39_int != (int)1000;
	if(var_42_bool != 0) {
		func_151();
	}
	return 2;
}


func_247(var_13_int)
{
	var_14_float = 0; var_15_float = 0;
	GetGameTime(var_15_float);
	var_16_int = 0;
	var_15_float = var_16_int;
	var_13_int = var_16_int % (int)24;
	return 2;
}


func_151()
{
	SetVariable("b2q03", (int)-1);
	func_167(var_9_object, var_10_object);
	return 0;
}


func_218()
{
	func_140();
	return 0;
}


func_255(var_12_bool)
{
	var_13_object = Obj(); var_14_object = Obj(); var_15_object = Obj(); var_16_object = Obj();
	GetActiveScene(var_15_object);
	GetSceneByName(var_16_object, "shouse1_kabak");
	var_12_bool = var_16_object == var_15_object;
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";



// @IMPORTS: GetMainOutdoorScene/1,CreateObjectVector/1,Trace/1,GetSceneByName/2,GetVariable/2,SetVariable/2,Trigger/2,RemoveActor/1,GetGameTime/1,SetTimeEvent/2,Hold/0,self/1,AddActor/6
// @STRINGS: W:pt_d11q06_wastedmale1|W:pers_wasted_male|W:d11q06_wastedmale.xml|A:add|W:pt_d11q06_wastedmale2|W:pt_d11q06_wastedmale3|W:pt_d11q06_wastedmale4|W:pt_d11q06_wastedgirl1|W:pers_wasted_girl|W:d11q06_wastedgirl.xml|W:pt_d11q06_wastedgirl2|W:place_maria|W:crypt2|W:pt_d11q06_maria|W:NPC_Maria|W:d11q06_maria.xml|W:fail|W:completed|W:d11q06|W:cleanup|A:GetLocator|W:Locator |W: doesn't exist|A:AddStationaryActor|A:size|A:get|A:Remove|A:clear
// @GLOBALS: 0:object:
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars=object,object params=0
// @EVENT_26: op=0x41 vars=string
// @EVENT_9: op=0xa7 vars=int,float
// @PE: 0xa7

task_0_event_26(var_0_object, var_1_object, var_2_string)
{
	var_3_object = Obj(); var_4_object = Obj();
	Trace(var_2_string);
	var_6_bool = var_2_string == "place_maria";
	if(var_6_bool != 0) {
		GetSceneByName(var_4_object, "crypt2");
		var_8_object = Obj(); var_9_object = Obj(); var_10_string = ""; var_11_string = ""; var_12_string = "";
		var_4_object = var_9_object;
		func_178(var_8_object, var_9_object, "pt_d11q06_maria", "NPC_Maria", "d11q06_maria.xml");
		var_1_object = var_8_object;
		var_4_object = 0;
	} else {
		var_27_bool = var_2_string == "fail";
		if(var_27_bool != 0) {
			func_112();
			goto Label_97;
		}
		var_31_bool = var_2_string == "completed";
		if(var_31_bool == 0) goto Label_97;
		func_120();
	}
Label_97:
	return 2;
	
}


task_0_event_9(var_0_object, var_1_object, var_2_int, var_3_float)
{
	func_98();
	return 0;
}


main(var_0_object, var_1_object)
{
	var_2_object = Obj(); var_3_object = Obj();
	GetMainOutdoorScene(var_3_object);
	CreateObjectVector(var_0_object);
	var_4_object = Obj(); var_5_object = Obj(); var_6_string = ""; var_7_string = ""; var_8_string = "";
	var_3_object = var_5_object;
	func_196(var_4_object, var_5_object, "pt_d11q06_wastedmale1", "pers_wasted_male", "d11q06_wastedmale.xml");
	@@@var_0_object:add(var_4_object);
	var_22_object = Obj(); var_23_object = Obj(); var_24_string = ""; var_25_string = ""; var_26_string = "";
	var_3_object = var_23_object;
	func_196(var_22_object, var_23_object, "pt_d11q06_wastedmale2", "pers_wasted_male", "d11q06_wastedmale.xml");
	@@@var_0_object:add(var_22_object);
	var_27_object = Obj(); var_28_object = Obj(); var_29_string = ""; var_30_string = ""; var_31_string = "";
	var_3_object = var_28_object;
	func_196(var_27_object, var_28_object, "pt_d11q06_wastedmale3", "pers_wasted_male", "d11q06_wastedmale.xml");
	@@@var_0_object:add(var_27_object);
	var_32_object = Obj(); var_33_object = Obj(); var_34_string = ""; var_35_string = ""; var_36_string = "";
	var_3_object = var_33_object;
	func_196(var_32_object, var_33_object, "pt_d11q06_wastedmale4", "pers_wasted_male", "d11q06_wastedmale.xml");
	@@@var_0_object:add(var_32_object);
	var_37_object = Obj(); var_38_object = Obj(); var_39_string = ""; var_40_string = ""; var_41_string = "";
	var_3_object = var_38_object;
	func_196(var_37_object, var_38_object, "pt_d11q06_wastedgirl1", "pers_wasted_girl", "d11q06_wastedgirl.xml");
	@@@var_0_object:add(var_37_object);
	var_42_object = Obj(); var_43_object = Obj(); var_44_string = ""; var_45_string = ""; var_46_string = "";
	var_3_object = var_43_object;
	func_196(var_42_object, var_43_object, "pt_d11q06_wastedgirl2", "pers_wasted_girl", "d11q06_wastedgirl.xml");
	@@@var_0_object:add(var_42_object);
	var_47_int = 0;
	func_148((int)11);
	return 2;
}
EMIT "Stack[-1] = 0";


func_128()
{
	return 0;
}


func_129(var_0_object, var_1_object)
{
	EventDisable(26);
	func_128();
	var_53_object = Obj();
	var_53_object = var_0_object;
	func_214(var_53_object);
	var_64_object = var_1_object;
	if(var_64_object != 0) {
		Trigger(var_1_object, "cleanup");
	}
	var_66_object = Obj();
	func_172(var_66_object);
	RemoveActor(var_66_object);
	return 0;
}


func_98()
{
	var_4_int = 0; var_5_int = 0;
	GetVariable("d11q06", var_5_int);
	var_8_bool = var_5_int != (int)1000;
	if(var_8_bool != 0) {
		func_112();
	}
	func_129(var_4_int, var_5_int);
	return 2;
}


func_196(var_4_object, var_5_object, var_6_string, var_7_string, var_8_string)
{
	var_9_bool = 0; var_10_cvector = CVector(0,0,0); var_11_cvector = CVector(0,0,0); var_12_object = Obj(); var_13_bool = 0; var_14_cvector = CVector(0,0,0); var_15_cvector = CVector(0,0,0); var_16_object = Obj();
	@@var_5_object:GetLocator(var_6_string, var_13_bool, var_14_cvector, var_15_cvector);
	var_17_bool = var_13_bool == 0; //@nz
	if(var_17_bool != 0) {
		var_19_int = "Locator " + var_6_string;
		var_21_int = var_19_int + " doesn't exist";
		Trace(var_21_int);
	} else {
		@@var_5_object:AddStationaryActor(Obj(), var_14_cvector, var_15_cvector, var_7_string, var_8_string);
	}
	var_16_object = var_4_object;
	return 8;
	
}
EMIT "Stack[-1] = 0";


func_172(var_66_object)
{
	var_67_object = Obj(); var_68_object = Obj();
	self(var_68_object);
	var_68_object = var_66_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_112()
{
	SetVariable("d11q06", (int)-1);
	func_128();
	return 0;
}


func_178(var_8_object, var_9_object, var_10_string, var_11_string, var_12_string)
{
	var_13_bool = 0; var_14_cvector = CVector(0,0,0); var_15_cvector = CVector(0,0,0); var_16_object = Obj(); var_17_bool = 0; var_18_cvector = CVector(0,0,0); var_19_cvector = CVector(0,0,0); var_20_object = Obj();
	@@var_9_object:GetLocator(var_10_string, var_17_bool, var_18_cvector, var_19_cvector);
	var_21_bool = var_17_bool == 0; //@nz
	if(var_21_bool != 0) {
		var_23_int = "Locator " + var_10_string;
		var_25_int = var_23_int + " doesn't exist";
		Trace(var_25_int);
	} else {
		AddActor(Obj(), var_11_string, var_9_object, var_18_cvector, var_19_cvector, var_12_string);
	}
	var_20_object = var_8_object;
	return 8;
	
}
EMIT "Stack[-1] = 0";


func_148(var_47_int)
{
	var_48_float = 0; var_49_float = 0;
	GetGameTime(var_49_float);
	var_51_float = var_47_int * (int)24;
	var_52_bool = var_49_float >= var_51_float;
	if(var_52_bool != 0) {
		func_129(var_48_float, var_49_float);
	} else {
		var_71_float = var_47_int * (int)24;
		SetTimeEvent((int)0, var_71_float);
		Hold();
	}
	return 2;
	
}


func_214(var_53_object)
{
	var_54_int = 0; var_55_int = 0; var_56_object = Obj(); var_57_int = 0; var_58_int = 0; var_59_object = Obj();
	var_60_object = var_53_object;
	if(var_60_object != 0) {
		@@var_53_object:size(var_57_int);
		var_58_int = 0;

	Label_220:
		var_61_bool = var_58_int < var_57_int;
		if(var_61_bool != 0) {
			@@var_53_object:get(var_59_object, var_58_int);
			var_62_object = var_59_object;
			if(var_62_object != 0) {
				@@var_59_object:Remove();
			}
			var_59_object = 0;
			var_58_int = var_58_int + (int)1;
			goto Label_220;
		}
		@@var_53_object:clear();
	}
	return 6;
}


func_120()
{
	SetVariable("d11q06", (int)1000);
	func_128();
	return 0;
}



// @IMPORTS: SetVariable/2,GetMainOutdoorScene/1,GetSceneByName/2,Trace/1,GetVariable/2,Trigger/2,RemoveActor/1,GetGameTime/1,SetTimeEvent/2,Hold/0,self/1,AddActor/6,FindActor/2
// @STRINGS: W:NPC_Mark|W:theater@door1|W:k4q02|W:pt_k4q02_birdmask1|W:pers_birdmask|W:k4q02_birdmask.xml|W:pt_k4q02_birdmask2|W:cot_maria|W:pt_k4q02_mark|W:k4q02_mark.xml|W:init_theater|W:pt_k4q02_prophet|W:pers_krysa|W:k4q02_prophet.xml|W:completed|W:cleanup|A:Remove|W:pt_mark|W:NPC_Klara_Mark.xml|A:GetLocator|W:Locator |W: doesn't exist|A:AddStationaryActor|W:Door |W: not found|W:locked|A:SetProperty
// @GLOBALS: 0:object:
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars=object,object,object,object,object params=0
// @EVENT_26: op=0x31 vars=string
// @EVENT_9: op=0xab vars=int,float
// @PE: 0xab

task_0_event_26(var_0_object, var_1_object, var_2_object, var_3_object, var_4_object, var_5_string)
{
	var_6_object = Obj(); var_7_object = Obj();
	Trace(var_5_string);
	var_9_bool = var_5_string == "init_theater";
	if(var_9_bool != 0) {
		GetSceneByName(var_7_object, "theater");
		var_11_object = Obj(); var_12_object = Obj(); var_13_string = ""; var_14_string = ""; var_15_string = "";
		var_7_object = var_12_object;
		func_182(var_11_object, var_12_object, "pt_k4q02_prophet", "pers_krysa", "k4q02_prophet.xml");
		var_4_object = var_11_object;
		var_29_string = ""; var_30_bool = 0;
		func_219("theater@door1", (bool)0);
		var_7_object = 0;
	} else {
		var_40_bool = var_5_string == "completed";
		if(var_40_bool == 0) goto Label_79;
		func_99();
	}
Label_79:
	return 2;
	
}


task_0_event_9(var_0_object, var_1_object, var_2_object, var_3_object, var_4_object, var_5_int, var_6_float)
{
	func_80();
	return 0;
}


main(var_0_object, var_1_object, var_2_object, var_3_object, var_4_object)
{
	var_5_object = Obj(); var_6_object = Obj();
	var_7_bool = 0; var_8_string = "";
	func_236(var_7_bool, "NPC_Mark");
	var_12_string = ""; var_13_bool = 0;
	func_219("theater@door1", (bool)1);
	SetVariable("k4q02", (int)1);
	GetMainOutdoorScene(var_6_object);
	var_24_object = Obj(); var_25_object = Obj(); var_26_string = ""; var_27_string = ""; var_28_string = "";
	var_6_object = var_25_object;
	func_200(var_24_object, var_25_object, "pt_k4q02_birdmask1", "pers_birdmask", "k4q02_birdmask.xml");
	var_0_object = var_24_object;
	var_43_object = Obj(); var_44_object = Obj(); var_45_string = ""; var_46_string = ""; var_47_string = "";
	var_6_object = var_44_object;
	func_200(var_43_object, var_44_object, "pt_k4q02_birdmask2", "pers_birdmask", "k4q02_birdmask.xml");
	var_1_object = var_43_object;
	GetSceneByName(var_6_object, "cot_maria");
	var_49_object = Obj(); var_50_object = Obj(); var_51_string = ""; var_52_string = ""; var_53_string = "";
	var_6_object = var_50_object;
	func_182(var_49_object, var_50_object, "pt_k4q02_mark", "NPC_Mark", "k4q02_mark.xml");
	var_2_object = var_49_object;
	var_67_int = 0;
	func_152((int)4);
	return 2;
}
EMIT "Stack[-1] = 0";


func_99()
{
	SetVariable("k4q02", (int)1000);
	func_107(var_3_object, var_4_object, var_5_string, var_6_object, var_7_object);
	return 0;
}


func_200(var_24_object, var_25_object, var_26_string, var_27_string, var_28_string)
{
	var_29_bool = 0; var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_object = Obj(); var_33_bool = 0; var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_object = Obj();
	@@var_25_object:GetLocator(var_26_string, var_33_bool, var_34_cvector, var_35_cvector);
	var_37_bool = var_33_bool == 0; //@nz
	if(var_37_bool != 0) {
		var_39_int = "Locator " + var_26_string;
		var_41_int = var_39_int + " doesn't exist";
		Trace(var_41_int);
	} else {
		@@var_25_object:AddStationaryActor(Obj(), var_34_cvector, var_35_cvector, var_27_string, var_28_string, (bool)1);
	}
	var_36_object = var_24_object;
	return 8;
	
}
EMIT "Stack[-1] = 0";


func_91()
{
	SetVariable("k4q02", (int)-1);
	func_107(var_4_object, var_5_int, var_6_float, var_7_int, var_8_int);
	return 0;
}


func_107(var_0_object, var_1_object, var_2_object, var_3_object, var_4_object)
{
	var_73_object = Obj(); var_74_object = Obj();
	EventDisable(26);
	var_75_string = ""; var_76_bool = 0;
	func_219("theater@door1", (bool)0);
	var_77_object = var_2_object;
	if(var_77_object != 0) {
		Trigger(var_2_object, "cleanup");
	}
	var_79_object = var_0_object;
	if(var_79_object != 0) {
		@@@var_0_object:Remove();
	}
	var_80_object = var_1_object;
	if(var_80_object != 0) {
		@@@var_1_object:Remove();
	}
	var_81_object = var_4_object;
	if(var_81_object != 0) {
		Trigger(var_4_object, "cleanup");
	}
	var_83_bool = var_3_object == 0; //@nz
	if(var_83_bool != 0) {
		GetSceneByName(var_74_object, "theater");
		var_85_object = Obj(); var_86_object = Obj(); var_87_string = ""; var_88_string = ""; var_89_string = "";
		var_74_object = var_86_object;
		func_182(var_85_object, var_86_object, "pt_mark", "NPC_Mark", "NPC_Klara_Mark.xml");
		var_3_object = var_85_object;
		var_74_object = 0;
	}
	var_90_object = Obj();
	func_176(var_90_object);
	RemoveActor(var_90_object);
	return 2;
}


func_236(var_7_bool, var_8_string)
{
	var_9_object = Obj(); var_10_object = Obj();
	FindActor(var_10_object, var_8_string);
	var_11_bool = var_10_object == 0; //@nz
	if(var_11_bool != 0) {
		var_7_bool = 0;
		return 2;
	}
	RemoveActor(var_10_object);
	var_7_bool = 1;
	return 2;
}
EMIT "Stack[-1] = 0";


func_176(var_90_object)
{
	var_91_object = Obj(); var_92_object = Obj();
	self(var_92_object);
	var_92_object = var_90_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_80()
{
	var_7_int = 0; var_8_int = 0;
	GetVariable("k4q02", var_8_int);
	var_11_bool = var_8_int != (int)1000;
	if(var_11_bool != 0) {
		func_91();
	}
	return 2;
}


func_182(var_49_object, var_50_object, var_51_string, var_52_string, var_53_string)
{
	var_54_bool = 0; var_55_cvector = CVector(0,0,0); var_56_cvector = CVector(0,0,0); var_57_object = Obj(); var_58_bool = 0; var_59_cvector = CVector(0,0,0); var_60_cvector = CVector(0,0,0); var_61_object = Obj();
	@@var_50_object:GetLocator(var_51_string, var_58_bool, var_59_cvector, var_60_cvector);
	var_62_bool = var_58_bool == 0; //@nz
	if(var_62_bool != 0) {
		var_64_int = "Locator " + var_51_string;
		var_66_int = var_64_int + " doesn't exist";
		Trace(var_66_int);
	} else {
		AddActor(Obj(), var_52_string, var_50_object, var_59_cvector, var_60_cvector, var_53_string);
	}
	var_61_object = var_49_object;
	return 8;
	
}
EMIT "Stack[-1] = 0";


func_152(var_67_int)
{
	var_68_float = 0; var_69_float = 0;
	GetGameTime(var_69_float);
	var_71_float = var_67_int * (int)24;
	var_72_bool = var_69_float >= var_71_float;
	if(var_72_bool != 0) {
		func_107(var_5_object, var_6_object, var_67_int, var_68_float, var_69_float);
	} else {
		var_95_float = var_67_int * (int)24;
		SetTimeEvent((int)0, var_95_float);
		Hold();
	}
	return 2;
	
}


func_219(var_12_string, var_13_bool)
{
	var_14_object = Obj(); var_15_object = Obj();
	FindActor(var_15_object, var_12_string);
	var_16_bool = var_15_object == 0; //@nz
	if(var_16_bool != 0) {
		var_18_int = "Door " + var_12_string;
		var_20_int = var_18_int + " not found";
		Trace(var_20_int);
	} else {
		@@var_15_object:SetProperty("locked", var_13_bool);
	}
	return 2;
	
}
EMIT "Stack[-1] = 0";



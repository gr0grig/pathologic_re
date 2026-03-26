// @IMPORTS: Trace/1,GetSceneByName/2,AddActorByType/6,GetVariable/2,SetVariable/2,Trigger/2,RemoveActor/1,GetGameTime/1,SetTimeEvent/2,Hold/0,FindActor/2,self/1,CreateObjectVector/1,AddActor/6,Teleport/4
// @STRINGS: W:place_klara|W:cot_anna|W:pt_b6q02_klara|W:NPC_Klara|W:b6q02_klara.xml|W:init_maze|W:house_vlad@door2|W:house_vlad|W:pt_prorok|W:pers_krysa|W:b6q02_prorok.xml|W:pt_fog|A:GetLocator|W:fog_stat_indoor.xml|A:add|W:maze_start|W:pt_maze_start|W:fail|W:completed|W:b6q02|W:cleanup|W:player|W:Locator |W: doesn't exist|W:Door |W: not found|W:locked|A:SetProperty|W:Teleport location '|W:' not found in scene '|A:size|A:get
// @GLOBALS: 0:object:
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars=object,object,object params=0
// @EVENT_26: op=0x9 vars=string
// @EVENT_9: op=0xa7 vars=int,float
// @PE: 0xa7

task_0_event_26(var_0_object, var_1_object, var_2_object, var_3_string)
{
	var_4_object = Obj(); var_5_object = Obj(); var_6_int = 0; var_7_bool = 0; var_8_cvector = CVector(0,0,0); var_9_cvector = CVector(0,0,0); var_10_object = Obj(); var_11_object = Obj(); var_12_object = Obj(); var_13_int = 0; var_14_bool = 0; var_15_cvector = CVector(0,0,0); var_16_cvector = CVector(0,0,0); var_17_object = Obj();
	Trace(var_3_string);
	var_19_bool = var_3_string == "place_klara";
	if(var_19_bool != 0) {
		GetSceneByName(var_11_object, "cot_anna");
		var_21_object = Obj(); var_22_object = Obj(); var_23_string = ""; var_24_string = ""; var_25_string = "";
		var_11_object = var_22_object;
		func_191(var_21_object, var_22_object, "pt_b6q02_klara", "NPC_Klara", "b6q02_klara.xml");
		var_0_object = var_21_object;
		var_11_object = 0;
	} else {
		var_40_bool = var_3_string == "init_maze";
		if(var_40_bool != 0) {
			var_41_string = ""; var_42_bool = 0;
			func_209("house_vlad@door2", (bool)0);
			GetSceneByName(var_12_object, "house_vlad");
			var_52_object = Obj(); var_53_object = Obj(); var_54_string = ""; var_55_string = ""; var_56_string = "";
			var_12_object = var_53_object;
			func_191(var_52_object, var_53_object, "pt_prorok", "pers_krysa", "b6q02_prorok.xml");
			var_1_object = var_52_object;
			var_13_int = 1;

		Label_48:
			var_58_int = "pt_fog" + var_13_int;
			@@var_12_object:GetLocator(var_58_int, var_14_bool, var_15_cvector, var_16_cvector);
			var_59_bool = var_14_bool == 0; //@nz
			if(var_59_bool != 0) {
			} else {
				AddActorByType(var_17_object, "fog", var_12_object, var_15_cvector, var_16_cvector, "fog_stat_indoor.xml");
				@@@var_2_object:add(var_17_object);
				var_17_object = 0;
				var_13_int = var_13_int + (int)1;
				goto Label_48;
		}
			var_64_bool = var_3_string == "maze_start";
			if(var_64_bool != 0) {
				var_65_object = Obj(); var_66_string = ""; var_67_string = "";
				func_172(Obj());
				var_68_object = var_65_object;
				func_226(var_65_object, "house_vlad", "pt_maze_start");
				goto Label_93;
			}
			var_90_bool = var_3_string == "fail";
			if(var_90_bool != 0) {
				func_105();
				goto Label_93;
			}
			var_115_bool = var_3_string == "completed";
			if(var_115_bool == 0) goto Label_93;
			func_113();
		}
		var_12_object = 0;
		goto Label_93;
	}
Label_93:
	return 14;
	
}


task_0_event_9(var_0_object, var_1_object, var_2_object, var_3_int, var_4_float)
{
	func_94();
	return 0;
}


main(var_0_object, var_1_object, var_2_object)
{
	var_3_object = Obj();
	func_185(var_3_object);
	var_2_object = var_3_object;
	var_6_int = 0;
	func_148((int)6);
	return 0;
}


func_121(var_0_object, var_1_object, var_2_object)
{
	EventDisable(26);
	var_12_object = var_0_object;
	if(var_12_object != 0) {
		Trigger(var_0_object, "cleanup");
	}
	var_14_object = var_1_object;
	if(var_14_object != 0) {
		Trigger(var_1_object, "cleanup");
	}
	var_16_object = Obj(); var_17_string = "";
	var_16_object = var_2_object;
	func_250(var_16_object, "cleanup");
	var_28_string = ""; var_29_bool = 0;
	func_209("house_vlad@door2", (bool)1);
	var_38_object = Obj();
	func_179(var_38_object);
	RemoveActor(var_38_object);
	return 0;
}


func_226(var_65_object, var_66_string, var_67_string)
{
	var_72_object = Obj(); var_73_bool = 0; var_74_cvector = CVector(0,0,0); var_75_cvector = CVector(0,0,0); var_76_object = Obj(); var_77_bool = 0; var_78_cvector = CVector(0,0,0); var_79_cvector = CVector(0,0,0);
	var_80_bool = var_65_object == 0; //@nz
	if(var_80_bool != 0) {
		return 8;
	}
	GetSceneByName(var_76_object, var_66_string);
	@@var_76_object:GetLocator(var_67_string, var_77_bool, var_78_cvector, var_79_cvector);
	var_81_bool = var_77_bool == 0; //@nz
	if(var_81_bool != 0) {
		var_83_int = "Teleport location '" + var_67_string;
		var_85_int = var_83_int + "' not found in scene '";
		var_86_int = var_85_int + var_66_string;
		var_88_int = var_86_int + "'";
		Trace(var_88_int);
	} else {
		Teleport(var_65_object, var_76_object, var_78_cvector, var_79_cvector);
	}
	return 8;
	
}
EMIT "Stack[-4] = 0";


func_105()
{
	SetVariable("b6q02", (int)-1);
	func_121(var_4_float, var_5_int, var_6_int);
	return 0;
}


func_172(var_68_object)
{
	var_69_object = Obj(); var_70_object = Obj();
	FindActor(var_70_object, "player");
	var_70_object = var_68_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_209(var_28_string, var_29_bool)
{
	var_30_object = Obj(); var_31_object = Obj();
	FindActor(var_31_object, var_28_string);
	var_32_bool = var_31_object == 0; //@nz
	if(var_32_bool != 0) {
		var_34_int = "Door " + var_28_string;
		var_36_int = var_34_int + " not found";
		Trace(var_36_int);
	} else {
		@@var_31_object:SetProperty("locked", var_29_bool);
	}
	return 2;
	
}
EMIT "Stack[-1] = 0";


func_113()
{
	SetVariable("b6q02", (int)1000);
	func_121(var_15_cvector, var_16_cvector, var_17_object);
	return 0;
}


func_179(var_38_object)
{
	var_39_object = Obj(); var_40_object = Obj();
	self(var_40_object);
	var_40_object = var_38_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_148(var_6_int)
{
	var_7_float = 0; var_8_float = 0;
	GetGameTime(var_8_float);
	var_10_float = var_6_int * (int)24;
	var_11_bool = var_8_float >= var_10_float;
	if(var_11_bool != 0) {
		func_121(var_6_int, var_7_float, var_8_float);
	} else {
		var_43_float = var_6_int * (int)24;
		SetTimeEvent((int)0, var_43_float);
		Hold();
	}
	return 2;
	
}


func_185(var_3_object)
{
	var_4_object = Obj(); var_5_object = Obj();
	CreateObjectVector(var_5_object);
	var_5_object = var_3_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_250(var_16_object, var_17_string)
{
	var_18_int = 0; var_19_int = 0; var_20_object = Obj(); var_21_int = 0; var_22_int = 0; var_23_object = Obj();
	var_24_object = var_16_object;
	if(var_24_object != 0) {
		@@var_16_object:size(var_21_int);
		var_22_int = 0;

	Label_256:
		var_25_bool = var_22_int < var_21_int;
		if(var_25_bool != 0) {
			@@var_16_object:get(var_23_object, var_22_int);
			var_26_object = var_23_object;
			if(var_26_object != 0) {
				Trigger(var_23_object, var_17_string);
			}
			var_23_object = 0;
			var_22_int = var_22_int + (int)1;
			goto Label_256;
		}
	}
	return 6;
}


func_94()
{
	var_5_int = 0; var_6_int = 0;
	GetVariable("b6q02", var_6_int);
	var_9_bool = var_6_int != (int)1000;
	if(var_9_bool != 0) {
		func_105();
	}
	return 2;
}


func_191(var_21_object, var_22_object, var_23_string, var_24_string, var_25_string)
{
	var_26_bool = 0; var_27_cvector = CVector(0,0,0); var_28_cvector = CVector(0,0,0); var_29_object = Obj(); var_30_bool = 0; var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_object = Obj();
	@@var_22_object:GetLocator(var_23_string, var_30_bool, var_31_cvector, var_32_cvector);
	var_34_bool = var_30_bool == 0; //@nz
	if(var_34_bool != 0) {
		var_36_int = "Locator " + var_23_string;
		var_38_int = var_36_int + " doesn't exist";
		Trace(var_38_int);
	} else {
		AddActor(Obj(), var_24_string, var_22_object, var_31_cvector, var_32_cvector, var_25_string);
	}
	var_33_object = var_21_object;
	return 8;
	
}
EMIT "Stack[-1] = 0";



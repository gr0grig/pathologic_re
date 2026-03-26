// @IMPORTS: SetVariable/2,Trace/1,GetMainOutdoorScene/1,AddActor/6,RemoveActor/1,GetVariable/2,GetGameTime/1,SetTimeEvent/2,Hold/0,self/1,GetDiaryRoot/1,SetDiarySection/1,CreateDiaryEntry/4
// @STRINGS: W:d6q02|W:completed|W:fail|W:place_trigger|W:d6q02_trigger_bombers|W:d6q02_trigger.xml|W:d6q02Trigger|W:pt_d6q02_bomber1|W:pers_bomber|W:d6q02_bomber.xml|W:pt_d6q02_bomber2|W:pt_d6q02_bomber3|W:pt_d6q02_bomber4|W:pt_d6q02_gorbun|W:d6q02_gorbun.xml|W:gorbun_death|W:d6q02GorbunDeath|A:GetLocator|W:Locator |W: doesn't exist|W:Can't retrieve diary root|A:Find|W:Can't find diary parent with id: |A:AddChild|W:player_diary|A:GetCategory|W:Adding diary entry
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars=object params=0
// @EVENT_26: op=0x9 vars=string
// @EVENT_9: op=0xa9 vars=int,float
// @PE: 0xa9

task_0_event_26(var_0_object, var_1_string)
{
	var_2_object = Obj(); var_3_object = Obj(); var_4_object = Obj(); var_5_object = Obj();
	Trace(var_1_string);
	var_7_bool = var_1_string == "completed";
	if(var_7_bool != 0) {
		func_117();
	} else {
		var_23_bool = var_1_string == "fail";
		if(var_23_bool != 0) {
			func_109();
			goto Label_97;
		}
		var_27_bool = var_1_string == "place_trigger";
		if(var_27_bool != 0) {
			GetMainOutdoorScene(var_4_object);
			AddActor(var_0_object, "d6q02_trigger_bombers", var_4_object, CVector(0.0, 0.0, 0.0), CVector(0.0, 0.0, 1.0), "d6q02_trigger.xml");
			var_4_object = 0;
			goto Label_97;
		}
		var_33_bool = var_1_string == "d6q02_trigger_bombers";
		if(var_33_bool != 0) {
			SetVariable("d6q02Trigger", (int)1);
			RemoveActor(var_0_object);
			GetMainOutdoorScene(var_5_object);
			var_36_object = Obj(); var_37_object = Obj(); var_38_string = ""; var_39_string = ""; var_40_string = "";
			var_5_object = var_37_object;
			func_180(var_36_object, var_37_object, "pt_d6q02_bomber1", "pers_bomber", "d6q02_bomber.xml");
			var_54_object = Obj(); var_55_object = Obj(); var_56_string = ""; var_57_string = ""; var_58_string = "";
			var_5_object = var_55_object;
			func_180(var_54_object, var_55_object, "pt_d6q02_bomber2", "pers_bomber", "d6q02_bomber.xml");
			var_59_object = Obj(); var_60_object = Obj(); var_61_string = ""; var_62_string = ""; var_63_string = "";
			var_5_object = var_60_object;
			func_180(var_59_object, var_60_object, "pt_d6q02_bomber3", "pers_bomber", "d6q02_bomber.xml");
			var_64_object = Obj(); var_65_object = Obj(); var_66_string = ""; var_67_string = ""; var_68_string = "";
			var_5_object = var_65_object;
			func_180(var_64_object, var_65_object, "pt_d6q02_bomber4", "pers_bomber", "d6q02_bomber.xml");
			var_69_object = Obj(); var_70_object = Obj(); var_71_string = ""; var_72_string = ""; var_73_string = "";
			var_5_object = var_70_object;
			func_180(var_69_object, var_70_object, "pt_d6q02_gorbun", "pers_bomber", "d6q02_gorbun.xml");
			var_5_object = 0;
			goto Label_97;
		}
		var_75_bool = var_1_string == "gorbun_death";
		if(var_75_bool == 0) goto Label_97;
		func_240();
		SetVariable("d6q02GorbunDeath", (int)1);
	}
Label_97:
	return 4;
	
}


task_0_event_9(var_0_object, var_1_int, var_2_float)
{
	func_98();
	return 0;
}


main(var_0_object)
{
	SetVariable("d6q02", (int)1);
	var_3_int = 0;
	func_150((int)6);
	return 0;
}


func_98()
{
	var_3_int = 0; var_4_int = 0;
	GetVariable("d6q02", var_4_int);
	var_7_bool = var_4_int != (int)1000;
	if(var_7_bool != 0) {
		func_109();
	}
	return 2;
}


func_198(var_91_object)
{
	var_92_object = Obj(); var_93_object = Obj();
	GetDiaryRoot(var_93_object);
	var_94_bool = var_93_object == 0; //@nz
	if(var_94_bool != 0) {
		Trace("Can't retrieve diary root");
		var_91_object = 0;
		return 2;
	}
	var_93_object = var_91_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_139(var_0_object)
{
	EventDisable(26);
	var_9_object = var_0_object;
	if(var_9_object != 0) {
		RemoveActor(var_0_object);
	}
	var_10_object = Obj();
	func_174(var_10_object);
	RemoveActor(var_10_object);
	return 0;
}


func_109()
{
	SetVariable("d6q02", (int)-1);
	func_139(var_4_int);
	return 0;
}


func_174(var_10_object)
{
	var_11_object = Obj(); var_12_object = Obj();
	self(var_12_object);
	var_12_object = var_10_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_240()
{
	var_76_object = Obj(); var_77_object = Obj();
	Trace("Adding diary entry");
	CreateDiaryEntry(var_77_object, (int)103, (int)2, (int)13726);
	var_82_bool = 0; var_83_object = Obj(); var_84_int = 0;
	var_77_object = var_83_object;
	func_211(var_82_bool, var_83_object, (int)102);
	return 2;
}
EMIT "Stack[-1] = 0";


func_211(var_82_bool, var_83_object, var_84_int)
{
	var_85_object = Obj(); var_86_object = Obj(); var_87_int = 0; var_88_object = Obj(); var_89_object = Obj(); var_90_int = 0;
	func_198(Obj());
	var_91_object = var_88_object;
	@@var_88_object:Find(var_84_int, var_89_object);
	var_96_bool = var_89_object == 0; //@nz
	if(var_96_bool != 0) {
		var_98_int = "Can't find diary parent with id: " + var_84_int;
		Trace(var_98_int);
		var_82_bool = 0;
		return 6;
	}
	@@var_89_object:AddChild(var_83_object);
	SetVariable("player_diary", (int)1);
	@@var_83_object:GetCategory(var_90_int);
	SetDiarySection(var_90_int);
	var_82_bool = 0;
	return 6;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


func_180(var_36_object, var_37_object, var_38_string, var_39_string, var_40_string)
{
	var_41_bool = 0; var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_object = Obj(); var_45_bool = 0; var_46_cvector = CVector(0,0,0); var_47_cvector = CVector(0,0,0); var_48_object = Obj();
	@@var_37_object:GetLocator(var_38_string, var_45_bool, var_46_cvector, var_47_cvector);
	var_49_bool = var_45_bool == 0; //@nz
	if(var_49_bool != 0) {
		var_51_int = "Locator " + var_38_string;
		var_53_int = var_51_int + " doesn't exist";
		Trace(var_53_int);
	} else {
		AddActor(Obj(), var_39_string, var_37_object, var_46_cvector, var_47_cvector, var_40_string);
	}
	var_48_object = var_36_object;
	return 8;
	
}
EMIT "Stack[-1] = 0";


func_117()
{
	var_8_int = 0; var_9_int = 0;
	GetVariable("d6q02", var_9_int);
	var_11_bool = 0;
	var_11_bool = 0;
	var_13_bool = var_9_int != (int)1000;
	if(var_13_bool != 0) {
		var_15_bool = var_9_int != (int)-1;
		if(var_15_bool != 0) {
			var_11_bool = 1;
		}
	}
	if(var_11_bool != 0) {
		SetVariable("d6q02", (int)1000);
		func_139(var_9_int);
	}
	return 2;
}


func_150(var_3_int)
{
	var_4_float = 0; var_5_float = 0;
	GetGameTime(var_5_float);
	var_7_float = var_3_int * (int)24;
	var_8_bool = var_5_float >= var_7_float;
	if(var_8_bool != 0) {
		func_139(var_5_float);
	} else {
		var_15_float = var_3_int * (int)24;
		SetTimeEvent((int)0, var_15_float);
		Hold();
	}
	return 2;
	
}



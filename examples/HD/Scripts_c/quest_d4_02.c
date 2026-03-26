// @IMPORTS: SetVariable/2,Trace/1,GetVariable/2,PlaySound/1,GetMainOutdoorScene/1,RemoveActor/1,GetGameTime/1,SetTimeEvent/2,Hold/0,self/1,AddBlankActor/4,FindActor/2,CreateDiaryEntry/4,GetDiaryRoot/1,SendWorldWndMessage/1,SetDiarySection/1
// @STRINGS: W:d4q02|W:s_house7_03_door1|W:s_house7_03_door2|W:house7_03@door1|W:house7_03@door2|W:scene_load|W:d4q02_survived|W:door_close|W:quest_d4_02_survival|W:scene_unload|A:Remove|W:birdmask|W:pt_d4q02_birdmask|W:pers_birdmask|W:d4q02_birdmask.xml|W:birdmask_talk|W:door_open|W:completed|W:.bin|A:GetLocator|W:Locator |W: doesn't exist|A:AddStationaryActor|W:Door |W: not found|W:locked|A:SetProperty|W:lp|W:Can't retrieve diary root|A:Find|W:Can't find diary parent with id: |A:AddChild|A:GetCategory
// @GLOBALS: 0:object:
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars=object params=0
// @EVENT_26: op=0x1f vars=string
// @EVENT_9: op=0xcc vars=int,float
// @PE: 0xcc

task_0_event_26(var_0_object, var_1_string)
{
	var_2_bool = 0; var_3_object = Obj(); var_4_bool = 0; var_5_object = Obj();
	Trace(var_1_string);
	var_7_bool = var_1_string == "scene_load";
	if(var_7_bool != 0) {
		GetVariable("d4q02_survived", var_4_bool);
		var_9_bool = var_4_bool == 0; //@nz
		if(var_9_bool != 0) {
			PlaySound("door_close");
			var_11_object = Obj(); var_12_string = "";
			func_215(var_11_object, "quest_d4_02_survival");
		}
	} else {
		var_20_bool = var_1_string == "scene_unload";
		if(var_20_bool != 0) {
			var_21_object = var_0_object;
			if(var_21_object != 0) {
				@@@var_0_object:Remove();
			}
			var_22_string = ""; var_23_bool = 0;
			func_244("s_house7_03_door2", (bool)0);
			goto Label_112;
		}
		var_33_bool = var_1_string == "birdmask";
		if(var_33_bool != 0) {
			GetMainOutdoorScene(var_5_object);
			var_34_object = Obj(); var_35_object = Obj(); var_36_string = ""; var_37_string = ""; var_38_string = "";
			var_5_object = var_35_object;
			func_226(var_34_object, var_35_object, "pt_d4q02_birdmask", "pers_birdmask", "d4q02_birdmask.xml");
			var_0_object = var_34_object;
			var_5_object = 0;
			goto Label_112;
		}
		var_53_bool = var_1_string == "birdmask_talk";
		if(var_53_bool != 0) {
			var_54_string = ""; var_55_bool = 0;
			func_244("house7_03@door1", (bool)0);
			goto Label_112;
		}
		var_57_bool = var_1_string == "survived";
		if(var_57_bool != 0) {
			var_58_string = ""; var_59_bool = 0;
			func_244("s_house7_03_door1", (bool)0);
			SetVariable("d4q02_survived", (int)1);
			PlaySound("door_open");
			func_281();
			goto Label_112;
		}
		var_87_bool = var_1_string == "completed";
		if(var_87_bool == 0) goto Label_112;
		func_132();
	}
Label_112:
	return 4;
	
}


task_0_event_9(var_0_object, var_1_int, var_2_float)
{
	func_113();
	return 0;
}


main(var_0_object)
{
	SetVariable("d4q02", (int)1);
	var_3_string = ""; var_4_bool = 0;
	func_244("s_house7_03_door1", (bool)1);
	var_13_string = ""; var_14_bool = 0;
	func_244("s_house7_03_door2", (bool)1);
	var_15_string = ""; var_16_bool = 0; var_17_bool = 0;
	func_261("house7_03@door1", (bool)1, (bool)0);
	var_27_string = ""; var_28_bool = 0; var_29_bool = 0;
	func_261("house7_03@door2", (bool)1, (bool)0);
	var_30_int = 0;
	func_185((int)4);
	return 0;
}


func_226(var_34_object, var_35_object, var_36_string, var_37_string, var_38_string)
{
	var_39_bool = 0; var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_object = Obj(); var_43_bool = 0; var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_object = Obj();
	@@var_35_object:GetLocator(var_36_string, var_43_bool, var_44_cvector, var_45_cvector);
	var_47_bool = var_43_bool == 0; //@nz
	if(var_47_bool != 0) {
		var_49_int = "Locator " + var_36_string;
		var_51_int = var_49_int + " doesn't exist";
		Trace(var_51_int);
	} else {
		@@var_35_object:AddStationaryActor(Obj(), var_44_cvector, var_45_cvector, var_37_string, var_38_string);
	}
	var_46_object = var_34_object;
	return 8;
	
}
EMIT "Stack[-1] = 0";


func_132()
{
	var_88_int = 0; var_89_int = 0;
	GetVariable("d4q02", var_89_int);
	var_91_bool = 0;
	var_91_bool = 0;
	var_93_bool = var_89_int != (int)1000;
	if(var_93_bool != 0) {
		var_95_bool = var_89_int != (int)-1;
		if(var_95_bool != 0) {
			var_91_bool = 1;
		}
	}
	if(var_91_bool != 0) {
		SetVariable("d4q02", (int)1000);
		func_154(var_89_int);
	}
	return 2;
}


func_261(var_15_string, var_16_bool, var_17_bool)
{
	var_18_object = Obj(); var_19_object = Obj();
	FindActor(var_19_object, var_15_string);
	var_20_bool = var_19_object == 0; //@nz
	if(var_20_bool != 0) {
		var_22_int = "Door " + var_15_string;
		var_24_int = var_22_int + " not found";
		Trace(var_24_int);
	} else {
		@@var_19_object:SetProperty("locked", var_16_bool);
		@@var_19_object:SetProperty("lp", var_17_bool);
	}
	return 2;
	
}
EMIT "Stack[-1] = 0";


func_294(var_77_object)
{
	var_78_object = Obj(); var_79_object = Obj();
	GetDiaryRoot(var_79_object);
	var_80_bool = var_79_object == 0; //@nz
	if(var_80_bool != 0) {
		Trace("Can't retrieve diary root");
		var_77_object = 0;
		return 2;
	}
	var_79_object = var_77_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_281()
{
	var_63_object = Obj(); var_64_object = Obj();
	CreateDiaryEntry(var_64_object, (int)629, (int)2, (int)532893);
	var_68_bool = 0; var_69_object = Obj(); var_70_int = 0;
	var_64_object = var_69_object;
	func_307(var_68_bool, var_69_object, (int)21);
	return 2;
}
EMIT "Stack[-1] = 0";


func_209(var_45_object)
{
	var_46_object = Obj(); var_47_object = Obj();
	self(var_47_object);
	var_47_object = var_45_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_113()
{
	var_3_int = 0; var_4_int = 0;
	GetVariable("d4q02", var_4_int);
	var_7_bool = var_4_int != (int)1000;
	if(var_7_bool != 0) {
		func_124();
	}
	return 2;
}


func_307(var_68_bool, var_69_object, var_70_int)
{
	var_71_object = Obj(); var_72_object = Obj(); var_73_int = 0; var_74_object = Obj(); var_75_object = Obj(); var_76_int = 0;
	func_294(Obj());
	var_77_object = var_74_object;
	@@var_74_object:Find(var_70_int, var_75_object);
	var_82_bool = var_75_object == 0; //@nz
	if(var_82_bool != 0) {
		var_84_int = "Can't find diary parent with id: " + var_70_int;
		Trace(var_84_int);
		var_68_bool = 0;
		return 6;
	}
	@@var_75_object:AddChild(var_69_object);
	SendWorldWndMessage((int)7);
	@@var_69_object:GetCategory(var_76_int);
	SetDiarySection(var_76_int);
	var_68_bool = 0;
	return 6;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


func_244(var_3_string, var_4_bool)
{
	var_5_object = Obj(); var_6_object = Obj();
	FindActor(var_6_object, var_3_string);
	var_7_bool = var_6_object == 0; //@nz
	if(var_7_bool != 0) {
		var_9_int = "Door " + var_3_string;
		var_11_int = var_9_int + " not found";
		Trace(var_11_int);
	} else {
		@@var_6_object:SetProperty("locked", var_4_bool);
	}
	return 2;
	
}
EMIT "Stack[-1] = 0";


func_215(var_11_object, var_12_string)
{
	var_13_object = Obj(); var_14_object = Obj(); var_15_object = Obj(); var_16_object = Obj();
	GetMainOutdoorScene(var_15_object);
	var_18_int = var_12_string + ".bin";
	AddBlankActor(var_16_object, var_15_object, var_12_string, var_18_int);
	var_16_object = var_11_object;
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_185(var_30_int)
{
	var_31_float = 0; var_32_float = 0;
	GetGameTime(var_32_float);
	var_34_float = var_30_int * (int)24;
	var_35_bool = var_32_float >= var_34_float;
	if(var_35_bool != 0) {
		func_154(var_32_float);
	} else {
		var_50_float = var_30_int * (int)24;
		SetTimeEvent((int)0, var_50_float);
		Hold();
	}
	return 2;
	
}


func_154(var_0_object)
{
	EventDisable(26);
	var_36_object = var_0_object;
	if(var_36_object != 0) {
		@@@var_0_object:Remove();
	}
	var_37_string = ""; var_38_bool = 0;
	func_244("s_house7_03_door1", (bool)0);
	var_39_string = ""; var_40_bool = 0;
	func_244("s_house7_03_door2", (bool)0);
	var_41_string = ""; var_42_bool = 0;
	func_244("house7_03@door1", (bool)0);
	var_43_string = ""; var_44_bool = 0;
	func_244("house7_03@door2", (bool)0);
	var_45_object = Obj();
	func_209(var_45_object);
	RemoveActor(var_45_object);
	return 0;
}


func_124()
{
	SetVariable("d4q02", (int)-1);
	func_154(var_4_int);
	return 0;
}



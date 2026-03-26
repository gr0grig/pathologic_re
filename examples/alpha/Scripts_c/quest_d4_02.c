// @IMPORTS: SetVariable/2,Trace/1,GetVariable/2,PlaySound/1,GetMainOutdoorScene/1,RemoveActor/1,GetGameTime/1,SetTimeEvent/2,Hold/0,self/1,AddBlankActor/4,FindActor/2
// @STRINGS: W:d4q02|W:s_house7_03_door1|W:s_house7_03_door2|W:house7_03@door1|W:house7_03@door2|W:scene_load|W:d4q02_survived|W:door_close|W:quest_d4_02_survival|W:scene_unload|A:Remove|W:birdmask|W:pt_d4q02_birdmask|W:pers_birdmask|W:d4q02_birdmask.xml|W:birdmask_talk|W:door_open|W:completed|W:.bin|A:GetLocator|W:Locator |W: doesn't exist|A:AddStationaryActor|W:Door |W: not found|W:locked|A:SetProperty
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars=object params=0
// @EVENT_26: op=0x1d vars=string
// @EVENT_9: op=0xc7 vars=int,float
// @PE: 0xc7

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
			func_210(var_11_object, "quest_d4_02_survival");
		}
	} else {
		var_20_bool = var_1_string == "scene_unload";
		if(var_20_bool != 0) {
			var_21_object = var_0_object;
			if(var_21_object != 0) {
				@@@var_0_object:Remove();
			}
			var_22_string = ""; var_23_bool = 0;
			func_239("s_house7_03_door2", (bool)0);
			goto Label_107;
		}
		var_33_bool = var_1_string == "birdmask";
		if(var_33_bool != 0) {
			GetMainOutdoorScene(var_5_object);
			var_34_object = Obj(); var_35_object = Obj(); var_36_string = ""; var_37_string = ""; var_38_string = "";
			var_5_object = var_35_object;
			func_221(var_34_object, var_35_object, "pt_d4q02_birdmask", "pers_birdmask", "d4q02_birdmask.xml");
			var_0_object = var_34_object;
			var_5_object = 0;
			goto Label_107;
		}
		var_53_bool = var_1_string == "birdmask_talk";
		if(var_53_bool != 0) {
			var_54_string = ""; var_55_bool = 0;
			func_239("house7_03@door1", (bool)0);
			goto Label_107;
		}
		var_57_bool = var_1_string == "survived";
		if(var_57_bool != 0) {
			var_58_string = ""; var_59_bool = 0;
			func_239("s_house7_03_door1", (bool)0);
			SetVariable("d4q02_survived", (int)1);
			PlaySound("door_open");
			goto Label_107;
		}
		var_64_bool = var_1_string == "completed";
		if(var_64_bool == 0) goto Label_107;
		func_127();
	}
Label_107:
	return 4;
	
}


task_0_event_9(var_0_object, var_1_int, var_2_float)
{
	func_108();
	return 0;
}


main(var_0_object)
{
	SetVariable("d4q02", (int)1);
	var_3_string = ""; var_4_bool = 0;
	func_239("s_house7_03_door1", (bool)1);
	var_13_string = ""; var_14_bool = 0;
	func_239("s_house7_03_door2", (bool)1);
	var_15_string = ""; var_16_bool = 0;
	func_239("house7_03@door1", (bool)1);
	var_17_string = ""; var_18_bool = 0;
	func_239("house7_03@door2", (bool)1);
	var_19_int = 0;
	func_180((int)4);
	return 0;
}


func_204(var_34_object)
{
	var_35_object = Obj(); var_36_object = Obj();
	self(var_36_object);
	var_36_object = var_34_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_108()
{
	var_3_int = 0; var_4_int = 0;
	GetVariable("d4q02", var_4_int);
	var_7_bool = var_4_int != (int)1000;
	if(var_7_bool != 0) {
		func_119();
	}
	return 2;
}


func_239(var_3_string, var_4_bool)
{
	var_5_object = Obj(); var_6_object = Obj();
	FindActor(var_6_object, var_3_string);
	var_7_bool = var_6_object == 0; //@nz
	if(var_7_bool != 0) {
		var_9_int = "Door " + var_3_string;
		var_11_int = var_9_int + " not found";
		Trace(var_11_int);
	}
	@@var_6_object:SetProperty("locked", var_4_bool);
	return 2;
}
EMIT "Stack[-1] = 0";


func_210(var_11_object, var_12_string)
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


func_180(var_19_int)
{
	var_20_float = 0; var_21_float = 0;
	GetGameTime(var_21_float);
	var_23_float = var_19_int * (int)24;
	var_24_bool = var_21_float >= var_23_float;
	if(var_24_bool != 0) {
		func_149(var_21_float);
	} else {
		var_39_float = var_19_int * (int)24;
		SetTimeEvent((int)0, var_39_float);
		Hold();
	}
	return 2;
	
}


func_149(var_0_object)
{
	EventDisable(26);
	var_25_object = var_0_object;
	if(var_25_object != 0) {
		@@@var_0_object:Remove();
	}
	var_26_string = ""; var_27_bool = 0;
	func_239("s_house7_03_door1", (bool)0);
	var_28_string = ""; var_29_bool = 0;
	func_239("s_house7_03_door2", (bool)0);
	var_30_string = ""; var_31_bool = 0;
	func_239("house7_03@door1", (bool)0);
	var_32_string = ""; var_33_bool = 0;
	func_239("house7_03@door2", (bool)0);
	var_34_object = Obj();
	func_204(var_34_object);
	RemoveActor(var_34_object);
	return 0;
}


func_119()
{
	SetVariable("d4q02", (int)-1);
	func_149(var_4_int);
	return 0;
}


func_221(var_34_object, var_35_object, var_36_string, var_37_string, var_38_string)
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


func_127()
{
	var_65_int = 0; var_66_int = 0;
	GetVariable("d4q02", var_66_int);
	var_68_bool = 0;
	var_68_bool = 0;
	var_70_bool = var_66_int != (int)1000;
	if(var_70_bool != 0) {
		var_72_bool = var_66_int != (int)-1;
		if(var_72_bool != 0) {
			var_68_bool = 1;
		}
	}
	if(var_68_bool != 0) {
		SetVariable("d4q02", (int)1000);
		func_149(var_66_int);
	}
	return 2;
}



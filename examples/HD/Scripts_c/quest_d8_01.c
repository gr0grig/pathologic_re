// @IMPORTS: GetVariable/2,Hold/0,Trace/1,GetSceneByName/2,AddActor/4,GetGameTime/1,SetTimeEvent/2,ReleaseTimeEvent/1,SetVariable/2,Trigger/2,RemoveActor/1,CameraSwitchToNormal/0,self/1,GetMainOutdoorScene/1,AddBlankActor/4,AddActorByType/6,FindActor/2,Trigger/3,CreateDiaryEntry/4,GetDiaryRoot/1,SendWorldWndMessage/1,SetDiarySection/1
// @STRINGS: W:d8q01MladVladIsVictim|W:volonteers_danko|W:kill|W:mladvlad|W:bigvlad|W:quest_d8_03|W:block_well|W:house_vlad|W:d8q01_well_block|W:place_toy|W:r4_house_2_02|W:pt_d8q01_toy|W:scripted_container|W:d8q01_toy.xml|W:boiny_load|W:quest_d8_01_cutscene|W:unlock_boiny|W:cleanup|W:d8q01|W:fail|W:completed|W:Boiny unlocked|W:boiny@door1|W:.bin|A:GetLocator|W:Locator |W: doesn't exist|W:Door |W: not found|A:SetProperty|W:Can't retrieve diary root|A:Find|W:Can't find diary parent with id: |A:AddChild|A:GetCategory
// @GLOBALS: 0:object:
// @RUN_OP: 0x15
// @RUN_TASK: 0
// @TASK_0: vars=object,object,bool params=0
// @EVENT_26: op=0x1d vars=string
// @EVENT_9: op=0x7b vars=int,float
// @EVENT_24: op=0xbc vars=int
// @PE: 0x7b,0xbc

task_0_event_26(var_0_object, var_1_object, var_2_bool, var_3_string)
{
	var_4_object = Obj(); var_5_object = Obj(); var_6_object = Obj(); var_7_float = 0; var_8_int = 0; var_9_object = Obj(); var_10_object = Obj(); var_11_object = Obj(); var_12_float = 0; var_13_int = 0;
	Trace(var_3_string);
	var_15_bool = var_3_string == "block_well";
	if(var_15_bool != 0) {
		GetSceneByName(var_9_object, "house_vlad");
		AddActor(var_10_object, "d8q01_well_block", var_9_object, CVector(0.0, 0.0, 0.0));
		var_10_object = 0;
		var_9_object = 0;
	} else {
		var_20_bool = var_3_string == "place_toy";
		if(var_20_bool != 0) {
			GetSceneByName(var_11_object, "r4_house_2_02");
			var_22_object = Obj(); var_23_object = Obj(); var_24_string = ""; var_25_string = ""; var_26_string = "";
			var_11_object = var_23_object;
			func_209(var_22_object, var_23_object, "pt_d8q01_toy", "scripted_container", "d8q01_toy.xml");
			var_0_object = var_22_object;
			var_11_object = 0;
			goto Label_122;
		}
		var_41_bool = var_3_string == "boiny_load";
		if(var_41_bool != 0) {
			var_42_bool = var_2_bool == 0; //@nz
			if(var_42_bool != 0) {
				var_2_bool = true;
				var_43_object = Obj(); var_44_string = "";
				func_198(var_43_object, "quest_d8_01_cutscene");
			}
			goto Label_122;
		}
		var_52_bool = var_3_string == "unlock_boiny";
		if(var_52_bool != 0) {
			func_0();
			GetGameTime(var_12_float);
			var_70_bool = var_12_float >= (float)191.0;
			if(var_70_bool != 0) {
				func_131();
			} else {
				SetTimeEvent((int)0, (float)191.0);
		}
			var_108_bool = var_3_string == "cleanup";
			if(var_108_bool != 0) {
				GetVariable("d8q01", var_13_int);
				var_111_bool = var_13_int != (int)1000;
				if(var_111_bool != 0) {
					func_143();
				} else {
					func_159(var_12_float, var_13_int);
			}
				var_125_bool = var_3_string == "fail";
				if(var_125_bool != 0) {
					func_143();
					goto Label_122;
				}
				var_127_bool = var_3_string == "completed";
				if(var_127_bool == 0) goto Label_122;
				func_151();
			}
			goto Label_122;
		}
		goto Label_122;
	}
Label_122:
	return 10;
	
}


task_0_event_9(var_0_object, var_1_object, var_2_bool, var_3_int, var_4_float)
{
	ReleaseTimeEvent((int)0);
	func_131();
	return 0;
}


task_0_event_24(var_0_object, var_1_object, var_2_bool, var_3_int)
{
	CameraSwitchToNormal();
	return 0;
}


main(var_0_object, var_1_object, var_2_bool)
{
	var_3_object = Obj(); var_4_string = "";
	func_198(var_3_object, "quest_d8_03");
	
Label_25:
	Hold();
	goto Label_25;
}
EMIT "Return(); Pop(0)";


func_0()
{
	var_53_int = 0; var_54_int = 0;
	GetVariable("d8q01MladVladIsVictim", var_54_int);
	var_57_bool = var_54_int != (int)0;
	if(var_57_bool != 0) {
		var_58_bool = 0; var_59_string = ""; var_60_string = ""; var_61_string = "";
		func_244(var_58_bool, "volonteers_danko", "kill", "mladvlad");
	} else {
		var_65_bool = 0; var_66_string = ""; var_67_string = ""; var_68_string = "";
		func_244(var_65_bool, "volonteers_danko", "kill", "bigvlad");
	}
	return 2;
	
}


func_256()
{
	var_17_object = Obj(); var_18_object = Obj();
	CreateDiaryEntry(var_18_object, (int)716, (int)1, (int)536363);
	var_22_bool = 0; var_23_object = Obj(); var_24_int = 0;
	var_18_object = var_23_object;
	func_282(var_22_bool, var_23_object, (int)175);
	return 2;
}
EMIT "Stack[-1] = 0";


func_192(var_121_object)
{
	var_122_object = Obj(); var_123_object = Obj();
	self(var_123_object);
	var_123_object = var_121_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_131()
{
	Trace("Boiny unlocked");
	var_7_string = ""; var_8_bool = 0;
	func_227("boiny@door1", (bool)0);
	func_256();
	return 0;
}


func_227(var_7_string, var_8_bool)
{
	var_9_object = Obj(); var_10_object = Obj();
	FindActor(var_10_object, var_7_string);
	var_11_bool = var_10_object == 0; //@nz
	if(var_11_bool != 0) {
		var_13_int = "Door " + var_7_string;
		var_15_int = var_13_int + " not found";
		Trace(var_15_int);
	} else {
		@@var_10_object:SetProperty("locked", var_8_bool);
	}
	return 2;
	
}
EMIT "Stack[-1] = 0";


func_198(var_3_object, var_4_string)
{
	var_5_object = Obj(); var_6_object = Obj(); var_7_object = Obj(); var_8_object = Obj();
	GetMainOutdoorScene(var_7_object);
	var_10_int = var_4_string + ".bin";
	AddBlankActor(var_8_object, var_7_object, var_4_string, var_10_int);
	var_8_object = var_3_object;
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_269(var_31_object)
{
	var_32_object = Obj(); var_33_object = Obj();
	GetDiaryRoot(var_33_object);
	var_34_bool = var_33_object == 0; //@nz
	if(var_34_bool != 0) {
		Trace("Can't retrieve diary root");
		var_31_object = 0;
		return 2;
	}
	var_33_object = var_31_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_143()
{
	SetVariable("d8q01", (int)-1);
	func_159(var_12_float, var_13_int);
	return 0;
}


func_209(var_22_object, var_23_object, var_24_string, var_25_string, var_26_string)
{
	var_27_bool = 0; var_28_cvector = CVector(0,0,0); var_29_cvector = CVector(0,0,0); var_30_object = Obj(); var_31_bool = 0; var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_object = Obj();
	@@var_23_object:GetLocator(var_24_string, var_31_bool, var_32_cvector, var_33_cvector);
	var_35_bool = var_31_bool == 0; //@nz
	if(var_35_bool != 0) {
		var_37_int = "Locator " + var_24_string;
		var_39_int = var_37_int + " doesn't exist";
		Trace(var_39_int);
	} else {
		AddActorByType(Obj(), var_25_string, var_23_object, var_32_cvector, var_33_cvector, var_26_string);
	}
	var_34_object = var_22_object;
	return 8;
	
}
EMIT "Stack[-1] = 0";


func_244(var_58_bool, var_59_string, var_60_string, var_61_string)
{
	var_62_object = Obj(); var_63_object = Obj();
	FindActor(var_63_object, var_59_string);
	var_64_bool = var_63_object == 0; //@ne
	if(var_64_bool != 0) {
		var_58_bool = 0;
		return 2;
	}
	Trigger(var_63_object, var_60_string, var_61_string);
	var_58_bool = 1;
	return 2;
}
EMIT "Stack[-1] = 0";


func_151()
{
	SetVariable("d8q01", (int)1000);
	func_159(var_12_float, var_13_int);
	return 0;
}


func_282(var_22_bool, var_23_object, var_24_int)
{
	var_25_object = Obj(); var_26_object = Obj(); var_27_int = 0; var_28_object = Obj(); var_29_object = Obj(); var_30_int = 0;
	func_269(Obj());
	var_31_object = var_28_object;
	@@var_28_object:Find(var_24_int, var_29_object);
	var_36_bool = var_29_object == 0; //@nz
	if(var_36_bool != 0) {
		var_38_int = "Can't find diary parent with id: " + var_24_int;
		Trace(var_38_int);
		var_22_bool = 0;
		return 6;
	}
	@@var_29_object:AddChild(var_23_object);
	SendWorldWndMessage((int)7);
	@@var_23_object:GetCategory(var_30_int);
	SetDiarySection(var_30_int);
	var_22_bool = 0;
	return 6;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


func_159(var_0_object, var_1_object)
{
	EventDisable(26);
	EventDisable(9);
	ReleaseTimeEvent((int)0);
	var_115_object = var_0_object;
	if(var_115_object != 0) {
		Trigger(var_0_object, "cleanup");
	}
	var_117_object = var_1_object;
	if(var_117_object != 0) {
		Trigger(var_1_object, "cleanup");
	}
	var_119_string = ""; var_120_bool = 0;
	func_227("boiny@door1", (bool)1);
	func_0();
	var_121_object = Obj();
	func_192(var_121_object);
	RemoveActor(var_121_object);
	return 0;
}



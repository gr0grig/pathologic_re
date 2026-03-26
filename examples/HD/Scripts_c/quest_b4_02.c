// @IMPORTS: SetVariable/2,Trace/1,GetMainOutdoorScene/1,GetSceneByName/2,Trigger/2,GetVariable/2,RemoveActor/1,GetGameTime/1,SetTimeEvent/2,Hold/0,self/1,CreateObjectVector/1,AddActorByType/6,CreateDiaryEntry/4,GetDiaryRoot/1,SendWorldWndMessage/1,SetDiarySection/1
// @STRINGS: W:b4q02|W:place_boy|W:pt_b4q02_boy|W:pers_boy|W:b4q02_boy.xml|W:house5_unoin03r|W:pt_b4q02_samopal|W:scripted_container|W:b4q02_samopal.xml|W:pt_b4q02_samopal_ammo|W:b4q02_samopal_ammo.xml|W:boy_run|W:pt_b4q02_grabitel|A:GetLocator|W:pers_grabitel|W:b4q02_grabitel.xml|A:AddStationaryActor|A:add|A:GetActor|A:Remove|W:ammo_or_samopal_taken|W:house_load|W:fail|W:completed|W:cleanup|W:Locator |W: doesn't exist|A:size|A:get|A:clear|W:Can't retrieve diary root|A:Find|W:Can't find diary parent with id: |A:AddChild|A:GetCategory
// @GLOBALS: 0:object:
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars=object,object,object,object params=0
// @EVENT_26: op=0xd vars=string
// @EVENT_9: op=0xb9 vars=int,float
// @PE: 0xb9

task_0_event_26(var_0_object, var_1_object, var_2_object, var_3_object, var_4_string)
{
	var_5_object = Obj(); var_6_object = Obj(); var_7_object = Obj(); var_8_int = 0; var_9_bool = 0; var_10_cvector = CVector(0,0,0); var_11_cvector = CVector(0,0,0); var_12_object = Obj(); var_13_object = Obj(); var_14_object = Obj(); var_15_int = 0; var_16_bool = 0; var_17_cvector = CVector(0,0,0); var_18_cvector = CVector(0,0,0);
	Trace(var_4_string);
	var_20_bool = var_4_string == "place_boy";
	if(var_20_bool != 0) {
		GetMainOutdoorScene(var_12_object);
		var_21_object = Obj(); var_22_object = Obj(); var_23_string = ""; var_24_string = ""; var_25_string = "";
		var_12_object = var_22_object;
		func_220(var_21_object, var_22_object, "pt_b4q02_boy", "pers_boy", "b4q02_boy.xml");
		var_0_object = var_21_object;
		GetSceneByName(var_12_object, "house5_unoin03r");
		var_40_object = Obj(); var_41_object = Obj(); var_42_string = ""; var_43_string = ""; var_44_string = "";
		var_12_object = var_41_object;
		func_202(var_40_object, var_41_object, "pt_b4q02_samopal", "scripted_container", "b4q02_samopal.xml");
		var_1_object = var_40_object;
		var_58_object = Obj(); var_59_object = Obj(); var_60_string = ""; var_61_string = ""; var_62_string = "";
		var_12_object = var_59_object;
		func_202(var_58_object, var_59_object, "pt_b4q02_samopal_ammo", "scripted_container", "b4q02_samopal_ammo.xml");
		var_2_object = var_58_object;
		var_12_object = 0;
	} else {
		var_64_bool = var_4_string == "boy_run";
		if(var_64_bool != 0) {
			GetMainOutdoorScene(var_14_object);
			var_15_int = 1;

		Label_56:
			var_66_int = "pt_b4q02_grabitel" + var_15_int;
			@@var_14_object:GetLocator(var_66_int, var_16_bool, var_17_cvector, var_18_cvector);
			var_67_bool = var_16_bool == 0; //@nz
			if(var_67_bool != 0) {
			} else {
					@@var_14_object:AddStationaryActor(var_13_object, var_17_cvector, var_18_cvector, "pers_grabitel", "b4q02_grabitel.xml", (bool)1);
					@@@var_3_object:add(var_13_object);
					var_15_int = var_15_int + (int)1;
					goto Label_56;
		}
				var_75_bool = var_4_string == "ammo_or_samopal_taken";
				if(var_75_bool != 0) {
					func_259();
					func_133();
					goto Label_113;
				}
				var_121_bool = var_4_string == "house_load";
				if(var_121_bool != 0) {
					goto Label_113;
				}
				var_123_bool = var_4_string == "fail";
				if(var_123_bool != 0) {
					func_125();
					goto Label_113;
				}
				var_127_bool = var_4_string == "completed";
				if(var_127_bool == 0) goto Label_113;
				func_133();
		}
		@@@var_0_object:GetActor(var_13_object);
		var_68_bool = var_13_object == 0; //@nz
		if(var_68_bool != 0) {
			@@@var_0_object:Remove();
		} else {
			Trigger(var_13_object, "run");

		}
		var_14_object = 0;
		var_13_object = 0;
		goto Label_113;
	}
Label_113:
	return 14;
	
}


task_0_event_9(var_0_object, var_1_object, var_2_object, var_3_object, var_4_int, var_5_float)
{
	func_114();
	return 0;
}


main(var_0_object, var_1_object, var_2_object, var_3_object)
{
	SetVariable("b4q02", (int)1);
	var_6_object = Obj();
	func_196(var_6_object);
	var_3_object = var_6_object;
	var_9_int = 0;
	func_166((int)4);
	return 0;
}


func_259()
{
	var_76_object = Obj(); var_77_object = Obj();
	CreateDiaryEntry(var_77_object, (int)215, (int)2, (int)518578);
	var_81_bool = 0; var_82_object = Obj(); var_83_int = 0;
	var_77_object = var_82_object;
	func_285(var_81_bool, var_82_object, (int)213);
	return 2;
}
EMIT "Stack[-1] = 0";


func_196(var_6_object)
{
	var_7_object = Obj(); var_8_object = Obj();
	CreateObjectVector(var_8_object);
	var_8_object = var_6_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_133()
{
	SetVariable("b4q02", (int)1000);
	func_141(var_15_int, var_16_bool, var_17_cvector, var_18_cvector);
	return 0;
}


func_166(var_9_int)
{
	var_10_float = 0; var_11_float = 0;
	GetGameTime(var_11_float);
	var_13_float = var_9_int * (int)24;
	var_14_bool = var_11_float >= var_13_float;
	if(var_14_bool != 0) {
		func_141(var_3_object, var_9_int, var_10_float, var_11_float);
	} else {
		var_36_float = var_9_int * (int)24;
		SetTimeEvent((int)0, var_36_float);
		Hold();
	}
	return 2;
	
}


func_202(var_40_object, var_41_object, var_42_string, var_43_string, var_44_string)
{
	var_45_bool = 0; var_46_cvector = CVector(0,0,0); var_47_cvector = CVector(0,0,0); var_48_object = Obj(); var_49_bool = 0; var_50_cvector = CVector(0,0,0); var_51_cvector = CVector(0,0,0); var_52_object = Obj();
	@@var_41_object:GetLocator(var_42_string, var_49_bool, var_50_cvector, var_51_cvector);
	var_53_bool = var_49_bool == 0; //@nz
	if(var_53_bool != 0) {
		var_55_int = "Locator " + var_42_string;
		var_57_int = var_55_int + " doesn't exist";
		Trace(var_57_int);
	} else {
		AddActorByType(Obj(), var_43_string, var_41_object, var_50_cvector, var_51_cvector, var_44_string);
	}
	var_52_object = var_40_object;
	return 8;
	
}
EMIT "Stack[-1] = 0";


func_141(var_0_object, var_1_object, var_2_object, var_3_object)
{
	EventDisable(26);
	var_15_object = var_0_object;
	if(var_15_object != 0) {
		@@@var_0_object:Remove();
	}
	var_16_object = var_1_object;
	if(var_16_object != 0) {
		Trigger(var_1_object, "cleanup");
	}
	var_18_object = var_2_object;
	if(var_18_object != 0) {
		Trigger(var_2_object, "cleanup");
	}
	var_20_object = Obj();
	var_20_object = var_3_object;
	func_238(var_20_object);
	var_31_object = Obj();
	func_190(var_31_object);
	RemoveActor(var_31_object);
	return 0;
}


func_238(var_20_object)
{
	var_21_int = 0; var_22_int = 0; var_23_object = Obj(); var_24_int = 0; var_25_int = 0; var_26_object = Obj();
	var_27_object = var_20_object;
	if(var_27_object != 0) {
		@@var_20_object:size(var_24_int);
		var_25_int = 0;

	Label_244:
		var_28_bool = var_25_int < var_24_int;
		if(var_28_bool != 0) {
			@@var_20_object:get(var_26_object, var_25_int);
			var_29_object = var_26_object;
			if(var_29_object != 0) {
				@@var_26_object:Remove();
			}
			var_26_object = 0;
			var_25_int = var_25_int + (int)1;
			goto Label_244;
		}
		@@var_20_object:clear();
	}
	return 6;
}


func_272(var_90_object)
{
	var_91_object = Obj(); var_92_object = Obj();
	GetDiaryRoot(var_92_object);
	var_93_bool = var_92_object == 0; //@nz
	if(var_93_bool != 0) {
		Trace("Can't retrieve diary root");
		var_90_object = 0;
		return 2;
	}
	var_92_object = var_90_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_114()
{
	var_6_int = 0; var_7_int = 0;
	GetVariable("b4q02", var_7_int);
	var_10_bool = var_7_int != (int)1000;
	if(var_10_bool != 0) {
		func_125();
	}
	return 2;
}


func_285(var_81_bool, var_82_object, var_83_int)
{
	var_84_object = Obj(); var_85_object = Obj(); var_86_int = 0; var_87_object = Obj(); var_88_object = Obj(); var_89_int = 0;
	func_272(Obj());
	var_90_object = var_87_object;
	@@var_87_object:Find(var_83_int, var_88_object);
	var_95_bool = var_88_object == 0; //@nz
	if(var_95_bool != 0) {
		var_97_int = "Can't find diary parent with id: " + var_83_int;
		Trace(var_97_int);
		var_81_bool = 0;
		return 6;
	}
	@@var_88_object:AddChild(var_82_object);
	SendWorldWndMessage((int)7);
	@@var_82_object:GetCategory(var_89_int);
	SetDiarySection(var_89_int);
	var_81_bool = 0;
	return 6;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


func_220(var_21_object, var_22_object, var_23_string, var_24_string, var_25_string)
{
	var_26_bool = 0; var_27_cvector = CVector(0,0,0); var_28_cvector = CVector(0,0,0); var_29_object = Obj(); var_30_bool = 0; var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_object = Obj();
	@@var_22_object:GetLocator(var_23_string, var_30_bool, var_31_cvector, var_32_cvector);
	var_34_bool = var_30_bool == 0; //@nz
	if(var_34_bool != 0) {
		var_36_int = "Locator " + var_23_string;
		var_38_int = var_36_int + " doesn't exist";
		Trace(var_38_int);
	} else {
		@@var_22_object:AddStationaryActor(Obj(), var_31_cvector, var_32_cvector, var_24_string, var_25_string);
	}
	var_33_object = var_21_object;
	return 8;
	
}
EMIT "Stack[-1] = 0";


func_125()
{
	SetVariable("b4q02", (int)-1);
	func_141(var_4_int, var_5_float, var_6_int, var_7_int);
	return 0;
}


func_190(var_31_object)
{
	var_32_object = Obj(); var_33_object = Obj();
	self(var_33_object);
	var_33_object = var_31_object;
	return 2;
}
EMIT "Stack[-1] = 0";



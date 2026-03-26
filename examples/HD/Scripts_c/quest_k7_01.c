// @IMPORTS: GetSceneByName/2,GetMainOutdoorScene/1,GetScene/1,Trigger/2,GetGameTime/1,SetTimeEvent/2,Hold/0,Trace/1,AddActor/6,GetVariable/2,SetVariable/2,RemoveActor/1,self/1,FindActor/2
// @STRINGS: W:theater|W:pt_k7q01_danko|W:NPC_Bakalavr|W:k7q01_danko.xml|W:termitnik2|W:pt_k7q01_burah|W:NPC_Burah|W:k7q01_burah.xml|W:termitnik2@door1|W:termitnik@door1|W:pt_k7q01_birdmask1|W:pers_birdmask|W:k7q01_birdmask.xml|W:pt_k7q01_birdmask2|W:burah_home|W:noburah|W:sobor@door1|W:cot_georg@door1|W:cot_maria@door1|W:cot_viktor@door1|W:place_corpse|W:d7q02_corpse|W:k7q01_corpse.xml|W:place_danko|W:cot_eva_load|W:icot_eva_door|W:theater_load|W:termitnik2_load|W:sobor_load|A:Remove|W:fail|W:completed|W:cleanup|W:k7q01|A:GetLocator|W:Locator |W: doesn't exist|A:AddStationaryActor|W:Door |W: not found|W:locked|A:SetProperty|A:Close
// @RUN_OP: 0x26
// @RUN_TASK: 0
// @TASK_0: vars=object,object,object,object,object params=0
// @EVENT_9: op=0x8f vars=int,float
// @EVENT_26: op=0xa0 vars=string
// @PE: 0x8f

task_0_event_9(var_0_object, var_1_object, var_2_object, var_3_object, var_4_object, var_5_int, var_6_float)
{
	var_7_string = ""; var_8_bool = 0;
	func_371("cot_georg@door1", (bool)0);
	var_17_string = ""; var_18_bool = 0;
	func_371("cot_maria@door1", (bool)0);
	var_19_string = ""; var_20_bool = 0;
	func_371("cot_viktor@door1", (bool)0);
	return 0;
}


task_0_event_26(var_0_object, var_1_object, var_2_object, var_3_object, var_4_object, var_5_string)
{
	var_6_object = Obj(); var_7_int = 0; var_8_object = Obj(); var_9_int = 0;
	Trace(var_5_string);
	var_11_bool = var_5_string == "place_corpse";
	if(var_11_bool != 0) {
		GetMainOutdoorScene(var_8_object);
		AddActor(var_2_object, "d7q02_corpse", var_8_object, CVector(0.0, 0.0, 0.0), CVector(0.0, 0.0, 1.0), "k7q01_corpse.xml");
	} else {
		var_17_bool = var_5_string == "place_danko";
		if(var_17_bool != 0) {
			var_18_bool = var_3_object == 0; //@nz
			if(var_18_bool != 0) {
				func_0(var_9_int);
			}
			goto Label_250;
		}
		var_42_bool = var_5_string == "cot_eva_load";
		if(var_42_bool != 0) {
			var_43_string = ""; var_44_bool = 0;
			func_388("icot_eva_door", (bool)1);
			goto Label_250;
		}
		var_55_bool = var_5_string == "theater_load";
		if(var_55_bool != 0) {
			func_0(var_9_int);
			goto Label_250;
		}
		var_57_bool = var_5_string == "termitnik2_load";
		if(var_57_bool != 0) {
			func_17(var_9_int);
			goto Label_250;
		}
		var_73_bool = var_5_string == "sobor_load";
		if(var_73_bool != 0) {
			var_74_object = var_0_object;
			if(var_74_object != 0) {
				@@@var_0_object:Remove();
			}
			var_75_object = var_1_object;
			if(var_75_object != 0) {
				@@@var_1_object:Remove();
			}
			goto Label_250;
		}
		var_77_bool = var_5_string == "fail";
		if(var_77_bool != 0) {
			func_251();
			goto Label_250;
		}
		var_95_bool = var_5_string == "completed";
		if(var_95_bool != 0) {
			func_259();
			goto Label_250;
		}
		var_99_bool = var_5_string == "cleanup";
		if(var_99_bool == 0) goto Label_250;
		GetVariable("k7q01", var_9_int);
		var_102_bool = var_9_int != (int)1000;
		if(var_102_bool != 0) {
			SetVariable("k7q01", (int)-1);
		}
		func_286(var_7_int, Obj(), var_9_int);
	}
Label_250:
	return 4;
	
}


main(var_0_object, var_1_object, var_2_object, var_3_object, var_4_object)
{
	var_5_object = Obj(); var_6_object = Obj(); var_7_object = Obj(); var_8_float = 0; var_9_object = Obj(); var_10_object = Obj(); var_11_object = Obj(); var_12_float = 0;
	var_13_string = ""; var_14_bool = 0;
	func_371("termitnik2@door1", (bool)0);
	var_23_string = ""; var_24_bool = 0;
	func_371("termitnik@door1", (bool)1);
	GetMainOutdoorScene(var_9_object);
	var_25_object = Obj(); var_26_object = Obj(); var_27_string = ""; var_28_string = ""; var_29_string = "";
	var_9_object = var_26_object;
	func_353(var_25_object, var_26_object, "pt_k7q01_birdmask1", "pers_birdmask", "k7q01_birdmask.xml");
	var_0_object = var_25_object;
	var_43_object = Obj(); var_44_object = Obj(); var_45_string = ""; var_46_string = ""; var_47_string = "";
	var_9_object = var_44_object;
	func_353(var_43_object, var_44_object, "pt_k7q01_birdmask2", "pers_birdmask", "k7q01_birdmask.xml");
	var_1_object = var_43_object;
	GetScene(var_9_object);
	GetSceneByName(var_10_object, "theater");
	var_49_bool = var_10_object != var_9_object;
	if(var_49_bool != 0) {
		func_0(var_12_float);
	}
	GetSceneByName(var_11_object, "termitnik2");
	var_73_bool = var_11_object != var_9_object;
	if(var_73_bool != 0) {
		func_17(var_12_float);
	}
	GetSceneByName(var_9_object, "burah_home");
	Trigger(var_9_object, "noburah");
	var_90_string = ""; var_91_bool = 0;
	func_371("sobor@door1", (bool)1);
	GetGameTime(var_12_float);
	var_93_bool = var_12_float >= (float)156.0;
	if(var_93_bool != 0) {
		var_94_string = ""; var_95_bool = 0;
		func_371("cot_georg@door1", (bool)0);
		var_96_string = ""; var_97_bool = 0;
		func_371("cot_maria@door1", (bool)0);
		var_98_string = ""; var_99_bool = 0;
		func_371("cot_viktor@door1", (bool)0);
	} else {
		var_100_string = ""; var_101_bool = 0;
		func_371("cot_georg@door1", (bool)1);
		var_102_string = ""; var_103_bool = 0;
		func_371("cot_maria@door1", (bool)1);
		var_104_string = ""; var_105_bool = 0;
		func_371("cot_viktor@door1", (bool)1);
		SetTimeEvent((int)0, (float)156.0);
	}
Label_136:
	Hold();
	goto Label_136;
	
}
EMIT "Return(); Pop(8)";
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";
EMIT "Stack[-4] = 0";


func_0(var_3_object)
{
	var_50_object = Obj(); var_51_object = Obj();
	var_52_object = var_3_object;
	if(var_52_object != 0) {
		return 2;
	}
	GetSceneByName(var_51_object, "theater");
	var_54_object = Obj(); var_55_object = Obj(); var_56_string = ""; var_57_string = ""; var_58_string = "";
	var_51_object = var_55_object;
	func_335(var_54_object, var_55_object, "pt_k7q01_danko", "NPC_Bakalavr", "k7q01_danko.xml");
	var_3_object = var_54_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_353(var_25_object, var_26_object, var_27_string, var_28_string, var_29_string)
{
	var_30_bool = 0; var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_object = Obj(); var_34_bool = 0; var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_object = Obj();
	@@var_26_object:GetLocator(var_27_string, var_34_bool, var_35_cvector, var_36_cvector);
	var_38_bool = var_34_bool == 0; //@nz
	if(var_38_bool != 0) {
		var_40_int = "Locator " + var_27_string;
		var_42_int = var_40_int + " doesn't exist";
		Trace(var_42_int);
	} else {
		@@var_26_object:AddStationaryActor(Obj(), var_35_cvector, var_36_cvector, var_28_string, var_29_string);
	}
	var_37_object = var_25_object;
	return 8;
	
}
EMIT "Stack[-1] = 0";


func_259()
{
	SetVariable("k7q01", (int)1000);
	func_267(var_8_object, var_9_int);
	return 0;
}


func_388(var_43_string, var_44_bool)
{
	var_45_object = Obj(); var_46_object = Obj();
	FindActor(var_46_object, var_43_string);
	var_47_bool = var_46_object == 0; //@nz
	if(var_47_bool != 0) {
		var_49_int = "Door " + var_43_string;
		var_51_int = var_49_int + " not found";
		Trace(var_51_int);
	} else {
		var_52_bool = var_44_bool;
		if(var_52_bool != 0) {
			@@var_46_object:Close();
		}
		@@var_46_object:SetProperty("locked", var_44_bool);
	}
	return 2;
	
}
EMIT "Stack[-1] = 0";


func_329(var_119_object)
{
	var_120_object = Obj(); var_121_object = Obj();
	self(var_121_object);
	var_121_object = var_119_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_267(var_0_object, var_1_object)
{
	var_80_object = var_0_object;
	if(var_80_object != 0) {
		@@@var_0_object:Remove();
	}
	var_81_object = var_1_object;
	if(var_81_object != 0) {
		@@@var_1_object:Remove();
	}
	var_82_string = ""; var_83_bool = 0;
	func_371("sobor@door1", (bool)0);
	var_92_string = ""; var_93_bool = 0;
	func_371("termitnik@door1", (bool)0);
	return 0;
}


func_335(var_54_object, var_55_object, var_56_string, var_57_string, var_58_string)
{
	var_59_bool = 0; var_60_cvector = CVector(0,0,0); var_61_cvector = CVector(0,0,0); var_62_object = Obj(); var_63_bool = 0; var_64_cvector = CVector(0,0,0); var_65_cvector = CVector(0,0,0); var_66_object = Obj();
	@@var_55_object:GetLocator(var_56_string, var_63_bool, var_64_cvector, var_65_cvector);
	var_67_bool = var_63_bool == 0; //@nz
	if(var_67_bool != 0) {
		var_69_int = "Locator " + var_56_string;
		var_71_int = var_69_int + " doesn't exist";
		Trace(var_71_int);
	} else {
		AddActor(Obj(), var_57_string, var_55_object, var_64_cvector, var_65_cvector, var_58_string);
	}
	var_66_object = var_54_object;
	return 8;
	
}
EMIT "Stack[-1] = 0";


func_17(var_4_object)
{
	var_74_object = Obj(); var_75_object = Obj();
	var_76_object = var_4_object;
	if(var_76_object != 0) {
		return 2;
	}
	GetSceneByName(var_75_object, "termitnik2");
	var_78_object = Obj(); var_79_object = Obj(); var_80_string = ""; var_81_string = ""; var_82_string = "";
	var_75_object = var_79_object;
	func_335(var_78_object, var_79_object, "pt_k7q01_burah", "NPC_Burah", "k7q01_burah.xml");
	var_4_object = var_78_object;
	var_83_bool = 0; var_84_string = "";
	func_409(var_83_bool, "NPC_Burah");
	return 2;
}
EMIT "Stack[-1] = 0";


func_371(var_13_string, var_14_bool)
{
	var_15_object = Obj(); var_16_object = Obj();
	FindActor(var_16_object, var_13_string);
	var_17_bool = var_16_object == 0; //@nz
	if(var_17_bool != 0) {
		var_19_int = "Door " + var_13_string;
		var_21_int = var_19_int + " not found";
		Trace(var_21_int);
	} else {
		@@var_16_object:SetProperty("locked", var_14_bool);
	}
	return 2;
	
}
EMIT "Stack[-1] = 0";


func_409(var_83_bool, var_84_string)
{
	var_85_object = Obj(); var_86_object = Obj();
	FindActor(var_86_object, var_84_string);
	var_87_bool = var_86_object == 0; //@nz
	if(var_87_bool != 0) {
		var_83_bool = 0;
		return 2;
	}
	RemoveActor(var_86_object);
	var_83_bool = 1;
	return 2;
}
EMIT "Stack[-1] = 0";


func_251()
{
	SetVariable("k7q01", (int)-1);
	func_267(var_8_object, var_9_int);
	return 0;
}


func_286(var_2_object, var_3_object, var_4_object)
{
	var_105_object = Obj(); var_106_object = Obj();
	EventDisable(26);
	func_267(var_105_object, var_106_object);
	var_107_object = var_3_object;
	if(var_107_object != 0) {
		Trigger(var_3_object, "cleanup");
	}
	var_109_string = ""; var_110_bool = 0;
	func_388("icot_eva_door", (bool)0);
	var_111_object = var_4_object;
	if(var_111_object != 0) {
		Trigger(var_4_object, "cleanup");
	}
	var_113_object = var_2_object;
	if(var_113_object != 0) {
		Trigger(var_2_object, "cleanup");
	}
	GetSceneByName(var_106_object, "burah_home");
	Trigger(var_106_object, "burah");
	var_117_string = ""; var_118_bool = 0;
	func_371("termitnik2@door1", (bool)1);
	var_119_object = Obj();
	func_329(var_119_object);
	RemoveActor(var_119_object);
	return 2;
}
EMIT "Stack[-1] = 0";



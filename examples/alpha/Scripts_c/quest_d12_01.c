// @IMPORTS: Hold/0,Trace/1,GetMainOutdoorScene/1,GetSceneByName/2,Trigger/2,SetVariable/2,AddActor/6,FindActor/2,RemoveActor/1
// @STRINGS: W:place_birdmask|W:pt_d12q01_birdmask|W:pers_birdmask|W:d12q01_birdmask.xml|W:init_sobor|W:NPC_Aglaja|W:noaglaja|W:pt_d12q01_Klara|W:NPC_Klara|W:d12q01_Klara.xml|W:pt_d12q01_Block|W:NPC_Block|W:d12q01_Block.xml|W:pt_d12q01_Burah|W:NPC_Burah|W:d12q01_Burah.xml|W:pt_d12q01_Aglaja|W:d12q01_Aglaja.xml|W:isobor@door1|W:init_theater|W:d12q01_tbirdmask.xml|W:pt_d12q01_whitemask|W:pers_whitemask|W:d12q01_twhitemask.xml|W:itheater@door1|W:init_mnogogrannik|W:hidden_room@door1|W:hidden_room|W:pt_girl|W:pers_littlegirl2|W:d12q01_littlegirl.xml|W:pt_boy|W:pers_littleboy2|W:d12q01_littleboy.xml|W:fail|W:completed|W:d12q01|A:GetLocator|W:Locator |W: doesn't exist|A:AddStationaryActor|W:Door |W: not found|W:locked|A:SetProperty
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars= params=0
// @EVENT_26: op=0x4 vars=string

task_0_event_26(var_0_string)
{
	var_1_object = Obj(); var_2_object = Obj(); var_3_object = Obj(); var_4_object = Obj(); var_5_object = Obj(); var_6_object = Obj(); var_7_object = Obj(); var_8_object = Obj();
	Trace(var_0_string);
	var_10_bool = var_0_string == "place_birdmask";
	if(var_10_bool != 0) {
		GetMainOutdoorScene(var_5_object);
		var_11_object = Obj(); var_12_object = Obj(); var_13_string = ""; var_14_string = ""; var_15_string = "";
		var_5_object = var_12_object;
		func_173(var_11_object, var_12_object, "pt_d12q01_birdmask", "pers_birdmask", "d12q01_birdmask.xml");
		var_5_object = 0;
	} else {
		var_30_bool = var_0_string == "init_sobor";
		if(var_30_bool != 0) {
			GetSceneByName(var_6_object, "sobor");
			var_32_bool = 0; var_33_string = "";
			func_207(var_32_bool, "NPC_Aglaja");
			Trigger(var_6_object, "noaglaja");
			var_38_object = Obj(); var_39_object = Obj(); var_40_string = ""; var_41_string = ""; var_42_string = "";
			var_6_object = var_39_object;
			func_155(var_38_object, var_39_object, "pt_d12q01_Klara", "NPC_Klara", "d12q01_Klara.xml");
			var_56_object = Obj(); var_57_object = Obj(); var_58_string = ""; var_59_string = ""; var_60_string = "";
			var_6_object = var_57_object;
			func_155(var_56_object, var_57_object, "pt_d12q01_Block", "NPC_Block", "d12q01_Block.xml");
			var_61_object = Obj(); var_62_object = Obj(); var_63_string = ""; var_64_string = ""; var_65_string = "";
			var_6_object = var_62_object;
			func_155(var_61_object, var_62_object, "pt_d12q01_Burah", "NPC_Burah", "d12q01_Burah.xml");
			var_66_object = Obj(); var_67_object = Obj(); var_68_string = ""; var_69_string = ""; var_70_string = "";
			var_6_object = var_67_object;
			func_155(var_66_object, var_67_object, "pt_d12q01_Aglaja", "NPC_Aglaja", "d12q01_Aglaja.xml");
			var_71_string = ""; var_72_bool = 0;
			func_191("isobor@door1", (bool)1);
			var_6_object = 0;
			goto Label_136;
		}
		var_82_bool = var_0_string == "init_theater";
		if(var_82_bool != 0) {
			GetSceneByName(var_7_object, "theater");
			var_84_object = Obj(); var_85_object = Obj(); var_86_string = ""; var_87_string = ""; var_88_string = "";
			var_7_object = var_85_object;
			func_155(var_84_object, var_85_object, "pt_d12q01_birdmask", "pers_birdmask", "d12q01_tbirdmask.xml");
			var_89_object = Obj(); var_90_object = Obj(); var_91_string = ""; var_92_string = ""; var_93_string = "";
			var_7_object = var_90_object;
			func_155(var_89_object, var_90_object, "pt_d12q01_whitemask", "pers_whitemask", "d12q01_twhitemask.xml");
			var_94_string = ""; var_95_bool = 0;
			func_191("itheater@door1", (bool)1);
			var_7_object = 0;
			goto Label_136;
		}
		var_97_bool = var_0_string == "init_mnogogrannik";
		if(var_97_bool != 0) {
			var_98_string = ""; var_99_bool = 0;
			func_191("hidden_room@door1", (bool)0);
			GetSceneByName(var_8_object, "hidden_room");
			var_101_object = Obj(); var_102_object = Obj(); var_103_string = ""; var_104_string = ""; var_105_string = "";
			var_8_object = var_102_object;
			func_155(var_101_object, var_102_object, "pt_girl", "pers_littlegirl2", "d12q01_littlegirl.xml");
			var_106_object = Obj(); var_107_object = Obj(); var_108_string = ""; var_109_string = ""; var_110_string = "";
			var_8_object = var_107_object;
			func_155(var_106_object, var_107_object, "pt_boy", "pers_littleboy2", "d12q01_littleboy.xml");
			var_8_object = 0;
			goto Label_136;
		}
		var_112_bool = var_0_string == "fail";
		if(var_112_bool != 0) {
			func_137();
			goto Label_136;
		}
		var_116_bool = var_0_string == "completed";
		if(var_116_bool == 0) goto Label_136;
		func_145();
	}
Label_136:
	return 8;
	
}


main()
{
	
Label_0:
	Hold();
	goto Label_0;
}
EMIT "Return(); Pop(0)";


func_137()
{
	SetVariable("d12q01", (int)-1);
	func_153();
	return 0;
}


func_173(var_11_object, var_12_object, var_13_string, var_14_string, var_15_string)
{
	var_16_bool = 0; var_17_cvector = CVector(0,0,0); var_18_cvector = CVector(0,0,0); var_19_object = Obj(); var_20_bool = 0; var_21_cvector = CVector(0,0,0); var_22_cvector = CVector(0,0,0); var_23_object = Obj();
	@@var_12_object:GetLocator(var_13_string, var_20_bool, var_21_cvector, var_22_cvector);
	var_24_bool = var_20_bool == 0; //@nz
	if(var_24_bool != 0) {
		var_26_int = "Locator " + var_13_string;
		var_28_int = var_26_int + " doesn't exist";
		Trace(var_28_int);
	} else {
		@@var_12_object:AddStationaryActor(Obj(), var_21_cvector, var_22_cvector, var_14_string, var_15_string);
	}
	var_23_object = var_11_object;
	return 8;
	
}
EMIT "Stack[-1] = 0";


func_207(var_32_bool, var_33_string)
{
	var_34_object = Obj(); var_35_object = Obj();
	FindActor(var_35_object, var_33_string);
	var_36_bool = var_35_object == 0; //@nz
	if(var_36_bool != 0) {
		var_32_bool = 0;
		return 2;
	}
	RemoveActor(var_35_object);
	var_32_bool = 1;
	return 2;
}
EMIT "Stack[-1] = 0";


func_145()
{
	SetVariable("d12q01", (int)1000);
	func_153();
	return 0;
}


func_153()
{
	EventDisable(26);
	return 0;
}


func_155(var_38_object, var_39_object, var_40_string, var_41_string, var_42_string)
{
	var_43_bool = 0; var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_object = Obj(); var_47_bool = 0; var_48_cvector = CVector(0,0,0); var_49_cvector = CVector(0,0,0); var_50_object = Obj();
	@@var_39_object:GetLocator(var_40_string, var_47_bool, var_48_cvector, var_49_cvector);
	var_51_bool = var_47_bool == 0; //@nz
	if(var_51_bool != 0) {
		var_53_int = "Locator " + var_40_string;
		var_55_int = var_53_int + " doesn't exist";
		Trace(var_55_int);
	} else {
		AddActor(Obj(), var_41_string, var_39_object, var_48_cvector, var_49_cvector, var_42_string);
	}
	var_50_object = var_38_object;
	return 8;
	
}
EMIT "Stack[-1] = 0";


func_191(var_71_string, var_72_bool)
{
	var_73_object = Obj(); var_74_object = Obj();
	FindActor(var_74_object, var_71_string);
	var_75_bool = var_74_object == 0; //@nz
	if(var_75_bool != 0) {
		var_77_int = "Door " + var_71_string;
		var_79_int = var_77_int + " not found";
		Trace(var_79_int);
	}
	@@var_74_object:SetProperty("locked", var_72_bool);
	return 2;
}
EMIT "Stack[-1] = 0";



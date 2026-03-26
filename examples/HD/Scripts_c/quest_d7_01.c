// @IMPORTS: GetSceneByName/2,Trigger/2,GetGameTime/1,SetTimeEvent/2,Hold/0,Trace/1,GetMainOutdoorScene/1,sync/0,GetVariable/2,SetVariable/2,RemoveActor/1,CameraSwitchToNormal/0,FindActor/2,self/1,AddBlankActor/4,Teleport/4
// @STRINGS: W:warehouse_rubin|W:norubin|W:sobor@door1|W:place_birdmasks|W:pt_d7q01_ubirdmask|W:pers_birdmask|W:d7q01_birdmask1.xml|W:pt_d7q01_dbirdmask|W:d7q01_birdmask2.xml|W:pt_d7q01_mbirdmask|W:d7q01_birdmask3.xml|W:remove_birdmasks|W:kill_player|W:die|W:sobor_teleport|W:sobor|W:pt_d7q01_birth|W:quest_d7_01_cutscene|W:cleanup|W:d7q01|W:fail|W:completed|A:Remove|W:.bin|A:GetLocator|W:Locator |W: doesn't exist|A:AddStationaryActor|W:Door |W: not found|W:locked|A:SetProperty|W:Teleport location '|W:' not found in scene '
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars=object,object,object params=0
// @EVENT_9: op=0x20 vars=int,float
// @EVENT_26: op=0x27 vars=string
// @EVENT_24: op=0xb2 vars=int
// @PE: 0x20,0xb2

task_0_event_9(var_0_object, var_1_object, var_2_object, var_3_int, var_4_float)
{
	var_5_string = ""; var_6_bool = 0;
	func_224("sobor@door1", (bool)0);
	return 0;
}


task_0_event_26(var_0_object, var_1_object, var_2_object, var_3_string)
{
	var_4_object = Obj(); var_5_int = 0; var_6_object = Obj(); var_7_int = 0;
	Trace(var_3_string);
	var_9_bool = var_3_string == "place_birdmasks";
	if(var_9_bool != 0) {
		GetMainOutdoorScene(var_6_object);
		var_10_object = Obj(); var_11_object = Obj(); var_12_string = ""; var_13_string = ""; var_14_string = "";
		var_6_object = var_11_object;
		func_206(var_10_object, var_11_object, "pt_d7q01_ubirdmask", "pers_birdmask", "d7q01_birdmask1.xml");
		var_0_object = var_10_object;
		var_28_object = Obj(); var_29_object = Obj(); var_30_string = ""; var_31_string = ""; var_32_string = "";
		var_6_object = var_29_object;
		func_206(var_28_object, var_29_object, "pt_d7q01_dbirdmask", "pers_birdmask", "d7q01_birdmask2.xml");
		var_1_object = var_28_object;
		var_33_object = Obj(); var_34_object = Obj(); var_35_string = ""; var_36_string = ""; var_37_string = "";
		var_6_object = var_34_object;
		func_206(var_33_object, var_34_object, "pt_d7q01_mbirdmask", "pers_birdmask", "d7q01_birdmask3.xml");
		var_2_object = var_33_object;
	} else {
		var_39_bool = var_3_string == "remove_birdmasks";
		if(var_39_bool != 0) {
			func_155(var_5_int, Obj(), var_7_int);
			goto Label_138;
		}
		var_44_bool = var_3_string == "kill_player";
		if(var_44_bool != 0) {
			var_45_bool = 0; var_46_string = ""; var_47_string = "";
			func_241(var_45_bool, "player", "die");
			goto Label_138;
		}
		var_52_bool = var_3_string == "sobor_teleport";
		if(var_52_bool != 0) {
			var_53_object = Obj(); var_54_string = ""; var_55_string = "";
			func_182(Obj());
			var_56_object = var_53_object;
			func_253(var_53_object, "sobor", "pt_d7q01_birth");
			sync();
			var_77_object = Obj(); var_78_string = "";
			func_195(var_77_object, "quest_d7_01_cutscene");
			goto Label_138;
		}
		var_86_bool = var_3_string == "cleanup";
		if(var_86_bool != 0) {
			GetVariable("d7q01", var_7_int);
			var_89_bool = var_7_int != (int)1000;
			if(var_89_bool != 0) {
				func_139();
			} else {
				func_168();
		}
			var_96_bool = var_3_string == "fail";
			if(var_96_bool != 0) {
				func_139();
				goto Label_138;
			}
			var_98_bool = var_3_string == "completed";
			if(var_98_bool == 0) goto Label_138;
			func_147();
		}
		goto Label_138;
	}
Label_138:
	return 4;
	
}


task_0_event_24(var_0_object, var_1_object, var_2_object, var_3_int)
{
	CameraSwitchToNormal();
	return 0;
}


main(var_0_object, var_1_object, var_2_object)
{
	var_3_object = Obj(); var_4_float = 0; var_5_object = Obj(); var_6_float = 0;
	GetSceneByName(var_5_object, "warehouse_rubin");
	Trigger(var_5_object, "norubin");
	GetGameTime(var_6_float);
	var_10_bool = var_6_float >= (float)151.0;
	if(var_10_bool != 0) {
		var_11_string = ""; var_12_bool = 0;
		func_224("sobor@door1", (bool)0);
	} else {
		var_21_string = ""; var_22_bool = 0;
		func_224("sobor@door1", (bool)1);
		SetTimeEvent((int)0, (float)151.0);
	}
Label_27:
	Hold();
	goto Label_27;
	
}
EMIT "Return(); Pop(4)";
EMIT "Stack[-2] = 0";


func_224(var_11_string, var_12_bool)
{
	var_13_object = Obj(); var_14_object = Obj();
	FindActor(var_14_object, var_11_string);
	var_15_bool = var_14_object == 0; //@nz
	if(var_15_bool != 0) {
		var_17_int = "Door " + var_11_string;
		var_19_int = var_17_int + " not found";
		Trace(var_19_int);
	} else {
		@@var_14_object:SetProperty("locked", var_12_bool);
	}
	return 2;
	
}
EMIT "Stack[-1] = 0";


func_195(var_77_object, var_78_string)
{
	var_79_object = Obj(); var_80_object = Obj(); var_81_object = Obj(); var_82_object = Obj();
	GetMainOutdoorScene(var_81_object);
	var_84_int = var_78_string + ".bin";
	AddBlankActor(var_82_object, var_81_object, var_78_string, var_84_int);
	var_82_object = var_77_object;
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_168()
{
	EventDisable(26);
	func_155(var_5_int, var_6_object, var_7_int);
	var_92_object = Obj();
	func_189(var_92_object);
	RemoveActor(var_92_object);
	return 0;
}


func_139()
{
	SetVariable("d7q01", (int)-1);
	func_168();
	return 0;
}


func_206(var_10_object, var_11_object, var_12_string, var_13_string, var_14_string)
{
	var_15_bool = 0; var_16_cvector = CVector(0,0,0); var_17_cvector = CVector(0,0,0); var_18_object = Obj(); var_19_bool = 0; var_20_cvector = CVector(0,0,0); var_21_cvector = CVector(0,0,0); var_22_object = Obj();
	@@var_11_object:GetLocator(var_12_string, var_19_bool, var_20_cvector, var_21_cvector);
	var_23_bool = var_19_bool == 0; //@nz
	if(var_23_bool != 0) {
		var_25_int = "Locator " + var_12_string;
		var_27_int = var_25_int + " doesn't exist";
		Trace(var_27_int);
	} else {
		@@var_11_object:AddStationaryActor(Obj(), var_20_cvector, var_21_cvector, var_13_string, var_14_string);
	}
	var_22_object = var_10_object;
	return 8;
	
}
EMIT "Stack[-1] = 0";


func_241(var_45_bool, var_46_string, var_47_string)
{
	var_48_object = Obj(); var_49_object = Obj();
	FindActor(var_49_object, var_46_string);
	var_50_bool = var_49_object == 0; //@ne
	if(var_50_bool != 0) {
		var_45_bool = 0;
		return 2;
	}
	Trigger(var_49_object, var_47_string);
	var_45_bool = 1;
	return 2;
}
EMIT "Stack[-1] = 0";


func_147()
{
	SetVariable("d7q01", (int)1000);
	func_168();
	return 0;
}


func_182(var_56_object)
{
	var_57_object = Obj(); var_58_object = Obj();
	FindActor(var_58_object, "player");
	var_58_object = var_56_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_189(var_92_object)
{
	var_93_object = Obj(); var_94_object = Obj();
	self(var_94_object);
	var_94_object = var_92_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_155(var_0_object, var_1_object, var_2_object)
{
	var_40_object = var_0_object;
	if(var_40_object != 0) {
		@@@var_0_object:Remove();
	}
	var_41_object = var_1_object;
	if(var_41_object != 0) {
		@@@var_1_object:Remove();
	}
	var_42_object = var_2_object;
	if(var_42_object != 0) {
		@@@var_2_object:Remove();
	}
	return 0;
}


func_253(var_53_object, var_54_string, var_55_string)
{
	var_60_object = Obj(); var_61_bool = 0; var_62_cvector = CVector(0,0,0); var_63_cvector = CVector(0,0,0); var_64_object = Obj(); var_65_bool = 0; var_66_cvector = CVector(0,0,0); var_67_cvector = CVector(0,0,0);
	var_68_bool = var_53_object == 0; //@nz
	if(var_68_bool != 0) {
		return 8;
	}
	GetSceneByName(var_64_object, var_54_string);
	@@var_64_object:GetLocator(var_55_string, var_65_bool, var_66_cvector, var_67_cvector);
	var_69_bool = var_65_bool == 0; //@nz
	if(var_69_bool != 0) {
		var_71_int = "Teleport location '" + var_55_string;
		var_73_int = var_71_int + "' not found in scene '";
		var_74_int = var_73_int + var_54_string;
		var_76_int = var_74_int + "'";
		Trace(var_76_int);
	} else {
		Teleport(var_53_object, var_64_object, var_66_cvector, var_67_cvector);
	}
	return 8;
	
}
EMIT "Stack[-4] = 0";



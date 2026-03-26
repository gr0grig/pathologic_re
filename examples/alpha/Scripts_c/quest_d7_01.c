// @IMPORTS: Hold/0,Trace/1,GetMainOutdoorScene/1,sync/0,SetVariable/2,FindActor/2,Trigger/2,GetSceneByName/2,Teleport/4
// @STRINGS: W:place_birdmasks|W:pt_d7q01_ubirdmask|W:pers_birdmask|W:d7q01_birdmask1.xml|W:pt_d7q01_dbirdmask|W:d7q01_birdmask2.xml|W:pt_d7q01_mbirdmask|W:d7q01_birdmask3.xml|W:remove_birdmasks|W:kill_player|W:die|W:sobor_teleport|W:sobor|W:pt_d7q01_birth|W:fail|W:completed|W:d7q01|A:Remove|A:GetLocator|W:Locator |W: doesn't exist|A:AddStationaryActor|W:Teleport location '|W:' not found in scene '
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars=object,object,object params=0
// @EVENT_26: op=0x4 vars=string

task_0_event_26(var_0_object, var_1_object, var_2_object, var_3_string)
{
	var_4_object = Obj(); var_5_object = Obj();
	Trace(var_3_string);
	var_7_bool = var_3_string == "place_birdmasks";
	if(var_7_bool != 0) {
		GetMainOutdoorScene(var_5_object);
		var_8_object = Obj(); var_9_object = Obj(); var_10_string = ""; var_11_string = ""; var_12_string = "";
		var_5_object = var_9_object;
		func_124(var_8_object, var_9_object, "pt_d7q01_ubirdmask", "pers_birdmask", "d7q01_birdmask1.xml");
		var_0_object = var_8_object;
		var_26_object = Obj(); var_27_object = Obj(); var_28_string = ""; var_29_string = ""; var_30_string = "";
		var_5_object = var_27_object;
		func_124(var_26_object, var_27_object, "pt_d7q01_dbirdmask", "pers_birdmask", "d7q01_birdmask2.xml");
		var_1_object = var_26_object;
		var_31_object = Obj(); var_32_object = Obj(); var_33_string = ""; var_34_string = ""; var_35_string = "";
		var_5_object = var_32_object;
		func_124(var_31_object, var_32_object, "pt_d7q01_mbirdmask", "pers_birdmask", "d7q01_birdmask3.xml");
		var_2_object = var_31_object;
	} else {
		var_37_bool = var_3_string == "remove_birdmasks";
		if(var_37_bool != 0) {
			func_99(var_3_string, var_4_object, Obj());
			goto Label_82;
		}
		var_42_bool = var_3_string == "kill_player";
		if(var_42_bool != 0) {
			var_43_bool = 0; var_44_string = ""; var_45_string = "";
			func_142(var_43_bool, "player", "die");
			goto Label_82;
		}
		var_50_bool = var_3_string == "sobor_teleport";
		if(var_50_bool != 0) {
			var_51_object = Obj(); var_52_string = ""; var_53_string = "";
			func_117(Obj());
			var_54_object = var_51_object;
			func_154(var_51_object, "sobor", "pt_d7q01_birth");
			sync();
			goto Label_82;
		}
		var_76_bool = var_3_string == "fail";
		if(var_76_bool != 0) {
			func_83();
			goto Label_82;
		}
		var_80_bool = var_3_string == "completed";
		if(var_80_bool == 0) goto Label_82;
		func_91();
	}
Label_82:
	return 2;
	
}


main(var_0_object, var_1_object, var_2_object)
{
	
Label_0:
	Hold();
	goto Label_0;
}
EMIT "Return(); Pop(0)";


func_99(var_0_object, var_1_object, var_2_object)
{
	var_38_object = var_0_object;
	if(var_38_object != 0) {
		@@@var_0_object:Remove();
	}
	var_39_object = var_1_object;
	if(var_39_object != 0) {
		@@@var_1_object:Remove();
	}
	var_40_object = var_2_object;
	if(var_40_object != 0) {
		@@@var_2_object:Remove();
	}
	return 0;
}


func_142(var_43_bool, var_44_string, var_45_string)
{
	var_46_object = Obj(); var_47_object = Obj();
	FindActor(var_47_object, var_44_string);
	var_48_bool = var_47_object == 0; //@ne
	if(var_48_bool != 0) {
		var_43_bool = 0;
		return 2;
	}
	Trigger(var_47_object, var_45_string);
	var_43_bool = 1;
	return 2;
}
EMIT "Stack[-1] = 0";


func_112()
{
	EventDisable(26);
	func_99(var_3_string, var_4_object, var_5_object);
	return 0;
}


func_83()
{
	SetVariable("d7q01", (int)-1);
	func_112();
	return 0;
}


func_117(var_54_object)
{
	var_55_object = Obj(); var_56_object = Obj();
	FindActor(var_56_object, "player");
	var_56_object = var_54_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_154(var_51_object, var_52_string, var_53_string)
{
	var_58_object = Obj(); var_59_bool = 0; var_60_cvector = CVector(0,0,0); var_61_cvector = CVector(0,0,0); var_62_object = Obj(); var_63_bool = 0; var_64_cvector = CVector(0,0,0); var_65_cvector = CVector(0,0,0);
	var_66_bool = var_51_object == 0; //@nz
	if(var_66_bool != 0) {
		return 8;
	}
	GetSceneByName(var_62_object, var_52_string);
	@@var_62_object:GetLocator(var_53_string, var_63_bool, var_64_cvector, var_65_cvector);
	var_67_bool = var_63_bool == 0; //@nz
	if(var_67_bool != 0) {
		var_69_int = "Teleport location '" + var_53_string;
		var_71_int = var_69_int + "' not found in scene '";
		var_72_int = var_71_int + var_52_string;
		var_74_int = var_72_int + "'";
		Trace(var_74_int);
	} else {
		Teleport(var_51_object, var_62_object, var_64_cvector, var_65_cvector);
	}
	return 8;
	
}
EMIT "Stack[-4] = 0";


func_91()
{
	SetVariable("d7q01", (int)1000);
	func_112();
	return 0;
}


func_124(var_8_object, var_9_object, var_10_string, var_11_string, var_12_string)
{
	var_13_bool = 0; var_14_cvector = CVector(0,0,0); var_15_cvector = CVector(0,0,0); var_16_object = Obj(); var_17_bool = 0; var_18_cvector = CVector(0,0,0); var_19_cvector = CVector(0,0,0); var_20_object = Obj();
	@@var_9_object:GetLocator(var_10_string, var_17_bool, var_18_cvector, var_19_cvector);
	var_21_bool = var_17_bool == 0; //@nz
	if(var_21_bool != 0) {
		var_23_int = "Locator " + var_10_string;
		var_25_int = var_23_int + " doesn't exist";
		Trace(var_25_int);
	} else {
		@@var_9_object:AddStationaryActor(Obj(), var_18_cvector, var_19_cvector, var_11_string, var_12_string);
	}
	var_20_object = var_8_object;
	return 8;
	
}
EMIT "Stack[-1] = 0";



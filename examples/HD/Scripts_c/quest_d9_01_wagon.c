// @IMPORTS: Hold/0,GetMainOutdoorScene/1,IsPlayerActor/2,rand/2,Sleep/1,SimulateAttack/2,CreateObjectVector/1,Trace/1
// @STRINGS: W:pt_gun_soldier|W:pers_soldat|W:gun_sentry.xml|A:add|W:pt_gun_sanitar|W:pers_sanitar|W:d9q01_sanitar.xml|W:pt_gun_guard_soldier|W:soldier.xml|W:pt_gun_guard_sanitar|W:sanitar_stat.xml|A:size|A:get|A:GetActor|A:GetLocator|W:Locator |W: doesn't exist|A:AddStationaryActor
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars=object params=0
// @EVENT_23: op=0x4e vars=object

task_0_event_23(var_0_object, var_1_object)
{
	var_2_bool = 0; var_3_int = 0; var_4_int = 0; var_5_object = Obj(); var_6_object = Obj(); var_7_float = 0; var_8_bool = 0; var_9_int = 0; var_10_int = 0; var_11_object = Obj(); var_12_object = Obj(); var_13_float = 0;
	var_14_bool = var_0_object == 0; //@nz
	if(var_14_bool != 0) {
		return 12;
	}
	IsPlayerActor(var_1_object, var_8_bool);
	var_15_bool = var_8_bool;
	if(var_15_bool != 0) {
		EventDisable(23);
		@@@var_0_object:size(var_9_int);
		var_10_int = 0;

	Label_90:
		var_16_bool = var_10_int < var_9_int;
		if(var_16_bool != 0) {
			@@@var_0_object:get(var_11_object, var_10_int);
			@@var_11_object:GetActor(var_12_object);
			var_17_object = var_12_object;
			if(var_17_object != 0) {
				rand(var_13_float, (float)0.3499999940395355);
				Sleep(var_13_float);
				SimulateAttack(var_12_object, var_1_object);
			}
			var_12_object = 0;
			var_11_object = 0;
			var_10_int = var_10_int + (int)1;
			goto Label_90;
		}
		EventEnable(23);
	}
	return 12;
}


main(var_0_object)
{
	var_1_object = Obj();
	func_112(var_1_object);
	var_0_object = var_1_object;
	func_11(var_0_object);
	
Label_7:
	Hold();
	goto Label_7;
}
EMIT "Return(); Pop(0)";


func_112(var_1_object)
{
	var_2_object = Obj(); var_3_object = Obj();
	CreateObjectVector(var_3_object);
	var_3_object = var_1_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_11(var_0_object)
{
	var_4_object = Obj(); var_5_int = 0; var_6_int = 0; var_7_int = 0; var_8_int = 0; var_9_object = Obj(); var_10_int = 0; var_11_int = 0; var_12_int = 0; var_13_int = 0;
	GetMainOutdoorScene(var_9_object);
	var_10_int = 1;
	
Label_15:
	var_15_bool = var_10_int <= (int)5;
	if(var_15_bool != 0) {
		var_16_object = Obj(); var_17_object = Obj(); var_18_string = ""; var_19_string = ""; var_20_string = "";
		var_9_object = var_17_object;
		var_18_string = "pt_gun_soldier" + var_10_int;
		func_118(var_16_object, var_17_object, var_18_string, "pers_soldat", "gun_sentry.xml");
		@@@var_0_object:add(var_16_object);
		var_10_int = var_10_int + (int)1;
		goto Label_15;
	}
	var_11_int = 1;
	
Label_32:
	var_37_bool = var_11_int <= (int)2;
	if(var_37_bool != 0) {
		var_38_object = Obj(); var_39_object = Obj(); var_40_string = ""; var_41_string = ""; var_42_string = "";
		var_9_object = var_39_object;
		var_40_string = "pt_gun_sanitar" + var_11_int;
		func_118(var_38_object, var_39_object, var_40_string, "pers_sanitar", "d9q01_sanitar.xml");
		var_11_int = var_11_int + (int)1;
		goto Label_32;
	}
	var_12_int = 1;
	
Label_47:
	var_46_bool = var_12_int <= (int)3;
	if(var_46_bool != 0) {
		var_47_object = Obj(); var_48_object = Obj(); var_49_string = ""; var_50_string = ""; var_51_string = "";
		var_9_object = var_48_object;
		var_49_string = "pt_gun_guard_soldier" + var_12_int;
		func_118(var_47_object, var_48_object, var_49_string, "pers_soldat", "soldier.xml");
		var_12_int = var_12_int + (int)1;
		goto Label_47;
	}
	var_13_int = 1;
	
Label_62:
	var_55_bool = var_13_int <= (int)2;
	if(var_55_bool != 0) {
		var_56_object = Obj(); var_57_object = Obj(); var_58_string = ""; var_59_string = ""; var_60_string = "";
		var_9_object = var_57_object;
		var_58_string = "pt_gun_guard_sanitar" + var_13_int;
		func_118(var_56_object, var_57_object, var_58_string, "pers_sanitar", "sanitar_stat.xml");
		var_13_int = var_13_int + (int)1;
		goto Label_62;
	}
	return 10;
}
EMIT "Stack[-5] = 0";


func_118(var_16_object, var_17_object, var_18_string, var_19_string, var_20_string)
{
	var_22_bool = 0; var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); var_25_object = Obj(); var_26_bool = 0; var_27_cvector = CVector(0,0,0); var_28_cvector = CVector(0,0,0); var_29_object = Obj();
	@@var_17_object:GetLocator(var_18_string, var_26_bool, var_27_cvector, var_28_cvector);
	var_30_bool = var_26_bool == 0; //@nz
	if(var_30_bool != 0) {
		var_32_int = "Locator " + var_18_string;
		var_34_int = var_32_int + " doesn't exist";
		Trace(var_34_int);
	} else {
		@@var_17_object:AddStationaryActor(Obj(), var_27_cvector, var_28_cvector, var_19_string, var_20_string);
	}
	var_29_object = var_16_object;
	return 8;
	
}
EMIT "Stack[-1] = 0";



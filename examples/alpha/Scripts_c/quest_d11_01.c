// @IMPORTS: Hold/0,Trace/1,GetMainOutdoorScene/1,GetSceneByName/2,FindActor/2,RemoveActor/1,Trigger/2,SetVariable/2,CreateObjectVector/1,AddActor/6
// @STRINGS: W:init_soldiers|W:pt_d11q01_soldier|W:pers_soldat|W:d11q01_soldier.xml|A:add|W:pt_d11q01_msoldier|W:d11q01_msoldier.xml|W:init_girl|W:shouse1_kabak|W:pt_d11q01_girl|W:pers_nudegirl|W:d11q01_girl.xml|W:remove_andrei|W:NPC_Andrei|W:restore_andrei|W:pt_andrei|W:NPC_Danko_Andrei.xml|W:soldier_attack|A:size|A:get|A:GetActor|A:Remove|W:fail|W:completed|W:d11q01|W:cleanup|A:GetLocator|W:Locator |W: doesn't exist|A:AddStationaryActor|A:clear
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars=object,object,object params=0
// @EVENT_26: op=0x8 vars=string

task_0_event_26(var_0_object, var_1_object, var_2_object, var_3_string)
{
	var_4_object = Obj(); var_5_int = 0; var_6_object = Obj(); var_7_object = Obj(); var_8_object = Obj(); var_9_int = 0; var_10_int = 0; var_11_object = Obj(); var_12_object = Obj(); var_13_object = Obj(); var_14_int = 0; var_15_object = Obj(); var_16_object = Obj(); var_17_object = Obj(); var_18_int = 0; var_19_int = 0; var_20_object = Obj(); var_21_object = Obj();
	Trace(var_3_string);
	var_23_bool = var_3_string == "init_soldiers";
	if(var_23_bool != 0) {
		GetMainOutdoorScene(var_13_object);
		var_14_int = 1;

	Label_17:
		var_25_bool = var_14_int <= (int)10;
		if(var_25_bool != 0) {
			var_26_object = Obj(); var_27_object = Obj(); var_28_string = ""; var_29_string = ""; var_30_string = "";
			var_13_object = var_27_object;
			var_28_string = "pt_d11q01_soldier" + var_14_int;
			func_181(var_26_object, var_27_object, var_28_string, "pers_soldat", "d11q01_soldier.xml");
			@@@var_1_object:add(var_26_object);
			var_14_int = var_14_int + (int)1;
			goto Label_17;
		}
		var_46_object = Obj(); var_47_object = Obj(); var_48_string = ""; var_49_string = ""; var_50_string = "";
		var_13_object = var_47_object;
		func_181(var_46_object, var_47_object, "pt_d11q01_msoldier", "pers_soldat", "d11q01_msoldier.xml");
		var_2_object = var_46_object;
		var_13_object = 0;
	} else {
		var_52_bool = var_3_string == "init_girl";
		if(var_52_bool != 0) {
			GetSceneByName(var_15_object, "shouse1_kabak");
			var_54_object = Obj(); var_55_object = Obj(); var_56_string = ""; var_57_string = ""; var_58_string = "";
			var_15_object = var_55_object;
			func_163(var_54_object, var_55_object, "pt_d11q01_girl", "pers_nudegirl", "d11q01_girl.xml");
			var_0_object = var_54_object;
			var_15_object = 0;
			goto Label_125;
		}
		var_73_bool = var_3_string == "remove_andrei";
		if(var_73_bool != 0) {
			FindActor(var_16_object, "NPC_Andrei");
			RemoveActor(var_16_object);
			var_16_object = 0;
			goto Label_125;
		}
		var_76_bool = var_3_string == "restore_andrei";
		if(var_76_bool != 0) {
			GetSceneByName(var_17_object, "shouse1_kabak");
			var_78_object = Obj(); var_79_object = Obj(); var_80_string = ""; var_81_string = ""; var_82_string = "";
			var_17_object = var_79_object;
			func_163(var_78_object, var_79_object, "pt_andrei", "NPC_Andrei", "NPC_Danko_Andrei.xml");
			var_17_object = 0;
			goto Label_125;
		}
		var_84_bool = var_3_string == "soldier_attack";
		if(var_84_bool != 0) {
			@@@var_1_object:size(var_18_int);
			var_19_int = 0;

		Label_90:
			var_85_bool = var_19_int < var_18_int;
			if(var_85_bool != 0) {
				@@@var_1_object:get(var_20_object, var_19_int);
				var_86_object = var_20_object;
				if(var_86_object != 0) {
					@@var_20_object:GetActor(var_21_object);
					var_87_bool = var_21_object == 0; //@nz
					if(var_87_bool != 0) {
						@@var_20_object:Remove();
					} else {
						Trigger(var_21_object, "attack");
			}
					goto Label_125;
		}
				var_91_bool = var_3_string == "fail";
				if(var_91_bool != 0) {
					func_126();
					goto Label_125;
				}
				var_108_bool = var_3_string == "completed";
				if(var_108_bool == 0) goto Label_125;
				func_134();
			}
			var_21_object = 0;
		}
		var_20_object = 0;
		var_19_int = var_19_int + (int)1;
		goto Label_90;
	}
Label_125:
	return 18;
	
}


main(var_0_object, var_1_object, var_2_object)
{
	var_3_object = Obj();
	func_157(var_3_object);
	var_1_object = var_3_object;
	
Label_4:
	Hold();
	goto Label_4;
}
EMIT "Return(); Pop(0)";


func_163(var_54_object, var_55_object, var_56_string, var_57_string, var_58_string)
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


func_134()
{
	SetVariable("d11q01", (int)1000);
	func_142(var_19_int, var_20_object, var_21_object);
	return 0;
}


func_199(var_94_object)
{
	var_95_int = 0; var_96_int = 0; var_97_object = Obj(); var_98_int = 0; var_99_int = 0; var_100_object = Obj();
	@@var_94_object:size(var_98_int);
	var_99_int = 0;
	
Label_203:
	var_101_bool = var_99_int < var_98_int;
	if(var_101_bool != 0) {
		@@var_94_object:get(var_100_object, var_99_int);
		var_102_object = var_100_object;
		if(var_102_object != 0) {
			@@var_100_object:Remove();
		}
		var_100_object = 0;
		var_99_int = var_99_int + (int)1;
		goto Label_203;
	}
	@@var_94_object:clear();
	return 6;
}


func_142(var_0_object, var_1_object, var_2_object)
{
	EventDisable(26);
	var_94_object = Obj();
	var_94_object = var_1_object;
	func_199(var_94_object);
	var_104_object = var_2_object;
	if(var_104_object != 0) {
		@@@var_2_object:Remove();
	}
	var_105_object = var_0_object;
	if(var_105_object != 0) {
		Trigger(var_0_object, "cleanup");
	}
	return 0;
}


func_181(var_26_object, var_27_object, var_28_string, var_29_string, var_30_string)
{
	var_32_bool = 0; var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_object = Obj(); var_36_bool = 0; var_37_cvector = CVector(0,0,0); var_38_cvector = CVector(0,0,0); var_39_object = Obj();
	@@var_27_object:GetLocator(var_28_string, var_36_bool, var_37_cvector, var_38_cvector);
	var_40_bool = var_36_bool == 0; //@nz
	if(var_40_bool != 0) {
		var_42_int = "Locator " + var_28_string;
		var_44_int = var_42_int + " doesn't exist";
		Trace(var_44_int);
	} else {
		@@var_27_object:AddStationaryActor(Obj(), var_37_cvector, var_38_cvector, var_29_string, var_30_string);
	}
	var_39_object = var_26_object;
	return 8;
	
}
EMIT "Stack[-1] = 0";


func_157(var_3_object)
{
	var_4_object = Obj(); var_5_object = Obj();
	CreateObjectVector(var_5_object);
	var_5_object = var_3_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_126()
{
	SetVariable("d11q01", (int)-1);
	func_142(var_19_int, var_20_object, var_21_object);
	return 0;
}



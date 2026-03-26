// @IMPORTS: SetVariable/2,Trace/1,GetMainOutdoorScene/1,Trigger/2,GetVariable/2,RemoveActor/1,GetGameTime/1,SetTimeEvent/2,Hold/0,self/1,GetDiaryRoot/1,SetDiarySection/1,CreateDiaryEntry/4
// @STRINGS: W:d2q02|W:mpatrol_unload|A:Remove|W:patrol1_unload|W:patrol2_unload|W:put_patrol|W:pt_d2q02_driver|W:pers_birdmask|W:d2q02_driver.xml|W:pt_d2q02_mpatrol|W:pers_patrool|W:d2q02_mpatrol.xml|W:pt_d2q02_patrol1|W:d2q02_patrol1.xml|W:pt_d2q02_patrol2|W:d2q02_patrol2.xml|W:player_attack|A:GetActor|W:kill_player|W:completed|W:driver_unload|A:GetLocator|W:Locator |W: doesn't exist|A:AddStationaryActor|W:Can't retrieve diary root|A:Find|W:Can't find diary parent with id: |A:AddChild|W:player_diary|A:GetCategory|W:Adding diary entry
// @GLOBALS: 0:object:
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars=object,object,object,object,bool,bool params=0
// @EVENT_26: op=0xb vars=string
// @EVENT_9: op=0x135 vars=int,float
// @PE: 0xc4,0x135

task_0_event_26(var_0_object, var_1_object, var_2_object, var_3_object, var_4_bool, var_5_bool, var_6_string)
{
	var_7_object = Obj(); var_8_object = Obj(); var_9_object = Obj(); var_10_object = Obj();
	Trace(var_6_string);
	var_11_bool = var_5_bool;
	if(var_11_bool != 0) {
		var_13_bool = var_6_string == "mpatrol_unload";
		if(var_13_bool != 0) {
			@@@var_1_object:Remove();
			var_1_object = 0;
		} else {
				var_139_bool = var_6_string == "patrol1_unload";
				if(var_139_bool != 0) {
					@@@var_2_object:Remove();
					var_2_object = 0;
					goto Label_36;
				}
				var_141_bool = var_6_string == "patrol2_unload";
				if(var_141_bool == 0) goto Label_36;
				@@@var_3_object:Remove();
				var_3_object = 0;
		}
	}
Label_36:
	var_14_bool = var_4_bool == 0; //@nz
	if(var_14_bool != 0) {
		var_16_bool = var_6_string == "put_patrol";
		if(var_16_bool != 0) {
			GetMainOutdoorScene(var_9_object);
			var_17_object = Obj(); var_18_object = Obj(); var_19_string = ""; var_20_string = ""; var_21_string = "";
			var_9_object = var_18_object;
			func_320(var_17_object, var_18_object, "pt_d2q02_driver", "pers_birdmask", "d2q02_driver.xml");
			var_0_object = var_17_object;
			var_35_object = Obj(); var_36_object = Obj(); var_37_string = ""; var_38_string = ""; var_39_string = "";
			var_9_object = var_36_object;
			func_320(var_35_object, var_36_object, "pt_d2q02_mpatrol", "pers_patrool", "d2q02_mpatrol.xml");
			var_1_object = var_35_object;
			var_40_object = Obj(); var_41_object = Obj(); var_42_string = ""; var_43_string = ""; var_44_string = "";
			var_9_object = var_41_object;
			func_320(var_40_object, var_41_object, "pt_d2q02_patrol1", "pers_patrool", "d2q02_patrol1.xml");
			var_2_object = var_40_object;
			var_45_object = Obj(); var_46_object = Obj(); var_47_string = ""; var_48_string = ""; var_49_string = "";
			var_9_object = var_46_object;
			func_320(var_45_object, var_46_object, "pt_d2q02_patrol2", "pers_patrool", "d2q02_patrol2.xml");
			var_3_object = var_45_object;
			var_9_object = 0;
		} else {
			var_51_bool = var_6_string == "player_attack";
			if(var_51_bool != 0) {
				@@@var_1_object:GetActor(var_10_object);
				Trigger(var_10_object, "kill_player");
				@@@var_2_object:GetActor(var_10_object);
				Trigger(var_10_object, "kill_player");
				@@@var_3_object:GetActor(var_10_object);
				Trigger(var_10_object, "kill_player");
				var_5_bool = true;
				func_162();
				var_10_object = 0;
				goto Label_107;
			}
			var_125_bool = var_6_string == "completed";
			if(var_125_bool == 0) goto Label_107;
			func_162();
	}
		var_127_bool = var_6_string == "driver_unload";
		if(var_127_bool != 0) {
			var_128_int = 0;
			func_196(var_7_object, var_8_object, var_9_object, var_10_object, (int)0);
			goto Label_139;
		}
		var_130_bool = var_6_string == "mpatrol_unload";
		if(var_130_bool != 0) {
			var_131_int = 0;
			func_196(var_7_object, var_8_object, var_9_object, var_10_object, (int)1);
			goto Label_139;
		}
		var_133_bool = var_6_string == "patrol1_unload";
		if(var_133_bool != 0) {
			var_134_int = 0;
			func_196(var_7_object, var_8_object, var_9_object, var_10_object, (int)2);
			goto Label_139;
		}
		var_136_bool = var_6_string == "patrol2_unload";
		if(var_136_bool == 0) goto Label_139;
		var_137_int = 0;
		func_196(var_7_object, var_8_object, var_9_object, var_10_object, (int)3);

	}
Label_107:
	goto Label_139;
	
Label_139:
	return 4;
	
}


task_0_event_9(var_0_object, var_1_object, var_2_object, var_3_object, var_4_bool, var_5_bool, var_6_int, var_7_float)
{
	func_140();
	return 0;
}


main(var_0_object, var_1_object, var_2_object, var_3_object, var_4_bool, var_5_bool)
{
	var_4_bool = false;
	var_5_bool = false;
	SetVariable("d2q02", (int)1);
	var_8_int = 0;
	func_290((int)2);
	return 0;
}


func_320(var_17_object, var_18_object, var_19_string, var_20_string, var_21_string)
{
	var_22_bool = 0; var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); var_25_object = Obj(); var_26_bool = 0; var_27_cvector = CVector(0,0,0); var_28_cvector = CVector(0,0,0); var_29_object = Obj();
	@@var_18_object:GetLocator(var_19_string, var_26_bool, var_27_cvector, var_28_cvector);
	var_30_bool = var_26_bool == 0; //@nz
	if(var_30_bool != 0) {
		var_32_int = "Locator " + var_19_string;
		var_34_int = var_32_int + " doesn't exist";
		Trace(var_34_int);
	} else {
		@@var_18_object:AddStationaryActor(Obj(), var_27_cvector, var_28_cvector, var_20_string, var_21_string);
	}
	var_29_object = var_17_object;
	return 8;
	
}
EMIT "Stack[-1] = 0";


func_162()
{
	var_55_int = 0; var_56_int = 0;
	GetVariable("d2q02", var_56_int);
	var_58_bool = 0;
	var_58_bool = 0;
	var_60_bool = var_56_int != (int)1000;
	if(var_60_bool != 0) {
		var_62_bool = var_56_int != (int)-1;
		if(var_62_bool != 0) {
			var_58_bool = 1;
		}
	}
	if(var_58_bool != 0) {
		SetVariable("d2q02", (int)1000);
		func_380();
		func_187(var_56_int);
	}
	return 2;
}


func_290(var_8_int)
{
	var_9_float = 0; var_10_float = 0;
	GetGameTime(var_10_float);
	var_12_float = var_8_int * (int)24;
	var_13_bool = var_10_float >= var_12_float;
	if(var_13_bool != 0) {
		func_187(var_10_float);
	} else {
		var_50_float = var_8_int * (int)24;
		SetTimeEvent((int)0, var_50_float);
		Hold();
	}
	return 2;
	
}


func_196(var_0_object, var_1_object, var_2_object, var_3_object, var_14_int)
{
	var_15_bool = 0;
	var_15_bool = 0;
	var_16_bool = 0;
	var_16_bool = 0;
	var_17_bool = 0;
	var_17_bool = 0;
	var_18_bool = 0;
	var_18_bool = 1;
	var_20_bool = var_14_int == (int)0;
	if(var_20_bool != 1) {
		var_21_bool = 0; var_22_object = Obj();
		var_22_object = var_0_object;
		func_280(var_21_bool, var_22_object);
		if(var_21_bool != 1) {
			var_18_bool = 0;
		}
	}
	if(var_18_bool != 0) {
		var_26_bool = 0;
		var_26_bool = 1;
		var_28_bool = var_14_int == (int)1;
		if(var_28_bool != 1) {
			var_29_bool = 0; var_30_object = Obj();
			var_30_object = var_1_object;
			func_280(var_29_bool, var_30_object);
			if(var_29_bool != 1) {
				var_26_bool = 0;
			}
		}
		if(var_26_bool != 0) {
			var_17_bool = 1;
		}
	}
	if(var_17_bool != 0) {
		var_31_bool = 0;
		var_31_bool = 1;
		var_33_bool = var_14_int == (int)2;
		if(var_33_bool != 1) {
			var_34_bool = 0; var_35_object = Obj();
			var_35_object = var_2_object;
			func_280(var_34_bool, var_35_object);
			if(var_34_bool != 1) {
				var_31_bool = 0;
			}
		}
		if(var_31_bool != 0) {
			var_16_bool = 1;
		}
	}
	if(var_16_bool != 0) {
		var_36_bool = 0;
		var_36_bool = 1;
		var_38_bool = var_14_int == (int)3;
		if(var_38_bool != 1) {
			var_39_bool = 0; var_40_object = Obj();
			var_40_object = var_3_object;
			func_280(var_39_bool, var_40_object);
			if(var_39_bool != 1) {
				var_36_bool = 0;
			}
		}
		if(var_36_bool != 0) {
			var_15_bool = 1;
		}
	}
	if(var_15_bool != 0) {
		EventDisable(26);
		var_41_object = var_0_object;
		if(var_41_object != 0) {
			@@@var_0_object:Remove();
		}
		var_42_object = var_1_object;
		if(var_42_object != 0) {
			@@@var_1_object:Remove();
		}
		var_43_object = var_2_object;
		if(var_43_object != 0) {
			@@@var_2_object:Remove();
		}
		var_44_object = var_3_object;
		if(var_44_object != 0) {
			@@@var_3_object:Remove();
		}
		var_45_object = Obj();
		func_314(var_45_object);
		RemoveActor(var_45_object);
	}
	return 0;
}


func_396()
{
	var_13_object = Obj(); var_14_object = Obj();
	Trace("Adding diary entry");
	CreateDiaryEntry(var_14_object, (int)62, (int)2, (int)12144);
	var_19_bool = 0; var_20_object = Obj(); var_21_int = 0;
	var_14_object = var_20_object;
	func_351(var_19_bool, var_20_object, (int)11);
	return 2;
}
EMIT "Stack[-1] = 0";


func_140()
{
	var_8_int = 0; var_9_int = 0;
	GetVariable("d2q02", var_9_int);
	var_12_bool = var_9_int != (int)1000;
	if(var_12_bool != 0) {
		func_151();
	}
	return 2;
}


func_338(var_28_object)
{
	var_29_object = Obj(); var_30_object = Obj();
	GetDiaryRoot(var_30_object);
	var_31_bool = var_30_object == 0; //@nz
	if(var_31_bool != 0) {
		Trace("Can't retrieve diary root");
		var_28_object = 0;
		return 2;
	}
	var_30_object = var_28_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_151()
{
	func_396();
	SetVariable("d2q02", (int)-1);
	func_187(var_9_int);
	return 0;
}


func_280(var_21_bool, var_22_object)
{
	var_23_object = Obj(); var_24_object = Obj();
	var_25_bool = var_22_object == 0; //@nz
	if(var_25_bool != 0) {
		var_21_bool = 1;
		return 2;
	}
	@@var_22_object:GetActor(var_24_object);
	var_21_bool = !var_24_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_412()
{
	return 0;
}


func_314(var_45_object)
{
	var_46_object = Obj(); var_47_object = Obj();
	self(var_47_object);
	var_47_object = var_45_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_187(var_4_bool)
{
	func_412();
	var_4_bool = true;
	var_14_int = 0;
	func_196(var_5_bool, var_8_int, var_9_float, var_10_float, (int)-1);
	return 0;
}


func_380()
{
	var_65_object = Obj(); var_66_object = Obj();
	Trace("Adding diary entry");
	CreateDiaryEntry(var_66_object, (int)61, (int)2, (int)12143);
	var_71_bool = 0; var_72_object = Obj(); var_73_int = 0;
	var_66_object = var_72_object;
	func_351(var_71_bool, var_72_object, (int)11);
	return 2;
}
EMIT "Stack[-1] = 0";


func_351(var_19_bool, var_20_object, var_21_int)
{
	var_22_object = Obj(); var_23_object = Obj(); var_24_int = 0; var_25_object = Obj(); var_26_object = Obj(); var_27_int = 0;
	func_338(Obj());
	var_28_object = var_25_object;
	@@var_25_object:Find(var_21_int, var_26_object);
	var_33_bool = var_26_object == 0; //@nz
	if(var_33_bool != 0) {
		var_35_int = "Can't find diary parent with id: " + var_21_int;
		Trace(var_35_int);
		var_19_bool = 0;
		return 6;
	}
	@@var_26_object:AddChild(var_20_object);
	SetVariable("player_diary", (int)1);
	@@var_20_object:GetCategory(var_27_int);
	SetDiarySection(var_27_int);
	var_19_bool = 0;
	return 6;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";



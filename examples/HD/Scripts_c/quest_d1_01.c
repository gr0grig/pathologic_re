// @IMPORTS: GetMainOutdoorScene/1,GetSceneByName/2,Trigger/2,Hold/0,Trace/1,GetVariable/2,SetVariable/2,RemoveActor/1,self/1,AddActor/6,FindActor/2
// @STRINGS: W:d1q01_trigger|W:d1q01_trigger.xml|W:warehouse_rubin|W:norubin|W:place_masks|W:pt_d1q01_birdmask|W:pers_birdmask|W:d1q01_birdmask.xml|W:pt_d1q01_whitemask|W:pers_whitemask|W:d1q01_whitemask.xml|W:remove_masks|A:Remove|W:cutscene_end|W:pt_d1q01_morlok|W:pers_morlok|W:d1q01_morlok.xml|W:pt_d1q01_worker|W:pers_worker|W:d1q01_worker.xml|W:remove_cutscene|W:attack|W:place_patrol|W:pt_d1q01_patrol1|W:pers_patrool|W:d1q01_patrol.xml|W:pt_d1q01_patrol2|W:place_morlok_run|W:pt_d1q01_morlok_run_path|W:d1q01_morlok_run.xml|W:place_rubin|W:cot_viktor|W:pt_d1q01_rubin|W:NPC_Rubin|W:d1q01_rubin.xml|W:unlock_doors|W:cleanup|W:d1q01|W:fail|W:completed|W:icot_eva@door1|A:GetLocator|W:Locator |W: doesn't exist|A:AddStationaryActor|W:Door |W: not found|W:locked|A:SetProperty|W:cot_anna@door1|W:cot_julia@door1|W:cot_lara@door1|W:house_vlad@door1|W:dt_house_1_04@door1
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars=object,object,object,object,object,object,object,object,bool params=0
// @EVENT_26: op=0x18 vars=string

task_0_event_26(var_0_object, var_1_object, var_2_object, var_3_object, var_4_object, var_5_object, var_6_object, var_7_object, var_8_bool, var_9_string)
{
	var_10_object = Obj(); var_11_object = Obj(); var_12_object = Obj(); var_13_object = Obj(); var_14_object = Obj(); var_15_int = 0; var_16_object = Obj(); var_17_object = Obj(); var_18_object = Obj(); var_19_object = Obj(); var_20_object = Obj(); var_21_int = 0;
	Trace(var_9_string);
	var_23_bool = var_9_string == "place_masks";
	if(var_23_bool != 0) {
		GetMainOutdoorScene(var_16_object);
		var_24_object = Obj(); var_25_object = Obj(); var_26_string = ""; var_27_string = ""; var_28_string = "";
		var_16_object = var_25_object;
		func_309(var_24_object, var_25_object, "pt_d1q01_birdmask", "pers_birdmask", "d1q01_birdmask.xml");
		var_0_object = var_24_object;
		var_42_object = Obj(); var_43_object = Obj(); var_44_string = ""; var_45_string = ""; var_46_string = "";
		var_16_object = var_43_object;
		func_309(var_42_object, var_43_object, "pt_d1q01_whitemask", "pers_whitemask", "d1q01_whitemask.xml");
		var_1_object = var_42_object;
		var_16_object = 0;
	} else {
		var_48_bool = var_9_string == "remove_masks";
		if(var_48_bool != 0) {
			@@@var_0_object:Remove();
			@@@var_1_object:Remove();
			goto Label_197;
		}
		var_50_bool = var_9_string == "cutscene_end";
		if(var_50_bool != 0) {
			GetMainOutdoorScene(var_17_object);
			var_51_object = Obj(); var_52_object = Obj(); var_53_string = ""; var_54_string = ""; var_55_string = "";
			var_17_object = var_52_object;
			func_291(var_51_object, var_52_object, "pt_d1q01_morlok", "pers_morlok", "d1q01_morlok.xml");
			var_3_object = var_51_object;
			var_69_object = Obj(); var_70_object = Obj(); var_71_string = ""; var_72_string = ""; var_73_string = "";
			var_17_object = var_70_object;
			func_291(var_69_object, var_70_object, "pt_d1q01_worker", "pers_worker", "d1q01_worker.xml");
			var_4_object = var_69_object;
			var_74_bool = var_8_bool;
			if(var_74_bool != 0) {
				func_214(var_18_object, var_19_object, var_20_object, var_21_int);
			}
			goto Label_197;
		}
		var_82_bool = var_9_string == "remove_cutscene";
		if(var_82_bool != 0) {
			func_214(var_18_object, var_19_object, var_20_object, var_21_int);
			goto Label_197;
		}
		var_84_bool = var_9_string == "attack";
		if(var_84_bool != 0) {
			var_85_object = var_3_object;
			if(var_85_object != 0) {
				Trigger(var_3_object, "attack");
			}
			var_87_object = var_4_object;
			if(var_87_object != 0) {
				Trigger(var_4_object, "attack");
			}
			goto Label_197;
		}
		var_90_bool = var_9_string == "place_patrol";
		if(var_90_bool != 0) {
			GetMainOutdoorScene(var_18_object);
			var_91_object = Obj(); var_92_object = Obj(); var_93_string = ""; var_94_string = ""; var_95_string = "";
			var_18_object = var_92_object;
			func_291(var_91_object, var_92_object, "pt_d1q01_patrol1", "pers_patrool", "d1q01_patrol.xml");
			var_5_object = var_91_object;
			var_96_object = Obj(); var_97_object = Obj(); var_98_string = ""; var_99_string = ""; var_100_string = "";
			var_18_object = var_97_object;
			func_291(var_96_object, var_97_object, "pt_d1q01_patrol2", "pers_patrool", "d1q01_patrol.xml");
			var_6_object = var_96_object;
			goto Label_197;
		}
		var_102_bool = var_9_string == "place_morlok_run";
		if(var_102_bool != 0) {
			GetMainOutdoorScene(var_19_object);
			var_103_object = Obj(); var_104_object = Obj(); var_105_string = ""; var_106_string = ""; var_107_string = "";
			var_19_object = var_104_object;
			func_291(var_103_object, var_104_object, "pt_d1q01_morlok_run_path", "pers_morlok", "d1q01_morlok_run.xml");
			goto Label_197;
		}
		var_109_bool = var_9_string == "place_rubin";
		if(var_109_bool != 0) {
			GetSceneByName(var_20_object, "cot_viktor");
			var_111_object = Obj(); var_112_object = Obj(); var_113_string = ""; var_114_string = ""; var_115_string = "";
			var_20_object = var_112_object;
			func_291(var_111_object, var_112_object, "pt_d1q01_rubin", "NPC_Rubin", "d1q01_rubin.xml");
			var_7_object = var_111_object;
			goto Label_197;
		}
		var_117_bool = var_9_string == "unlock_doors";
		if(var_117_bool != 0) {
			func_370();
			goto Label_197;
		}
		var_137_bool = var_9_string == "cleanup";
		if(var_137_bool != 0) {
			GetVariable("d1q01", var_21_int);
			var_140_bool = var_21_int != (int)1000;
			if(var_140_bool != 0) {
				func_198();
			} else {
				func_231(Obj(), Obj(), Obj(), Obj(), var_21_int);
		}
			var_161_bool = var_9_string == "fail";
			if(var_161_bool != 0) {
				func_198();
				goto Label_197;
			}
			var_163_bool = var_9_string == "completed";
			if(var_163_bool == 0) goto Label_197;
			func_206();
		}
		goto Label_197;
	}
Label_197:
	return 12;
	
}


main(var_0_object, var_1_object, var_2_object, var_3_object, var_4_object, var_5_object, var_6_object, var_7_object, var_8_bool)
{
	var_9_object = Obj(); var_10_object = Obj();
	func_344();
	GetMainOutdoorScene(var_10_object);
	var_29_object = Obj(); var_30_object = Obj(); var_31_string = ""; var_32_string = "";
	var_10_object = var_30_object;
	func_283(var_29_object, var_30_object, "d1q01_trigger", "d1q01_trigger.xml");
	var_2_object = var_29_object;
	GetSceneByName(var_10_object, "warehouse_rubin");
	Trigger(var_10_object, "norubin");
	
Label_19:
	Hold();
	goto Label_19;
}
EMIT "Return(); Pop(2)";
EMIT "Stack[-1] = 0";


func_291(var_51_object, var_52_object, var_53_string, var_54_string, var_55_string)
{
	var_56_bool = 0; var_57_cvector = CVector(0,0,0); var_58_cvector = CVector(0,0,0); var_59_object = Obj(); var_60_bool = 0; var_61_cvector = CVector(0,0,0); var_62_cvector = CVector(0,0,0); var_63_object = Obj();
	@@var_52_object:GetLocator(var_53_string, var_60_bool, var_61_cvector, var_62_cvector);
	var_64_bool = var_60_bool == 0; //@nz
	if(var_64_bool != 0) {
		var_66_int = "Locator " + var_53_string;
		var_68_int = var_66_int + " doesn't exist";
		Trace(var_68_int);
	} else {
		AddActor(Obj(), var_54_string, var_52_object, var_61_cvector, var_62_cvector, var_55_string);
	}
	var_63_object = var_51_object;
	return 8;
	
}
EMIT "Stack[-1] = 0";


func_198()
{
	SetVariable("d1q01", (int)-1);
	func_231(var_17_object, var_18_object, var_19_object, var_20_object, var_21_int);
	return 0;
}


func_231(var_0_object, var_1_object, var_5_object, var_6_object, var_7_object)
{
	var_143_object = Obj(); var_144_object = Obj();
	EventDisable(26);
	func_214(var_20_object, var_21_int, var_143_object, var_144_object);
	var_145_object = var_0_object;
	if(var_145_object != 0) {
		@@@var_0_object:Remove();
	}
	var_146_object = var_1_object;
	if(var_146_object != 0) {
		@@@var_1_object:Remove();
	}
	var_147_object = var_5_object;
	if(var_147_object != 0) {
		Trigger(var_5_object, "cleanup");
	}
	var_149_object = var_5_object;
	if(var_149_object != 0) {
		Trigger(var_6_object, "cleanup");
	}
	var_151_object = var_7_object;
	if(var_151_object != 0) {
		Trigger(var_7_object, "cleanup");
	}
	GetSceneByName(var_144_object, "warehouse_rubin");
	Trigger(var_144_object, "rubin");
	var_155_string = ""; var_156_bool = 0;
	func_327("icot_eva@door1", (bool)0);
	var_157_object = Obj();
	func_277(var_157_object);
	RemoveActor(var_157_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_327(var_11_string, var_12_bool)
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


func_206()
{
	SetVariable("d1q01", (int)1000);
	func_231(var_17_object, var_18_object, var_19_object, var_20_object, var_21_int);
	return 0;
}


func_370()
{
	var_118_string = ""; var_119_bool = 0;
	func_327("cot_anna@door1", (bool)0);
	var_128_string = ""; var_129_bool = 0;
	func_327("cot_julia@door1", (bool)0);
	var_130_string = ""; var_131_bool = 0;
	func_327("cot_lara@door1", (bool)0);
	var_132_string = ""; var_133_bool = 0;
	func_327("house_vlad@door1", (bool)0);
	var_134_string = ""; var_135_bool = 0;
	func_327("dt_house_1_04@door1", (bool)0);
	return 0;
}


func_309(var_24_object, var_25_object, var_26_string, var_27_string, var_28_string)
{
	var_29_bool = 0; var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_object = Obj(); var_33_bool = 0; var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_object = Obj();
	@@var_25_object:GetLocator(var_26_string, var_33_bool, var_34_cvector, var_35_cvector);
	var_37_bool = var_33_bool == 0; //@nz
	if(var_37_bool != 0) {
		var_39_int = "Locator " + var_26_string;
		var_41_int = var_39_int + " doesn't exist";
		Trace(var_41_int);
	} else {
		@@var_25_object:AddStationaryActor(Obj(), var_34_cvector, var_35_cvector, var_27_string, var_28_string);
	}
	var_36_object = var_24_object;
	return 8;
	
}
EMIT "Stack[-1] = 0";


func_214(var_2_object, var_3_object, var_4_object, var_8_bool)
{
	var_75_object = var_2_object;
	if(var_75_object != 0) {
		Trigger(var_2_object, "cleanup");
	}
	var_77_object = var_3_object;
	if(var_77_object != 0) {
		Trigger(var_3_object, "cleanup");
	}
	var_79_object = var_4_object;
	if(var_79_object != 0) {
		Trigger(var_4_object, "cleanup");
	}
	var_8_bool = true;
	return 0;
}


func_277(var_157_object)
{
	var_158_object = Obj(); var_159_object = Obj();
	self(var_159_object);
	var_159_object = var_157_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_344()
{
	var_11_string = ""; var_12_bool = 0;
	func_327("cot_anna@door1", (bool)1);
	var_21_string = ""; var_22_bool = 0;
	func_327("cot_julia@door1", (bool)1);
	var_23_string = ""; var_24_bool = 0;
	func_327("cot_lara@door1", (bool)1);
	var_25_string = ""; var_26_bool = 0;
	func_327("house_vlad@door1", (bool)1);
	var_27_string = ""; var_28_bool = 0;
	func_327("dt_house_1_04@door1", (bool)1);
	return 0;
}


func_283(var_29_object, var_30_object, var_31_string, var_32_string)
{
	var_33_object = Obj(); var_34_object = Obj();
	AddActor(var_34_object, var_31_string, var_30_object, CVector(0.0, 0.0, 0.0), CVector(0.0, 0.0, 1.0), var_32_string);
	var_34_object = var_29_object;
	return 2;
}
EMIT "Stack[-1] = 0";



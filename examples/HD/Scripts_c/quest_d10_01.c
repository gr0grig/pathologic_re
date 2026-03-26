// @IMPORTS: GetSceneByName/2,Trigger/2,Hold/0,Trace/1,GetMainOutdoorScene/1,GetVariable/2,SetVariable/2,RemoveActor/1,self/1,CreateObjectVector/1,AddActor/6,AddActorByType/6,FindActor/2
// @STRINGS: W:warehouse_rubin|W:house_petr@door1|W:init_house|W:NPC_Petr|W:house_petr|W:pt_d10q01_soldier|W:pers_soldat|W:d10q01_soldier.xml|A:add|W:pt_d10q01_msoldier|W:d10q01_msoldier.xml|W:pt_d10q01_sketch|W:scripted_container|W:d10q01_blueprint.xml|W:pt_d10q01_petr|W:pers_birdmask|W:d10q01_petr.xml|W:pt_d10q01_fire|W:scripted|W:d10q01_fire.xml|W:soldier_fight|W:attack|W:house_unload|W:d10q01SoldierTalk|W:cleanup|W:d10q01|W:fail|W:completed|W:pt_petr|W:NPC_Danko_Petr.xml|A:GetLocator|W:Locator |W: doesn't exist|W:Door |W: not found|W:locked|A:SetProperty|A:size|A:get
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars=object,object,object,object,bool,bool params=0
// @EVENT_26: op=0x17 vars=string

task_0_event_26(var_0_object, var_1_object, var_2_object, var_3_object, var_4_bool, var_5_bool, var_6_string)
{
	var_7_object = Obj(); var_8_int = 0; var_9_int = 0; var_10_int = 0; var_11_object = Obj(); var_12_int = 0; var_13_int = 0; var_14_int = 0;
	Trace(var_6_string);
	var_16_bool = var_6_string == "init_house";
	if(var_16_bool != 0) {
		var_17_bool = 0; var_18_string = "";
		func_273(var_17_bool, "NPC_Petr");
		var_5_bool = true;
		GetSceneByName(var_11_object, "house_petr");
		var_12_int = 1;

	Label_38:
		var_24_bool = var_12_int <= (int)4;
		if(var_24_bool != 0) {
			var_25_object = Obj(); var_26_object = Obj(); var_27_string = ""; var_28_string = ""; var_29_string = "";
			var_11_object = var_26_object;
			var_27_string = "pt_d10q01_soldier" + var_12_int;
			func_220(var_25_object, var_26_object, var_27_string, "pers_soldat", "d10q01_soldier.xml");
			@@@var_0_object:add(var_25_object);
			var_12_int = var_12_int + (int)1;
			goto Label_38;
		}
		var_45_object = Obj(); var_46_object = Obj(); var_47_string = ""; var_48_string = ""; var_49_string = "";
		var_11_object = var_46_object;
		func_220(var_45_object, var_46_object, "pt_d10q01_msoldier", "pers_soldat", "d10q01_msoldier.xml");
		@@@var_0_object:add(var_45_object);
		var_50_object = Obj(); var_51_object = Obj(); var_52_string = ""; var_53_string = ""; var_54_string = "";
		var_11_object = var_51_object;
		func_238(var_50_object, var_51_object, "pt_d10q01_sketch", "scripted_container", "d10q01_blueprint.xml");
		var_1_object = var_50_object;
		GetMainOutdoorScene(var_11_object);
		var_68_object = Obj(); var_69_object = Obj(); var_70_string = ""; var_71_string = ""; var_72_string = "";
		var_11_object = var_69_object;
		func_220(var_68_object, var_69_object, "pt_d10q01_petr", "pers_birdmask", "d10q01_petr.xml");
		var_2_object = var_68_object;
		var_73_object = Obj(); var_74_object = Obj(); var_75_string = ""; var_76_string = ""; var_77_string = "";
		var_11_object = var_74_object;
		func_238(var_73_object, var_74_object, "pt_d10q01_fire", "scripted", "d10q01_fire.xml");
		var_3_object = var_73_object;
	} else {
		var_79_bool = var_6_string == "soldier_fight";
		if(var_79_bool != 0) {
			var_80_object = Obj(); var_81_string = "";
			var_80_object = var_0_object;
			func_285(var_80_object, "attack");
			var_4_bool = true;
			goto Label_145;
		}
		var_93_bool = var_6_string == "house_unload";
		if(var_93_bool != 0) {
			GetVariable("d10q01SoldierTalk", var_13_int);
			var_95_int = var_13_int;
			if(var_95_int != 0) {
				var_96_string = ""; var_97_bool = 0;
				func_256("house_petr@door1", (bool)1);
			}
			goto Label_145;
		}
		var_107_bool = var_6_string == "cleanup";
		if(var_107_bool != 0) {
			GetVariable("d10q01", var_14_int);
			var_110_bool = var_14_int != (int)1000;
			if(var_110_bool != 0) {
				func_146();
			} else {
				func_162(Obj(), var_12_int, var_13_int, var_14_int);
		}
			var_136_bool = var_6_string == "fail";
			if(var_136_bool != 0) {
				func_146();
				goto Label_145;
			}
			var_138_bool = var_6_string == "completed";
			if(var_138_bool == 0) goto Label_145;
			func_154();
		}
		goto Label_145;
	}
Label_145:
	return 8;
	
}


main(var_0_object, var_1_object, var_2_object, var_3_object, var_4_bool, var_5_bool)
{
	var_6_object = Obj(); var_7_object = Obj();
	var_5_bool = false;
	GetSceneByName(var_7_object, "warehouse_rubin");
	Trigger(var_7_object, "rubin");
	var_10_string = ""; var_11_bool = 0;
	func_256("house_petr@door1", (bool)0);
	var_20_object = Obj();
	func_214(var_20_object);
	var_0_object = var_20_object;
	var_4_bool = false;
	
Label_18:
	Hold();
	goto Label_18;
}
EMIT "Return(); Pop(2)";
EMIT "Stack[-1] = 0";


func_256(var_10_string, var_11_bool)
{
	var_12_object = Obj(); var_13_object = Obj();
	FindActor(var_13_object, var_10_string);
	var_14_bool = var_13_object == 0; //@nz
	if(var_14_bool != 0) {
		var_16_int = "Door " + var_10_string;
		var_18_int = var_16_int + " not found";
		Trace(var_18_int);
	} else {
		@@var_13_object:SetProperty("locked", var_11_bool);
	}
	return 2;
	
}
EMIT "Stack[-1] = 0";


func_162(var_0_object, var_1_object, var_2_object, var_3_object)
{
	var_113_object = Obj(); var_114_object = Obj();
	EventDisable(26);
	var_115_object = Obj(); var_116_string = "";
	var_115_object = var_0_object;
	func_285(var_115_object, "cleanup");
	var_117_object = var_1_object;
	if(var_117_object != 0) {
		Trigger(var_1_object, "cleanup");
	}
	var_119_object = var_2_object;
	if(var_119_object != 0) {
		Trigger(var_2_object, "cleanup");
	}
	var_121_object = var_3_object;
	if(var_121_object != 0) {
		Trigger(var_3_object, "cleanup");
	}
	var_123_string = ""; var_124_bool = 0;
	func_256("house_petr@door1", (bool)0);
	var_125_bool = var_5_bool;
	if(var_125_bool != 0) {
		GetSceneByName(var_114_object, "house_petr");
		var_127_object = Obj(); var_128_object = Obj(); var_129_string = ""; var_130_string = ""; var_131_string = "";
		var_114_object = var_128_object;
		func_220(var_127_object, var_128_object, "pt_petr", "NPC_Petr", "NPC_Danko_Petr.xml");
		var_114_object = 0;
	}
	var_132_object = Obj();
	func_208(var_132_object);
	RemoveActor(var_132_object);
	return 2;
}


func_238(var_50_object, var_51_object, var_52_string, var_53_string, var_54_string)
{
	var_55_bool = 0; var_56_cvector = CVector(0,0,0); var_57_cvector = CVector(0,0,0); var_58_object = Obj(); var_59_bool = 0; var_60_cvector = CVector(0,0,0); var_61_cvector = CVector(0,0,0); var_62_object = Obj();
	@@var_51_object:GetLocator(var_52_string, var_59_bool, var_60_cvector, var_61_cvector);
	var_63_bool = var_59_bool == 0; //@nz
	if(var_63_bool != 0) {
		var_65_int = "Locator " + var_52_string;
		var_67_int = var_65_int + " doesn't exist";
		Trace(var_67_int);
	} else {
		AddActorByType(Obj(), var_53_string, var_51_object, var_60_cvector, var_61_cvector, var_54_string);
	}
	var_62_object = var_50_object;
	return 8;
	
}
EMIT "Stack[-1] = 0";


func_208(var_132_object)
{
	var_133_object = Obj(); var_134_object = Obj();
	self(var_134_object);
	var_134_object = var_132_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_273(var_17_bool, var_18_string)
{
	var_19_object = Obj(); var_20_object = Obj();
	FindActor(var_20_object, var_18_string);
	var_21_bool = var_20_object == 0; //@nz
	if(var_21_bool != 0) {
		var_17_bool = 0;
		return 2;
	}
	RemoveActor(var_20_object);
	var_17_bool = 1;
	return 2;
}
EMIT "Stack[-1] = 0";


func_146()
{
	SetVariable("d10q01", (int)-1);
	func_162(var_11_object, var_12_int, var_13_int, var_14_int);
	return 0;
}


func_214(var_20_object)
{
	var_21_object = Obj(); var_22_object = Obj();
	CreateObjectVector(var_22_object);
	var_22_object = var_20_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_154()
{
	SetVariable("d10q01", (int)1000);
	func_162(var_11_object, var_12_int, var_13_int, var_14_int);
	return 0;
}


func_220(var_25_object, var_26_object, var_27_string, var_28_string, var_29_string)
{
	var_31_bool = 0; var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_object = Obj(); var_35_bool = 0; var_36_cvector = CVector(0,0,0); var_37_cvector = CVector(0,0,0); var_38_object = Obj();
	@@var_26_object:GetLocator(var_27_string, var_35_bool, var_36_cvector, var_37_cvector);
	var_39_bool = var_35_bool == 0; //@nz
	if(var_39_bool != 0) {
		var_41_int = "Locator " + var_27_string;
		var_43_int = var_41_int + " doesn't exist";
		Trace(var_43_int);
	} else {
		AddActor(Obj(), var_28_string, var_26_object, var_36_cvector, var_37_cvector, var_29_string);
	}
	var_38_object = var_25_object;
	return 8;
	
}
EMIT "Stack[-1] = 0";


func_285(var_80_object, var_81_string)
{
	var_82_int = 0; var_83_int = 0; var_84_object = Obj(); var_85_int = 0; var_86_int = 0; var_87_object = Obj();
	var_88_object = var_80_object;
	if(var_88_object != 0) {
		@@var_80_object:size(var_85_int);
		var_86_int = 0;

	Label_291:
		var_89_bool = var_86_int < var_85_int;
		if(var_89_bool != 0) {
			@@var_80_object:get(var_87_object, var_86_int);
			var_90_object = var_87_object;
			if(var_90_object != 0) {
				Trigger(var_87_object, var_81_string);
			}
			var_87_object = 0;
			var_86_int = var_86_int + (int)1;
			goto Label_291;
		}
	}
	return 6;
}



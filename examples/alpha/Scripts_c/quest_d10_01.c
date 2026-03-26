// @IMPORTS: Hold/0,Trace/1,GetSceneByName/2,GetMainOutdoorScene/1,SetVariable/2,Trigger/2,CreateObjectVector/1,AddActor/6,AddActorByType/6,FindActor/2,RemoveActor/1
// @STRINGS: W:init_house|W:NPC_Petr|W:house_petr|W:pt_d10q01_soldier|W:pers_soldat|W:d10q01_soldier.xml|A:add|W:pt_d10q01_msoldier|W:d10q01_msoldier.xml|W:pt_d10q01_sketch|W:scripted_container|W:d10q01_blueprint.xml|W:pt_d10q01_petr|W:pers_birdmask|W:d10q01_petr.xml|W:pt_d10q01_fire|W:scripted|W:d10q01_fire.xml|W:soldier_fight|W:attack|W:house_unload|W:house_petr@door1|W:fail|W:completed|W:d10q01|W:cleanup|A:GetLocator|W:Locator |W: doesn't exist|W:Door |W: not found|W:locked|A:SetProperty|A:size|A:get
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars=object,object,object,object,bool params=0
// @EVENT_26: op=0x9 vars=string

task_0_event_26(var_0_object, var_1_object, var_2_object, var_3_object, var_4_bool, var_5_string)
{
	var_6_object = Obj(); var_7_int = 0; var_8_object = Obj(); var_9_int = 0;
	Trace(var_5_string);
	var_11_bool = var_5_string == "init_house";
	if(var_11_bool != 0) {
		var_12_bool = 0; var_13_string = "";
		func_210(var_12_bool, "NPC_Petr");
		GetSceneByName(var_8_object, "house_petr");
		var_9_int = 1;

	Label_23:
		var_19_bool = var_9_int <= (int)4;
		if(var_19_bool != 0) {
			var_20_object = Obj(); var_21_object = Obj(); var_22_string = ""; var_23_string = ""; var_24_string = "";
			var_8_object = var_21_object;
			var_22_string = "pt_d10q01_soldier" + var_9_int;
			func_158(var_20_object, var_21_object, var_22_string, "pers_soldat", "d10q01_soldier.xml");
			@@@var_0_object:add(var_20_object);
			var_9_int = var_9_int + (int)1;
			goto Label_23;
		}
		var_40_object = Obj(); var_41_object = Obj(); var_42_string = ""; var_43_string = ""; var_44_string = "";
		var_8_object = var_41_object;
		func_158(var_40_object, var_41_object, "pt_d10q01_msoldier", "pers_soldat", "d10q01_msoldier.xml");
		@@@var_0_object:add(var_40_object);
		var_45_object = Obj(); var_46_object = Obj(); var_47_string = ""; var_48_string = ""; var_49_string = "";
		var_8_object = var_46_object;
		func_176(var_45_object, var_46_object, "pt_d10q01_sketch", "scripted_container", "d10q01_blueprint.xml");
		var_1_object = var_45_object;
		GetMainOutdoorScene(var_8_object);
		var_63_object = Obj(); var_64_object = Obj(); var_65_string = ""; var_66_string = ""; var_67_string = "";
		var_8_object = var_64_object;
		func_158(var_63_object, var_64_object, "pt_d10q01_petr", "pers_birdmask", "d10q01_petr.xml");
		var_2_object = var_63_object;
		var_68_object = Obj(); var_69_object = Obj(); var_70_string = ""; var_71_string = ""; var_72_string = "";
		var_8_object = var_69_object;
		func_176(var_68_object, var_69_object, "pt_d10q01_fire", "scripted", "d10q01_fire.xml");
		var_3_object = var_68_object;
		var_8_object = 0;
	} else {
		var_74_bool = var_5_string == "soldier_fight";
		if(var_74_bool != 0) {
			var_75_object = Obj(); var_76_string = "";
			var_75_object = var_0_object;
			func_222(var_75_object, "attack");
			var_4_bool = true;
			goto Label_108;
		}
		var_87_bool = var_5_string == "house_unload";
		if(var_87_bool != 0) {
			var_88_string = ""; var_89_bool = 0;
			func_194("house_petr@door1", (bool)1);
			goto Label_108;
		}
		var_99_bool = var_5_string == "fail";
		if(var_99_bool != 0) {
			func_109();
			goto Label_108;
		}
		var_113_bool = var_5_string == "completed";
		if(var_113_bool == 0) goto Label_108;
		func_117();
	}
Label_108:
	return 4;
	
}


main(var_0_object, var_1_object, var_2_object, var_3_object, var_4_bool)
{
	var_5_object = Obj();
	func_152(var_5_object);
	var_0_object = var_5_object;
	var_4_bool = false;
	
Label_5:
	Hold();
	goto Label_5;
}
EMIT "Return(); Pop(0)";


func_194(var_88_string, var_89_bool)
{
	var_90_object = Obj(); var_91_object = Obj();
	FindActor(var_91_object, var_88_string);
	var_92_bool = var_91_object == 0; //@nz
	if(var_92_bool != 0) {
		var_94_int = "Door " + var_88_string;
		var_96_int = var_94_int + " not found";
		Trace(var_96_int);
	}
	@@var_91_object:SetProperty("locked", var_89_bool);
	return 2;
}
EMIT "Stack[-1] = 0";


func_109()
{
	SetVariable("d10q01", (int)-1);
	func_125(var_6_object, var_7_int, var_8_object, var_9_int);
	return 0;
}


func_176(var_45_object, var_46_object, var_47_string, var_48_string, var_49_string)
{
	var_50_bool = 0; var_51_cvector = CVector(0,0,0); var_52_cvector = CVector(0,0,0); var_53_object = Obj(); var_54_bool = 0; var_55_cvector = CVector(0,0,0); var_56_cvector = CVector(0,0,0); var_57_object = Obj();
	@@var_46_object:GetLocator(var_47_string, var_54_bool, var_55_cvector, var_56_cvector);
	var_58_bool = var_54_bool == 0; //@nz
	if(var_58_bool != 0) {
		var_60_int = "Locator " + var_47_string;
		var_62_int = var_60_int + " doesn't exist";
		Trace(var_62_int);
	} else {
		AddActorByType(Obj(), var_48_string, var_46_object, var_55_cvector, var_56_cvector, var_49_string);
	}
	var_57_object = var_45_object;
	return 8;
	
}
EMIT "Stack[-1] = 0";


func_210(var_12_bool, var_13_string)
{
	var_14_object = Obj(); var_15_object = Obj();
	FindActor(var_15_object, var_13_string);
	var_16_bool = var_15_object == 0; //@nz
	if(var_16_bool != 0) {
		var_12_bool = 0;
		return 2;
	}
	RemoveActor(var_15_object);
	var_12_bool = 1;
	return 2;
}
EMIT "Stack[-1] = 0";


func_117()
{
	SetVariable("d10q01", (int)1000);
	func_125(var_6_object, var_7_int, var_8_object, var_9_int);
	return 0;
}


func_152(var_5_object)
{
	var_6_object = Obj(); var_7_object = Obj();
	CreateObjectVector(var_7_object);
	var_7_object = var_5_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_158(var_20_object, var_21_object, var_22_string, var_23_string, var_24_string)
{
	var_26_bool = 0; var_27_cvector = CVector(0,0,0); var_28_cvector = CVector(0,0,0); var_29_object = Obj(); var_30_bool = 0; var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_object = Obj();
	@@var_21_object:GetLocator(var_22_string, var_30_bool, var_31_cvector, var_32_cvector);
	var_34_bool = var_30_bool == 0; //@nz
	if(var_34_bool != 0) {
		var_36_int = "Locator " + var_22_string;
		var_38_int = var_36_int + " doesn't exist";
		Trace(var_38_int);
	} else {
		AddActor(Obj(), var_23_string, var_21_object, var_31_cvector, var_32_cvector, var_24_string);
	}
	var_33_object = var_20_object;
	return 8;
	
}
EMIT "Stack[-1] = 0";


func_125(var_0_object, var_1_object, var_2_object, var_3_object)
{
	EventDisable(26);
	var_102_object = Obj(); var_103_string = "";
	var_102_object = var_0_object;
	func_222(var_102_object, "cleanup");
	var_104_object = var_1_object;
	if(var_104_object != 0) {
		Trigger(var_1_object, "cleanup");
	}
	var_106_object = var_2_object;
	if(var_106_object != 0) {
		Trigger(var_2_object, "cleanup");
	}
	var_108_object = var_3_object;
	if(var_108_object != 0) {
		Trigger(var_3_object, "cleanup");
	}
	var_110_string = ""; var_111_bool = 0;
	func_194("house_petr@door1", (bool)0);
	return 0;
}


func_222(var_75_object, var_76_string)
{
	var_77_int = 0; var_78_int = 0; var_79_object = Obj(); var_80_int = 0; var_81_int = 0; var_82_object = Obj();
	@@var_75_object:size(var_80_int);
	var_81_int = 0;
	
Label_226:
	var_83_bool = var_81_int < var_80_int;
	if(var_83_bool != 0) {
		@@var_75_object:get(var_82_object, var_81_int);
		var_84_object = var_82_object;
		if(var_84_object != 0) {
			Trigger(var_82_object, var_76_string);
		}
		var_82_object = 0;
		var_81_int = var_81_int + (int)1;
		goto Label_226;
	}
	return 6;
}



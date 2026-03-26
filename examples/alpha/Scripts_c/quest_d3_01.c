// @IMPORTS: Hold/0,GetMainOutdoorScene/1,irand/2,Trace/1,AddScriptedActor/5,AddActor/6,Trigger/2,SetVariable/2,CreateObjectVector/1,AddBlankActor/4
// @STRINGS: W:Patrol location: |W:pt_d3q01_patrol|W:pers_patrool|W:d3q01_cpatrol.xml|A:add|W:d3q01_patrol.xml|W:d3q01_corpse1|W:actor_disp.bin|W:d3q01_corpse2|W:d3q01_corpse3|W:pt_d3q01_gpatrol1|W:d3q01_gpatrol.xml|W:pt_d3q01_gpatrol2|W:pt_d3q01_gpatrol3|W:d3q01_graveyard_fire|W:d3q01_graveyard_fire.xml|W:place_butchers|W:patrol_talk|W:gpatrol_attack|W:quest_d3_01_teleport|A:size|A:get|A:GetActor|W:kill_player|W:put_item|W:gpatrol_talk|W:talk_player|W:fail|W:completed|W:d3q01|W:cleanup|A:clear|A:GetLocator|W:Locator |W: doesn't exist|A:AddStationaryActor|A:Remove
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars=object,object,object,object,bool params=0
// @EVENT_26: op=0x85 vars=string

task_0_event_26(var_0_object, var_1_object, var_2_object, var_3_object, var_4_bool, var_5_string)
{
	var_6_int = 0; var_7_int = 0; var_8_object = Obj(); var_9_object = Obj(); var_10_int = 0; var_11_int = 0; var_12_object = Obj(); var_13_object = Obj(); var_14_int = 0; var_15_int = 0; var_16_object = Obj(); var_17_object = Obj(); var_18_int = 0; var_19_int = 0; var_20_object = Obj(); var_21_object = Obj();
	Trace(var_5_string);
	var_23_bool = var_5_string == "place_butchers";
	if(var_23_bool != 0) {
		func_17(var_20_object, var_21_object);
	} else {
		var_88_bool = var_5_string == "patrol_talk";
		if(var_88_bool != 0) {
			func_95(var_20_object, var_21_object);
			goto Label_228;
		}
		var_111_bool = var_5_string == "gpatrol_attack";
		if(var_111_bool != 0) {
			var_112_bool = var_4_bool == 0; //@nz
			if(var_112_bool != 0) {
				var_4_bool = true;
				var_113_object = Obj(); var_114_string = "";
				func_275(var_113_object, "quest_d3_01_teleport");
			}
			@@@var_2_object:size(var_14_int);
			var_15_int = 0;

		Label_163:
			var_121_bool = var_15_int < var_14_int;
			if(var_121_bool != 0) {
				@@@var_2_object:get(var_16_object, var_15_int);
				@@var_16_object:GetActor(var_17_object);
				var_122_object = var_17_object;
				if(var_122_object != 0) {
					Trigger(var_17_object, "kill_player");
				}
				var_17_object = 0;
				var_16_object = 0;
				var_15_int = var_15_int + (int)1;
				goto Label_163;
			}
			Trigger(var_3_object, "put_item");
			func_245(var_18_int, var_19_int, var_20_object, var_21_object);
			goto Label_228;
		}
		var_150_bool = var_5_string == "gpatrol_talk";
		if(var_150_bool != 0) {
			Trigger(var_3_object, "put_item");
			@@@var_2_object:size(var_18_int);
			var_19_int = 0;

		Label_195:
			var_152_bool = var_19_int < var_18_int;
			if(var_152_bool != 0) {
				@@@var_2_object:get(var_20_object, var_19_int);
				@@var_20_object:GetActor(var_21_object);
				var_153_object = var_21_object;
				if(var_153_object != 0) {
					Trigger(var_21_object, "talk_player");
				}
				var_21_object = 0;
				var_20_object = 0;
				var_19_int = var_19_int + (int)1;
				goto Label_195;
			}
			func_245(var_18_int, var_19_int, var_20_object, var_21_object);
			goto Label_228;
		}
		var_157_bool = var_5_string == "fail";
		if(var_157_bool != 0) {
			func_229();
			goto Label_228;
		}
		var_161_bool = var_5_string == "completed";
		if(var_161_bool == 0) goto Label_228;
		func_237();
	}
Label_228:
	return 16;
	
}


main(var_0_object, var_1_object, var_2_object, var_3_object, var_4_bool)
{
	var_4_bool = false;
	var_5_object = Obj();
	func_269(var_5_object);
	var_0_object = var_5_object;
	var_8_object = Obj();
	func_269(var_8_object);
	var_2_object = var_8_object;
	var_9_object = Obj();
	func_269(var_9_object);
	var_1_object = var_9_object;
	
Label_13:
	Hold();
	goto Label_13;
}
EMIT "Return(); Pop(0)";


func_323(var_136_object, var_137_string)
{
	var_138_int = 0; var_139_int = 0; var_140_object = Obj(); var_141_int = 0; var_142_int = 0; var_143_object = Obj();
	@@var_136_object:size(var_141_int);
	var_142_int = 0;
	
Label_327:
	var_144_bool = var_142_int < var_141_int;
	if(var_144_bool != 0) {
		@@var_136_object:get(var_143_object, var_142_int);
		var_145_object = var_143_object;
		if(var_145_object != 0) {
			Trigger(var_143_object, var_137_string);
		}
		var_143_object = 0;
		var_142_int = var_142_int + (int)1;
		goto Label_327;
	}
	return 6;
}


func_229()
{
	SetVariable("d3q01", (int)-1);
	func_264();
	return 0;
}


func_264()
{
	EventDisable(26);
	func_245(var_18_int, var_19_int, var_20_object, var_21_object);
	return 0;
}


func_237()
{
	SetVariable("d3q01", (int)1000);
	func_264();
	return 0;
}


func_269(var_5_object)
{
	var_6_object = Obj(); var_7_object = Obj();
	CreateObjectVector(var_7_object);
	var_7_object = var_5_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_304(var_126_object)
{
	var_127_int = 0; var_128_int = 0; var_129_object = Obj(); var_130_int = 0; var_131_int = 0; var_132_object = Obj();
	@@var_126_object:size(var_130_int);
	var_131_int = 0;
	
Label_308:
	var_133_bool = var_131_int < var_130_int;
	if(var_133_bool != 0) {
		@@var_126_object:get(var_132_object, var_131_int);
		var_134_object = var_132_object;
		if(var_134_object != 0) {
			@@var_132_object:Remove();
		}
		var_132_object = 0;
		var_131_int = var_131_int + (int)1;
		goto Label_308;
	}
	@@var_126_object:clear();
	return 6;
}


func_17(var_0_object, var_1_object)
{
	var_24_object = Obj(); var_25_int = 0; var_26_object = Obj(); var_27_object = Obj(); var_28_int = 0; var_29_object = Obj();
	GetMainOutdoorScene(var_27_object);
	irand(var_28_int, (int)3);
	var_32_int = "Patrol location: " + var_28_int;
	Trace(var_32_int);
	var_33_object = Obj(); var_34_object = Obj(); var_35_string = ""; var_36_string = ""; var_37_string = "";
	var_27_object = var_34_object;
	var_40_int = var_28_int + (int)1;
	var_35_string = "pt_d3q01_patrol" + var_40_int;
	func_286(var_33_object, var_34_object, var_35_string, "pers_patrool", "d3q01_cpatrol.xml");
	@@@var_0_object:add(var_33_object);
	var_54_object = Obj(); var_55_object = Obj(); var_56_string = ""; var_57_string = ""; var_58_string = "";
	var_27_object = var_55_object;
	var_61_int = var_28_int + (int)1;
	var_63_int = var_61_int % (int)3;
	var_65_int = var_63_int + (int)1;
	var_56_string = "pt_d3q01_patrol" + var_65_int;
	func_286(var_54_object, var_55_object, var_56_string, "pers_patrool", "d3q01_patrol.xml");
	@@@var_0_object:add(var_54_object);
	var_66_object = Obj(); var_67_object = Obj(); var_68_string = ""; var_69_string = ""; var_70_string = "";
	var_27_object = var_67_object;
	var_73_int = var_28_int + (int)2;
	var_75_int = var_73_int % (int)3;
	var_77_int = var_75_int + (int)1;
	var_68_string = "pt_d3q01_patrol" + var_77_int;
	func_286(var_66_object, var_67_object, var_68_string, "pers_patrool", "d3q01_patrol.xml");
	@@@var_0_object:add(var_66_object);
	AddScriptedActor(var_29_object, "d3q01_corpse1", "actor_disp.bin", var_27_object, CVector(0.0, 0.0, 0.0));
	@@@var_1_object:add(var_29_object);
	AddScriptedActor(var_29_object, "d3q01_corpse2", "actor_disp.bin", var_27_object, CVector(0.0, 0.0, 0.0));
	@@@var_1_object:add(var_29_object);
	AddScriptedActor(var_29_object, "d3q01_corpse3", "actor_disp.bin", var_27_object, CVector(0.0, 0.0, 0.0));
	@@@var_1_object:add(var_29_object);
	return 6;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-3] = 0";


func_275(var_113_object, var_114_string)
{
	var_115_object = Obj(); var_116_object = Obj(); var_117_object = Obj(); var_118_object = Obj();
	GetMainOutdoorScene(var_117_object);
	var_120_int = var_114_string + ".bin";
	AddBlankActor(var_118_object, var_117_object, var_114_string, var_120_int);
	var_118_object = var_113_object;
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_245(var_0_object, var_1_object, var_2_object, var_3_object)
{
	var_126_object = Obj();
	var_126_object = var_0_object;
	func_304(var_126_object);
	var_136_object = Obj(); var_137_string = "";
	var_136_object = var_1_object;
	func_323(var_136_object, "cleanup");
	@@@var_1_object:clear();
	var_147_object = Obj();
	var_147_object = var_2_object;
	func_304(var_147_object);
	Trigger(var_3_object, "cleanup");
	return 0;
}


func_286(var_33_object, var_34_object, var_35_string, var_36_string, var_37_string)
{
	var_41_bool = 0; var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_object = Obj(); var_45_bool = 0; var_46_cvector = CVector(0,0,0); var_47_cvector = CVector(0,0,0); var_48_object = Obj();
	@@var_34_object:GetLocator(var_35_string, var_45_bool, var_46_cvector, var_47_cvector);
	var_49_bool = var_45_bool == 0; //@nz
	if(var_49_bool != 0) {
		var_51_int = "Locator " + var_35_string;
		var_53_int = var_51_int + " doesn't exist";
		Trace(var_53_int);
	} else {
		@@var_34_object:AddStationaryActor(Obj(), var_46_cvector, var_47_cvector, var_36_string, var_37_string);
	}
	var_48_object = var_33_object;
	return 8;
	
}
EMIT "Stack[-1] = 0";


func_95(var_2_object, var_3_object)
{
	var_89_object = Obj(); var_90_object = Obj();
	GetMainOutdoorScene(var_90_object);
	var_91_object = Obj(); var_92_object = Obj(); var_93_string = ""; var_94_string = ""; var_95_string = "";
	var_90_object = var_92_object;
	func_286(var_91_object, var_92_object, "pt_d3q01_gpatrol1", "pers_patrool", "d3q01_gpatrol.xml");
	@@@var_2_object:add(var_91_object);
	var_96_object = Obj(); var_97_object = Obj(); var_98_string = ""; var_99_string = ""; var_100_string = "";
	var_90_object = var_97_object;
	func_286(var_96_object, var_97_object, "pt_d3q01_gpatrol2", "pers_patrool", "d3q01_gpatrol.xml");
	@@@var_2_object:add(var_96_object);
	var_101_object = Obj(); var_102_object = Obj(); var_103_string = ""; var_104_string = ""; var_105_string = "";
	var_90_object = var_102_object;
	func_286(var_101_object, var_102_object, "pt_d3q01_gpatrol3", "pers_patrool", "d3q01_gpatrol.xml");
	@@@var_2_object:add(var_101_object);
	AddActor(var_3_object, "d3q01_graveyard_fire", var_90_object, CVector(0.0, 0.0, 0.0), CVector(0.0, 0.0, 1.0), "d3q01_graveyard_fire.xml");
	return 2;
}
EMIT "Stack[-1] = 0";



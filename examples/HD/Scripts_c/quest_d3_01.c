// @IMPORTS: Hold/0,GetMainOutdoorScene/1,irand/2,Trace/1,AddScriptedActor/5,AddActor/6,Trigger/2,GetVariable/2,SetVariable/2,RemoveActor/1,self/1,CreateObjectVector/1,AddBlankActor/4
// @STRINGS: W:Patrol location: |W:pt_d3q01_patrol|W:pers_patrool|W:d3q01_cpatrol.xml|A:add|W:d3q01_patrol.xml|W:d3q01_corpse1|W:actor_disp.bin|W:d3q01_corpse2|W:d3q01_corpse3|W:pt_d3q01_gpatrol1|W:d3q01_gpatrol.xml|W:pt_d3q01_gpatrol2|W:pt_d3q01_gpatrol3|W:d3q01_graveyard_fire|W:d3q01_graveyard_fire.xml|W:place_butchers|W:patrol_talk|W:gpatrol_attack|W:quest_d3_01_teleport|A:size|A:get|A:GetActor|W:kill_player|W:put_item|W:gpatrol_talk|W:talk_player|W:cleanup|W:d3q01|W:fail|W:completed|A:GetLocator|W:Locator |W: doesn't exist|A:AddStationaryActor|A:Remove|A:clear
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars=object,object,object,object,bool params=0
// @EVENT_26: op=0x85 vars=string

task_0_event_26(var_0_object, var_1_object, var_2_object, var_3_object, var_4_bool, var_5_string)
{
	var_6_int = 0; var_7_int = 0; var_8_object = Obj(); var_9_object = Obj(); var_10_int = 0; var_11_int = 0; var_12_object = Obj(); var_13_object = Obj(); var_14_int = 0; var_15_int = 0; var_16_int = 0; var_17_object = Obj(); var_18_object = Obj(); var_19_int = 0; var_20_int = 0; var_21_object = Obj(); var_22_object = Obj(); var_23_int = 0;
	Trace(var_5_string);
	var_25_bool = var_5_string == "place_butchers";
	if(var_25_bool != 0) {
		func_17(var_22_object, var_23_int);
	} else {
		var_90_bool = var_5_string == "patrol_talk";
		if(var_90_bool != 0) {
			func_95(var_22_object, var_23_int);
			goto Label_245;
		}
		var_113_bool = var_5_string == "gpatrol_attack";
		if(var_113_bool != 0) {
			var_114_bool = var_4_bool == 0; //@nz
			if(var_114_bool != 0) {
				var_4_bool = true;
				var_115_object = Obj(); var_116_string = "";
				func_304(var_115_object, "quest_d3_01_teleport");
			}
			@@@var_2_object:size(var_15_int);
			var_16_int = 0;

		Label_163:
			var_123_bool = var_16_int < var_15_int;
			if(var_123_bool != 0) {
				@@@var_2_object:get(var_17_object, var_16_int);
				@@var_17_object:GetActor(var_18_object);
				var_124_object = var_18_object;
				if(var_124_object != 0) {
					Trigger(var_18_object, "kill_player");
				}
				var_18_object = 0;
				var_17_object = 0;
				var_16_int = var_16_int + (int)1;
				goto Label_163;
			}
			Trigger(var_3_object, "put_item");
			func_262(var_20_int, var_21_object, var_22_object, var_23_int);
			goto Label_245;
		}
		var_155_bool = var_5_string == "gpatrol_talk";
		if(var_155_bool != 0) {
			Trigger(var_3_object, "put_item");
			@@@var_2_object:size(var_19_int);
			var_20_int = 0;

		Label_195:
			var_157_bool = var_20_int < var_19_int;
			if(var_157_bool != 0) {
				@@@var_2_object:get(var_21_object, var_20_int);
				@@var_21_object:GetActor(var_22_object);
				var_158_object = var_22_object;
				if(var_158_object != 0) {
					Trigger(var_22_object, "talk_player");
				}
				var_22_object = 0;
				var_21_object = 0;
				var_20_int = var_20_int + (int)1;
				goto Label_195;
			}
			func_262(var_20_int, var_21_object, var_22_object, var_23_int);
			goto Label_245;
		}
		var_162_bool = var_5_string == "cleanup";
		if(var_162_bool != 0) {
			GetVariable("d3q01", var_23_int);
			var_165_bool = var_23_int != (int)1000;
			if(var_165_bool != 0) {
				func_246();
			} else {
				func_282();
		}
			var_172_bool = var_5_string == "fail";
			if(var_172_bool != 0) {
				func_246();
				goto Label_245;
			}
			var_174_bool = var_5_string == "completed";
			if(var_174_bool == 0) goto Label_245;
			func_254();
		}
		goto Label_245;
	}
Label_245:
	return 18;
	
}


main(var_0_object, var_1_object, var_2_object, var_3_object, var_4_bool)
{
	var_4_bool = false;
	var_5_object = Obj();
	func_298(var_5_object);
	var_0_object = var_5_object;
	var_8_object = Obj();
	func_298(var_8_object);
	var_2_object = var_8_object;
	var_9_object = Obj();
	func_298(var_9_object);
	var_1_object = var_9_object;
	
Label_13:
	Hold();
	goto Label_13;
}
EMIT "Return(); Pop(0)";


func_354(var_139_object, var_140_string)
{
	var_141_int = 0; var_142_int = 0; var_143_object = Obj(); var_144_int = 0; var_145_int = 0; var_146_object = Obj();
	var_147_object = var_139_object;
	if(var_147_object != 0) {
		@@var_139_object:size(var_144_int);
		var_145_int = 0;

	Label_360:
		var_148_bool = var_145_int < var_144_int;
		if(var_148_bool != 0) {
			@@var_139_object:get(var_146_object, var_145_int);
			var_149_object = var_146_object;
			if(var_149_object != 0) {
				Trigger(var_146_object, var_140_string);
			}
			var_146_object = 0;
			var_145_int = var_145_int + (int)1;
			goto Label_360;
		}
	}
	return 6;
}


func_292(var_168_object)
{
	var_169_object = Obj(); var_170_object = Obj();
	self(var_170_object);
	var_170_object = var_168_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_262(var_0_object, var_1_object, var_2_object, var_3_object)
{
	var_128_object = Obj();
	var_128_object = var_0_object;
	func_333(var_128_object);
	var_139_object = Obj(); var_140_string = "";
	var_139_object = var_1_object;
	func_354(var_139_object, "cleanup");
	var_1_object = 0;
	var_151_object = Obj();
	var_151_object = var_2_object;
	func_333(var_151_object);
	var_152_object = var_3_object;
	if(var_152_object != 0) {
		Trigger(var_3_object, "cleanup");
	}
	return 0;
}


func_298(var_5_object)
{
	var_6_object = Obj(); var_7_object = Obj();
	CreateObjectVector(var_7_object);
	var_7_object = var_5_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_333(var_128_object)
{
	var_129_int = 0; var_130_int = 0; var_131_object = Obj(); var_132_int = 0; var_133_int = 0; var_134_object = Obj();
	var_135_object = var_128_object;
	if(var_135_object != 0) {
		@@var_128_object:size(var_132_int);
		var_133_int = 0;

	Label_339:
		var_136_bool = var_133_int < var_132_int;
		if(var_136_bool != 0) {
			@@var_128_object:get(var_134_object, var_133_int);
			var_137_object = var_134_object;
			if(var_137_object != 0) {
				@@var_134_object:Remove();
			}
			var_134_object = 0;
			var_133_int = var_133_int + (int)1;
			goto Label_339;
		}
		@@var_128_object:clear();
	}
	return 6;
}


func_304(var_115_object, var_116_string)
{
	var_117_object = Obj(); var_118_object = Obj(); var_119_object = Obj(); var_120_object = Obj();
	GetMainOutdoorScene(var_119_object);
	var_122_int = var_116_string + ".bin";
	AddBlankActor(var_120_object, var_119_object, var_116_string, var_122_int);
	var_120_object = var_115_object;
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_17(var_0_object, var_1_object)
{
	var_26_object = Obj(); var_27_int = 0; var_28_object = Obj(); var_29_object = Obj(); var_30_int = 0; var_31_object = Obj();
	GetMainOutdoorScene(var_29_object);
	irand(var_30_int, (int)3);
	var_34_int = "Patrol location: " + var_30_int;
	Trace(var_34_int);
	var_35_object = Obj(); var_36_object = Obj(); var_37_string = ""; var_38_string = ""; var_39_string = "";
	var_29_object = var_36_object;
	var_42_int = var_30_int + (int)1;
	var_37_string = "pt_d3q01_patrol" + var_42_int;
	func_315(var_35_object, var_36_object, var_37_string, "pers_patrool", "d3q01_cpatrol.xml");
	@@@var_0_object:add(var_35_object);
	var_56_object = Obj(); var_57_object = Obj(); var_58_string = ""; var_59_string = ""; var_60_string = "";
	var_29_object = var_57_object;
	var_63_int = var_30_int + (int)1;
	var_65_int = var_63_int % (int)3;
	var_67_int = var_65_int + (int)1;
	var_58_string = "pt_d3q01_patrol" + var_67_int;
	func_315(var_56_object, var_57_object, var_58_string, "pers_patrool", "d3q01_patrol.xml");
	@@@var_0_object:add(var_56_object);
	var_68_object = Obj(); var_69_object = Obj(); var_70_string = ""; var_71_string = ""; var_72_string = "";
	var_29_object = var_69_object;
	var_75_int = var_30_int + (int)2;
	var_77_int = var_75_int % (int)3;
	var_79_int = var_77_int + (int)1;
	var_70_string = "pt_d3q01_patrol" + var_79_int;
	func_315(var_68_object, var_69_object, var_70_string, "pers_patrool", "d3q01_patrol.xml");
	@@@var_0_object:add(var_68_object);
	AddScriptedActor(var_31_object, "d3q01_corpse1", "actor_disp.bin", var_29_object, CVector(0.0, 0.0, 0.0));
	@@@var_1_object:add(var_31_object);
	AddScriptedActor(var_31_object, "d3q01_corpse2", "actor_disp.bin", var_29_object, CVector(0.0, 0.0, 0.0));
	@@@var_1_object:add(var_31_object);
	AddScriptedActor(var_31_object, "d3q01_corpse3", "actor_disp.bin", var_29_object, CVector(0.0, 0.0, 0.0));
	@@@var_1_object:add(var_31_object);
	return 6;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-3] = 0";


func_246()
{
	SetVariable("d3q01", (int)-1);
	func_282();
	return 0;
}


func_282()
{
	EventDisable(26);
	func_262(var_20_int, var_21_object, var_22_object, var_23_int);
	var_168_object = Obj();
	func_292(var_168_object);
	RemoveActor(var_168_object);
	return 0;
}


func_315(var_35_object, var_36_object, var_37_string, var_38_string, var_39_string)
{
	var_43_bool = 0; var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_object = Obj(); var_47_bool = 0; var_48_cvector = CVector(0,0,0); var_49_cvector = CVector(0,0,0); var_50_object = Obj();
	@@var_36_object:GetLocator(var_37_string, var_47_bool, var_48_cvector, var_49_cvector);
	var_51_bool = var_47_bool == 0; //@nz
	if(var_51_bool != 0) {
		var_53_int = "Locator " + var_37_string;
		var_55_int = var_53_int + " doesn't exist";
		Trace(var_55_int);
	} else {
		@@var_36_object:AddStationaryActor(Obj(), var_48_cvector, var_49_cvector, var_38_string, var_39_string);
	}
	var_50_object = var_35_object;
	return 8;
	
}
EMIT "Stack[-1] = 0";


func_254()
{
	SetVariable("d3q01", (int)1000);
	func_282();
	return 0;
}


func_95(var_2_object, var_3_object)
{
	var_91_object = Obj(); var_92_object = Obj();
	GetMainOutdoorScene(var_92_object);
	var_93_object = Obj(); var_94_object = Obj(); var_95_string = ""; var_96_string = ""; var_97_string = "";
	var_92_object = var_94_object;
	func_315(var_93_object, var_94_object, "pt_d3q01_gpatrol1", "pers_patrool", "d3q01_gpatrol.xml");
	@@@var_2_object:add(var_93_object);
	var_98_object = Obj(); var_99_object = Obj(); var_100_string = ""; var_101_string = ""; var_102_string = "";
	var_92_object = var_99_object;
	func_315(var_98_object, var_99_object, "pt_d3q01_gpatrol2", "pers_patrool", "d3q01_gpatrol.xml");
	@@@var_2_object:add(var_98_object);
	var_103_object = Obj(); var_104_object = Obj(); var_105_string = ""; var_106_string = ""; var_107_string = "";
	var_92_object = var_104_object;
	func_315(var_103_object, var_104_object, "pt_d3q01_gpatrol3", "pers_patrool", "d3q01_gpatrol.xml");
	@@@var_2_object:add(var_103_object);
	AddActor(var_3_object, "d3q01_graveyard_fire", var_92_object, CVector(0.0, 0.0, 0.0), CVector(0.0, 0.0, 1.0), "d3q01_graveyard_fire.xml");
	return 2;
}
EMIT "Stack[-1] = 0";



// @IMPORTS: GetActiveScene/1,GetSceneByName/2,Hold/0,Trace/1,Trigger/2,PlayNSSound/1,AddScene/1,sync/0,GetVariable/2,SetVariable/2,RemoveActor/1,FindActor/2,self/1,AddActor/6,Teleport/4,CreateDiaryEntry/4,GetDiaryRoot/1,SendWorldWndMessage/1,SetDiarySection/1
// @STRINGS: W:boiny@door1|W:storojka|W:pt_b11q01_klara|W:NPC_Klara|W:b11q01_klara_laska.xml|W:storojka_unload|W:remove_klara|W:cleanup|W:open_shaft|W:boiny_shaft_trigger|W:activate|W:iboiny_stones|W:shaft_drop|W:boiny_well.isc|W:boiny_well|W:pt_player|W:b11q01KlaraWillHelp|W:quest_b11_01_death_effect.bin|A:ApplyEffect|W:starshina_fight|W:b11q01|W:boiny_arena.isc|W:boiny_arena|W:open_well_exit|W:well_trigger|W:fight_win|W:fail|W:completed|W:deactivate|A:GetLocator|W:Locator |W: doesn't exist|W:Door |W: not found|W:locked|A:SetProperty|W:Teleport location '|W:' not found in scene '|W:Can't retrieve diary root|A:Find|W:Can't find diary parent with id: |A:AddChild|A:GetCategory
// @GLOBALS: 0:object:
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars=bool,object,bool params=0
// @EVENT_26: op=0x1e vars=string

task_0_event_26(var_0_bool, var_1_object, var_2_bool, var_3_string)
{
	var_4_object = Obj(); var_5_int = 0; var_6_int = 0; var_7_int = 0; var_8_int = 0; var_9_object = Obj(); var_10_int = 0; var_11_int = 0; var_12_int = 0; var_13_int = 0;
	Trace(var_3_string);
	var_15_bool = var_3_string == "storojka_unload";
	if(var_15_bool != 0) {
		var_16_bool = var_0_bool;
		if(var_16_bool != 0) {
			var_0_bool = false;
			GetSceneByName(var_9_object, "storojka");
			var_18_object = Obj(); var_19_object = Obj(); var_20_string = ""; var_21_string = ""; var_22_string = "";
			var_9_object = var_19_object;
			func_256(var_18_object, var_19_object, "pt_b11q01_klara", "NPC_Klara", "b11q01_klara_laska.xml");
			var_1_object = var_18_object;
			var_9_object = 0;
		}
	} else {
		var_37_bool = var_3_string == "remove_klara";
		if(var_37_bool != 0) {
			Trigger(var_1_object, "cleanup");
			goto Label_205;
		}
		var_40_bool = var_3_string == "open_shaft";
		if(var_40_bool != 0) {
			var_41_bool = 0; var_42_string = ""; var_43_string = "";
			func_291(var_41_bool, "boiny_shaft_trigger", "activate");
			var_47_bool = 0; var_48_string = "";
			func_327(var_47_bool, "iboiny_stones");
			goto Label_205;
		}
		var_53_bool = var_3_string == "shaft_drop";
		if(var_53_bool != 0) {
			PlayNSSound("drop");
			AddScene("boiny_well.isc");
			sync();
			var_56_object = Obj(); var_57_string = ""; var_58_string = "";
			func_243(Obj());
			var_59_object = var_56_object;
			func_303(var_56_object, "boiny_well", "pt_player");
			sync();
			GetVariable("b11q01KlaraWillHelp", var_10_int);
			var_81_bool = 0;
			var_81_bool = 1;
			var_82_bool = var_10_int == 0; //@nz
			if(var_82_bool != 1) {
				var_83_bool = var_2_bool == 0; //@nz
				if(var_83_bool != 1) {
					var_81_bool = 0;
				}
			}
			if(var_81_bool != 0) {
				var_84_object = Obj();
				func_243(var_84_object);
				@@var_84_object:ApplyEffect("quest_b11_01_death_effect.bin");
			}
			var_2_bool = false;
			goto Label_205;
		}
		var_87_bool = var_3_string == "starshina_fight";
		if(var_87_bool != 0) {
			var_88_object = var_1_object;
			if(var_88_object != 0) {
				Trigger(var_1_object, "cleanup");
			}
			GetVariable("b11q01", var_11_int);
			var_91_int = var_11_int;
			if(var_91_int != 0) {
				func_378();
			}
			AddScene("boiny_arena.isc");
			sync();
			var_116_object = Obj(); var_117_string = ""; var_118_string = "";
			func_243(Obj());
			var_119_object = var_116_object;
			func_303(var_116_object, "boiny_arena", "pt_player");
			goto Label_205;
		}
		var_121_bool = var_3_string == "open_well_exit";
		if(var_121_bool != 0) {
			var_122_bool = 0; var_123_string = ""; var_124_string = "";
			func_291(var_122_bool, "well_trigger", "activate");
			goto Label_205;
		}
		var_126_bool = var_3_string == "fight_win";
		if(var_126_bool != 0) {
			GetVariable("b11q01", var_12_int);
			var_128_int = var_12_int;
			if(var_128_int != 0) {
				func_352();
			} else {
				func_339();
				func_365();
		}
			var_167_bool = var_3_string == "cleanup";
			if(var_167_bool != 0) {
				GetVariable("b11q01", var_13_int);
				var_170_bool = var_13_int != (int)1000;
				if(var_170_bool != 0) {
					func_206();
				} else {
					func_222(var_13_int);
			}
				var_174_bool = var_3_string == "fail";
				if(var_174_bool != 0) {
					func_206();
					goto Label_205;
				}
				var_176_bool = var_3_string == "completed";
				if(var_176_bool == 0) goto Label_205;
				func_214();
			}
			goto Label_205;
		}
		func_214();
		goto Label_205;
	}
Label_205:
	return 10;
	
}


main(var_0_bool, var_1_object, var_2_bool)
{
	var_3_object = Obj(); var_4_object = Obj(); var_5_object = Obj(); var_6_object = Obj();
	var_2_bool = true;
	var_7_string = ""; var_8_bool = 0;
	func_274("boiny@door1", (bool)0);
	GetActiveScene(var_5_object);
	GetSceneByName(var_6_object, "storojka");
	var_18_bool = var_5_object == var_6_object;
	if(var_18_bool != 0) {
		var_0_bool = true;
	} else {
		var_19_object = Obj(); var_20_object = Obj(); var_21_string = ""; var_22_string = ""; var_23_string = "";
		var_6_object = var_20_object;
		func_256(var_19_object, var_20_object, "pt_b11q01_klara", "NPC_Klara", "b11q01_klara_laska.xml");
		var_1_object = var_19_object;
	}
Label_24:
	Hold();
	goto Label_24;
	
}
EMIT "Return(); Pop(4)";
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_256(var_19_object, var_20_object, var_21_string, var_22_string, var_23_string)
{
	var_24_bool = 0; var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_object = Obj(); var_28_bool = 0; var_29_cvector = CVector(0,0,0); var_30_cvector = CVector(0,0,0); var_31_object = Obj();
	@@var_20_object:GetLocator(var_21_string, var_28_bool, var_29_cvector, var_30_cvector);
	var_32_bool = var_28_bool == 0; //@nz
	if(var_32_bool != 0) {
		var_34_int = "Locator " + var_21_string;
		var_36_int = var_34_int + " doesn't exist";
		Trace(var_36_int);
	} else {
		AddActor(Obj(), var_22_string, var_20_object, var_29_cvector, var_30_cvector, var_23_string);
	}
	var_31_object = var_19_object;
	return 8;
	
}
EMIT "Stack[-1] = 0";


func_391(var_106_object)
{
	var_107_object = Obj(); var_108_object = Obj();
	GetDiaryRoot(var_108_object);
	var_109_bool = var_108_object == 0; //@nz
	if(var_109_bool != 0) {
		Trace("Can't retrieve diary root");
		var_106_object = 0;
		return 2;
	}
	var_108_object = var_106_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_327(var_47_bool, var_48_string)
{
	var_49_object = Obj(); var_50_object = Obj();
	FindActor(var_50_object, var_48_string);
	var_51_bool = var_50_object == 0; //@nz
	if(var_51_bool != 0) {
		var_47_bool = 0;
		return 2;
	}
	RemoveActor(var_50_object);
	var_47_bool = 1;
	return 2;
}
EMIT "Stack[-1] = 0";


func_206()
{
	SetVariable("b11q01", (int)-1);
	func_222(var_13_int);
	return 0;
}


func_274(var_7_string, var_8_bool)
{
	var_9_object = Obj(); var_10_object = Obj();
	FindActor(var_10_object, var_7_string);
	var_11_bool = var_10_object == 0; //@nz
	if(var_11_bool != 0) {
		var_13_int = "Door " + var_7_string;
		var_15_int = var_13_int + " not found";
		Trace(var_15_int);
	} else {
		@@var_10_object:SetProperty("locked", var_8_bool);
	}
	return 2;
	
}
EMIT "Stack[-1] = 0";


func_339()
{
	var_150_object = Obj(); var_151_object = Obj();
	CreateDiaryEntry(var_151_object, (int)313, (int)1, (int)522055);
	var_155_bool = 0; var_156_object = Obj(); var_157_int = 0;
	var_151_object = var_156_object;
	func_404(var_155_bool, var_156_object, (int)-1);
	return 2;
}
EMIT "Stack[-1] = 0";


func_404(var_97_bool, var_98_object, var_99_int)
{
	var_100_object = Obj(); var_101_object = Obj(); var_102_int = 0; var_103_object = Obj(); var_104_object = Obj(); var_105_int = 0;
	func_391(Obj());
	var_106_object = var_103_object;
	@@var_103_object:Find(var_99_int, var_104_object);
	var_111_bool = var_104_object == 0; //@nz
	if(var_111_bool != 0) {
		var_113_int = "Can't find diary parent with id: " + var_99_int;
		Trace(var_113_int);
		var_97_bool = 0;
		return 6;
	}
	@@var_104_object:AddChild(var_98_object);
	SendWorldWndMessage((int)7);
	@@var_98_object:GetCategory(var_105_int);
	SetDiarySection(var_105_int);
	var_97_bool = 0;
	return 6;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


func_214()
{
	SetVariable("b11q01", (int)1000);
	func_222(var_13_int);
	return 0;
}


func_222(var_1_object)
{
	var_139_bool = 0; var_140_string = ""; var_141_string = "";
	func_291(var_139_bool, "boiny_shaft_trigger", "deactivate");
	var_142_bool = 0; var_143_string = ""; var_144_string = "";
	func_291(var_142_bool, "well_trigger", "deactivate");
	var_145_object = var_1_object;
	if(var_145_object != 0) {
		Trigger(var_1_object, "cleanup");
	}
	var_147_object = Obj();
	func_250(var_147_object);
	RemoveActor(var_147_object);
	return 0;
}


func_352()
{
	var_129_object = Obj(); var_130_object = Obj();
	CreateDiaryEntry(var_130_object, (int)317, (int)1, (int)522059);
	var_134_bool = 0; var_135_object = Obj(); var_136_int = 0;
	var_130_object = var_135_object;
	func_404(var_134_bool, var_135_object, (int)313);
	return 2;
}
EMIT "Stack[-1] = 0";


func_291(var_41_bool, var_42_string, var_43_string)
{
	var_44_object = Obj(); var_45_object = Obj();
	FindActor(var_45_object, var_42_string);
	var_46_bool = var_45_object == 0; //@ne
	if(var_46_bool != 0) {
		var_41_bool = 0;
		return 2;
	}
	Trigger(var_45_object, var_43_string);
	var_41_bool = 1;
	return 2;
}
EMIT "Stack[-1] = 0";


func_250(var_147_object)
{
	var_148_object = Obj(); var_149_object = Obj();
	self(var_149_object);
	var_149_object = var_147_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_365()
{
	var_158_object = Obj(); var_159_object = Obj();
	CreateDiaryEntry(var_159_object, (int)780, (int)1, (int)541765);
	var_163_bool = 0; var_164_object = Obj(); var_165_int = 0;
	var_159_object = var_164_object;
	func_404(var_163_bool, var_164_object, (int)313);
	return 2;
}
EMIT "Stack[-1] = 0";


func_303(var_56_object, var_57_string, var_58_string)
{
	var_63_object = Obj(); var_64_bool = 0; var_65_cvector = CVector(0,0,0); var_66_cvector = CVector(0,0,0); var_67_object = Obj(); var_68_bool = 0; var_69_cvector = CVector(0,0,0); var_70_cvector = CVector(0,0,0);
	var_71_bool = var_56_object == 0; //@nz
	if(var_71_bool != 0) {
		return 8;
	}
	GetSceneByName(var_67_object, var_57_string);
	@@var_67_object:GetLocator(var_58_string, var_68_bool, var_69_cvector, var_70_cvector);
	var_72_bool = var_68_bool == 0; //@nz
	if(var_72_bool != 0) {
		var_74_int = "Teleport location '" + var_58_string;
		var_76_int = var_74_int + "' not found in scene '";
		var_77_int = var_76_int + var_57_string;
		var_79_int = var_77_int + "'";
		Trace(var_79_int);
	} else {
		Teleport(var_56_object, var_67_object, var_69_cvector, var_70_cvector);
	}
	return 8;
	
}
EMIT "Stack[-4] = 0";


func_243(var_59_object)
{
	var_60_object = Obj(); var_61_object = Obj();
	FindActor(var_61_object, "player");
	var_61_object = var_59_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_378()
{
	var_92_object = Obj(); var_93_object = Obj();
	CreateDiaryEntry(var_93_object, (int)316, (int)1, (int)522058);
	var_97_bool = 0; var_98_object = Obj(); var_99_int = 0;
	var_93_object = var_98_object;
	func_404(var_97_bool, var_98_object, (int)313);
	return 2;
}
EMIT "Stack[-1] = 0";



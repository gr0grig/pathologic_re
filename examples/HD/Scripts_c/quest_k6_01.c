// @IMPORTS: Hold/0,GetSceneByName/2,Trigger/2,Trace/1,GetScene/1,PlaySound/1,sync/0,FindActor/2,GetVariable/2,SetVariable/2,CreateIntVector/1,GetGameTime/1,SetTimeEvent/2,RemoveActor/1,self/1,CreateObjectVector/1,AddActor/6,SendWorldWndMessage/2,GetInvItemProperty/3,Teleport/4
// @STRINGS: W:cot_eva|W:noeva|W:lock_danko|W:icot_eva_door|W:teleport|W:icot_eva@door1|W:door_close|W:cleanup|W:pt_k6q01_klara|W:player|W:cot_eva_load|W:k6q01|W:k6q01DoorWasLocked|W:unlock_eva|W:door_open|W:k6q01ItemsRemoved|A:ClearSubContainer|A:SelectWeapon|W:place_danko|W:cot_anna|W:pt_k6q01_danko|W:NPC_Bakalavr|W:k6q01_danko.xml|W:k6q01DankoPos|W:cot_lara|W:dt_house_1_04|W:fail|W:completed|W:0: placing danko to lara|W:0: placing danko to ospina|W:1: placing danko to ospina|W:1: placing danko to eva|W:placing danko from ospina to eva|A:GetItemCount|A:GetItem|A:add|A:GetItemAmount|A:GetLocator|W:Locator |W: doesn't exist|W:Door |W: not found|W:locked|A:SetProperty|A:Close|A:GetItemID|W:Category|A:AddItem|A:DropItems|W:Teleport location '|W:' not found in scene '|A:size|A:get
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars=bool,object,object,object,object,object,object,object,object,object,object,object params=0
// @EVENT_26: op=0xe vars=string
// @EVENT_9: op=0x14f vars=int,float

task_0_event_26(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_object, var_5_object, var_6_object, var_7_object, var_8_object, var_9_object, var_10_object, var_11_object, var_12_string)
{
	var_13_object = Obj(); var_14_object = Obj(); var_15_object = Obj(); var_16_object = Obj(); var_17_int = 0; var_18_int = 0; var_19_object = Obj(); var_20_float = 0; var_21_object = Obj(); var_22_int = 0; var_23_object = Obj(); var_24_object = Obj(); var_25_object = Obj(); var_26_object = Obj(); var_27_int = 0; var_28_int = 0; var_29_object = Obj(); var_30_float = 0; var_31_object = Obj(); var_32_int = 0;
	Trace(var_12_string);
	var_34_bool = var_12_string == "lock_danko";
	if(var_34_bool != 0) {
		var_35_string = ""; var_36_bool = 0;
		func_593("icot_eva_door", (bool)1);
		GetSceneByName(var_23_object, "cot_eva");
		Trigger(var_23_object, "danko");
		var_23_object = 0;
	} else {
		var_49_bool = var_12_string == "teleport";
		if(var_49_bool != 0) {
			func_5();
			GetScene(var_24_object);
			GetSceneByName(var_25_object, "cot_eva");
			var_55_string = ""; var_56_bool = 0;
			func_593("icot_eva_door", (bool)0);
			var_57_string = ""; var_58_bool = 0;
			func_576("icot_eva@door1", (bool)1);
			PlaySound("door_close");
			var_68_object = var_1_object;
			if(var_68_object != 0) {
				Trigger(var_1_object, "cleanup");
			}
			var_70_bool = var_24_object != var_25_object;
			if(var_70_bool != 0) {
				var_71_object = Obj(); var_72_string = ""; var_73_string = "";
				func_514(Obj());
				var_74_object = var_71_object;
				func_645(var_71_object, "cot_eva", "pt_k6q01_klara");
				sync();
			}
			FindActor(var_26_object, "player");
			var_96_bool = 0;
			var_96_bool = 0;
			var_97_object = var_26_object;
			if(var_97_object != 0) {
				var_98_bool = var_0_bool;
				if(var_98_bool != 0) {
					var_96_bool = 1;
				}
			}
			if(var_96_bool != 0) {
				var_99_object = Obj(); var_100_object = Obj(); var_101_object = Obj();
				var_26_object = var_99_object;
				var_100_object = var_4_object;
				var_101_object = var_5_object;
				func_669(var_99_object, var_100_object, var_101_object);
				var_128_object = Obj(); var_129_object = Obj(); var_130_object = Obj();
				var_26_object = var_128_object;
				var_129_object = var_8_object;
				var_130_object = var_9_object;
				func_669(var_128_object, var_129_object, var_130_object);
				var_131_object = Obj(); var_132_object = Obj(); var_133_object = Obj();
				var_26_object = var_131_object;
				var_132_object = var_10_object;
				var_133_object = var_11_object;
				func_669(var_131_object, var_132_object, var_133_object);
			}
			var_26_object = 0;
			var_25_object = 0;
			var_24_object = 0;
			goto Label_334;
		}
		var_135_bool = var_12_string == "cot_eva_load";
		if(var_135_bool != 0) {
			GetVariable("k6q01", var_27_int);
			GetVariable("k6q01DoorWasLocked", var_28_int);
			var_138_bool = 0;
			var_138_bool = 0;
			var_140_bool = var_27_int == (int)2;
			if(var_140_bool != 0) {
				var_141_bool = var_28_int == 0; //@nz
				if(var_141_bool != 0) {
					var_138_bool = 1;
				}
			}
			if(var_138_bool != 0) {
				var_142_string = ""; var_143_bool = 0;
				func_576("icot_eva@door1", (bool)1);
				SetVariable("k6q01DoorWasLocked", (int)1);
				PlaySound("door_close");
			}
			goto Label_334;
		}
		var_148_bool = var_12_string == "unlock_eva";
		if(var_148_bool != 0) {
			var_149_string = ""; var_150_bool = 0;
			func_576("icot_eva@door1", (bool)0);
			PlaySound("door_open");
			SetVariable("k6q01ItemsRemoved", (int)1);
			CreateIntVector(var_3_object);
			CreateIntVector(var_5_object);
			CreateIntVector(var_7_object);
			CreateIntVector(var_9_object);
			CreateIntVector(var_11_object);
			FindActor(var_29_object, "player");
			var_155_object = var_29_object;
			if(var_155_object != 0) {
				var_156_object = Obj(); var_157_object = Obj(); var_158_int = 0; var_159_object = Obj();
				var_29_object = var_157_object;
				var_159_object = var_5_object;
				func_521(var_156_object, var_157_object, (int)1, var_159_object);
				var_4_object = var_156_object;
				var_175_object = Obj(); var_176_object = Obj(); var_177_int = 0; var_178_object = Obj();
				var_29_object = var_176_object;
				var_178_object = var_9_object;
				func_521(var_175_object, var_176_object, (int)3, var_178_object);
				var_8_object = var_175_object;
				var_179_object = Obj(); var_180_object = Obj(); var_181_int = 0; var_182_object = Obj();
				var_29_object = var_180_object;
				var_182_object = var_11_object;
				func_521(var_179_object, var_180_object, (int)4, var_182_object);
				var_10_object = var_179_object;
				@@var_29_object:ClearSubContainer((int)1);
				@@var_29_object:ClearSubContainer((int)3);
				@@var_29_object:ClearSubContainer((int)4);
				@@var_29_object:SelectWeapon();
				var_0_bool = true;
			}
			var_29_object = 0;
			goto Label_334;
		}
		var_187_bool = var_12_string == "place_danko";
		if(var_187_bool != 0) {
			GetGameTime(var_30_float);
			var_189_bool = var_30_float < (int)134;
			if(var_189_bool != 0) {
				GetSceneByName(var_31_object, "cot_anna");
				var_191_object = Obj(); var_192_object = Obj(); var_193_string = ""; var_194_string = ""; var_195_string = "";
				var_31_object = var_192_object;
				func_558(var_191_object, var_192_object, "pt_k6q01_danko", "NPC_Bakalavr", "k6q01_danko.xml");
				var_1_object = var_191_object;
				SetTimeEvent((int)1, (int)134);
				SetTimeEvent((int)2, (int)136);
				SetTimeEvent((int)3, (int)138);
				SetVariable("k6q01DankoPos", (int)1);
			} else {
				var_218_bool = var_30_float < (int)136;
				if(var_218_bool != 0) {
					GetSceneByName(var_31_object, "cot_lara");
					var_220_object = Obj(); var_221_object = Obj(); var_222_string = ""; var_223_string = ""; var_224_string = "";
					var_31_object = var_221_object;
					func_558(var_220_object, var_221_object, "pt_k6q01_danko", "NPC_Bakalavr", "k6q01_danko.xml");
					var_1_object = var_220_object;
					SetTimeEvent((int)2, (int)136);
					SetTimeEvent((int)3, (int)138);
					SetVariable("k6q01DankoPos", (int)2);
					goto Label_302;
				}
				var_232_bool = var_30_float < (int)138;
				if(var_232_bool != 0) {
					GetSceneByName(var_31_object, "dt_house_1_04");
					var_234_object = Obj(); var_235_object = Obj(); var_236_string = ""; var_237_string = ""; var_238_string = "";
					var_31_object = var_235_object;
					func_558(var_234_object, var_235_object, "pt_k6q01_danko", "NPC_Bakalavr", "k6q01_danko.xml");
					var_1_object = var_234_object;
					SetTimeEvent((int)3, (int)138);
					SetVariable("k6q01DankoPos", (int)3);
					goto Label_302;
				}
				var_243_string = ""; var_244_bool = 0;
				func_593("icot_eva_door", (bool)0);
				func_5();
				SetVariable("k6q01DankoPos", (int)4);
		}
			var_248_bool = var_12_string == "fail";
			if(var_248_bool != 0) {
				func_466();
				goto Label_334;
			}
			var_267_bool = var_12_string == "completed";
			if(var_267_bool != 0) {
				func_474();
				goto Label_334;
			}
			var_271_bool = var_12_string == "cleanup";
			if(var_271_bool == 0) goto Label_334;
			GetVariable("k6q01", var_32_int);
			var_274_bool = var_32_int != (int)1000;
			if(var_274_bool != 0) {
				func_466();
				goto Label_334;
			}
			func_479(var_32_int);
		}
	Label_302:
		var_31_object = 0;
		goto Label_334;
	}
Label_334:
	return 20;
	
}


task_0_event_9(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_object, var_5_object, var_6_object, var_7_object, var_8_object, var_9_object, var_10_object, var_11_object, var_12_int, var_13_float)
{
	var_14_int = 0; var_15_object = Obj(); var_16_object = Obj(); var_17_object = Obj(); var_18_object = Obj(); var_19_object = Obj(); var_20_int = 0; var_21_object = Obj(); var_22_object = Obj(); var_23_object = Obj(); var_24_object = Obj(); var_25_object = Obj();
	GetVariable("k6q01DankoPos", var_20_int);
	var_28_bool = var_12_int == (int)1;
	if(var_28_bool != 0) {
		var_30_bool = var_20_int != (int)1;
		if(var_30_bool != 0) {
			return 12;
		}
		GetScene(var_21_object);
		GetSceneByName(var_22_object, "cot_lara");
		var_32_object = var_1_object;
		if(var_32_object != 0) {
			Trigger(var_1_object, "cleanup");
		}
		var_34_bool = var_21_object != var_22_object;
		if(var_34_bool != 0) {
			var_22_object = var_21_object;
			Trace("0: placing danko to lara");
			SetVariable("k6q01DankoPos", (int)2);
		} else {
			GetSceneByName(var_21_object, "dt_house_1_04");
			Trace("0: placing danko to ospina");
			SetVariable("k6q01DankoPos", (int)3);
	}
		var_61_bool = var_12_int == (int)2;
		if(var_61_bool != 0) {
			var_63_bool = var_20_int != (int)2;
			if(var_63_bool != 0) {
				return 12;
			}
			GetScene(var_23_object);
			GetSceneByName(var_24_object, "dt_house_1_04");
			var_65_object = var_1_object;
			if(var_65_object != 0) {
				Trigger(var_1_object, "cleanup");
			}
			var_67_bool = var_23_object != var_24_object;
			if(var_67_bool != 0) {
				var_68_object = Obj(); var_69_object = Obj(); var_70_string = ""; var_71_string = ""; var_72_string = "";
				var_24_object = var_69_object;
				func_558(var_68_object, var_69_object, "pt_k6q01_danko", "NPC_Bakalavr", "k6q01_danko.xml");
				var_1_object = var_68_object;
				Trace("1: placing danko to ospina");
				SetVariable("k6q01DankoPos", (int)3);
			} else {
				var_76_string = ""; var_77_bool = 0;
				func_593("icot_eva_door", (bool)0);
				func_5();
				SetVariable("k6q01DankoPos", (int)4);
				Trace("1: placing danko to eva");
				var_25_object = 0;
		}
			var_95_bool = var_12_int == (int)3;
			if(var_95_bool == 0) goto Label_465;
			Trace("placing danko from ospina to eva");
			var_97_object = var_1_object;
			if(var_97_object != 0) {
				Trigger(var_1_object, "cleanup");
			}
			func_5();
			var_99_string = ""; var_100_bool = 0;
			func_593("icot_eva_door", (bool)0);
			SetVariable("k6q01DankoPos", (int)4);
		}
		var_24_object = 0;
		var_23_object = 0;
		goto Label_465;
	}
	var_38_object = Obj(); var_39_object = Obj(); var_40_string = ""; var_41_string = ""; var_42_string = "";
	var_21_object = var_39_object;
	func_558(var_38_object, var_39_object, "pt_k6q01_danko", "NPC_Bakalavr", "k6q01_danko.xml");
	var_1_object = var_38_object;
	var_22_object = 0;
	var_21_object = 0;
	goto Label_465;
	
Label_465:
	return 12;
	
}


main(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_object, var_5_object, var_6_object, var_7_object, var_8_object, var_9_object, var_10_object, var_11_object)
{
	var_0_bool = false;
	
Label_1:
	Hold();
	goto Label_1;
}
EMIT "Return(); Pop(0)";


func_576(var_57_string, var_58_bool)
{
	var_59_object = Obj(); var_60_object = Obj();
	FindActor(var_60_object, var_57_string);
	var_61_bool = var_60_object == 0; //@nz
	if(var_61_bool != 0) {
		var_63_int = "Door " + var_57_string;
		var_65_int = var_63_int + " not found";
		Trace(var_65_int);
	} else {
		@@var_60_object:SetProperty("locked", var_58_bool);
	}
	return 2;
	
}
EMIT "Stack[-1] = 0";


func_514(var_74_object)
{
	var_75_object = Obj(); var_76_object = Obj();
	FindActor(var_76_object, "player");
	var_76_object = var_74_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_546(var_263_object)
{
	var_264_object = Obj(); var_265_object = Obj();
	self(var_265_object);
	var_265_object = var_263_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_5()
{
	var_87_object = Obj(); var_88_object = Obj();
	GetSceneByName(var_88_object, "cot_eva");
	Trigger(var_88_object, "noeva");
	return 2;
}
EMIT "Stack[-1] = 0";


func_645(var_71_object, var_72_string, var_73_string)
{
	var_78_object = Obj(); var_79_bool = 0; var_80_cvector = CVector(0,0,0); var_81_cvector = CVector(0,0,0); var_82_object = Obj(); var_83_bool = 0; var_84_cvector = CVector(0,0,0); var_85_cvector = CVector(0,0,0);
	var_86_bool = var_71_object == 0; //@nz
	if(var_86_bool != 0) {
		return 8;
	}
	GetSceneByName(var_82_object, var_72_string);
	@@var_82_object:GetLocator(var_73_string, var_83_bool, var_84_cvector, var_85_cvector);
	var_87_bool = var_83_bool == 0; //@nz
	if(var_87_bool != 0) {
		var_89_int = "Teleport location '" + var_73_string;
		var_91_int = var_89_int + "' not found in scene '";
		var_92_int = var_91_int + var_72_string;
		var_94_int = var_92_int + "'";
		Trace(var_94_int);
	} else {
		Teleport(var_71_object, var_82_object, var_84_cvector, var_85_cvector);
	}
	return 8;
	
}
EMIT "Stack[-4] = 0";


func_614(var_122_int, var_123_int)
{
	var_124_object = Obj(); var_125_object = Obj();
	CreateIntVector(var_125_object);
	@@var_125_object:add(var_122_int);
	@@var_125_object:add(var_123_int);
	SendWorldWndMessage((int)3, var_125_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_552(var_170_object)
{
	var_171_object = Obj(); var_172_object = Obj();
	CreateObjectVector(var_172_object);
	var_172_object = var_170_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_521(var_156_object, var_157_object, var_158_int, var_159_object)
{
	var_160_object = Obj(); var_161_int = 0; var_162_int = 0; var_163_object = Obj(); var_164_int = 0; var_165_object = Obj(); var_166_int = 0; var_167_int = 0; var_168_object = Obj(); var_169_int = 0;
	func_552(Obj());
	var_170_object = var_165_object;
	@@var_157_object:GetItemCount(var_166_int, var_158_int);
	var_167_int = 0;
	
Label_529:
	var_173_bool = var_167_int < var_166_int;
	if(var_173_bool != 0) {
		@@var_157_object:GetItem(var_168_object, var_167_int, var_158_int);
		@@var_165_object:add(var_168_object);
		@@var_157_object:GetItemAmount(var_169_int, var_167_int, var_158_int);
		@@var_159_object:add(var_169_int);
		var_168_object = 0;
		var_167_int = var_167_int + (int)1;
		goto Label_529;
	}
	var_165_object = var_156_object;
	return 10;
}
EMIT "Stack[-5] = 0";


func_558(var_38_object, var_39_object, var_40_string, var_41_string, var_42_string)
{
	var_43_bool = 0; var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_object = Obj(); var_47_bool = 0; var_48_cvector = CVector(0,0,0); var_49_cvector = CVector(0,0,0); var_50_object = Obj();
	@@var_39_object:GetLocator(var_40_string, var_47_bool, var_48_cvector, var_49_cvector);
	var_51_bool = var_47_bool == 0; //@nz
	if(var_51_bool != 0) {
		var_53_int = "Locator " + var_40_string;
		var_55_int = var_53_int + " doesn't exist";
		Trace(var_55_int);
	} else {
		AddActor(Obj(), var_41_string, var_39_object, var_48_cvector, var_49_cvector, var_42_string);
	}
	var_50_object = var_38_object;
	return 8;
	
}
EMIT "Stack[-1] = 0";


func_593(var_76_string, var_77_bool)
{
	var_78_object = Obj(); var_79_object = Obj();
	FindActor(var_79_object, var_76_string);
	var_80_bool = var_79_object == 0; //@nz
	if(var_80_bool != 0) {
		var_82_int = "Door " + var_76_string;
		var_84_int = var_82_int + " not found";
		Trace(var_84_int);
	} else {
		var_85_bool = var_77_bool;
		if(var_85_bool != 0) {
			@@var_79_object:Close();
		}
		@@var_79_object:SetProperty("locked", var_77_bool);
	}
	return 2;
	
}
EMIT "Stack[-1] = 0";


func_466()
{
	SetVariable("k6q01", (int)-1);
	func_479(var_32_int);
	return 0;
}


func_626(var_111_object, var_112_object, var_113_int)
{
	var_114_int = 0; var_115_int = 0; var_116_bool = 0; var_117_int = 0; var_118_int = 0; var_119_bool = 0;
	@@var_112_object:GetItemID(var_117_int);
	GetInvItemProperty(var_118_int, var_117_int, "Category");
	@@var_111_object:AddItem(var_119_bool, var_112_object, var_118_int, var_113_int);
	var_121_bool = var_119_bool == 0; //@nz
	if(var_121_bool != 0) {
		@@var_111_object:DropItems(var_112_object, var_113_int);
	} else {
		var_122_int = 0; var_123_int = 0;
		var_117_int = var_122_int;
		var_113_int = var_123_int;
		func_614(var_122_int, var_123_int);
	}
	return 6;
	
}


func_474()
{
	SetVariable("k6q01", (int)1000);
	return 0;
}


func_669(var_99_object, var_100_object, var_101_object)
{
	var_102_int = 0; var_103_int = 0; var_104_object = Obj(); var_105_int = 0; var_106_int = 0; var_107_int = 0; var_108_object = Obj(); var_109_int = 0;
	@@var_100_object:size(var_106_int);
	var_107_int = 0;
	
Label_673:
	var_110_bool = var_107_int < var_106_int;
	if(var_110_bool != 0) {
		@@var_100_object:get(var_108_object, var_107_int);
		@@var_101_object:get(var_109_int, var_107_int);
		var_111_object = Obj(); var_112_object = Obj(); var_113_int = 0;
		var_99_object = var_111_object;
		var_108_object = var_112_object;
		var_109_int = var_113_int;
		func_626(var_111_object, var_112_object, var_113_int);
		var_108_object = 0;
		var_107_int = var_107_int + (int)1;
		goto Label_673;
	}
	return 8;
}


func_479(var_1_object)
{
	var_251_int = 0; var_252_int = 0;
	EventDisable(26);
	var_253_string = ""; var_254_bool = 0;
	func_593("icot_eva_door", (bool)0);
	var_255_object = var_1_object;
	if(var_255_object != 0) {
		Trigger(var_1_object, "cleanup");
	}
	GetVariable("k6q01", var_252_int);
	var_258_string = ""; var_259_bool = 0;
	func_576("icot_eva@door1", (bool)0);
	var_261_bool = var_252_int == (int)1000;
	if(var_261_bool != 0) {
		PlaySound("door_open");
	}
	func_5();
	var_263_object = Obj();
	func_546(var_263_object);
	RemoveActor(var_263_object);
	return 2;
}


